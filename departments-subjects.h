#ifndef _DEPARTMENTS-SUBJECTS_H
#define _DEPARTMENTS-SUBJECTS_H

#include <string>

class DepartmentsSubjects{

private:
    int _departmentId;
    int _subjectId;
    std::string _studyYear;
    std::string _studySemester;

public:

    //geteri
    int getDepId()const {return _departmentId;}
    int getSubId()const {return _subjectId;}
    std::string getStudYear()const {return _studyYear;}
    std::string getStudySem()const {return _studySemester;}

    //seteri
    void setDepId(int i){_departmentId=i;}
    void setSubId(int j){_subjectId=j;}
    void setStudYear(std::string sy){_studyYear=sy;}
    void setStudySem(std::string sm){_studySemester=sm;}


};

#endif // _DEPARTMENTS

