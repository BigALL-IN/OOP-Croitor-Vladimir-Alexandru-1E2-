#include "Canvas.h"

void main(){
	Canvas canvas(30, 30);
	canvas.DrawRect(2, 2, 10, 15, '*');
	canvas.FillRect(2,2,10,15,'1');
	canvas.Print();

	canvas.Clear();

	canvas.DrawCircle(15, 15, 8, '+'); 
	canvas.FillCircle(15, 15, 8, '+');
	canvas.SetPoint(30, 30, 'X');

	canvas.Print();


}