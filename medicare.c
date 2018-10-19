/*Indra Bhurtel*/


 #include<stdio.h>

 int main( int argc, char**argv){
 int pat1;
 int pat2;
 int count1;
 int count2;

 printf("Number of patients in hospital 1: ");
 scanf("%d", &pat1);
 int n;
 int hospital1[pat1];
 for (n=0; n<pat1;n++)
 {
 printf("Enter age of patient %d:",(n+1));
 scanf("%d", &hospital1[n]);
 }
 int m;
 for (m=0; m<pat1; m++)
 {
 if (hospital1[m]>=65)
 {
 count1++;
 }
 }
 printf("Number of patients in hospital 2: ");
 scanf("%d", &pat2);
 int b;
 int hospital2[pat2];
 for (b=0; b<pat2;b++)
 {
 printf("Enter age of patient %d:",(b+1));

 scanf("%d", &hospital2[b]);
 }
 int c;

 for (c=0; c<pat2; c++)
 {
 if (hospital2[c]>=65)
 {
 count2++;
 }
 }
 if(count1<count2)
 {
 printf("You should pick 2-they have more Medicare patients.\n");
 }
 else if(count1>count2)
 {
 printf("You should pick 1-they have more Medicare patients.\n");
 }

 else
 {
 printf("They have the same number of Medicare patients-go for either.\n");
 }
 return 0;
 }

