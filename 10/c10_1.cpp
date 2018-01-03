#include <utility>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	int i;
	pair <string, int> sipair;
	vector< pair<string,int> > pvec;
	cout << "please input string" << endl;
	while (cin >> str >> i){
		sipair.first = str;
		sipair.second = i;
		pvec.push_back(sipair);
	}
	system("pause");
	return 0;
}