#pragma once
#include "OwLewQWidgetGlobal.h"
#include <QDialog>
#include "ui_OwlewMesureEditDlg.h"

class OWLEWQ_WIDGETS_EXPORT OwlewMesureEditDlg : public QDialog
{
	Q_OBJECT

public:
	OwlewMesureEditDlg(QWidget *parent = nullptr);
	~OwlewMesureEditDlg();
	void SetDis(const double& val);
	double GetDis() const;
	void SetAngle(const double& val);
	double GetAngle() const;
private:
	Ui::OwlewMesureEditDlgClass ui;
};
