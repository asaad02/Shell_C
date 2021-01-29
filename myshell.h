/**
 * @file meshell.h
 * @author Abdullah Saad
 * @date january 20 2021
 * @brief File containing the function prototypes operate for shell.
 **/

#define Command_LINE 100              /* 50 chars per command  */
#define args_LINE    50             /* 50 Arguments */
#define DELIMITERS  " \t\n\v\f\r"   /* characters that separate text strings */


// Welcome message
void welcome_message();


// get input 
char command_input( char *command);
// parse argument into list of arguments
int parse(char *arguments[], char *command ,bool *execting_background, char *** arguments2 , int *arguments2_num ,char **input_File , char **output_File , int *input ,int *output, FILE **fp ,char *history_FileName);
// run command  
int run_command(char **arguments, char *input_File , char *output_File , int *input ,int *output, FILE *fp , char **argument2 ,int arguments_number , int arguments2_num , bool *execting_background);
//
bool ampersand(char **argument,int *arguments_number);

void check_redirecting(char **arguments, char **input_File , char **output_File , int *input ,int *output, FILE ***fp);


void free_arguments(char *arguments[]);

void pipe_function(char ** arguments, int *arguments_num , char **** argument2 , int *argument_num2);


// initital shell environment
void init_environment(char *arguments[] , char *command,char **history_FileName);


void cis3110_profile_input(char *arguments[] , char *command,bool execting_background,char **arguments2,int arguments2_num ,int input_desc, int output_desc,FILE *fp ,int input_num,int output_num ,char *input_File , char *output_File, char *history_FileName);


void append_HistoryFile(char *command ,char *history_FileName);

void showHistory(char *history_FileName) ;


