#include<iostream.h>
#include<string.h>
#include<windows.h>
#ifndef SCHEDULE_H
#define SChEDULE_H
typedef struct PCB{
	int id;
	char name[]20;
	enum STATUS status;
	int flag;
	HANDLE threadID;
	int count;
	struct PCB*next;
	
}PCB,*pPCB;
typedef struct{
	pPCB head;
	pPCB tail;
	int pcbNum;
	
}readyList,freeList.,*pList;
HANDLE init();
void createProcess(char*name,int ax);
void scheduleProcess();
void removeProcess(char*name);
void fprintReadyList();
void printReadyList();
void printCurrent();
void stopAllThreads();
