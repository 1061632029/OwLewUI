#include "OwlewMesureEditDlg.h"
#include "qpushbutton.h"
OwlewMesureEditDlg::OwlewMesureEditDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

OwlewMesureEditDlg::~OwlewMesureEditDlg()
{}

void OwlewMesureEditDlg::SetDis(const double& val)
{
	QString dis= QString("%1").arg(val, 0, 'f', 3);
	ui.led_Dis->setText(dis);
}

double OwlewMesureEditDlg::GetDis() const
{
	auto disVal= ui.led_Dis->text();
	return disVal.toDouble();
}

void OwlewMesureEditDlg::SetAngle(const double& val)
{
	QString dis = QString("%1").arg(val, 0, 'f', 3);
	ui.led_Angle->setText(dis);
}

double OwlewMesureEditDlg::GetAngle() const
{
	auto disVal = ui.led_Angle->text();
	return disVal.toDouble();
}
