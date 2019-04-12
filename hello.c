#include <stdio.h>
 char str[100];
    int key= 1; // how far to rotate
    int count = 0; // initalised
    int choice;
int main()
{
    /* printf("Please select an option: \n");
    printf("1) Encryption Rotation Cipher\n");
    printf("2) Decryption Rotation Cipher\n");
    printf("3) Encryption Substitution Cipher\n");
    printf("4) Decryption Substitution Cipher\n\n");
    printf("Selection: \n");
    scanf("%d",&choice); */
    
    
 /*   switch (choice)
 { 
        case 1: Encryption Rotation Cipher ();
         break;
        case 2: Decryption cipher;
         break;
        case 3: Encryption SubstitutionCipher;
         break;
        case 4: Decryption Substitution Cipher;
         break;
 } */
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
}

