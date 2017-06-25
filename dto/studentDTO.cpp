#include "studentDTO.h"

Student strToStudents(std::string s){
	Student a;
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
  getline(ss,s, ',');
	a.setJmbg(s); 
	ss.ignore(1);
	//setuj departmentId
	ss >> b;
	a.setDepId(b);

	return a;
}

std::string StudentsToStr(Student a){
	std::string s;
	return std::to_string(a.getId()) + ", " + a.getFirstName() + ", " + a.getLastName() + ", " + a.getBirthDate() + ", " +a.getEmail() + ", "+ a.getGender() +", " + a.getJmbg() + ", " + std::to_string(a.getDepId());
}

void StudentDTO::save(Student a){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId())
			throw std::runtime_error("ID se vec koristi\n");
	}	
	is.close();
	//ukoliko nije doslo do greske, upisi objekat u file
	std::ofstream os;
	os.open("./db/students.txt", std::ios::app);
		os << StudentsToStr(a) << "\n";
	os.close();
}

void StudentDTO::save(Student a, Department d){
	//preuzmi string iz filea 
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId())
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
	os.open("./db/students.txt", std::ios::app);
	os << "\n" << StudentsToStr(a) << "\n";
	os.close();
}

void StudentDTO::read(int id){
	bool found = false;
	Student a;
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToStudents(s)).getId()){
			found = true;
			break;
		}
	}	
	if(found)
		std::cout << s << "\n";
	else
		std::cout << "Error: trazeni unos ne postoji\n";
}

void StudentDTO::del(int id){
	Student a;
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(id == (strToStudents(s)).getId()){
			deleteLine(s, "./db/students.txt");
			return;
		}
	}	
	std::cout << "Error: trazeni unos ne postoji\n";	
}

void StudentDTO::update(Student a){
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId()){
			changeLine(s, StudentsToStr(a), "./db/students.txt");
			return;
		}
	}	
	is.close();
	std::cout << "Error: trazeni unos ne postoji\n";
}

void StudentDTO::update(Student a, Department d){
	std::ifstream is;
	is.open("./db/students.txt");
	std::string s;
	while(getline(is, s)){
		if(a.getId() == (strToStudents(s)).getId()){
		//ukoliko student sa datim IDom postoji u fajlu, provjeriti department, pa snimiti studenta
		try{
			DepartmentDTO dDto;
			dDto.save(d);
		}	
		catch(...){}
		//upisati studenta u file
		changeLine(s, StudentsToStr(a), "./db/students.txt");
		return;
		}
	}	
	is.close();
}
