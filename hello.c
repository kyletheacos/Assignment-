#include <stdio.h>
 char str[100];
    int key= 1; // how far to rotate
    int count = 0; // initalised
    //test
int main()
{
    printf("Please select an option: \n");
    printf("a) Encryption Rotation Cipher\n");
    printf("b) Decryption Rotation Cipher\n");
    printf("c) Encryption Substitution Cipher\n");
    printf("d) Decryption Substitution Cipher\n\n");
    printf("Selection: \n");
    printf("Enter the message to encrypt:\n");
  scanf("%[^\n]s",str);
    for (count = 0; count < 100 && str[count] !='\0'; count++){
    str[count]=(str[count]-97+key)%26 + 97;
    }
    printf("Encrypted message: %s\n", str);
}
}




   /* char c;
	char text[101] = {'h', 'e', 'l', 'l', 'o', '\0'};
  
  printf("%c\n", &c, text[1] + 1);*/
  
  
  
  