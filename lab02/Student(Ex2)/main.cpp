#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

int main()
{
    Student Studenti[2];

    char name1[50], name2[50];
    cin.getline(name1, 50);
    cin.getline(name2, 50);

    int Nota_Matemat[2], Nota_English[2], Nota_History[2];
    cin >> Nota_Matemat[0] >> Nota_Matemat[1];
    cin >> Nota_English[0] >> Nota_English[1];
    cin >> Nota_History[0] >> Nota_History[1];

    Studenti[0].Set_Name(name1);
    Studenti[0].Set_Math(Nota_Matemat[0]);
    Studenti[0].Set_Eng(Nota_English[0]);
    Studenti[0].Set_Hist(Nota_History[0]);
    int Medie0 = Studenti[0].Avg();


    Studenti[1].Set_Name(name1);
    Studenti[1].Set_Math(Nota_Matemat[1]);
    Studenti[1].Set_Eng(Nota_English[1]);
    Studenti[1].Set_Hist(Nota_History[1]);
    int Medie1 = Studenti[1].Avg();

}