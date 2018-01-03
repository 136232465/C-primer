/****************************
name :10_2 three method creat pair
*****************************/


#include <utility>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	int i;
	pair <string, int> sipair;
	vector< pair<string, int> > pvec;
	cout << "please input string" << endl;
	while (cin >> str >> i){
		sipair.first = str;
		sipair.second = i;
		// method 2 
		/*sipair = make_pair(str, i);*/

		//method 3
		/*pair <string, int> sipi(str, i);*/
		pvec.push_back(sipair);
	}
	system("pause");
	return 0;
}