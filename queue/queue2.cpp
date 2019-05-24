#include <queue>
#include <iostream>
//#include <utility>

using namespace std;

		int main(void){
			
		//queue<pair<int,int>> q;  
		//-> 이리하면 한칸띄우라고 에러남-> >를 연달아쓰면 >>자체로 인식해버려서 
		queue<pair<int,int> > q;
			
		//pair push 방법1 
		q.push(make_pair(1,2));
		q.push(make_pair(3,4));
	 
		//pair push 방법2
		int a = 5, b = 6;
		pair<int,int> p = make_pair(a,b); 
		q.push(p);
			 
cout << "front value -> " << "first: " << q.front().first << ' ' << "second: " << q.front().second << endl;
cout << "back value -> " << "first: " << q.back().first << ' ' << "second: " << q.back().second << endl;
			 
		cout << "size: " << q.size() << endl;
		
		//q를 pop해주면서 모두 출력
		while(!q.empty())
		{
		    pair<int,int> n = q.front();//q의 front를 pair n으로 받기
		    q.pop();
			 
		    cout << "(" << n.first << ","  << n.second << ")" << endl; // 
			                                          
		}
			 
		cout << "size: " << q.size() << endl;                                          // 0

		cout << "======================================" << endl;	
				
		q.push(make_pair(4,5));
		q.push(make_pair(5,6));

cout << "front value -> " << "first: " << q.front().first << ' ' << "second: " << q.front().second << endl;
cout << "back value -> " << "first: " << q.back().first << ' ' << "second: " << q.back().second << endl;	

		 while(!q.empty())
                 {
                     pair<int,int> n = q.front();
		     q.pop();
                     cout << "(" << n.first << ","  << n.second << ")" << endl;
                 }	
		
		//capacity 와 한번에 큐를 비울려면 -> swap을 이용하여 빈큐와 스왑 -> 빈큐가 됨	
		queue<pair<int,int> > emt;
		swap(q, emt);
			
		cout << "After swap size: " << q.size() << endl;     

}

