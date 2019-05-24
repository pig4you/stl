#include <iostream>
#include <deque>

using namespace std;

int main(){
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);

	//deque iterator로 원소출력
	deque<int>::iterator iter;
	cout << "deque value: ";

	for(iter = dq.begin(); iter !=dq.end(); iter++){
		cout << *iter << " ";
	}
	cout << endl << endl;

	//앞, 뒤 삽입
	cout << "After Insert value: ";
	dq.push_front(1);
	dq.push_front(2);
	dq.push_back(100);
	dq.push_back(200);

	for(iter = dq.begin(); iter !=dq.end(); iter++){
      	         cout << *iter << " ";
        }
        cout << endl; 

	//두개 비교
	cout << dq.at(1) << endl;//0부터 시작
	cout << dq[1] << endl;

	//cout << dq.at(9) << endl;
	//cout << dq[9] << endl;

	// 역으로 출력
	cout << "Reverse value: ";
	deque<int>::reverse_iterator riter;

	for(riter = dq.rbegin(); riter != dq.rend(); riter++){
		cout << *riter << " ";
	}
	cout << endl;

	return 0;
}
