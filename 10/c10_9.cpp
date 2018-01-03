/****************************
name :10_9
*****************************/


#include <map>
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;
int main(){
	string str;
	map<string, int> simap;
	while ( cin >> str){
		simap[str]++;
	}
	for (map<string, int>::iterator imap = simap.begin(); imap != simap.end(); ++imap){
		cout << imap->first << "   " << imap->second << endl;
	}
	system("pause");
	return 0;
}
