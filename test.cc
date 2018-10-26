 ///
 /// @file    test.cc
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-25 20:07:59
 


#include <iostream>
#include <ostream>
#include "Config.h"
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

}
