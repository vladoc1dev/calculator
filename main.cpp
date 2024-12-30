#include "QApplication"
#include "mainwindow.h"



using namespace std;



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *mainW = new MainWindow();
    mainW->setWindowTitle("calculator");
    mainW->show();

    return app.exec();
}







