#pragma once
#include "Processus1.h"
#include "Processus2.h"

namespace Client {
	class ihm
	{
	private:
		Process::Processus1* Prs1;
		Process::Processus2* Prs2;

	public:
		ihm(void);
		void run(void);
	};
}

