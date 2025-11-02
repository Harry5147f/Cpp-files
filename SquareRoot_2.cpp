#include<iostream>
float pow(float num, short base){
 float temp=num;
for(int i=1;i<base;i++){
num=temp*num;}
return num;
}
int main(){
float num, low=0, high, root,result;
short base;
std::cout<<"What do you want to find?\nSquare root, cube root...etc.\n";
std::cout<<"\nEnter 2 for square, 3 for cube...";
while(true){
std::cin>>base;
if(base>1){
break;
}
else{
std::cout<<"Please enter value greater than 1";}
}
std::cout<<"Enter any number you want to find nth root of: ";
std::cin>>num;
while(true){
if(num>0){
high=num;
break;
}
else{
std::cout<<"Please enter positive num :";}
}
while(true){
root=(high+low)/2;
result=pow(root,base);

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
    
