#README
    ____               _      __         __ 
   / __ \_________    (_)__  / /______ _/ /_
  / /_/ / ___/ __ \  / / _ \/ //_/ __ `/ __/
 / ____/ /  / /_/ / / /  __/ ,< / /_/ / /_  
/_/   /_/   \____/_/ /\___/_/|_|\__,_/\__/  
               /___/                       
------------------------------------------------------
------------------------------------------------------
***********************README*************************
Ovo je program čija je funkcionalnost rad sa listama 
podataka zapisanim u .txt fajlovima.
------------------------------------------------------
Napomena: pošto su na projektu intenzivno radila samo
2 studenta, tražena funkcionalnost nije zadovoljena za
sve klase, već samo za klase student.h, teacher.h,
department.h i subject.h, dok ostale, iako su 
napravljene, ne rade kako treba. Na takav izgled
finalne verzije projekta uticali su kako misao da je
nepravedno da dva studenta moraju da rade duplo više
posla za isti broj bodova kao neko iz normalne grupe,
tako i činjenica da je kroz ove četiri klase 
demonstrirano sve ono što bi bilo demonstrirano i kroz
ostale klase koje nismo uradili :)
------------------------------------------------------
------------------------------------------------------
********************KONFIGURACIJA*********************
Kompajliranje
$ make

Brisanje .o datoteka nastalih prilikom kompajliranja
$ make clean
-----------------------------------------------------
-----------------------------------------------------
*********************KORIŠTENJE**********************
Svaka od navedenih funkcionalnih klasa ima 4 osnovne
operacije: save, del, read, update - koje rade
manipulaciju ili čitanje podataka iz tekstualnih
fajlova u folderu db.
Također, svaka od klasa(i one koje nisu funkcionalne)
ima određeni skup getera i setera koji odgovara toj
klasi, a listu kojih ćete moći vidjeti ukoliko
pogledate fajlove klasa.
