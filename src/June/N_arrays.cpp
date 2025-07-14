#include<iostream>
using namespace std ;
int main() {
int N, sum = 0 , arr[10000];
cin>>N;
	for (int i=0; i<N; ++i) {
		cin  >> arr[i];
sum += arr[i];
}
cout  << sum;
return 0;
}	
