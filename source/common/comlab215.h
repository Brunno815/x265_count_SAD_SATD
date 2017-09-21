#ifndef COM_LAB_215
#define COM_LAB_215

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>

using namespace std;

#define EN_LAB215 1

class comlab215{

        public:
        static ofstream file_out;
        static long int num_times_sad;
        static long int num_times_sad2;
        static long int num_times_satd;
        static int who_called;
        static int puw;
        static int puh;
        static char* name;
 	static int qp;       
        
        static void openFiles();
        static void closeFiles();

};

#endif
