/**
 * @file quiz.h
 * @author Karthika (srikarthi2017@gmail.com)
 * @brief header file
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __QUIZ_H__
#define __QUIZ_H__
//#include <stdio.h>
//#include <stdlib.h>
extern int countr,r,r1,count,i,n;
extern float score;
extern char choice;
extern char playername[20];
void edit_score(float,char[]);
void help();
void reset_score();
void show_record();
#endif

