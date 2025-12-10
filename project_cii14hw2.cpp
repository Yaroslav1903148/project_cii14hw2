#include <iostream>
#include <queue>
#include "Ingridient.h"
#include "My_pri_Queue.h"
int main()
{
	//Queue::My_pri_Queue arr("Cooker");
	//arr.push_priority(new Ingridient ("Cheese", 2));
	//arr.push_priority(new Ingridient ("Pasta", 20));
	//arr.push_priority(new Ingridient("Tomato", 5));
	//

	//arr.showInfo();
	//


    std::priority_queue<Ingridient> arr;

    arr.push(Ingridient("Potato", 7));
    arr.push(Ingridient("Carrot", 4));
    arr.push(Ingridient("Meat", 10));
    arr.push(Ingridient("Onion", 2));

    std::cout << "===Start!!===\n";

    while (!arr.empty()) {
        Ingridient ing = arr.top();
        arr.pop();

        std::cout << "\nCooking: " << ing.getName() << " (" << ing.getTime() << " s)\n";

        std::cout << "Done: " << ing.getName() << endl;
    }

    cout << "\nDone!!!";

}

