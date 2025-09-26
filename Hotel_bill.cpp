
#include <iostream>
void choose(){
    std::cout<<"Enter your order in 1,2...: ";
}
double amount(short item, int q){
    switch(item){
        case 1:
        return 200*q;
        case 2:
        return 130*q;
        case 3:
        return 120*q;
        default:
        return 450*q;
    }
}
std::string whatIsThis(short item){
    switch(item){
        case 1:
        return "Pizza";
        case 2:
        return "Chowmein";
        case 3:
        return "Mo:Mo";
        default:
        return "Burger";
    }}
void line(){
    std::cout<<"----------\n";
}
 double menu(){
     short items;
     double total=0;
     int quantity;
    std::cout<<"Welcome to this exciting hotel\n";
    std::cout<<"Please place your order";
    while(true){
        std::cout<<"1)Pizza\t\t\tRs 200\n2)Chowmein\t\t\tRs 130\n3)Mo:Mo";
    std::cout<<"\t\t\tRs120\n4)Burger\t\t\tRs 450(0 to terminate): ";
    choose();
    
    std::cin>>items;
    if(items==0){
        break;}
    std::cout<<"Enter the quantity for "<<whatIsThis(items)<<": ";
    std::cin>>quantity;
    total+=amount(items,quantity);
    line();
} 
     return total;
 }
int main() {
    line();
    double total=menu();
    std::cout<<"You have bill of NRs "<<total;
    
        return 0;
}
