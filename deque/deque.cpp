#include <iostream>
#include <deque>

using namespace std;

int main(){

	deque<int> dq;
	//뒤에서부터 차례대로 10, 20, 30, 40, 50 push 
	//10 20 30 40 50
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40); 
	dq.push_back(50);

	cout << "After Back push: ";	
	for (deque<int>::size_type i = 0; i < dq.size(); ++i){
		cout << dq[i] << ' ';
	}
	cout << endl;

	//앞에서부터 100, 200 push 
	//200 100 10 20 30 40 50
	dq.push_front(100);
	dq.push_front(200);    

	cout << "After Front push: ";	
	for (deque<int>::size_type i = 0; i < dq.size(); ++i){
		cout << dq[i] << ' ';
	}
	cout << endl << endl;

	//back 에서 pop,  front 에서 pop
	dq.pop_back();
	dq.pop_front();
	
	cout << "After pop: ";
	
	for (deque<int>::size_type i = 0; i < dq.size(); ++i){
		cout << dq[i] << ' ';
	}
	cout << endl << endl;



	//iterator를 통한 덱값 출력
	deque<int>::iterator iter;
	deque<int>::iterator iter2;

	for (iter = dq.begin(); iter != dq.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;

	//원소 삽입
	int index;
	int value;

	cout << "(0부터시작)Input insert index: ";
	cin >> index;
	cout << "Input value: ";
	cin >> value;

	iter = dq.begin() + index;            // dq의 3번째 원소에 접근
	iter2 = dq.insert(iter, value);    // 3번째 원소 자리에 500을 삽입한. 기존 원소들은 뒤로 한칸씩 밀림.
	cout << "Index: " << index << " Insert value: " << *iter2 << endl;

	cout << endl << "After insert: ";
	for (iter = dq.begin(); iter != dq.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;

	//원소 지우기
	int index2;
	cout << "(0부터시작)Input erase index: ";
	cin >> index2;

	iter = dq.begin() + index2;
	iter2 = dq.erase(iter);
	cout << "Index: " << index2 << endl;

	cout << endl << "After erase: ";
        for (iter = dq.begin(); iter != dq.end(); ++iter){
		cout << *iter << ' ';
        }
        cout << endl;

	return 0;
}


