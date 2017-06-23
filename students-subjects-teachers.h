#ifndef _STUDENTS_SUBJECTS_TEACHERS_H
#define _STUDENTS_SUBJECT_TEACHERS_H

#include <string>

class studSubTeach{

private:

    int _studentId;
    int _subjectId;
    int _teacherId;
    int _evaluation;
    std::string _date; //odje sam pp da se date unosi kao string jer ima one - izmedju brojeva

public:

//geteri
int studId()const {return _studentId;}
int subId()const {return _subjectId;}
int teachId()const {return _teacherId;}
int eval()const {return _evaluation;}
std::string date()const {return _date;}

//seteri
void studId(int i){_studentId=i;}
void subId(int si){_subjectId=si;}
void teachId(int ti){_teacherId=ti;}
void eval(int e){_evaluation=e;}
void date(std::string d){_date=d;}

};

#endif // _STUDENTS_SUBJECTS_TEACHERS_H
