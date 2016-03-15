#include <stdio.h>
#include "../../log.h"

int main()
{
	int someInt = 1;
	char someString[] = "sontx";

	LOG_I("info log %d %s", someInt, someString);
	LOG_E("error log %d %s", someInt, someString);
	LOG_D("debug log %d %s", someInt, someString);
	LOG_W("warning log %d %s", someInt, someString);
	LOG("default log %d %s", someInt, someString);
}