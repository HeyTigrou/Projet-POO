#include "CifrXor.h"

char CifrXor::Xor(char c, char k){
	char cX;
	cX = c ^ k;
	return cX;
}