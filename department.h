/*
 *klasa Departmant
 */

#ifndef _DEPARTMENT_H
#define _DEPARTMENT_H

#include <string>

class Department {
private:
    int _id;
    std::string _name;

public:
	//geteri
    int getId()const {return _id;}
    std::string getName()const {return _name;}

	//seteri
    void setId(int i){_id=i;}
    void setName(std::string n){_name=n;}

};

#endif // _DEPARTMENT_H
