#include <iostream>
#include <queue>
#include "Ingridient.h"
#include "My_pri_Queue.h"
int main()
{
	Queue::My_pri_Queue arr("Cooker");
	arr.push_priority(new Ingridient ("Cheese", 2));
	arr.push_priority(new Ingridient ("Pasta", 20));
	arr.push_priority(new Ingridient("Tomato", 5));
	

	arr.showInfo();
	
}

