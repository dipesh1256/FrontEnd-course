// print this series like  A C E G I.....

#include <stdio.h>

int main()
{
    
    int a,b;
    
    for(a=65; a>=65 && a<=90; a++){
		
		if(a%2!=0)
		printf("%c\t",a);
		
	}   

    return 0;
}


/*

1	stdio.h	Standard input/output header file
2	conio.h	Console input/output header file
3	string.h	String related library functions such as gets(), puts(),etc.
4	stdlib.h	General library functions such as malloc(), calloc(), exit(), etc.
5	math.h	Math operations related functions such as sqrt(), pow(), etc.
6	time.h	Time-related functions
7	ctype.h	Character handling functions
8	stdarg.h	Variable argument functions
9	signal.h	Signal handling functions
10	setjmp.h	Jump functions
11	locale.h	Locale functions
12	errno.h	Error handling functions
13	assert.h	Diagnostics functions




Parentheses: ()
Braces: {}
Square brackets: []
Asterisk: *
Ampersand: &
Comma: ,
Semicolon: ;
Dot: .
Arrow: ->"


*/