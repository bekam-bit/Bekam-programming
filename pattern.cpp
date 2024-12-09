#include <iostream>
#include <iomanip>

using namespace std;

void pattern(){
int n=5;
for(int i=n;i>=1;--i){
 for(int k=i;k<=n;++k){
  cout<<k<<" ";
}
for(int j=n-1;j>=i;--j){
 cout<<j<<" ";
}
cout<<endl;
}
for(int i=2;i<=n;++i){
    for(int k=i;k<=n;++k){
cout<<k<<" ";
}
for(int j=n-1;j>=i;--j){
    cout<<j<<" ";
}
cout<<endl;
}
}
int main() {

pattern();

return 0;
}
