 ///
 /// @file    test.cc
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-28 23:56:32
 ///


#include "Config.h"
#include "Mysql.h"
using std::cout;
using std::cin;


int main(int argc,char* argv[])
{
	if(argc != 2)
	{
		cout << "need a argv"<<endl;
		return 0;
	}
	string path(argv[1]);//c风格字符串转化
	ext::Config con(path);
	con.ReadConfig();	
	con.Test();
	sql::Mysql s(con);
	s.Connection();
	s.My_status();


} 
