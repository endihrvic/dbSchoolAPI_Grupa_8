#ifndef _EXCHDELLINE_
#define _EXCHDELLINE_

#include <string>
#include <fstream>

void deleteLine(std::string s, std::string name){
	std::ifstream is;
	is.open(name);
	std::ofstream os;
	os.open("temp");
	std::string tempStr;
	while(getline(is, tempStr)){
		if(tempStr == s)
			continue;
		os << tempStr << "\n"; 
	}
	is.close();
	os.close();
	remove(name.c_str());
	rename("temp", name.c_str());
}

void changeLine(std::string s1, std::string s2, std::string name){
	std::ifstream is;
	is.open(name);
	std::ofstream os;
	os.open("temp");
	std::string tempStr;
	while(getline(is, tempStr)){
		if(tempStr == s1)
			tempStr = s2;
		os << tempStr << "\n"; 
	}
	is.close();
	os.close();
	remove(name.c_str());
	rename("temp", name.c_str());
	
}

#endif /* ifndef _EXCHDELLINE_ */ 
