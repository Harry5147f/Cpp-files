#include<iostream>
#include<string>
std::string greet(){
    return "Welcome";
}
int main(){
    greet();
    short i,j,  first_day, last_day,day;
    std::cout<<"Here, we will try to find the dates of calendar";
    std::cout<<"\nIs the first day sunday, monday....?\n1 for sunday";
    std::cout<<" 2 for monday..etc: ";
    while(true){
    std::cin>>first_day;
    if(first_day>7){
        std::cout<<"Enter number less or equal to 7: ";
        continue;
    }
    break;}
    std::cout<<"Enter the last day: ";
    while(true){
    std::cin>>last_day;
    if(last_day>33){
        std::cout<<"Enter number not more than 33: ";
        continue;
    }
        break;
    }
    std::cout<<"S\tM\tT\tW\tT\tF\tS\n";
    for (i=1;;i++){
        for (j=1;j<8;j++){
             day=i*(j)+(i-1)*(7-j)-(first_day-1);//-1);
            //For starting with other than sunday
            if(day<1){
                std::cout<<"\t";
            }
            else{
                if(day<=last_day){
            std::cout<<day<<"\t";
                }
                else{
                    break;
                }
        }
        }std::cout<<"\n";
    }
    return 0;
}


