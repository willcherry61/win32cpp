#include "pch.h"
#include "nt_error.h"

using namespace std;

const char* win32cpp::ntstatus_check_failed::errorCodeMessage() const
{
	return u8"NTSTATUS: ";
}