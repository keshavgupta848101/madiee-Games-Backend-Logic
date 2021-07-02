#include<stdio.h>
void cal();
int main(){

cal();

return 0;

}

void cal(){

 int team1, team2, team3, team4;
 int team1Score = 0, team2Score = 0, team3Score = 0, team4Score = 0;
 int i;
 for(i =1; i<7; i++){
        printf("This is round %d\n", i);
    printf("Team 1 option: ");
    scanf("%d",&team1);
    printf("Team 2 option: ");
    scanf("%d",&team2);
    printf("Team 3 option: ");
    scanf("%d",&team3);
    printf("Team 4 option: ");
    scanf("%d",&team4);
// I == 5
    if(i==5){
         if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 2) {       // 1

    team1Score += -25*10;
    team2Score += -25*10;
    team3Score += -25*10;
    team4Score += -25*10;
}
// 2221
else if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 1) {   //2

    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += -25*10;
}
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 2) {  //3

    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += -25*10;
    team4Score += 25*10;
}
else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 2) {  //4

    team1Score += 25*10;
    team2Score += -25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}
else if (team1 == 1 && team2 == 2 && team3 == 2 && team4 == 2) {  //5

    team1Score += -25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}

//////////////////////////////////// 2211
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 1) {   //6

    team1Score += 50*10;
    team2Score += 50*10;
    team3Score += -12.5*10;
    team4Score += -12.5*10;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 2) {  //7

    team1Score += -12.5*10;
    team2Score += -12.5*10;
    team3Score += 50*10;
    team4Score += 50*10;
}

else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 1) {  //8

    team1Score += 50*10;
    team2Score += -12.5*10;
    team3Score += 50*10;
    team4Score += -12.5*10;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 2) {  //9

    team1Score += -12.5*10;
    team2Score += 50*10;
    team3Score += -12.5*10;
    team4Score += 50*10;
}

else if(team1 == 2 && team2 == 1 && team3 == 1 && team4 == 2){ // 10

    team1Score += 50*10;
    team2Score += -12.5*10;
    team3Score += -12.5*10;
    team4Score += 50*10;
}

else if(team1 == 1 && team2 == 2 && team3 == 2 && team4 == 1){  //11

    team1Score += -12.5*10;
    team2Score += 50*10;
    team3Score += 50*10;
    team4Score += -12.5*10;
}

// 2111
else if (team1 == 2 && team2 == 1 && team3 == 1 && team4 == 1) {   //12

    team1Score += 75*10;
    team2Score += 0;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 1) {  //13

    team1Score += 0;
    team2Score += 75*10;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 1) {  //14

    team1Score += 0;
    team2Score += 0;
    team3Score += 75*10;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 2) {  //15

    team1Score += 0;
    team2Score += 0;
    team3Score += 0;
    team4Score += 75*10;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 1) {  //16
    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}

continue;

    }
// I == 5 Ends here

// I == 6
    if(i == 6){
         if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 2) {       // 1

    team1Score += -25*10;
    team2Score += -25*10;
    team3Score += -25*10;
    team4Score += -25*10;
}
// 2221
else if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 1) {   //2

    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += -25*10;
}
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 2) {  //3

    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += -25*10;
    team4Score += 25*10;
}
else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 2) {  //4

    team1Score += 25*10;
    team2Score += -25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}
else if (team1 == 1 && team2 == 2 && team3 == 2 && team4 == 2) {  //5

    team1Score += -25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}

//////////////////////////////////// 2211
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 1) {   //6

    team1Score += 50*10;
    team2Score += 50*10;
    team3Score += -12.5*10;
    team4Score += -12.5*10;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 2) {  //7

    team1Score += -12.5*10;
    team2Score += -12.5*10;
    team3Score += 50*10;
    team4Score += 50*10;
}

else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 1) {  //8

    team1Score += 50*10;
    team2Score += -12.5*10;
    team3Score += 50*10;
    team4Score += -12.5*10;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 2) {  //9

    team1Score += -12.5*10;
    team2Score += 50*10;
    team3Score += -12.5*10;
    team4Score += 50*10;
}

else if(team1 == 2 && team2 == 1 && team3 == 1 && team4 == 2){ // 10

    team1Score += 50*10;
    team2Score += -12.5*10;
    team3Score += -12.5*10;
    team4Score += 50*10;
}

else if(team1 == 1 && team2 == 2 && team3 == 2 && team4 == 1){  //11

    team1Score += -12.5*10;
    team2Score += 50*10;
    team3Score += 50*10;
    team4Score += -12.5*10;
}

// 2111
else if (team1 == 2 && team2 == 1 && team3 == 1 && team4 == 1) {   //12

    team1Score += 75*10;
    team2Score += 0;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 1) {  //13

    team1Score += 0;
    team2Score += 75*10;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 1) {  //14

    team1Score += 0;
    team2Score += 0;
    team3Score += 75*10;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 2) {  //15

    team1Score += 0;
    team2Score += 0;
    team3Score += 0;
    team4Score += 75*10;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 1) {  //16
    team1Score += 25*10;
    team2Score += 25*10;
    team3Score += 25*10;
    team4Score += 25*10;
}
continue;

    }
// I == 5 Ends here



 if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 2) {       // 1

    team1Score += -25;
    team2Score += -25;
    team3Score += -25;
    team4Score += -25;
}
// 2221
else if (team1 == 2 && team2 == 2 && team3 == 2 && team4 == 1) {   //2

    team1Score += 25;
    team2Score += 25;
    team3Score += 25;
    team4Score += -25;
}
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 2) {  //3

    team1Score += 25;
    team2Score += 25;
    team3Score += -25;
    team4Score += 25;
}
else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 2) {  //4

    team1Score += 25;
    team2Score += -25;
    team3Score += 25;
    team4Score += 25;
}
else if (team1 == 1 && team2 == 2 && team3 == 2 && team4 == 2) {  //5

    team1Score += -25;
    team2Score += 25;
    team3Score += 25;
    team4Score += 25;
}

//////////////////////////////////// 2211
else if (team1 == 2 && team2 == 2 && team3 == 1 && team4 == 1) {   //6

    team1Score += 50;
    team2Score += 50;
    team3Score += -12.5;
    team4Score += -12.5;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 2) {  //7

    team1Score += -12.5;
    team2Score += -12.5;
    team3Score += 50;
    team4Score += 50;
}

else if (team1 == 2 && team2 == 1 && team3 == 2 && team4 == 1) {  //8

    team1Score += 50;
    team2Score += -12.5;
    team3Score += 50;
    team4Score += -12.5;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 2) {  //9

    team1Score += -12.5;
    team2Score += 50;
    team3Score += -12.5;
    team4Score += 50;
}

else if(team1 == 2 && team2 == 1 && team3 == 1 && team4 == 2){ // 10

    team1Score += 50;
    team2Score += -12.5;
    team3Score += -12.5;
    team4Score += 50;
}

else if(team1 == 1 && team2 == 2 && team3 == 2 && team4 == 1){  //11

    team1Score += -12.5;
    team2Score += 50;
    team3Score += 50;
    team4Score += -12.5;
}

// 2111
else if (team1 == 2 && team2 == 1 && team3 == 1 && team4 == 1) {   //12

    team1Score += 75;
    team2Score += 0;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 2 && team3 == 1 && team4 == 1) {  //13

    team1Score += 0;
    team2Score += 75;
    team3Score += 0;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 2 && team4 == 1) {  //14

    team1Score += 0;
    team2Score += 0;
    team3Score += 75;
    team4Score += 0;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 2) {  //15

    team1Score += 0;
    team2Score += 0;
    team3Score += 0;
    team4Score += 75;
}

else if (team1 == 1 && team2 == 1 && team3 == 1 && team4 == 1) {  //16
    team1Score += 25;
    team2Score += 25;
    team3Score += 25;
    team4Score += 25;
}

}
printf("And the final score is:  \n");

  printf("Team 1 Score : %d \n",team1Score);
  printf("Team 2 Score : %d \n",team2Score);
  printf("Team 3 Score : %d \n",team3Score);
  printf("Team 4 Score : %d \n",team4Score);

}
