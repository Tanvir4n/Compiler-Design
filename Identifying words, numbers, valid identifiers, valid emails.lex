%{

%}

%%
[a-zA-Z]+ { printf("WORD: %s\n", yytext); }
[0-9]+ { printf("NUMBER: %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]* { printf("IDENTIFIER: %s\n", yytext); }
[a-z0-9._]+@[a-z.]+\.[a-z.]+ { printf("EMAIL: %s\n", yytext); }
.|\n

%%

int main(){
    yylex();
    return 0;
}

int yywrap(){
return 1;
}
