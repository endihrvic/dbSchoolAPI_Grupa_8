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
    int depId()const {return _departmentId;}
    int subId()const {return _subjectId;}
    std::string studYear()const {return _studyYear;}
    std::string studySem()const {return _studySemester;}

    //seteri
    void depId(int i){_departmentId=i;}
    void subId(int j){_subjectId=j;}
    void studYear(std::string sy){_studyYear=sy;}
    void studySem(std::string sm){_studySemester=sm;}


};

#endif // _DEPARTMENTS

