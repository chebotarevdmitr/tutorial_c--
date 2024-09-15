#include<iostream>
using namespace std;

void Hello();

int main(){
for(int i=0;i<5;i++){
    Hello();
}
cout<<endl;
return 0;
}
void Hello(){
    cout<<"\tHello Hello\n";
}