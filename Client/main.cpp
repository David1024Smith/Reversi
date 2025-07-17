#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 启用高分辨率适配功能
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
