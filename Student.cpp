#include <iostream>
#include "Student.h"

void Student::Set_Name(char set_name[50])
{
    bool OK = 1;
    for (int i = 0; i < strlen(set_name); i++)
        if (!((set_name[i] >= 'a' && set_name[i] <= 'z') || (set_name[i] >= 'A' && set_name[i] <= 'Z')))
        {
            OK = 0;
            if (OK == 1) Nume[i] = set_name[i];
        }
}

char* Student::Get_Name()
{
    return Nume;
}

void Student::Set_Math(float value)
{
    if ((value >= 1) && (value <= 10))
        Math = value;
}

float Student::Math_grade()
{
    return Math;
}

void Student::Set_Eng(float value)
{
    if ((value >= 1) && (value <= 10))
        English = value;
}

float Student::Eng_grade()
{
    return English;
}

void Student::Set_Hist(float value)
{
    if ((value >= 1) && (value <= 10))
        History = value;
}

float Student::Hist_grade()
{
    return History;
}

float Student::Avg()
{
    return (Math + English + History) / 3;
}