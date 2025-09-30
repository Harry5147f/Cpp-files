#include <iostream>
#include<array>
#include<random>
void printNull(std::array<std::array<char,3 >,3> slot){
    short i,j;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==0){
          std::cout<<  slot[i][j];
            }
            else{
          std::cout<<"|"<< slot[i][j];
        }}
        if(i<2){
        std::cout<<"\n_____";}
    std::cout<<std::endl;
}}
void turn(char player){
    std::cout<<"Turn of player "<<player;
    std::cout<<"\nWhere you want to place "<<player<<"?: ";
}
char switchPlayer(char player){
if(player=='X'){
return 'O';
}
else{
return 'X';}
}
char getPlayer(){
std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0,1);
    short random=distr(gen);
    char XorO[]={'O','X'};
    char player=XorO[random];
    return player;
    }
    
    void show(std::array<std::array<char,3>,3> slot){
    short i,j;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if(j==0){
    std::cout<<slot[i][j];}
    else{
   std::cout<<"|"<<slot[i][j];}
    } 
    std::cout<<"\n_____\n";
    }}
int main() {
    short pos1,pos2;
   char player=getPlayer();
std::array <std::array <char ,3>,3> pos;
short i,j;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            pos[i][j]=' ';
        }}
        printNull(pos);
while(true){
turn(player);
 //Checking
 std::cin>>pos1>>pos2;
 pos1--;
 pos2--;
 if(pos[pos1][pos2]==' '){
 pos[pos1][pos2]=player;
 }
 else{
 std::cout<<"It is already filled. place in another";
 
 continue;}
 if((pos[0][2]==pos[1][1])&&(pos[1][1]==pos[2][0])){
              if(pos[0][2]=='O'){
                  std::cout<<"O Wins";
                  break;
              }
              if(pos[0][2]=='X'){
                  std::cout<<"X wins";
                 break;
              } }
          if((pos[0][0]==pos[1][1])&&(pos[1][1]==pos[2][2])){
              if(pos[0][0]=='O'){
                  std::cout<<"O Wins";
                  break;
              }
              if(pos[0][0]=='X') {
                  std::cout<<"X wins";
                  break;
              }
          }              
 for(i=0;i<3;i++){
          if((pos[i][0]==pos[i][1])&&(pos[i][1]==pos[i][2])){
              if(pos[i][0]=='O'){
            std::cout<<"O wins";
            
            break;
              }
              if(pos[0][i]=='X'){
                  std::cout<<"X wins";
                  
                  break;
              }
            
          }
          
          if((pos[0][i]==pos[1][i])&&(pos[1][i]==pos[2][i])){
              if(pos[0][i]=='O'){
          std::cout<<"O wins";
          break;
          }
          if(pos[0][i]=='X'){
              std::cout<<"X wins";
              break;
          } }     }

     
             show(pos);
             player= switchPlayer(player);
 }
          


    return 0;
}
