#include<iostream>
#include<cassert>
#include<string>
#include<string.h>
#include<Windows.h>
#include<vector>
using namespace std;
int global_id = 1;
#include"Engine_class.h"
#include"Car_class.h"
#include"Automatic_class.h"
#include"Manual_class.h"
#include"All_cars.h"
void main()
{
	vector<Car*> car_list;
	car_list.push_back(new Bmw("BMW", "F10", Engine("F109320", "Bmw", 4.4), true, true, true, true, true, false, true));
	car_list.push_back(new Bmw("BMW", "M5cs", Engine("MC109320", "Bmw", 4.4), true, true, true, true, true, false, true));
	car_list.push_back(new Mercedes("Mercedes", "CLS63", Engine("CL4632432", "Mercedes-AMG", 5.5), true, true, true, true, true, true, false));
	car_list.push_back(new Mercedes("Mercedes", "GT900 Rocket", Engine("GT4632432", "Mercedes-AMG", 5.5), true, true, true, true, true, true, false));
	car_list.push_back(new Audi("Audi", "RS6", Engine("RS462243", "Audi", 4.0), true, false, true, false, true, true, false));
	car_list.push_back(new Vaz("VAZ", "2107", Engine("ZA07432", "VAZ", 1.6), true, "Great", true, true, false));
	car_list.push_back(new Vaz("VAZ", "2106", Engine("ZA06432", "VAZ", 1.6), true , "Great" , true , false , true));

	for (size_t i = 0; i < car_list.size(); i++)
	{
		car_list[i]->show();
		cout << endl;
	}
}