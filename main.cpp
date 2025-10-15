#include <QCoreApplication>
#include "process_classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ProcessClasses pc;
    pc.run();

    return a.exec();
}
