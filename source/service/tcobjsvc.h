#ifndef tcobjsvc_h

#define tcobjsvc_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

class tcMarketManager;
class tcFavouriteManager;

/*! \brief tcObjService
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.24
 	
	ϵͳȫ�ֶ�������ࡣĿǰ������� tcMarketMaager �� tcFavouriteManager ��
	Ҳ����˵Ҫ������Щ�࣬�Լ��������ǵ��Զ���ʱ��Ӧ��ʹ�ø�����Ϊ������ڡ�
*/
class tcObjService : public QObject
{
	Q_OBJECT

public:
	static bool Initialize(int argc, char* argv[]);

	static bool Finalize();

	static tcMarketManager* GetMarketManager();

	static tcFavouriteManager* GetFavouriteManager();

protected:
	tcObjService(int argc, char* argv[]);

	~tcObjService();

	bool InitializeAll();
	
	bool FinalizeAll();

private:
	static tcObjService *mThis;
	
	tcMarketManager *mMarketManager;
	tcFavouriteManager *mFavouriteManager;

};

inline tcMarketManager* tcObjService::GetMarketManager()
{
	return mThis->mMarketManager;
}

inline tcFavouriteManager* tcObjService::GetFavouriteManager()
{
	return mThis->mFavouriteManager;
}

#endif //tcobjsvc_h
