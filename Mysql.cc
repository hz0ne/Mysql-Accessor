 ///
 /// @file    Mysql.cc
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-28 21:34:42
 ///
#include "Mysql.h" 






sql::Mysql::Mysql(ext::Config c)//first init the public vary
:My_conn(NULL),Cfg(c)
{
	cout << "sql constructor"<<endl;

}

sql::Mysql::~Mysql()
{
	cout << "sql unconstructor " <<endl;
}

string sql::Mysql::My_status()
{
	const char* ret;
	ret = mysql_stat(My_conn);
	return string(ret);
}


int sql::Mysql::Connection()
{
	My_need_init = mysql_init(NULL);
	if(My_need_init == NULL)
	{
		int ret = mysql_errno(My_need_init);
		cout << "MYSQL init error no" << ret <<endl;
	}
	My_conn = mysql_real_connect(My_need_init,Cfg.host.c_str(),Cfg.account.c_str(),Cfg.passwd.c_str(),"test",0,NULL,0);
	if(My_conn == NULL)
	{
		int ret = mysql_errno(My_conn);
		cout << "MYSQL Connection error no" << ret << endl;
	}

	cout << "MYSQL Connection success..." <<endl;
	cout << "MYSQL status is "<<My_status()<<endl;
	return 0;
}
