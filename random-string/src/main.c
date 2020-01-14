
#include "random-string.h"

#define MAXIMUM_BUFFER_LENGTH (256)

#define DEFAULT_LENGTH (16)
#define DEFAULT_NUMBER (1)

char* generate_random_string(size_t length) {
	static char buffer[MAXIMUM_BUFFER_LENGTH];

	memset(buffer, 0, MAXIMUM_BUFFER_LENGTH);

	ssize_t bytes_received = getrandom(buffer, length, 0);

	if (bytes_received != length) {
		fprintf(stderr, "Error: not enough system entropy\n");
		exit(EXIT_FAILURE);
	}

	for (size_t i = 0; i < length; ++i) {
		buffer[i] = (buffer[i] < 0) ? buffer[i] + 128 : buffer[i];

		if (buffer[i] > 127) {
			buffer[i] -= 127;
		}

		if (buffer[i] < 33) {
			buffer[i] += 33;
		}
	}

	return buffer;
}

void generate_random_strings(size_t length, size_t number) {
	for (size_t i = 0; i < number; ++i) {
		printf("%s\n", generate_random_string(length));
	}
}

int main(int argc, char *argv[])
{
	size_t length = DEFAULT_LENGTH;
	size_t number = DEFAULT_NUMBER;

	/**
	 * Process command line arguments
	 *
	 * Available options:
	 * 
	 * 		--length N 		The length of the strings to be generated
	 * 		--number N 		The number of strings to generate
	 *
	 * 		--help, -h 		Display help menu and exit
	 * 		--version		Display program version info and exit
	 * 		--verbose, -v 	Display verbose info during execution
	 *
	 * @todo Implement --help option
	 * @todo Implement --version option
	 * @todo Implement --verbose option
	 */
	while (*++argv) {
		if (!strcmp(*argv, "--length")) {
			// TODO: Use strtoul function instead of atoi
			length = atoi(*++argv);
		} else if (!strcmp(*argv, "--number")) {
			// TODO: Use strtoul function instead of atoi
			number = atoi(*++argv);
		}
	}

	#if defined(DEBUG)
	printf("\nLength: %lu\nNumber: %lu\n\n", length, number);
	#endif /* DEBUG */

	generate_random_strings(length, number);
	
	return EXIT_SUCCESS;
}
