 ///
 /// @file    Mysql.h
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-26 08:56:29
 ///
 

#ifndef __MYSQL_H_
#define __MYSQL_H_
#include "Config.h"
#include <mysql/mysql.h>
namespace sql{


class Mysql{
	public:
		Mysql(ext::Config c);
		~Mysql();
		int Connection();
		int SetTimeZone();
		string My_status(); 	
		MYSQL *My_need_init;
		MYSQL *My_conn;
		void Set_Config();	
	private:		
		ext::Config Cfg;	
};


}




#endif
