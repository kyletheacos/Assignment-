#include <stdio.h>
 char str[100]; // initialised a 100 character string 
    int key= 1; // how far to rotate
    int count = 0; // initalised int count
    int choice; // intialised to use for switch statement
int main()
{
    printf("Please select an option: \n");         // hardcoded a userinterface to give the user options
    printf("1) Encryption Rotation Cipher\n");
    printf("2) Decryption Rotation Cipher\n");
    printf("3) Encryption Substitution Cipher\n");
    printf("4) Decryption Substitution Cipher\n\n");
    printf("Selection: \n");
    scanf("%d",&choice);  // scanf to recgonsie what option the user has selected
    
    
    switch (choice) 
 { 
        case 1: 
        printf("You entered 1\n");
        printf("Enter the message to encrypt:\n");
    scanf("%[^\n]s",str);
    for (count = 0; count < 100 && str[count] !='\0'; count++){
     for(count = 0; str[count] != '\0'; count++){
		if(str[count] >= 97 && str[count] <= 122){
			str[count] = str[count]-32 + key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
			
		}
		else if(str[count] >= 65 && str[count] <= 90){
			str[count] = str[count] + key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
		}
	}
	
    }
    printf("Encrypted message: %s\n", str);

     break;

    
        case 2: 
        printf("You entered 2\n");
        printf("Enter the message to Decrypt:\n");
  scanf("%[^\n]s",str);
    for (count = 0; count < 100 && str[count] !='\0'; count++){
  
    for(count = 0; str[count] != '\0'; count++){
		
		
		if(str[count] >= 97 && str[count] <= 122){
			str[count] = str[count]-32 - key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
			
		}
		else if(str[count] >= 65 && str[count] <= 90){
			str[count] = str[count] - key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
		}
	}
	
    }
    printf("Decrypted message: %s\n", str);

    break;


        case 3: printf("You entered 3 \n");
         break;
        case 4: printf("You entered 4 \n");
         break;
        default: printf("You didn't select one of the preferences");
 }    
 return 0;
 }
 /*
    printf("Enter the message to encrypt:\n");
  scanf("%[^\n]s",str);
    for (count = 0; count < 100 && str[count] !='\0'; count++){
  
    for(count = 0; str[count] != '\0'; count++){
		
		
		if(str[count] >= 97 && str[count] <= 122){
			str[count] = str[count]-32 + key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
			
		}
		else if(str[count] >= 65 && str[count] <= 90){
			str[count] = str[count] + key;
			
			if(str[count] > 90){
				str[count] = str[count] - 90 + 65 - 1;
			}
		}
	}
	
    }
    printf("Encrypted message: %s\n", str);
} */

