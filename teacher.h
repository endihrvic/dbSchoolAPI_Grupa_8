/*
 *klasa Teacher
 */

#ifndef _TEACHER_H
#define _TEACHER_H

#include <string>

class Teachers {

private:

    int _id;
    std::string _firstName;
    std::string _lastName;
    std::string _birthDate;
    std::string _email;
    char _gender;
    int _jmbg;
    std::string _title;
    int _departmentId;

public:

	//geteri
    int getId()const {return _id;}
    std::string getFirstName()const {return _firstName;}
    std::string getLastName()const {return _lastName;}
	std::string getBirthDate()const {return _birthDate;}
    std::string getEmail()const {return _email;}
    char getGender()const {return _gender;}
    int getJmbg()const {return _jmbg;}
    std::string getTitle()const {return _title;}
    int getDepId()const {return _departmentId;}


	//seteri
    void setId(int i){_id=i;}
    void setFirstName(std::string fn){_firstName=fn;}
    void setLastName(std::string ln){_lastName=ln;}
    void setBirthDate(std::string bd){_birthDate=bd;}
    void setGender(char g){_gender=g;}
    void setJmbg(int j){_jmbg=j;}
    void setTitle(std::string t){_title=t;}
    void setDepId(int di){_departmentId=di;}

};

#endif // _TEACHER_H