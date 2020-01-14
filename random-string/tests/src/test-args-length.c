
#include "random-string.h"

static size_t useOptionLength(size_t length) {
	char command_buffer[BUFSIZ];
	memset(command_buffer, 0, BUFSIZ);

	// TODO: Error checking on sprintf return value
	sprintf(command_buffer, "../random-string --length %lu > output.dat", length);

	// TODO: Handle potential system() call errors
	int status = system(command_buffer);

	// TODO: Determine whether file was created
	// TODO: Open file
	FILE* output_file = fopen("output.dat", "r");
	// TODO: Read file and determine whether the length parameter was honored
	char buffer[BUFSIZ];
	memset(buffer, 0, BUFSIZ);
	fgets(buffer, BUFSIZ, output_file);
	// TODO: Musch trailing newline characters
	length = strlen(buffer);

	for (size_t i = length - 1; i >= 0; --i) {
		if (buffer[i] != '\n') {
			break;
		}

		buffer[i] = '\0';
	}
	// TODO: Close file
	fclose(output_file);

	return strlen(buffer);
}

void testLengthParameterWorks(void) {
	CU_ASSERT_TRUE(useOptionLength( 4) ==  4);
	CU_ASSERT_TRUE(useOptionLength( 8) ==  8);
	CU_ASSERT_TRUE(useOptionLength(12) == 12);
	CU_ASSERT_TRUE(useOptionLength(16) == 16);
	CU_ASSERT_TRUE(useOptionLength(24) == 24);
}


int main(void)
{
	if (CU_initialize_registry() != CUE_SUCCESS) {
		return CU_get_error();
	}

	CU_pSuite suite = CU_add_suite("Args - Length", NULL, NULL);

	if (suite == NULL) {
		CU_cleanup_registry();
		return CU_get_error();
	}

	if (NULL == CU_add_test(suite, "Length parameter works", testLengthParameterWorks)) {
		CU_cleanup_registry();
		return CU_get_error();
	}

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();

	return CU_get_error();
}
