#include <dbSchoolAPI_Grupa_8/api/api.h>
#include <string>
#include <iostream>

int main()
{
    studentApi A;
    A.save(3, "Aba", "Abic", "1996-01-01", "aba.abic@fet.ba", "Z", "354534234534", 1);
    Department a;
    a.setId(2);
    a.setName("Automatika i robotika");
    A.save(4, "Abba", "Abbic", "1996", "abba.abic@fet.ba", "Z", "54654654654", a);
    /*
     *prethodni poziv metoda save treba generisati gresku ukoliko se 
     *naziv i ID postojeceg departmenta ne poklapaju
     */
    a.setId(99);
    a.setName("Novi department");
    A.save(5, "Abbba", "Abbbic", "1996", "abbba.abbbic@fet.ba", "M", "354645567456", a);
    /*
     *prethodni poziv kreira novi department,
     *a nakon toga kreira i novi objekat tipa Student.
     *Ukoliko se zeli snimiti objekat ciji ID se vec nalazi u tabeli,
     *potrebno je generirati gresku, jer za to sluzi metod set()
     */
    A.get(4);
    A.get(5);
    /*
     *ukoliko se zeli procitati nepostojeca vrijednost,
     *generirati gresku
     */
    A.del(4);
    A.del(5);
    /*
     *ukoliko se zeli obrisati nepostojeca vrijednost,
     *generirati gresku
     */
    A.set(3, "A", "Ab", "1996-01", "a.ab@fet.ba", "M", "342523457", 2);
    /*
     *set treba generisati gresku ukoliko se zele uredjivati
     *unosi kojih nema u tabeli studenta
     */
    A.set(3, "A", "Ab", "1996-01", "a.ab@fet.ba", "M", "342523457", a);
    /*
     *isto ponasanje kao i kod metoda save() prilikom pozivanja
     *nad objektom departmenta koji ne postoji u tabeli
     */
    A.get(3)
    A.del(3);
    
    teacherApi B;
    B.get(2);
    B.save(3, "B", "Ba", "2452", "mail", "M", "1234234", "dr. sc.", 1);
    Department b;
    b.setId(100);
    b.setName("Department 100");
    B.save(4, "B", "Ba", "2452", "mail", "M", "1234234", "dr. sc.", b);
    B.set(3, "Bb", "Bba", "2452", "mail", "M", "1234234", "dr. sc.", b);
    B.get(3);
    B.get(4)
    B.del(3);
    B.del(4);
    /*
     *potrebno je omoguciti istu funkcionalnost metoda kao i kod studentApi
     */

    subjectApi C;
    C.get(2); 
    C.save(3, "Ime predmeta", 6, "IP");
    C.get(3);
    C.del(3);
    /*
     *u ovom slucaju nije potrebno raditi kaskadno snimanje jer
     *u klasi Subject ne postoji id bilo koje druge klase.
     */

    departmentApi D;
    D.get(2);
    D.save(3, "Novi department");
    D.get(3);
    D.del(3);
    /*
     *vrijedi isto kao i za prethodni API
     */

    return 0;
}
