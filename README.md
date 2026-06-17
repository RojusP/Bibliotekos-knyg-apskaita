Knygų informacijos valdymo sistema

Projekto tikslas:

Sukurti C++ konsolinę programą, kuri leidžia saugoti ir tvarkyti knygų duomenis. Programoje taikomi struktūrinio programavimo principai ir naudojami pagrindiniai C++ kalbos elementai.

Pasirinkta tema:

Projektas priskiriamas bibliotekos knygų apskaitos temai. Programa skirta paprastam knygų sąrašo valdymui: galima pridėti, peržiūrėti, keisti ir ištrinti duomenis.

Programos funkcionalumas:

Duomenų saugojimas

Programa nuskaito pradinius duomenis iš tekstinio failo books.txt. Po kiekvieno pakeitimo duomenys išsaugomi tame pačiame faile, todėl informacija išlieka.

Vartotojo sąsaja

Programa turi tekstinį meniu, per kurį vartotojas gali pasirinkti veiksmą įvesdamas skaičių.

CRUD operacijos

Programoje įgyvendintos visos būtinos operacijos:

Create – naujos knygos pridėjimas
Read – visų knygų peržiūra
Update – esamos knygos keitimas pagal ID
Delete – knygos pašalinimas iš sąrašo


Papildomos funkcijos

Programoje realizuotos papildomos galimybės:

Paieška – galima surasti knygą pagal pavadinimą

Rikiavimas – knygos gali būti išrikiuotos pagal metus didėjimo tvarka


Naudojami failai:

main.cpp

Tai pagrindinis failas, kuriame parašyta visa programos logika:

duomenų įkėlimas iš failo
duomenų keitimas
vartotojo meniu
papildomos funkcijos

books.txt
Failas, kuriame saugomi visi įrašai.

Duomenų formatas
Failas books.txt naudoja struktūrizuotą tekstą, kur laukeliai atskiriami simboliu ;.
Formatas:
ID;Pavadinimas;Autorius;Metai

Pavyzdys:
1;Altoriu sesely;Putinas;1933
2;Haris Poteris;Rowling;1997


Paleidimo instrukcija

Atsisiųsti arba nukopijuoti projekto failus
Įsitikinti, kad books.txt yra tame pačiame kataloge kaip programa
Sukompiliuoti kodą:

g++ main.cpp -o programa


Paleisti programą:

./programa


Naudotis meniu:

1 – rodyti duomenis  
2 – pridėti naują įrašą  
3 – redaguoti įrašą  
4 – ištrinti įrašą  
5 – paieška  
6 – rikiavimas  
0 – išeiti  


Techniniai sprendimai
Programoje panaudota:

kintamieji ir pagrindiniai duomenų tipai (int, string)
sąlyginiai sakiniai (if)
ciklai (for, do-while)
funkcijos programos skaidymui
vartotojo sukurta struktūra (struct Book)
duomenų kolekcija (vector)
failų nuskaitymas (ifstream)
failų įrašymas (ofstream)
duomenų apdorojimas naudojant stringstream


Pastabos

Duomenys saugomi tekstiniame faile naudojant ; kaip skyriklį
Naudojamas cin.ignore(), kad įvestis su getline veiktų korektiškai
vector naudojamas dėl patogesnio duomenų valdymo
Programa sukurta paprasta, kad būtų lengvai suprantama ir paaiškinama

