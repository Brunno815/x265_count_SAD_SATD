#include "comlab215.h"

ofstream comlab215::file_out;
long int comlab215::num_times_sad = 0;
long int comlab215::num_times_sad2 = 0;
long int comlab215::num_times_satd = 0;
int comlab215::who_called;
int comlab215::puw;
int comlab215::puh;
char* comlab215::name;
int comlab215::qp;

void comlab215::openFiles(){

    printf("%s\n", comlab215::name);
    
    stringstream ss;
    ss << comlab215::qp;

    string s(comlab215::name);
    
    int a = system("mkdir -p OUTPUT_COUNT");
    printf("%d\n", a);
    
    string name_video = s.substr(21, s.size() - 25);
    
    printf("%s\n", name_video.c_str());
    
    a = system(("mkdir -p OUTPUT_COUNT/" + name_video).c_str());

    a = system(("mkdir -p OUTPUT_COUNT/" + name_video + "/" + ss.str()).c_str());

    comlab215::file_out.open(("OUTPUT_COUNT/" + name_video + "/" + ss.str() + "/count_sad_satd.txt").c_str(), ofstream::out);

}

void comlab215::closeFiles(){

    comlab215::file_out << "SAD: " << comlab215::num_times_sad << endl;
    
    comlab215::file_out << "SAD: " << comlab215::num_times_sad2 << endl;
    
    comlab215::file_out << "SATD: " << comlab215::num_times_satd << endl;
        
    comlab215::file_out.close();

}
