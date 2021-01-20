/**
 * @file meshell.h
 * @author Abdullah Saad
 * @date january 20 2021
 * @brief File containing the function prototypes operate for shell.
 **/

#define Command_LINE 50              /* 50 chars per command  */
#define args_LINE    50             /* 50 Arguments */
#define DELIMITERS  " \t\n\v\f\r"   /* characters that separate text strings */


// initialize arguments to NULL 
void initialize_arguments(char *arguments[]);
// Empty the command 
void empty_command(char *command);
// get input 
char input( char *command);
// parse argument into list of arguments
int parse(char *arguments[], char *command);
// Welcome message
void welcome_message();

// run command  
int run(char **arguments);