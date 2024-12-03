#include <iostream>

using namespace std;

void matrix_operation(){
int rows=3, cols=4;
double matrix[rows][cols];
double total=0, avg;

for(int i=0; i<rows; i++){
   cout<<"Enter four numbers for row "<<i+1 << ": "<<endl;
  for(int j=0; j<cols; j++){
      cin>>matrix[i][j];
       total += matrix[i][j];
}
}
avg = total/(rows*cols);

 cout<< "here is the matrix:"<<endl;
for(int i=0; i<rows; i++){
   for(int j=0; j<cols; j++) {
  cout <<matrix[i][j]<<" ";
  }
   cout<<endl;
}
cout<<"\nThe sum is " << total << " and the average is "<< avg<< endl;
}

int main() {
matrix_operation();
return 0;
}
