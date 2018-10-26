 ///
 /// @file    Config.cc
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-26 10:26:30
 ///

#include "Config.h"


ext::Config::Config(string p)
:filepath(p)
{
	cout << "Config constructor" <<endl;

}
ext::Config::~Config()
{
	cout << "Config unconstructor"<<endl;
}
void ext::Config::ReadConfig()
{
	std::fstream fs;
	fs.open(filepath);
	if(!fs.good())
	{
		cout << "open file failed"<<endl;
	}
	string line;
	while(getline(fs,line))
	{
	//		cout << line <<endl;
		string buf;
		std::istringstream record(line);
		record >> buf;
		if(buf == "host")
		{
			record >> host;
			cout << host << endl;
		}
		if(buf == "account")
		{
			record >> account;
			cout << account <<endl;
		}
		if(buf == "port")
		{
			record >> port;
			cout << port <<endl;
		}
		if(buf == "passwd")
		{
			record >> passwd;
			cout << passwd <<endl;
		}
	}



	fs.close();

}

void ext::Config::Test()
{
	cout << "Config class testing...";








	cout << "OK" <<endl;
}


