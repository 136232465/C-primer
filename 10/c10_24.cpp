/*****************************
name: 10_24
******************************/

#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main(){
	ifstream ifs;
	ifs.open("errstring.txt");
	set<string> exclude;
	string str;
	while (ifs >> str){
		exclude.insert(str);
	}
	ifs.close();
	ifstream file1;
	ofstream file2;
	file1.open("old.txt");
	file2.open("target.txt");
	while (file1 >> str){
		if (*(--str.end()) == 's'){
			set<string>::iterator sit = exclude.find(str);
			if (sit!=exclude.end()){
				continue;
			}
			str.resize(str.size() - 1);
		}
		file2 << str << " ";
	}
	file1.close();
	file2.close();
	

}