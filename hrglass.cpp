# HourGlass-pattern

#include <iostream>
using namespace std;
int main (){
int tr;
cin>>tr;
int rw=1;
while (rw<=(tr+1)/2){
    
for (int j=1; j<=rw-1; j++){
cout<<" ";
}


for (int i=1; i<=tr-2*(rw-1); i++){
cout<<"*";
}


rw = rw+1;
cout<<endl;
}
while (rw<=tr){
for (int m=1; m<=tr-rw; m++){
cout<<" ";
}

for (int l=1; l<=2*rw-tr; l++){
cout<<"*";
}

rw = rw+1;
cout<<endl;
}

    return 0;
}
