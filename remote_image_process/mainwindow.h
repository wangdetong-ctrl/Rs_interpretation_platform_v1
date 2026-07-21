#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"cd.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


// C++ 侧定义（用于动态库接口）
struct GeoInfo {
    double adfGeoTransform[6];  // GDAL风格的六参数仿射变换
    char   pszProjection[512];  // WKT投影字符串
    int    nGCPCount;           // 地面控制点数量（可选）
    // GCP数据可单独管理
};

struct RemoteSensingImage {
    int     nBands;             // 波段数
    int     nRows;              // 行数
    int     nCols;              // 列数
    int     dataType;           // GDAL数据类型，如GDT_Byte, GDT_UInt16, GDT_Float32
    void*   pData;              // 像素数据指针，按行优先、波段优先（BSQ/BIP/BIL）存储
    int     interleave;         // 0:BSQ, 1:BIL, 2:BIP
    GeoInfo geo;                // 地理信息
    char    metadata[1024];     // 其他元数据JSON字符串
};

enum LabelType {
    LABEL_SEGMENTATION = 0,  // 语义分割掩膜
    LABEL_DETECTION    = 1,  // 目标检测框
    LABEL_CHANGE       = 2   // 变化图斑（矢量多边形）
};

struct DetectionBox {
    int   classID;
    float confidence;
    float xmin, ymin, xmax, ymax;  // 像素坐标或地理坐标？统一用像素坐标
};

struct SegmentationMask {
    int     nRows, nCols;
    int     dataType;          // 通常为GDT_Byte或GDT_UInt16
    void*   pData;             // 每个像素的类别ID
    int     nClasses;
    int*    palette;           // 调色板，可选
};

struct ChangePolygon {
    // 变化图斑用矢量边界表示，可存储为JSON字符串
    char geojson[8192];
};

struct LabelData {
    LabelType type;
    union {
        SegmentationMask seg;
        DetectionBox*    dets;   // 动态数组，额外存储数量
        ChangePolygon    change;
    } data;
    int nDetections;            // 当type=LABEL_DETECTION时有效
};

struct AlgorithmParams {
    // 公共参数
    RemoteSensingImage* inputImage;   // 输入影像
    RemoteSensingImage* outputImage;  // 输出影像（可能为空，由算法内部分配）
    LabelData*          inputLabel;   // 可选输入标签
    LabelData*          outputLabel;  // 可选输出标签
    char                algoParams[4096]; // 算法专用参数，JSON字符串
    int                 status;           // 返回状态
    // 可能还需要多时相输入，可通过JSON指定文件路径
};

struct PipelineContext {
    RemoteSensingImage* images[10];   // 最多容纳10个中间影像
    int                 imgCount;
    LabelData*          labels[10];
    int                 lblCount;
    char                config[8192]; // 流程配置JSON
    void**              funcPtrArray; // 函数指针数组（动态库加载的符号）
    int                 funcCount;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_m_actExit_triggered();

    void on_m_act_file_triggered();

    void on_m_act_save_triggered();

    void on_m_act_delete_triggered();

    void on_m_act_bcd_triggered();

    void on_m_act_scd_triggered();

    void on_m_act_mcd_triggered();

    void on_m_act_object_detection_triggered();

    void on_m_actCloud_triggered();

    void on_m_actClass_triggered();

    void on_m_actVersion_triggered();

    void on_m_actRadiationc_triggered();

    void on_m_actAst_triggered();

    void on_m_actRectilinear_triggered();

    void on_m_actFusion_triggered();

    void on_m_actRoad_triggered();


private:
    Ui::MainWindow *ui;
    //
};
#endif // MAINWINDOW_H
