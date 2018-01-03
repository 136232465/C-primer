/****************************
name :10_18
*****************************/


#include <map>
#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main(){
	string surname, childname;
	map< string, vector<string> > children;
	vector<string> svec;
	while ( cin >> surname){
		pair< map< string, vector<string> >::iterator, bool> ret = children.insert(make_pair(surname, svec));
		if (!ret.second){
			cout << "surname " << surname << "is writed" << endl;
			continue;
		}
		cout << "write childname" << endl;
		while (cin >> childname){
			ret.first->second.push_back(childname);
		}
		cin.clear();
	}
	cin.clear();
	cout << "input surname" << endl;
	cin >> surname;
	map< string,vector<string> >::iterator imap=children.find(surname);
	if (imap == children.end()){
		cout << "no" << endl;
	}
	for (vector<string>::iterator sit = imap->second.begin(); sit != imap->second.end();++sit){
		cout << imap->first << *sit << endl;
	}
	system("pause");
}