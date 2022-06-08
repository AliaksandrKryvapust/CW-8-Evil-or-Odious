#include<iostream>
#include<string>
#include <bitset>
using namespace std;

string evil(const int n){
	bitset<32> temp(n);
	return (temp.count()%2==0)? "It's Evil!" : "It's Odious!";
}
int main() {
	int n = 3;
	evil(n);
	return 0;
}