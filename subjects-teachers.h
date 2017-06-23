#ifndef _SUBJECTS_TEACHERS_H
#define _SUBJECTS_TEACHERS_H

class subTeachers{
private:

    int _subjectId;
    int _teacherId;

public:
    //geteri
    int subId()const {return _subjectId;}
    int teachId()const {return _teacherId;}


    //seteri
    void subId(int s){_subjectId=s;}
    void teachId(int ti){_teacherId=ti;}

};

#endif // _SUBJECTS_TEACHERS_H
