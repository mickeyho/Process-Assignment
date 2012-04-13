#include "Process.hpp"


Process::Process(const std::vector<char*>& path){
	m_pid = fork(m_status);
	execv(path,NULL);
}

Process::~Process(){
	wait(m_status);
}