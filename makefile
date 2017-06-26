OBJS = main.o departmentApi.o studentApi.o subjectApi.o teacherApi.o departmentDTO.o subjectDTO.o studentDTO.o teacherDTO.o exchDelLine.o
CC = g++
CFLAGS = -std=c++11 -c
LFLAGS = -std=c++11

p1: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

departmentApi.o: api/departmentApi.cpp api/departmentApi.h dto/departmentDTO.h dto/departmentDTO.cpp department.h
	$(CC) $(CFLAGS) api/departmentApi.cpp

studentApi.o: api/studentApi.cpp api/studentApi.h dto/studentDTO.h dto/studentDTO.h subject.h
	$(CC) $(CFLAGS) api/studentApi.cpp

subjectApi.o: api/subjectApi.cpp api/subjectApi.h dto/subjectDTO.h dto/subjectDTO.h subject.h
	$(CC) $(CFLAGS) api/subjectApi.cpp

teacherApi.o: api/teacherApi.cpp api/teacherApi.h dto/teacherDTO.h dto/teacherDTO.h teacher.h
	$(CC) $(CFLAGS) api/teacherApi.cpp

departmentDTO.o: dto/departmentDTO.cpp dto/departmentDTO.h department.h dto/exchDelLine.h dto/exchDelLine.cpp
	$(CC) $(CFLAGS) dto/departmentDTO.cpp

studentDTO.o: dto/studentDTO.cpp dto/studentDTO.h subject.h  dto/exchDelLine.h dto/exchDelLine.cpp
	$(CC) $(CFLAGS) dto/studentDTO.cpp

subjectDTO.o: dto/subjectDTO.cpp dto/subjectDTO.h subject.h dto/exchDelLine.h dto/exchDelLine.cpp
	$(CC) $(CFLAGS) dto/subjectDTO.cpp

teacherDTO.o: dto/teacherDTO.cpp dto/teacherDTO.h teacher.h dto/exchDelLine.h dto/exchDelLine.cpp
	$(CC) $(CFLAGS) dto/teacherDTO.cpp

exchDelLine.o: dto/exchDelLine.h dto/exchDelLine.cpp
	$(CC) $(CFLAGS) dto/exchDelLine.cpp

clean:
		rm *.o
