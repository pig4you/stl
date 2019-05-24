#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
	deque<int> dq;

	dq.push_front(50);
	dq.push_front(40);
	dq.push_front(30);
	dq.push_front(20);
	dq.push_front(10);
	
	cout << "dq value: ";
	deque<int>::iterator iter;
	for(iter = dq.begin(); iter != dq.end(); iter++){
		cout << *iter << " ";
	}
	cout << endl << endl;

}
