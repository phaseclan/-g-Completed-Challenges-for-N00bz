#include <iostream>
using namespace std;

int main(){
	int hailstone(int _n);
	int n;
	cout << "Welcome to Ellory's Hailstone Calculator" << endl;
	cout << "----------Implemented in C++------------"<<endl<<endl;
	while (true){
		cout << "What would be a good n value?:";
		cin >> n;
		cout << "The hailstone calculater finished in " << hailstone(n) << " rounds." << endl;
		cout << "-----------------------------------------";
		cin >> n;
	}
	return 0;
}
public int hailstone(int _n){//prints the result of the hailstone sequence created by n=0
	int n = _n;
	int time=0;//# of runs before n hits 0
	int count=1;//keeps track of # of #s on the current line
	cout << n << " ";
	while (n > 2)
	{
		if (n % 2 == 0){//even
			n = n / 2;
			cout << n <<" ";
			count++;
			time++;
		}
		else{//odd
			n = 3 * n + 1;
			cout << n << " ";
			count++;
			time++;
		}
		if (count==10){
			count = 0;
			cout << endl;
		}
	}
	cout << endl;
	return time;
}
