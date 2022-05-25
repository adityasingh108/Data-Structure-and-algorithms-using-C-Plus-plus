/* 5.Valid time(hh:mm:ss) */
%{
#include<stdio.h> 
int i=0,yr=0,valid=0;
%} 

%% 
([0-2][0-9]:[0-6][0-9]\:[0-6][0-9]) {printf("%s It is a valid time\n",yytext);} 
%% 

int yywrap() 
{ 
return 1; 
}


void main() 
{ 
yyin=fopen("new","r"); 
yylex(); 
} 
