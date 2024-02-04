#include <stdio.h>
#include <string.h>

struct info {
    int rollno;
    int age;
    int phoneno;
};

struct info yash, shubham, vivek;

int main() {
    char input[200]; 

    yash.rollno = 1;
    yash.age = 18;
    yash.phoneno = 9892736424;

    shubham.rollno = 2; 
    shubham.age = 18;    
    shubham.phoneno = 9876543210; 

    vivek.rollno = 157;   
    vivek.age = 22;       
    vivek.phoneno = 9998887777; 
  again:
    printf("Enter the name of the person: ");
    scanf("%s", input);


  
    if (strcmp(input, "yash") == 0) {
      
        printf("Phone number: %d\n", yash.phoneno);
      printf("Age : %d\n",yash.age);
      printf("Roll No : %d\n",yash.rollno);
    } else if (strcmp(input, "shubham") == 0) {
        printf("Phone number: %d\n", shubham.phoneno);
      printf("Age : %d\n",shubham.age);
      printf("Roll No : %d\n",shubham.rollno);
    } else if (strcmp(input, "vivek") == 0) {
        printf("Phone number: %d\n", vivek.phoneno);
      printf("Age : %d\n",vivek.age);
      printf("Roll No : %d\n",vivek.rollno);
    } else {
        printf("Person not found.\n");
    }
int option;
  trye:
printf("Find anather person [0/1]");
  scanf("%d",&option);

  switch(option)
    {
      case 0:
      goto exit;
      break;

      case 1:
      goto again;
      break;

      default :
      printf("No such option");
      goto trye;
        break;
    }
  exit:
    return 0;
}
