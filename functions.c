#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "app.h"

void scan_sentences(char array[]){//To scan sentences
    int i = 0;
	while ((array[i] = getchar()) != '\n' && array[i] != EOF){};
    scanf("%c",&array[i++]);
    while((array[i-1] != '\n')&&(array[i-2]!='\n')){
        scanf("%c",&array[i++]);
    }
    array[i-1] = '\0';
}  
int scan_users(struct Person persons_list[],char name[35],char password[20],int numelements){
    int i = 0;
    for(; i<numelements;i++){
        if((!strcmp(persons_list[i].name,name))&&(!strcmp(persons_list[i].password,password))){
            return i;
        }
		if((!strcmp(persons_list[i].name,name))&&(strcmp(persons_list[i].password,password))){
			return -1;
		}
    }
    return -2;
}
void display_hotels(struct Hotel hotel[7]) {
	for (int i=0;i<7;i++){
		printf("%d. %s\n", i+1,hotel[i].name);   //displaying hotels in the city asked
	
	}
}
void pets(bool petsallowed){
	if(petsallowed)
		printf("PETS ARE ALLOWED \n");
	else
		printf("PETS ARE NOT ALLOWED \n");
	return;
}
int choose_hotel(){
    int hotelchoice;
    printf("Select Restaurant:\n");
    scanf("%d",&hotelchoice);       //choosing hotels in the list
    while(hotelchoice>7){           //there are 7 hotels per city, if the input exceeds 6, it will ask for hotel again
        printf("Enter a valid choice\n");
        scanf("%d",&hotelchoice); 
    }
    return hotelchoice;
}
float price_cal(float price){
    int number_of_days;
	printf("Length of stay(days):");    //asking how many days the guest will stay
    scanf("%d", &number_of_days);
    return(price*number_of_days);       //calculating price for no. of days guests stay
}
int guests(int maxguests){
    int guests;
    printf("\nEnter the number of guests(max:%d):\n",maxguests);
    scanf("%d", &guests);               //reading no.og guests
    while(guests>maxguests){            //if no.of guests exceeds the maxno. of guests ,it will throw an error and scan again
        printf("Number of guests exceeds the given limit of %d, enter again:",maxguests);
        scanf("%d", &guests); 
    }
    return guests;
}
bool confirm(){
	char decision;
	printf("Confirm(y/n)?:\n");
	scanf("%c",&decision);
	while(decision!='y'&&decision!='n'){
		printf("Enter a valid character(y/n):\n");
		scanf("%c",&decision);	
	}
	if(decision=='y')
		return true;
	else
		return false;
}
bool valid_phoneno(char phoneno[17]){
	
    if(strlen(phoneno)==10)     //returns false if the phone number inputted is not a 10-digit number
        return true;
    else
        return false;
}
bool emailverifier(char email[]){
    int correctness=0;
    for(unsigned long i =0; i<strlen(email); i++){
        if(email[i]=='@')
            correctness++;
        if(i >= (strlen(email)-4) && email[i]=='.' && email[i+1]!='\n' && email[i-1]!='@')
            correctness++;          //In the statement above, we checked for a vaild email address
    }
    if(correctness==2)
        return true;                //returns true if valid email, else false
    else
        return false;
}

void create_user(struct Person persons_list[],int numelements, FILE *user_file){
   printf("Enter your full name(Maximum 25 characters):");
   scan_sentences(persons_list[numelements].name);              //reading the person's name
   while(strlen(persons_list[numelements].name)>25){
		printf("Enter a valid name(max 25 characters):");       //Validates the length of the name
		scanf("%s",persons_list[numelements].name);	
	}
   printf("Enter your phone number:");
   scanf("%s",persons_list[numelements].phone);                //reading the person's phone number
   while(!valid_phoneno(persons_list[numelements].phone)){
		printf("Invalid phone number, enter a 10-digit non negative number:"); //Validates the phone number 
 		scanf("%s",persons_list[numelements].phone);	
   }
   printf("Enter Your Email id:");                             //reading the person's email id
   scanf("%s",persons_list[numelements].email); 
   while(!emailverifier(persons_list[numelements].email)){
		printf("Invalid email, enter a valid email:");         //Validates the email id	
		scanf("%s",persons_list[numelements].email); 	
   }
   printf("Enter a password(4-15characters):");
   
   scanf("%s",persons_list[numelements].password);          //Asking for a password
   while(strlen(persons_list[numelements].password)<4 || strlen(persons_list[numelements].password)>15){
		printf("Enter a valid Password(4-15 characters):");    //validates the password
		scanf("%s",persons_list[numelements].password);	
	}

   printf("You have succesfully registered with us \n");
   fprintf(user_file," %s %s \n",persons_list[numelements].name,persons_list[numelements].password);
}

int login(struct Person persons_list[],int numofpersons){
	char name[35];
	char password[20];
	printf("Your Name:");   //for login,reading name and password
	scan_sentences(name);
	printf("Your Password:");
	scanf("%s",password);
	return(scan_users(persons_list,name,password,numofpersons)); //if such a user does not exist, it will ask to sign up
}

int make_users(struct Person persons_list[]){
	FILE* users_file = fopen("users.txt","r");
	char ch;
	int index = 0;
    while((ch = fgetc(users_file))!=EOF){
        fscanf(users_file,"%s",persons_list[index].name);
        fscanf(users_file,"%s",persons_list[index].password);
		index++;
	}
	return index;
}
