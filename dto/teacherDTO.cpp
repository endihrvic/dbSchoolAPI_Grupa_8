#include "teacherDTO.h"

Teacher strToTeachers(std::string s){
	Teacher a;
	int b;
	std::stringstream ss;	
	ss << s;
	//setuj ID
	ss >> b;
	a.setId(b);
	ss.ignore(2); //", "
	//setuj firstName
	getline(ss, s, ',');
	a.setFirstName(s);
	ss.ignore(1); // " " u getline() je ','
	//setuj lastName
	getline(ss, s, ',');
	a.setLastName(s);
	ss.ignore(1);
	//setuj brithDate
	getline(ss, s, ',');
	a.setBirthDate(s);
	ss.ignore(1);
	//setuj email
	getline(ss, s, ',');
	a.setEmail(s);
	ss.ignore(1);
	//setuj gender
	getline(ss, s, ',');
	a.setGender(s);
	ss.ignore(1);
	//setuj jmbg
	getline(ss, s, ',');
	a.setJmbg(s); 
	ss.ignore(1);
	//setuj title
	getline(ss, s, ',');
	a.setTitle(s);
	ss.ignore(1);
	//setuj departmentId
	ss >> b;
	a.setDepId(b);

	return a;
}

std::string teachersToStr(Teacher a){
	std::string s;
	return std::to_string(a.getId()) + ", " + a.getFirstName() + ", " + a.getLastName() + ", " + a.getBirthDate() + ", " + a.getEmail() + ", " + a.getGender() + ", " + a.getJmbg() + ", " + a.getTitle() + ", " + std::to_string(a.getDepId()) +"\n";
}

void TeacherDTO::save(Teacher a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToTeachers(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/teachers.txt", std::ios::app);
	os << teachersToStr(a) << "\n";
	os.close();
}

void TeacherDTO::save(Teacher a, Department d){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToTeachers(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, prvo provjeriti da li dati department postoji, i ukoliko ne, dodati ga
	try{
		DepartmentDTO dDto;
		dDto.save(d);
	}	
	catch(...){}
	//upisati studenta u file
	std::ofstream os;
	os.open("./db/teachers.txt", std::ios::app);
	os << "\n" << teachersToStr(a) << "\n";
	os.close();
}

void TeacherDTO::read(int id){
	bool found = false;
	Teacher a;
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToTeachers(s)).getId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s << "\n";
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void TeacherDTO::del(int id){
	Teacher a;
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToTeachers(s)).getId()){
			deleteLine(s, "./db/teachers.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void TeacherDTO::update(Teacher a){
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
			if(a.getId() == (strToTeachers(s)).getId()){
			changeLine(s, teachersToStr(a), "./db/teachers.txt");
			return;
		}
	}	
	is.close();
	std::cout << "Error: trazeni unos ne postoji\n";
}

void TeacherDTO::update(Teacher a, Department d){
	std::ifstream is;
	is.open("./db/teachers.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToTeachers(s)).getId()){
		//ukoliko teacher sa datim IDom postoji u fajlu, provjeriti department, pa snimiti teachera
		try{
			DepartmentDTO dDto;
			dDto.save(d);
		}	
		catch(...){}
		//upisati teachera u file
		changeLine(s, teachersToStr(a), "./db/teachers.txt");
		return;
		}
	}	
	is.close();
}

