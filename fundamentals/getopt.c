#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv){

	int option;

	while( (option = getopt(argc, argv, ":if:lrx")) != -1){
		switch(option){
			case 'i':
			case 'l':
			case 'r':
            			printf("Given Option: %c\n", option);
			        break;
         		case 'f': //here f is used for some file name
            			printf("Given File: %s\n", optarg);
            			break;
         		case ':':
            			printf("option needs a value\n");
            			break;
         		case '?': //used for some unknown options
            			printf("unknown option: %c\n", optopt);
            			break;		
		}
	}

	for(; optind < argc; optind++){ //when some extra arguments are passed
      		printf("Given extra arguments: %s\n", argv[optind]);
  	 }

	return 0;
}
