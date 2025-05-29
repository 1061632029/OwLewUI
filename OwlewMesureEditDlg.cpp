#include "OwlewMesureEditDlg.h"
#include "qpushbutton.h"
OwlewMesureEditDlg::OwlewMesureEditDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

OwlewMesureEditDlg::~OwlewMesureEditDlg()
{}

void OwlewMesureEditDlg::SetRadius(const double& val)
{
	ui.led_Angle->setEnabled(false);
	ui.lab_Dis->setText(QString::fromStdWString(L"°ë¾¶"));
	QString dis = QString("%1").arg(val, 0, 'f', 3);
	ui.led_Dis->setText(dis);
}

double OwlewMesureEditDlg::GetRadius() const
{
	auto disVal = ui.led_Dis->text();
	return disVal.toDouble();
}

void OwlewMesureEditDlg::SetDis(const double& val)
{
	ui.led_Angle->setEnabled(false);
	ui.lab_Dis->setText(QString::fromStdWString(L"¾àÀë"));
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
	ui.led_Dis->setEnabled(false);
	QString dis = QString("%1").arg(val, 0, 'f', 3);
	ui.led_Angle->setText(dis);
}

double OwlewMesureEditDlg::GetAngle() const
{
	auto disVal = ui.led_Angle->text();
	return disVal.toDouble();
}
