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
            printf ("Enter Key (0-26): \n"); //Selecting a key will rotate it by that number
            scanf("%d", &key);
                for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                    if(str[count]>=65 && str[count]<=90){ //If statement is saying if the Ascii Value is between 65 and 90 add the key which was selected
			        str[count] = str[count] + key;
			         }
			            if (str[count] > 90){ //This if statement is saying if the Ascii Value is greater then 90 it will -91 from the value and then add 65
			            str[count] = str[count] - 91 + 65;
		        	    }
                } printf("Encrypted message: %s\n", str);
}

void rotationD(char str[]) {
            printf("You entered 2\n");
            printf ("Enter Key (0-26): \n");
            scanf("%d", &key);
                for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
			        if(str[count]>=65 && str[count]<=90){
			        str[count] = str[count] - key;
		        	}
			            if (str[count] < 65){
			            str[count] = str[count] + 26;
			            }
			    } printf("Decrypted message: %s\n", str);
            
}

void substitutionE(char str[]) {
            printf("You entered 3 \n");
            for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                switch(str[count]){
                case 'A': str[count] = 'Q'; // If the user types A it will switch to Q as it 
                break;
                case 'B': str[count] = 'W';
                break;
                case 'C': str[count] = 'E';
                break;
                case 'D': str[count] = 'R';
                break;
                case 'E': str[count] = 'T';
                break;
                case 'F': str[count] = 'Y';
                break;
                case 'G': str[count] = 'U';
                break;
                case 'H': str[count] = 'I';
                break;
                case 'I': str[count] = 'O';
                break;
                case 'J': str[count] = 'P';
                break;
                case 'K': str[count] = 'A';
                break;
                case 'L': str[count] = 'S';
                break;
                case 'M': str[count] = 'D';
                break;
                case 'N': str[count] = 'F';
                break;
                case 'O': str[count] = 'G';
                break;
                case 'P': str[count] = 'H';
                break;
                case 'Q': str[count] = 'J';
                break;
                case 'R': str[count] = 'K';
                break;
                case 'S': str[count] = 'L';
                break;
                case 'T': str[count] = 'Z';
                break;
                case 'U': str[count] = 'X';
                break;
                case 'V': str[count] = 'C';
                break;
                case 'W': str[count] = 'V';
                break;
                case 'X': str[count] = 'B';
                break;
                case 'Y': str[count] = 'N';
                break;
                case 'Z': str[count] = 'M';
                break;
    	        }
            } printf("Encryption Substitution Cipher: %s\n", str);
}
            

void substitutionD(char str[]) {
            printf("You entered 4 \n");
            for (count = 0; count < 1000 && str[count] !='\0'; count++){ // this for loop is saying when the count is equal to zero it will start reading up until it is less than 1000 characters. It will count up until 1000. It will also not be equal to zero. 
                switch(str[count]){
                case 'Q': str[count] = 'A';
                break;
                case 'W': str[count] = 'B';
                break;
                case 'E': str[count] = 'C';
                break;
                case 'R': str[count] = 'D';
                break;
                case 'T': str[count] = 'E';
                break;
                case 'Y': str[count] = 'F';
                break;
                case 'U': str[count] = 'G';
                break;
                case 'I': str[count] = 'H';
                break;
                case 'O': str[count] = 'I';
                break;
                case 'P': str[count] = 'J';
                break;
                case 'A': str[count] = 'K';
                break;
                case 'S': str[count] = 'L';
                break;
                case 'D': str[count] = 'M';
                break;
                case 'F': str[count] = 'N';
                break;
                case 'G': str[count] = 'O';
                break;
                case 'H': str[count] = 'P';
                break;
                case 'J': str[count] = 'Q';
                break;
                case 'K': str[count] = 'R';
                break;
                case 'L': str[count] = 'S';
                break;
                case 'Z': str[count] = 'T';
                break;
                case 'X': str[count] = 'U';
                break;
                case 'C': str[count] = 'V';
                break;
                case 'V': str[count] = 'W';
                break;
                case 'B': str[count] = 'X';
                break;
                case 'N': str[count] = 'Y';
                break;
                case 'M': str[count] = 'Z';
                break;
    	        }
            } printf("Decryption Substitution Cipher: %s\n", str);
}




