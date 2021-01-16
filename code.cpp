// SC:- O(1)      |    TC:- O(1)
#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	do{
		cout<<int(log2(n))<<endl;
		cin>>n;
	}while(n!=0);
	return 0;
}
