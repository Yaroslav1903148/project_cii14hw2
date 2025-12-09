#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
class Ingridient
{
protected:
	string name;
	int time;
public:
	Ingridient() {
		name = "undf";
		time = 0;
	}
	Ingridient(string name, int time) {
		this->name = name;
		this->time = time;
	}
	
	void setName(string name) {
		this->name = name;
	}
	void setTime(int time) {
		this->time = time;
	}

	string getName() {
		return name;
	}
	int getTime() {
		return time;

	}

	void showInfo()const {
		cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout << "Ingridient: " << name << endl;
		cout << "Time: " << time << endl;
		cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	}

	bool operator <(const Ingridient&  obj)const& {
		return this->time < obj.time;
	}
	bool operator >(const Ingridient& obj)const& {
		return this->time > obj.time;
	}
	friend std::ostream& operator <<(std::ostream& out, const Ingridient& obj) {
		out << "\nIngridienbt: " << obj.name << "\n Time: " << obj.time << endl;
		return out;
	}
};

