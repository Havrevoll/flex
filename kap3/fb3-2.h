/*
 * Declarations for a calculator fb3-1
 *
 * Ola har skrive inn denne
 */

/* interface to the lexer */
extern int yylineno; /* from lexer */
void yyerror(char *s, ...);

/* symbol table */
struct symbol {   /* a variable name */
  char *name;
  double value;
  struct ast *func;  /* stmt for the function */
  struct symlist *syms;  /* list of dummy args */
};

/* simple symtab of fixed size */

