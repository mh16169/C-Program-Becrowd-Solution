//are you eligible or not eligible to vot program

#include <stdio.h>

int main(){
    //input client age
 int my_age;
 int maxage = 120;
 printf("Please Enter your Age ");
 scanf("%d", & my_age);
 printf("\n");

 // minimum age for vot
 const int votAge= 18;

 // conditations check
if (votAge <= my_age && my_age <= maxage){
    printf("\n Congratulation you are eligible to vote \n \n");
}
else if (my_age > maxage){
    printf("We are extremely Sorry we can not accept your vot, \n because your age over 120, your current age is : %d \n", my_age);
}

else{
    printf("\n you are not eligible to vote because your age is below Bangladesh Government Voter Act. \n \n");
}

}
