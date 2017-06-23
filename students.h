#ifndef _STUDENTS_H
#define _STUDENTS_H

#include <string>

class Students{

private:
    int _id;
    std::string _firstName;
    std::string _lastName;
    std::string _birthDate;
    std::string _email;
    char _gender;
    int _jmbg;
    int _departmentId;

public:

    //geteri
    int Id()const {return _id;}
    std::string firstName()const {return _firstName;}
    std::string lastName()const {return _lastName;}
    std::string birthDate()const {return _birthDate;}
    std::string email()const {return _email;}
    char gender()const {return _gender;}
    int jmbg()const {return _jmbg;}
    int depId()const {return _departmentId;}

    //seteri
    void Id(int i){_id=i;}
    void firstName(std::string fn){_firstName=fn;}
    void lastName(std::string ln){_lastName=ln;}
    void birthDate(std::string bd){_birthDate=bd;}
    void email(std::string e){_email=e;}
    void gender(char g){_gender=g;}
    void jmbg(int j){_jmbg=j;}
    void depId(int id){_departmentId=id;}

};

#endif // _STUDENTS_H
