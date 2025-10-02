#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int n;
//ask for numbers of input
cout<<"How many numbers needed : ";
cin>>n;
pa=new int[n]; 

//ask for the input
for(i=0;i<n;i++,pa++){
  cout<<"Input no."<<i+1<<" : ";
  cin>>*pa;
}
pa=pa-n; //pa[0]

//print original
cout<<"Original: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa;
}
cout<<endl; //end line

// reverse
pb = pa; //pa[n]
pa -= n; //pa[0]
for (i=0; i<n/2; i++){
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
// print reverse
pa -= (n/2)-1;
cout<<"Reversed: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa; 
}
cout<<endl; //end line

//delete []pa;
return 0;
}
