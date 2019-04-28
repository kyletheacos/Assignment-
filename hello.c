#include <stdio.h>
void rotationE(char str[]); //Function Definition 
void rotationD(char str[]);
void substitutionE(char str[]);
void substitutionD(char str[]);

 char str[1000]; // initialised a 1000 character string 
    int key; // how far to rotate
    int count = 0; // initalised int count
    int choice; // intialised to use for switch statement
int main()
{
    printf("Enter the message:\n"); //User adds message that will be encypted or decrypted depending on the option they select
    scanf("%[^\n]s",str); // It is than read for str and the [^\n] will read past blank spaces instead of printing characters
        for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
            if(str[count] >= 97 && str[count] <= 122){ //this if statement converts lowercase letter into uppercase by taking away 32 from the Ascii Values it converts it from lowercase letters to uppercase.
			    str[count] = str[count] - 32 ;
             }
        }
   
    printf("Please select an option: \n"); // hardcoded a userinterface to give the user options
    printf("1) Encryption Rotation Cipher\n");
    printf("2) Decryption Rotation Cipher\n");
    printf("3) Encryption Substitution Cipher\n");
    printf("4) Decryption Substitution Cipher\n\n");
    printf("Selection: \n");
    scanf("%d",&choice);  // scanf to recgonsie what option the user has selected
    
    switch (choice){ // switch statement to run different cases depending on what user selects
        case 1: 
            rotationE(str); // Takes it to the function to run the code 
            break; // breaks if executed
        case 2: 
            rotationD(str); // Takes it to the function to run the code 
            break; // breaks if executed
        case 3: 
            substitutionE(str); // Takes it to the function to run the code 
            break; // breaks if executed
        case 4: 
            substitutionD(str); // Takes it to the function to run the code 
            break;  // breaks if executed
        default: printf("You didn't select one of the preferences"); //Prints if nothing was selected
    }   
}    

void rotationE(char str[]) { // function defintion 
            printf("You entered 1\n"); //the selection you made 
            printf ("Enter Key (0-26): \n"); //Selecting a key will rotate it by that number (26 will just rotate it back to the start where A = A)
            scanf("%d", &key);
                for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                    if(str[count]>=65 && str[count]<=90){ //If statement is saying if the Ascii Value is between 65 and 90 add the key which was selected
			        str[count] = str[count] + key;
			         }
			            if (str[count] > 90){ //This if statement is saying if the Ascii Value is greater then 90 it will -91 from the value and then add 65 to bring it back in the range.
			            str[count] = str[count] - 91 + 65;
		        	    }
                } printf("Encrypted message: %s\n", str);
}

void rotationD(char str[]) { //function definition
            printf("You entered 2\n"); //the selection you made
            printf ("Enter Key (0-26): \n"); //Selecting a key will rotate it by that number (26 will just rotate it back to the start where A = A)
            scanf("%d", &key);
                for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
			        if(str[count]>=65 && str[count]<=90){ //If statement is saying if the Ascii Value is between 65 and 90 subtract the key which was selected
			        str[count] = str[count] - key;
		        	}
			            if (str[count] < 65){ //This if statement is saying if the Ascii Value is less then 65 it will add 26 to bring it back in the range and turn A into Z when it rotates
			            str[count] = str[count] + 26; 
			            }
			    } printf("Decrypted message: %s\n", str);
            
}

void substitutionE(char str[]) { //function definition
            printf("You entered 3 \n"); //the selection you made
            for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                switch(str[count]){
                case 'A': str[count] = 'Q'; // If the user types A it will substitute for Q 
                break;
                case 'B': str[count] = 'W'; // If the user types B it will substitute for W 
                break;
                case 'C': str[count] = 'E'; // If the user types c it will substitute for e
                break;
                case 'D': str[count] = 'R'; // If the user types D it will substitute for R 
                break;
                case 'E': str[count] = 'T'; // If the user types E it will substitute for T 
                break;
                case 'F': str[count] = 'Y'; // If the user types F it will substitute for Y 
                break;
                case 'G': str[count] = 'U'; // If the user types G it will substitute for U 
                break;
                case 'H': str[count] = 'I'; // If the user types H it will substitute for I 
                break;
                case 'I': str[count] = 'O'; // If the user types I it will substitute for O 
                break;
                case 'J': str[count] = 'P'; // If the user types J it will substitute for P 
                break;
                case 'K': str[count] = 'A'; // If the user types K it will substitute for A
                break;
                case 'L': str[count] = 'S'; // If the user types L it will substitute for S
                break;
                case 'M': str[count] = 'D'; // If the user types M it will substitute for D
                break;
                case 'N': str[count] = 'F'; // If the user types N it will substitute for F
                break;
                case 'O': str[count] = 'G'; // If the user types O it will substitute for G
                break;
                case 'P': str[count] = 'H'; // If the user types P it will substitute for H
                break;
                case 'Q': str[count] = 'J'; // If the user types Q it will substitute for J
                break;
                case 'R': str[count] = 'K'; // If the user types R it will substitute for K
                break;
                case 'S': str[count] = 'L'; // If the user types S it will substitute for L
                break;
                case 'T': str[count] = 'Z'; // If the user types T it will substitute for Z
                break;
                case 'U': str[count] = 'X'; // If the user types U it will substitute for X
                break;
                case 'V': str[count] = 'C'; // If the user types V it will substitute for C
                break;
                case 'W': str[count] = 'V'; // If the user types W it will substitute for V
                break; 
                case 'X': str[count] = 'B'; // If the user types X it will substitute for B
                break;
                case 'Y': str[count] = 'N'; // If the user types Y it will substitute for N
                break;
                case 'Z': str[count] = 'M'; // If the user types Z it will substitute for M
                break;
    	        }
            } printf("Encryption Substitution Cipher: %s\n", str);
}
            

void substitutionD(char str[]) { //function definition
            printf("You entered 4 \n"); //the selection you made
            for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                switch(str[count]){
                case 'Q': str[count] = 'A'; // If the user types Q it will substitute for A
                break;
                case 'W': str[count] = 'B'; // If the user types W it will substitute for B
                break;
                case 'E': str[count] = 'C'; // If the user types E it will substitute for C
                break;
                case 'R': str[count] = 'D'; // If the user types R it will substitute for D
                break;
                case 'T': str[count] = 'E'; // If the user types T it will substitute for E
                break;
                case 'Y': str[count] = 'F'; // If the user types Y it will substitute for F
                break;
                case 'U': str[count] = 'G'; // If the user types U it will substitute for G
                break;
                case 'I': str[count] = 'H'; // If the user types I it will substitute for H
                break;
                case 'O': str[count] = 'I'; // If the user types O it will substitute for I
                break;
                case 'P': str[count] = 'J'; // If the user types P it will substitute for J
                break;
                case 'A': str[count] = 'K'; // If the user types A it will substitute for K
                break;
                case 'S': str[count] = 'L'; // If the user types S it will substitute for L
                break;
                case 'D': str[count] = 'M'; // If the user types D it will substitute for M
                break;
                case 'F': str[count] = 'N'; // If the user types F it will substitute for N
                break;
                case 'G': str[count] = 'O'; // If the user types G it will substitute for O
                break;
                case 'H': str[count] = 'P'; // If the user types H it will substitute for P
                break;
                case 'J': str[count] = 'Q'; // If the user types J it will substitute for Q
                break;
                case 'K': str[count] = 'R'; // If the user types K it will substitute for R
                break;
                case 'L': str[count] = 'S'; // If the user types L it will substitute for S
                break;
                case 'Z': str[count] = 'T'; // If the user types Z it will substitute for T
                break;
                case 'X': str[count] = 'U'; // If the user types X it will substitute for U
                break;
                case 'C': str[count] = 'V'; // If the user types C it will substitute for V
                break;
                case 'V': str[count] = 'W'; // If the user types V it will substitute for W
                break;
                case 'B': str[count] = 'X'; // If the user types B it will substitute for X
                break;
                case 'N': str[count] = 'Y'; // If the user types N it will substitute for Y
                break;
                case 'M': str[count] = 'Z'; // If the user types M it will substitute for Z
                break;
    	        }
            } printf("Decryption Substitution Cipher: %s\n", str);
}




