#include<iostream>
#include <fstream>

using namespace std;

class p_muitinieks{
    public:
        int nr;
        int laiks;
        p_muitinieks() : nr(0), laiks(0) {}

        p_muitinieks(int i, int time){
            nr=i+1;
            laiks=time;
        }
};
class n_muitinieks{
    public:
        char tips;
        int nr;
        int laiks;
};
class p_custom{
    public:
        int nr;
        int laiks;
};
class n_custom{
    public:
        int nr;
        int laiks;
};
class iebraucejs{
public:
    char tips;
    unsigned int ierasanas_laiks;
    unsigned int iziesanas_laiks;
};



int main(){
    int p_count;
    int n_count;
    int p_time;
    int n_time;
    char t_control ='T';
    char control;
    int pc = 0;
    int nc = 0;
    int tc = 0;
    ifstream input("customs.i4");
    if(!input.is_open()){
        cout << "fails nav atvērts" << endl;
        return 0;
    }
    input >> p_count >> n_count >> p_time >> n_time;
    //cout << p_count << endl << n_time << endl << t_control;

    if (t_control == 'T'){
        while (input.get(control)){
            if (control != '\n') {
            if (control != 'T'){
                break;
            }   
            cout << control;
            while (input.get(control) && control != '\n');
        }
    }
    }

    p_custom* pc_array = new p_custom[p_count];
    p_muitinieks* p_array = new p_muitinieks[p_count];
    n_muitinieks* n_array = new n_muitinieks[n_count];

    for (int i = 0; i < p_count; ++i) {
        p_array[i] = p_muitinieks(i, p_time);
    }
}
