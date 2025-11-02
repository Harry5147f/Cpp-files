#include<iostream>
int main(){
float num, low=0, high, root,result;
std::cout<<"Enter any number you want to do square of: ";
std::cin>>num;
high=num;
while(true){
root=(high+low)/2;
result=root*root;

if((result>=num-0.00001)&&(result<=num+0.00001)){
break;
}
else{
if((result)>num){
high=root;
}
else{
low=root;}}}
std::cout<<"The root of "<<num<<" is "<<root;
}
