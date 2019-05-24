#include <stack>
#include <iostream>

using namespace std;

int main(void){
	
	stack<int> s;
	 
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	
	cout << "stack size: " << s.size() << endl;                                        // 5
	 
	//s가 비어있지 않은 동안
	while(!s.empty())
	{
	    int n = s.top();
	    s.pop();
	 
	    cout << n << '\n';                                   // 1 2 3 4 5
	}
	
	cout << "stack size: " << s.size() << endl;
	cout << "=========================================" << endl;	

	s.push(3);
	s.push(2);
	s.push(1);

//	stack<int>::iterator iter;
	
	cout << "stack size: " << s.size() << endl;
	stack<int> emt;
	swap(s, emt);

	cout << "After swap size: " << s.size() << endl;
	
}

