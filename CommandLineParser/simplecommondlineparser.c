#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int main(int argc, char *argv[])
{
	int year, opt;
	int month, tfnd;


	if(argc != 5)
	{
		fprintf(stderr, "Usage: %s [-y year] [-n month]\n",
				argv[0]);
			exit(EXIT_FAILURE);

	}
	while ((opt = getopt(argc, argv, "y:m:")) != -1) {
		switch (opt) {
		case 'y':
			year = atoi(optarg);
			break;
		case 'm':
			month = atoi(optarg);
			break;

		default: 
			fprintf(stderr, "Usage: %s [-y year] [-n month]\n",
				argv[0]);
			exit(EXIT_FAILURE);
		}
	}

	printf("month=%d; year=%d;  optind=%d\n",
		month, year, optind);

	
	printf("printing all command line arguments\n");

	for(int i=0;i<argc;i++)
		printf(" argv[%d] :%s\n",i,argv[i]);

	exit(EXIT_SUCCESS);
}
