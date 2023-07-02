#include "gpcs1s1.h"
#include "gpcs1s2.h"
#pragma once

namespace Process {
	class Processus1
	{
	private :
		Serv::gpcs1s1* Serv1;
		Serv::gpcs1s2* Serv2;

	public :
		void process1(void);
		void useprocess(void);
	};
}


