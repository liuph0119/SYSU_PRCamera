#include "sysu_prcamera.h"
#include <QtGui>
//#include <QtCore/QTextCodec>
#include <QtCore/QSettings>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//set code for locale, support chinese
//	QTextCodec* codec =QTextCodec::codecForLocale();
//	QTextCodec::setCodecForCStrings(codec);
//	QTextCodec::setCodecForTr(codec);

	QSettings settings("Sun Yat-sen University", "PRCamera"); //  ��˾����֯��  // Ӧ�ó�����
	QCoreApplication::setOrganizationName("SYSU");
	QCoreApplication::setOrganizationDomain("www.geosimulation.cn"); // רΪMac OS X ׼����
	QCoreApplication::setApplicationName("PRCamera");


	SYSU_PRCamera w;
	w.show();
	return a.exec();
}
