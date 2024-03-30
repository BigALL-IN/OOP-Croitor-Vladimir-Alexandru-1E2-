#pragma once
class Student
{
private:
    char Nume[50];
    float Math, English, History;
public:
    void Set_Name(char Nume[50]);
    char* Get_Name();

    void Set_Math(float value);
    float Math_grade();

    void Set_Eng(float value);
    float Eng_grade();

    void Set_Hist(float value);
    float Hist_grade();

    float Avg();

};