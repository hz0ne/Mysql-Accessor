 ///
 /// @file    Config.h
 /// @author  hessen(dhxsy1994@gmail.com)
 /// @date    2018-10-25 20:29:27
 ///
#ifndef __CONFIG_H_
#define __CONFIG_H_
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <ostream>
#include <istream>
#include <sstream>
using std::cout;
using std::endl;
using std::string;

namespace ext{


class Config{

public:
	Config(string p);
	~Config();

	string host;
	string account;
	string passwd;
	unsigned int port;

	void ReadConfig();
		
	void Test();
private:
	string filepath;//default path is current folder
};

}

#endif
