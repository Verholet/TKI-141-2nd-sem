#include <iostream>
#include <string>
#include "Person.h"

int main(void)
{
	Person fio;
	fio.show("Verholetov", "Alex");
	fio.showFormal("Verholetov", "Alex", "Andreevich");
}