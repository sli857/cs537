#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{
	char buffer[128];
	if(getlastcat(buffer) == 0){
		printf(1, "XV6_TEST_OUTPUT Last catted filename: %s\n", buffer);
	}
	exit();
}
