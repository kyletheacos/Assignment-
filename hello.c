
#include <stdio.h>

 char str[100]; // initialised a 100 character string 
    int key= 1; // how far to rotate
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
    
        switch (choice){ 
            case 1: 
            printf("You entered 1\n");
                for (count = 0; count < 100 && str[count] !='\0'; count++){
                    if(str[count]>=65 && str[count]<=90){
			        str[count] = str[count] + key;
			         }
			            if (str[count] > 90){
			            str[count] = str[count] - 91 + 65;
		        	    }
                } printf("Encrypted message: %s\n", str);
             break;
    
            case 2: 
            printf("You entered 2\n");
                for (count = 0; count < 100 && str[count] !='\0'; count++){
			        if(str[count]>=65 && str[count]<=90)
			        str[count] = str[count] - key;
		        	}
			            if (str[count] < 65){
			            str[count] = str[count] + 91 - 65;
			            }
        
	
	
    printf("Decrypted message: %s\n", str);

    break;


        case 3: printf("You entered 3 \n");
         
     for (count = 0; count < 100 && str[count] !='\0'; count++){
      
        switch(str[count]){
            case 65: 'A';
            str[count] = 'Q';
            break;
            case 66: 'B';
            str[count] = 'W';
            break;
            case 67: 'C';
            str[count] = 'E';
            break;
            case 68: 'D';
            str[count] = 'R';
            break;
            case 69: 'E';
            str[count] = 'T';
            break;
            case 70: 'F';
            str[count] = 'Y';
            break;
            case 71: 'G';
            str[count] = 'U';
            break;
            case 72: 'H';
            str[count] = 'I';
            break;
            case 73: 'I';
            str[count] = 'O';
            break;
            case 74: 'J';
            str[count] = 'P';
            break;
            case 75: 'K';
            str[count] = 'A';
            break;
            case 76: 'L';
            str[count] = 'S';
            break;
            case 77: 'M';
            str[count] = 'D';
            break;
            case 78: 'N';
            str[count] = 'F';
            break;
            case 79: 'O';
            str[count] = 'G';
            break;
            case 80: 'P';
            str[count] = 'H';
            break;
            case 81: 'Q';
            str[count] = 'J';
            break;
            case 82: 'R';
            str[count] = 'K';
            break;
            case 83: 'S';
            str[count] = 'L';
            break;
            case 84: 'T';
            str[count] = 'Z';
            break;
            case 85: 'U';
            str[count] = 'X';
            break;
            case 86: 'V';
            str[count] = 'C';
            break;
            case 87: 'W';
            str[count] = 'V';
            break;
            case 88: 'X';
            str[count] = 'B';
            break;
            case 89: 'Y';
            str[count] = 'N';
            break;
            case 90: 'Z';
            str[count] = 'M';
            break;
	}
	
    }
    printf("Encryption Substitution Cipher: %s\n", str);
         break;
        
        case 4: printf("You entered 4 \n");
          for (count = 0; count < 100 && str[count] !='\0'; count++){
        switch(str[count]){
            case 65: 'Q';
            str[count] = 'A';
            break;
            case 66: 'W';
            str[count] = 'B';
            break;
            case 67: 'E';
            str[count] = 'C';
            break;
            case 68: 'R';
            str[count] = 'D';
            break;
            case 69: 'T';
            str[count] = 'E';
            break;
            case 70: 'Y';
            str[count] = 'F';
            break;
            case 71: 'U';
            str[count] = 'G';
            break;
            case 72: 'I';
            str[count] = 'H';
            break;
            case 73: 'O';
            str[count] = 'I';
            break;
            case 74: 'P';
            str[count] = 'J';
            break;
            case 75: 'A';
            str[count] = 'K';
            break;
            case 76: 'S';
            str[count] = 'L';
            break;
            case 77: 'D';
            str[count] = 'M';
            break;
            case 78: 'F';
            str[count] = 'N';
            break;
            case 79: 'G';
            str[count] = 'O';
            break;
            case 80: 'H';
            str[count] = 'P';
            break;
            case 81: 'J';
            str[count] = 'Q';
            break;
            case 82: 'K';
            str[count] = 'R';
            break;
            case 83: 'L';
            str[count] = 'S';
            break;
            case 84: 'Z';
            str[count] = 'T';
            break;
            case 85: 'X';
            str[count] = 'U';
            break;
            case 86: 'C';
            str[count] = 'V';
            break;
            case 87: 'V';
            str[count] = 'W';
            break;
            case 88: 'B';
            str[count] = 'X';
            break;
            case 89: 'N';
            str[count] = 'Y';
            break;
            case 90: 'M';
            str[count] = 'Z';
            break;
      }
          }
        printf("Decryption Substitution Cipher: %s\n", str);
         break;
        default: printf("You didn't select one of the preferences");
 }    
 return 0;
 }


