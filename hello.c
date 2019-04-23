
#include <stdio.h>
void rotationE(char str[]); //Function Definition 
void rotationD(char str[]);
void substitutionE(char str[]);
void substitutionD(char str[]);

 char str[100]; // initialised a 100 character string 
    int key = 1; // how far to rotate
    int count = 0; // initalised int count
    int choice; // intialised to use for switch statement
    int k;
int main()
{
    printf("Enter the message:\n");
    scanf("%[^\n]s",str);
        for (count = 0; count < 100 && str[count] !='\0'; count++){
            if(str[count] >= 97 && str[count] <= 122){
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
        case 1: {
            void rotationE(char str[]);
        }
            break;
        case 2: {
            void rotationD(char str[]);
        }
            break;
        case 3: {
            void substitutionE(char str[]);
        }
            break;
        case 4: {
            void substitutionD(char str[]);
        }
            break; {
        default: printf("You didn't select one of the preferences");
        }
}    

        
        
void rotationE(char str[]) {
            printf("You entered 1\n");
                for (count = 0; count < 100 && str[count] !='\0'; count++){
                    if(str[count]>=65 && str[count]<=90){
			        str[count] = str[count] + key;
			         }
			            if (str[count] > 90){
			            str[count] = str[count] - 91 + 65;
		        	    }
                } printf("Encrypted message: %s\n", str);
}

void rotationD(char str[]) {
            printf("You entered 2\n");
                for (count = 0; count < 100 && str[count] !='\0'; count++){
			        if(str[count]>=65 && str[count]<=90)
			        str[count] = str[count] - key;
		        	}
			            if (str[count] < 65){
			            str[count] = str[count] + 91 - 65;
			    } printf("Decrypted message: %s\n", str);
            
}

void substitutionE(char str[]) {
            printf("You entered 3 \n");
            for (count = 0; count < 100 && str[count] !='\0'; count++){
                switch(str[count]){
                case 'A': str[count] = 'Q';
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
            for (count = 0; count < 100 && str[count] !='\0'; count++){
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
}


