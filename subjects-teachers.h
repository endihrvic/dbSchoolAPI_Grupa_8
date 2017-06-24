#ifndef _SUBJECTS_TEACHERS_H
#define _SUBJECTS_TEACHERS_H

class subTeachers{
private:

    int _subjectId;
    int _teacherId;

public:
    //geteri
    int getSubId()const {return _subjectId;}
    int getTeachId()const {return _teacherId;}


    //seteri
    void setSubId(int s){_subjectId=s;}
    void setTeachId(int ti){_teacherId=ti;}

};

#endif // _SUBJECTS_TEACHERS_H
