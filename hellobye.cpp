#include<iostream>
#include<string>
using namespace std;

int main(){
	string name,word;
	cin >> name;
	cout << name << ", I won't care about what you say\n";
	while(cin >> word){
		if (word == "bye"){
			cout << name << ", bye\n";
			break;
		}
		cout << "?\n";
	}
}
