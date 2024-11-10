#include<stdio.h>
#include<string.h>
char* sstrcat(char *dest,char *source,int n);
char* sstrcat(char *dest,char *source,int n) {
    int i;int len_dest = strlen(dest);
    for(i = 0 ;i < n && source[i] != '\0'; i++) {
        dest[len_dest + i] = source[i]; 
    }
    dest[len_dest + i] = '\0';
    return dest;
}
int main() {
    /*Write a program that takes a destination string and a source string as input. Then, take
an integer n as input and append only the first n characters of the source string to the
destination. Print the new concatenated string.*/
char dest[50],source[20];int n;
printf("Enter destination string :");
fgets(dest,sizeof(dest),stdin);
dest[strcspn(dest, "\n")] = '\0';
printf("Enter source string :");
fgets(source,sizeof(source),stdin);
source[strcspn(source, "\n")] = '\0';
printf("Enter length of characters to append to destination string from source : ");
scanf("%d", &n);
char* result = sstrcat(dest , source, n);
printf("%s",result);
return 0;
}
