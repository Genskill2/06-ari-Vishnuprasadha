#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string ari(string s){
int count_characters=0,count_words=0,count_sentences=0;
for(int i=0;s[i]!='\0';i++){
if(isalnum(s[i]))
count_characters++;
if(s[i]==' ')
count_words++;
if(s[i]=='.'||s[i]=='!'||s[i]=='?)
count_sentences++;
}
float score=4.71*((float)count_characters/count_words)+0.5*((float)count_words/count_sentences)-21.43;
int ari_score=ceil(score);
  if(ari_score==1)
   return ("Kindergarten");
   else if(ari_score==2)
   return ("First/Second Grade");
   else if(ari_score==3)
   return ("Third Grade");
   else if(ari_score==4)
   return ("Fourth Grade");
   else if(ari_score==5)
   return ("Fifth Grade");
   else if(ari_score==6)
   return ("Sixth Grade");
   else if(ari_score==7)
   return ("Seventh Grade");
   else if(ari_score==8)
   return ("Eighth Grade");
   else if(ari_score==9)
   return ("Ninth Grade");
   else if(ari_score==10)
   return ("Tenth Grade");
   else if(ari_score==11)
   return ("Eleventh Grade");
   else if(ari_score==12)
   return ("Twelfth grade");
   else if(ari_score==13)
   return ("College student");
   else (ari_score==14)
   return ("Professor");
   
}
