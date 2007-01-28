#ifndef tcmarketselectdlg_h

#define tcmarketselectdlg_h

#include <QtCore/QVariant>
#include <QtGui/QDialog>
#include "ui_marketselectdlg.h"

#include "tcmarketmgr.h"

/*! \brief tcMarketSelectDialog
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.03
 	
	����ѡ�񴰿ڣ��� tcMarketManager �ฺ����á�
*/
class tcMarketSelectDialog : public QDialog, private Ui_tcMarketSelectDialog
{
	Q_OBJECT

public:
	tcMarketSelectDialog(QWidget *pParent);

	bool LoadMarketList(tcMarketManager *pMarketManager);

	int GetSelectedMarketIndex();

};

#endif //tcmarketselectdlg_h
