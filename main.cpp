#include "NumberList.h"
void main() {
	NumberList a;
	a.Init();
	a.Add(7);
	a.Add(3);
	a.Add(8);
	a.Print();
	a.Sort();
	a.Print();
}