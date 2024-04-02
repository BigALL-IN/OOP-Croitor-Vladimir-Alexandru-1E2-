#include <cstdarg>
#include "Canvas.h"
#include <iostream>
#include <math.h>
using namespace std;

Canvas::Canvas(int rows, int cols) : width(cols), height(rows) {
    for (int i = 0; i < rows; i++) {
        array[i] = new char[cols];
    }
    Clear();
}

void Canvas::Clear() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
           array[i][j] = ' ';
        }
    }
}

void Canvas::Print() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << array[i][j];
        }
        cout << endl;
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch){
    int Epsilon = 2.7;
    for (int b = 0; b < height; b++) {
        for (int a = 0; a < width; a++) {
            if (abs((std::pow(a - x, 2) + std::pow(b - y, 2) - std::pow(ray, 2))) < Epsilon) {
                array[a][b] = ch;
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    int Epsilon = 1.5;
    for (int b = 0; b < height; b++) {
        for (int a = 0; a < width; a++) {
            if (sqrt(pow(x-a, 2)+pow(y-b, 2))<ray+Epsilon) {
                array[a][b] = ch;
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i < right; i++) {
        array[i][top] = ch;
        array[i][bottom] = ch;
    }
    for (int i = top; i < bottom; i++) {
        array[left][i] = ch;
        array[right][i] = ch;
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left+1; i < right; i++)
        for (int j = top+1; j < bottom; j++)
        array[i][j] = ch;
    }

void Canvas::SetPoint(int x, int y, char ch) {
    array[x][y] = ch;
}


     

