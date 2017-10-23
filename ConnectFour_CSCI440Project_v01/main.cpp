#include "ConnectFour_CSCI440Project_v01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ConnectFour_CSCI440Project_v01 w;
	w.show();
	return a.exec();
}
