#include "exchDelLine.h"

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
	//prebacuj sve linije u temp file, osim s
	is.close();
	os.close();
	remove(name.c_str()); //ukloni proslijedjeni file
	rename("temp", name.c_str()); //daj fajlu temp ime proslijedjenog filea
	//.c_str() - funkcije koja vraca const char * identican stringu nad kojim je pozvana
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
	//prebacuj sve linije u temp file, osim s1, umjesto koje se proslijedi s2
	is.close();
	os.close();
	remove(name.c_str()); //ukloni proslijedjeni file
	rename("temp", name.c_str()); //daj fajlu temp ime proslijedjenog filea
	//.c_str() - funkcije koja vraca const char * identican stringu nad kojim je pozvana
}
