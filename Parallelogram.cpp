#include <iostream>
void triangle(int n){
for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
std::cout<<"* ";}
std::cout<<"\n";
}
}
void itriangle(int n){
for(int i=0;i<n;i++){
for(int k=n-i;k<n;k++){
std::cout<<"  ";}
for(int j=i;j<n;j++){
std::cout<<"* ";}
std::cout<<"\n";
}
}
void square(int n){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
std::cout<<"* ";}
std::cout<<std::endl;
}}
int main(){
int number;
std::cout<<"Enter the number";
std::cout<<"\n I recommend to use 5: ";
std::cin>>number;
triangle(number);
square(number);
itriangle(number);
}
