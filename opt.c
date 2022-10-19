#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
 if(argc == 1) { 
   printf("getopt test\n");
   printf("usage:\n");
   printf("To get information on options select -h (help for using the program)\n");
   printf("example\n");
   printf(" $ opts -h\n");
   return 0;
 }
  char *opts = "ho:c";
  char *filename;
  int opt;
  char *activate_mode = "false";
  while((opt = getopt(argc, argv, opts)) != -1) {
    switch(opt){
      case 'h':
         printf("Help on using the program\n");
         printf("-h - help on using the program and shutting down;\n");
	 printf("-o out_file_name - set a non-standard output file name;\n");
	 printf("-с - special mode of operation;\n");
	 return 0;
      break;
      case 'o':
        filename = optarg;
        printf("output file name: %s\n",filename);
      break;
      case 'c':
         activate_mode = "true";
         if(activate_mode == "true"){
            printf("special operating mode activated, output file name will be ignored\n");
         }
      break;
    }
   }
 return 0;
}
