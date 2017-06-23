#ifndef _DEPARTMENTS_H
#define _DEPARTMENTS_H

#include <string>

class Departments {
private:
    int _id;
    std::string _name;

public:
    //geteri
    int Id()const {return _id;}
    std::string Name()const {return _name;}

    //seteri
    void Id(int i){_id=i;}
    void Name(std::string n){_name=n;}

};

#endif // _DEPARTMENTS_H
