/*
 *klasa Student
 */

#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>

class Student{

private:
    int _id;
    std::string _firstName;
    std::string _lastName;
    std::string _birthDate;
    std::string _email;
    std::string _gender;
    int _jmbg;
    int _departmentId;

public:

	//geteri
    int getId()const {return _id;}
    std::string getFirstName()const {return _firstName;}
    std::string getLastName()const {return _lastName;}
    std::string getBirthDate()const {return _birthDate;}
    std::string getEmail()const {return _email;}
    std::string getGender()const {return _gender;}
    int getJmbg()const {return _jmbg;}
    int getDepId()const {return _departmentId;}

	//seteri
    void setId(int i){_id=i;}
    void setFirstName(std::string fn){_firstName=fn;}
    void setLastName(std::string ln){_lastName=ln;}
    void setBirthDate(std::string bd){_birthDate=bd;}
    void setEmail(std::string e){_email=e;}
    void setGender(std::string g){_gender=g;}
    void setJmbg(int j){_jmbg=j;}
    void setDepId(int id){_departmentId=id;}

};

#endif // _STUDENT_H
