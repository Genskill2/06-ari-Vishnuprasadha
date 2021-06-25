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
if(s[i]=='.')
count_sentences++;
}
float score=4.71*((float)count_characters/count_words)+0.5*((float)count_words/count_sentences)-21.43;
int ari_score=ceil(score);
printf("%d",ari_score);
return "hello";
}
