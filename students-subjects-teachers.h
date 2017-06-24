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
int getStudId()const {return _studentId;}
int getSubId()const {return _subjectId;}
int getTeachId()const {return _teacherId;}
int getEval()const {return _evaluation;}
std::string getDate()const {return _date;}

//seteri
void setStudId(int i){_studentId=i;}
void setSubId(int si){_subjectId=si;}
void setTeachId(int ti){_teacherId=ti;}
void setEval(int e){_evaluation=e;}
void setDate(std::string d){_date=d;}

};

#endif // _STUDENTS_SUBJECTS_TEACHERS_H
