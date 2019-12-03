#include <stdio.h>
#define data_size 10
#define sim_duration 30
#define alpha 6
#define divider 10
#define PA 0
#define PB 1
#define PC 2

struct proc_time{
	unsigned int start_time;
	unsigned int *burst_time;
	unsigned int *wait_time;
	int tau[sim_duration];
}

typedef struct proc_time Proc_time;

char Proc_queue[3] = {0};

int next_tau(unsigned int current_proc_time, int current_tau);

int main()
{
	//declare variables
	Proc_time Proc_A, Proc_B, Proc_C;
	int counter = 0;

	//init data
	unsigned int Proc_A_burst_time[] = {3, 4, 6, 1, 4, 8, 2}; 
	unsigned int Proc_A_wait_time[] = {2, 5, 9, 6, 5, 4, 1};
	Proc_A.start_time = 0;
	Proc_A.burst_time = Proc_A_burst_time;
	Proc_A.wait_time = Proc_A_wait_time;
	Proc_A.tau[0] = 6;

	unsigned int Proc_B_burst_time[data_size] = {9, 3, 1, 7, 3, 7, 1, 6, 9, 9}; 
	unsigned int Proc_B_wait_time[data_size] = {1, 2, 3, 4, 1, 9, 2, 5, 8, 3};
	Proc_B.start_time = 3;
	Proc_B.burst_time = Proc_B_burst_time;
	Proc_B.wait_time = Proc_B_wait_time;
	Proc_B.tau[0] = 6;
	
	unsigned int Proc_C_burst_time[data_size] = {5, 2, 8, 9}; 
	unsigned int Proc_C_wait_time[data_size] = {4, 8, 1, 3};
	Proc_C.start_time = 5;
	Proc_C.burst_time = Proc_C_burst_time;
	Proc_C.wait_time = Proc_C_wait_time;
	Proc_C.tau[0] = 6;

	while(counter < sim_duration){
	//at time 0, only use tau[0] as predicted value
	


	}
	
	return (0);
}
void updata_proc_queue(Proc_time *Proc_X, int X){
	if(Proc_X->wait_time > 0)
		Proc_X->wait_time--;
	else
		proc_
		
		

}



int next_tau(unsigned int current_proc_time, int current_tau){
	return (alpha*current_proc_time+(10-alpha)*current_tau)/divider;

}
