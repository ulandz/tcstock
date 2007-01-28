#ifndef tcviewmodel_h

#define tcviewmodel_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

class tcStock;

typedef struct {
	qreal OpenPrice;
	qreal ClosePrice;
	qreal MaxPrice;
	qreal MinPrice;
	long TotalPrice;
	long Quantity;
	QString Tooltip;
} tcViewModelStockData;

/*! \brief tcViewModel
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.09
 	
	ͨ�ù�ƱK����ʾģ�ͣ���K�ߣ���K�ߵ���ʾģ�Ͷ��ɸ���������
	����K��ͼ��ʾ�ľ����С�ߴ磬�Լ���ʾ�������ݡ�
*/
class tcViewModel : public QObject
{
	Q_OBJECT

public:
	typedef enum tcViewMode {SmallView, LargeView};

	tcViewModel(QObject *pParent, tcViewMode pViewMode);

	~tcViewModel();

	qreal GetViewItemCount();

	qreal GetViewItemWidth();

	qreal GetViewHeight();

	qreal GetViewEntityOffset();

	qreal GetViewEntityHeight();

	qreal GetViewQuantityHeight();

	virtual QString GetViewItemText(int pIndex) = 0;

	virtual tcViewModelStockData* GetViewItemData(int pIndex, tcStock *pStock) = 0;

	virtual bool IsCurrentItem(int pIndex) = 0;

protected:
	void ResetData();

	tcViewMode mViewMode;

	tcViewModelStockData mStockData;

};

#endif //tcviewmodel_h