/*
 *klasa Subject
 */

#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <string>

class Subject{

private:

    int _id;
    std::string _name;
    int _ects;
    std::string _abbreviation;

public:

	//geteri
    int getId()const {return _id;}
    std::string getName()const {return _name;}
    int getEtcs()const {return _ects;}
    std::string getAbbr()const {return _abbreviation;}

	//seteri
    void setId(int i){_id=i;}
    void setName(std::string n){_name=n;}
    void setEcts(int e){_ects=e;}
    void setAbbr(std::string a){_abbreviation=a;}

};

#endif // _SUBJECT_H
