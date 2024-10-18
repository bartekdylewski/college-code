#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <tgmath.h>

#define PI 3.14159265359
#define E 2.71828182846

/*
Napisz program, który na podstawie wprowadzonych z klawiatury danych (imię,
nazwisko, wiek, płeć) i zdefiniowanych stałych (STATUS przyjmujący wartość student
i SREDNIA przyjmująca wartość twojej pożądanej średniej ocen - liczba rzeczywista)
wyświetli w jednym wierszu imię, nazwisko, i płeć, a w drugim twój status i średnią.*/
void zad3() {
    const char STATUS[20] = "student";
    const char SREDNIA = 5;
    char imie[20];
    char nazwisko[20];
    int wiek;
    char plec;

    printf("Podaj swoje imie: \n");
    scanf("%s", imie);

    printf("Podaj swoje nazwisko: \n");
    scanf("%s", nazwisko);

    printf("Podaj swoj wiek: \n");
    scanf("%d", &wiek);

    printf("Podaj swoja ,płeć (M/F): \n");
    scanf(" %c", &plec);


    printf("%s %s  plec: %c \n", imie, nazwisko, plec);
    printf("status: %s , srednia: %d \n", STATUS, SREDNIA);
}

/*
Napisz program obliczający objętość i pole powierzchni sześcianu, prostopadłościanu
o podstawie kwadratowej i prostokątnej oraz walca.*/
void zad4() {
    int a, b, h, r;

    printf("Podaj rozmiar a, b, h, r: \n");
    scanf("%d %d %d %d", &a, &b, &h, &r);

    printf("Pole szescianu: %d \n", a * a * 6);
    printf("Objętość sześcianu: %d \n", a * a * a);
    printf("Pole prostopadłościanu o podstawie prostokątnej: %d \n", 2 * (a * b + a * h + b * h));
    printf("Objętość prostopadłościanu o podstawie prostokątnej: %d \n", a * b * h);
    printf("Pole prostopadłościanu o podstawie kwadratowej: %d \n", a*a*2 + a*h*4);
    printf("Objętość prostopadłościanu o podstawie kwadratowej: %d \n", a*a*h);
    printf("Pole walca: %0.2f \n", 2 * 3.14 * r * (r + h));
    printf("Objętość walca: %0.2f \n", 3.14 * r * r * h);
}
/*
Napisz program obliczający średnią arytmetyczną i średnią geometryczną dwóch liczb
całkowitych.*/
void zad5() {
    float srednia_arytmetyczna, srednia_geometryczna;
    int a, b;

    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d", &a, &b);
    srednia_arytmetyczna = (float)(a + b) / 2;
    srednia_geometryczna = (float)sqrt(a * b);
    printf("Srednia arytmetyczna: %0.2f \n", srednia_arytmetyczna);
    printf("Srednia geometryczna: %0.2f \n", srednia_geometryczna);
}

/*
Napisz program przeliczający wielkości fizyczne:
 z mili na kilometry (1 mila=0.625 km),
 z kilometrów na mile (1 km=1.6 mili),
 z koni mechanicznych [KM] na waty [W] (1KM = 735W]),
 z kilometrów na godzinę [km/h] na metry na sekundę [m/s],
 ze stopni Fahrenheita [o
F] na stopnie Celsjusza [oC] (toC=5/9(to
F-32).*/
void zad6() {
    float a;
    printf("Podaj liczbe: \n");
    scanf("%f", &a);
    printf("Mile na kilometry: %0.2f km \n", a * 0.625);
    printf("Kilometry na mile: %0.2f mil \n", a * 1.6);
    printf("Koni mechanicznych na waty: %0.2f W \n", a * 735);
    printf("Kilometry na godzine na metry na sekunde: %0.2f m/s \n", a * 1000 / 3600);
    float farenheit = 5.0/9.0 * (a - 32);
    printf("Stopnie Fahrenheita na stopnie Celsjusza: %0.2f C \n", farenheit);
}

/*
Napisz program, który na podstawie twojego obecnego wieku (w latach i miesiącach)
i podanego okresu czasu (w miesiącach), obliczy twój wiek w przyszłości (w latach
i miesiącach).*/
void zad7() {
    int lata, miesiace, czas;
    printf("Podaj swoj wiek w latach i miesiacach: \n");
    scanf("%d %d", &lata, &miesiace);
    printf("Podaj okres czasu w miesiacach: \n");
    scanf("%d", &czas);
    int nowy_wiek = lata + (miesiace + czas) / 12 + (miesiace + czas) % 12;
    printf("Masz %d lat i %d miesięcy, za %d miesięcy będziesz mieć:\n%d lat i %d miesięcy \n", lata, miesiace, czas, lata + (miesiace + czas)/12, (miesiace + czas) % 12);
}

/*
10cos x -0,1x² + sinx+√(4x² +7)
log(x + 5) + e ^ (x + 1) - |tan x + 1|
(sin^2 alpha + 0, 5) / (cos alpha ^ 4 + tan^4 (alpha ^ 2))
sqrt(|5sin beta ^ 5 + 1|/(3, 5 * (sin beta + cos beta) ^ 2))
*/
void zad8() {
    float x, alfa, beta;
    printf("Podaj x, alfa, i beta: \n");
    scanf("%f %f %f", &x, &alfa, &beta);

    float rownanie1 = 10 * cos(x) - 0.1 * pow(x,2) + sin(x) + sqrt(4 * pow(x,2)+ 7);
    float rownanie2 = log(x + 5) + pow(E, x + 1) - fabs(tan(x) + 1);
    float rownanie3 = (pow(sin(alfa), 2)) / ( cos(pow(alfa,4)) + pow(tan(pow(alfa,2)),4) );
    float rownanie4 = sqrt(abs(5 * sin(pow(beta,5) + 1)) / (3.5 * pow((sin(beta) + cos(beta)), 2) ));
    printf("%0.2f \n", rownanie1);
    printf("%0.2f \n", rownanie2);
    printf("%0.2f \n", rownanie3);
    printf("%0.2f \n", rownanie4);
}

/*Napisz program obliczający wartość funkcji trygonometrycznych: sin, cos i tg dla 
podanego w stopniach np. 90, 120, 180 */
void zad9() {
    float alfa;
    printf("Podaj alfa: \n");
    scanf("%f", &alfa);
    float radiany = alfa * PI / 180;
    printf("sin(%0.2f) = %0.2f \n", alfa, sin(radiany));
    printf("cos(%0.2f) = %0.2f \n", alfa, cos(radiany));
    printf("tg(%0.2f) = %0.2f \n", alfa, tan(radiany));
}

/*
* Zmienne a i b to dwie liczby całkowite trzycyfrowe. Napisz program zamieniający
miejscami wartości tych zmiennych. Po zamianie wyświetl te liczby, a następnie zmodyfikuj
je zamieniając miejscami cyfrę jedności i cyfrę setek - wyświetl liczby w odwrotnej
kolejności cyfr.
 */
void zad10() {
    char a[4], b[4], temp[4]; // rozmiar 4 dla null terminator
    printf("Podaj dwie liczby trzycyfrowe: \n");
    scanf("%3s %3s", &a, &b);
    printf("Przed zamianą: a=%s b=%s \n", a, b);
    // podmieniamy sobie zmienne uzywajac zmiennej tymczasowej
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    printf("Po zamianie: a=%s b=%s \n", &a, &b);

    //modyfikujemy numery zamieniając
    char new_a[4] = {a[2], a[1], a[0], '\0'};
    char new_b[4] = {b[2], b[1], b[0], '\0'};

    printf("Po modyfikacji: a=%s b=%s \n", new_a, new_b);
}

/*
* Napisz program, który obliczy obwód okręgu, który przechodzi przez punkt A(x1, y1)
i którego środek znajduje się w punkcie B(x2, y2).
 */
void zad11() {
    // A(x1, y1)
    // S(x2, y2)
    float x1, y1, x2, y2;
    printf("Podaj wspolrzedne punktu A(x1, y1): \n");
    scanf("%f %f", &x1, &y1);
    printf("Podaj wspolrzedne punktu środka S(x2, y2): \n");
    scanf("%f %f", &x2, &y2);

    // korzystamy ze wzoru okręgu:
    // r^2 = (x1 - x2)^2 + (y1 - y2)^2
    float r = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float obw = 2 * PI * r;
    printf("Promień okręgu: %0.2f \n", r);
    printf("Obwód okręgu: %0.2f \n", obw);

}

/*
* Napisz program, który:
a) po podaniu dowolnego znaku wyświetli go wraz z kodem ASCII, a następnie wyświetli
znak o kodzie następnym,
b) po podaniu małej litery zamieni ją na dużą.
 */
void zad12() {
    char znak, litera;
    printf("Podaj znak: \n");
    scanf(" %c", &znak);
    printf("Znak: %c, kod ASCII: %d \n", znak, znak);
    printf("Nastepny znak: %c \n", znak + 1);

    printf("Podaj małą literę: \n");
    scanf(" %c", &litera);
    printf("Duża litera: %c \n", toupper(litera));
}

int main() {
    zad3();
    zad4();
    zad5();
    zad6();
    zad7();
    zad8();
    zad9();
    zad10();
    zad11();
    zad12();
}
