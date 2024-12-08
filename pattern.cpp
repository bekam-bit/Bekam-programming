#include <iostream>
#include <iomanip>

using namespace std;

void pattern(int n){
for(int i=n;i>=1;i--){
 for(int k=n-i;k>0;k--)
  cout<<" ";
  for(int j=i;j>0;j--)
   cout<<"* ";
   cout<<endl;
}
for(int i=2;i<=n;i++){
    for(int k=n-i;k>0;k--)
      cout<<" ";
    for(int j=0;j<i;j++)
        cout<<"* ";
        cout<<endl;
}
}
int main() {
int num;
cout<<"Enter number of levels of pattern: ";
cin>>num;
pattern(num);

return 0;
}
