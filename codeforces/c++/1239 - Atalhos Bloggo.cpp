#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	string input;
	
	while (getline(cin, input)) {
		string str = "";
		int underLine = 0;
		int star = 0;
		
		for(int i = 0;i < input.length(); i++) {
			if (input[i] == '_') {
				underLine++;
				if (underLine == 2){
					str += "</i>";
					underLine = 0;
				} else {
					str += "<i>";
				}

			}
			else if (input[i] == '*') {
				star++;
				if (star == 2){
					str += "</b>";
					star = 0;
				} else {
					str += "<b>";
				}
			} else {
				str += input[i];
			}
		}
		cout << str << endl;
	}
	
	return 0;
}
