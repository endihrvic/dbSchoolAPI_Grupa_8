#ifndef _TEACHERS_H
#define _TEACHERS_H

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
    int id()const {return _id;}
    std::string firstName()const {return _firstName;}
    std::string lastName()const {return _lastName;}
    std:.string birthDate()const {return _birthDate;}
    std::string email()const {return _email;}
    char gender()const {return _gender;}
    int jmbg()const {return _jmbg;}
    std::string title()const {return _title;}
    int depId()const {return _departmentId;}


    //seteri
    void id(int i){_id=i;}
    void firstName(std::string fn){_firstName=fn;}
    void lastName(std::string ln){_lastName=ln;}
    void birthDate(std::string bd){_birthDate=bd;}
    void gender(char g){_gender=g;}
    void jmbg(int j){_jmbg=j;}
    void title(std::string t){_title=t;}
    void depId(int di){_departmentId=di;}

};

#endif // _TEACHERS_H
