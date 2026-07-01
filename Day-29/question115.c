#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100],temp;
    int choice,i,j,len,flag;

    while(1){
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find length\n");
        printf("2. Reverse string\n");
        printf("3. Check palindrome\n");
        printf("4. Convert to uppercase\n");
        printf("5. Convert to lowercase\n");
        printf("6. Count vowels and consonants\n");
        printf("7. Concatenate two strings\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==8){
            printf("Exiting...");
            break;
        }

        if(choice>=1 && choice<=6){
            printf("Enter a string: ");
            scanf("%s",str);
        }

        if(choice==1){
            len=strlen(str);
            printf("Length = %d\n",len);
        }
        else if(choice==2){
            len=strlen(str);
            for(i=0,j=len-1;i<j;i++,j--){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
            printf("Reversed string = %s\n",str);
        }
        else if(choice==3){
            len=strlen(str);
            flag=1;
            for(i=0;i<len/2;i++){
                if(str[i]!=str[len-1-i]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                printf("Palindrome string\n");
            }else{
                printf("Not a palindrome\n");
            }
        }
        else if(choice==4){
            len=strlen(str);
            for(i=0;i<len;i++){
                if(str[i]>='a' && str[i]<='z'){
                    str[i]=str[i]-32;
                }
            }
            printf("Uppercase = %s\n",str);
        }
        else if(choice==5){
            len=strlen(str);
            for(i=0;i<len;i++){
                if(str[i]>='A' && str[i]<='Z'){
                    str[i]=str[i]+32;
                }
            }
            printf("Lowercase = %s\n",str);
        }
        else if(choice==6){
            len=strlen(str);
            int vowels=0,consonants=0;
            for(i=0;i<len;i++){
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                    vowels++;
                }
                else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
                    consonants++;
                }
            }
            printf("Vowels = %d, Consonants = %d\n",vowels,consonants);
        }
        else if(choice==7){
            printf("Enter first string: ");
            scanf("%s",str);
            printf("Enter second string: ");
            scanf("%s",str2);
            strcat(str,str2);
            printf("Concatenated string = %s\n",str);
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}