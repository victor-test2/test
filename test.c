#include <stdio.h>
#define DEBUG 0
#define TEST 1
#define Debug1
#define Debug_test1
//1
//2
//2.1


char* pangrams(char* s) {
    int res=0;
    static char le[26]={0};
    for (int i=0; i<strlen(s); i++){
        if (s[i] == ' ') continue;
        if (s[i]-'Z' <=0){
            //s[i] = s[i]-'A';    
            le[s[i]-'A'] = le[s[i]-'A']+1;    
        }
        else {
            //s[i] = s[i]-'a';
            le[s[i]-'a'] = le[s[i]-'a']+1;
        //*(le+*(p+i)) = *(le+*(p+i))+1; 
        }
    }
    
    for (int i =0; i<26; i++){
        //printf("%d ", le[i]);
        res *= le[i];
    }
    if (res) return "pangram";
    else return "not pangram";
}

void main(){

char *test = "We promptly judged antique ivory buckles for the next prize";
printf("%s\n", pangrams(test));
#if 0
int str1[10]={0};
for(int i=0; i<10; i++){
*(str1+i) = i;
printf("%d\n", str1[i]);
}
#endif
#if 0
char str1[]="123";
char str2[]="123";
printf("str %d %d\n", str1, str2);
if (str1==str2)
	printf("OK1\n");
else printf("NO\n");

if (!strcmp(str1, str2))
	printf("OK2\n");
#endif

#if 0
int myarray[10];
for(int i =0; i<=10; i++){
	myarray[i]=i;
	printf("arr[i]=%d\n", myarray[i]);
}
#endif

#if 0
int x = 5;
int y = 7;
y+=x++;
printf("x=%d y=%d\n", x, y);
#endif

#if 0
int *ptr;
*ptr=10;
#endif

#if 0
int i, j;
i = 40;
if(i>0 && i<100)
	j = i*i;
else if(i>10 && i<50)
	j = 10+i;
else if(i=100)
	j =i;
else
	j =1;

printf("j=%d\n", j);
#endif
}
