#ifndef tcaboutdlg_h

#define tcaboutdlg_h

#include <QtCore/QVariant>
#include <QtGui/QDialog>
#include "ui_aboutdlg.h"

/*! \brief tcAboutDialog
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.13
 	
	ϵͳ�����ڡ��Ի���
*/
class tcAboutDialog : public QDialog, private Ui_tcAboutDialog
{
	Q_OBJECT

public:
	tcAboutDialog(QWidget *pParent);

protected:
	void SetAboutText();

};


#endif //tcaboutdlg_h