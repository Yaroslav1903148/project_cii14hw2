#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Ingridient.h"
using std::cout;
using std::endl;
using std::vector;
using std::string;


namespace Queue {
	class My_pri_Queue
	{
	private:
		vector<Ingridient*> arr;
	protected:
		string info;
	public:
		My_pri_Queue() {
			info = "undf";
		}
		My_pri_Queue(string info) {
			this->info = info;
		}
		~My_pri_Queue() {
			while (!isEmpty()) {
				pop();
			}
		}

		void setInfo(string info) {
			this->info = info;
		}
		string getInfo() {
			return info;
		}

		bool isEmpty()const {
			return arr.empty();
		}
		Ingridient first()const {
			if (isEmpty()) {

				cout << "Is empty!\n";

			}
			return *arr.front();
		}
		void push_priority(Ingridient* obj) {
			if (isEmpty()) {
				arr.push_back(obj);
				return;
			}
			int pos = 0;
			while (pos < arr.size() && arr[pos]->getTime() > obj->getTime()) {
				pos++;
			}

			arr.insert(arr.begin() + pos, obj);

		}
		void pop() {
			if (isEmpty()) {
				cout << "Is empty!\n";
			}
			delete arr.front();
			arr.erase(arr.begin());
		}
		void showInfo()const {
			for (auto item : arr) {
				cout << *item << " " << endl;
			}
		}


	};
}

