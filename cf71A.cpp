#include <iostream>
using namespace std;
int main(){
	int n=0;
	cin >> n;
	string result[n];
	string x="";
	for(int i=0;i<n;i++){
		cin >> x;
		int len=x.length();
		if(len<=10){
			result[i] = x;
		}
		else{
			len = len - 2;
			string y = "";
			y+=x[0];
			y.append(to_string(len));
			y+=x[len + 1];
			result[i] = y;	
		}
	}
	for(int i=0;i<n;i++){
		cout << result[i] << "\n";
	}
}