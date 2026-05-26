#include<iostream>
#include<string>
void ask(){
  std::cout<<"Enter the number of day(q) to quit: ";
}
std::string sayDay(short numOfDay){
  switch(numOfDay){
    case 1:
    return "Sunday";
    break;
    case 2: 
    return "Monday";
    break;
    case 3: 
    return "Tuesday";
    break;
    case 4: 
    return "Wednesday";
    break;
    case 5: 
    return "Thrusday";
    break;
    case 6: 
    return "Friday";
    break;
    case 7: 
    return "Saturday";
    break;
    default:
    return "0";
  }
}
int main(){
  short numOfDay;
  std::string day;
  while(true){
    ask();
    std::cin>>numOfDay;
    if(day=="0"){
    std::cout<<"Invalid input!\nDo again.\n";
    continue;
    }
    else if((day[0]=='q')||(day[0]=='Q')){
      std::cout<<"\nQuitting\n;
        break;
      
    }
    else{
      day=numOfDay(numOfDay);
      std::cout<<"\n"<<day<<"\n;
    }
  }
  
}
