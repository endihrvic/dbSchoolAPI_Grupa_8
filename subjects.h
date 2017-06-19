#ifndef _SUBJECTS_H
#define _SUBJECT_H

class Subjects{

private:

    int _id;
    std::string _name;
    int _ects;
    std::string _abbreviation:

public:

    //geteri
    int id()const {return _id;}
    std::string name()const {return _name;}
    int etcs()const {return _ects;}
    std::string abber()const {return _abbreviation;}

    //seteri

    void id(int i){_id=i;}
    void name(std::string n){_name=n;}
    void ects(int e){_ects=e;}
    void abber(std:.string a){_abbreviation=a;}

};

#endif // _SUBJECTS_H
