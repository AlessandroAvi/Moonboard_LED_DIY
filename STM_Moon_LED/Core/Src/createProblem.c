#include <stdio.h>
#include <string.h>
#include "createProblem.h"
#include "debug.h"

/*
void createProblem(struct Problem *p, int id){
    switch(id){
        case 0:
            p->moveSize = 4;
            strcpy(p->name, "Name1");
            strcpy(p->moveLetters, "AABC");
            strcpy(p->moveNumbers, "1234");
            strcpy(p->grade, "7A+");
            strcpy(p->startFinish,"sddf");
            break;
        case 1:
            p->moveSize = 4;
            strcpy(p->name, "Name2");
            strcpy(p->moveLetters, "AABC");
            strcpy(p->moveNumbers, "1234");
            strcpy(p->grade, "7B");
            strcpy(p->startFinish,"sddf");
            break;
        default : break;
    }
}
*/
void createProblem(struct Problem* p, int id){
	switch(id){
		case 0 :
			strcpy(p->name,"FAR FROM THE MADDING CROWD");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,E,F,C,D,D");
			strcpy(p->moveNumbers,"6,5,8,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 1 :
			strcpy(p->name,"HARD TIMES");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"B,E,E,E,E,G,I,J");
			strcpy(p->moveNumbers,"10,6,8,12,16,4,18,5");
			strcpy(p->startFinish, "d,d,d,d,d,s,e,s");
			strcpy(p->grade, "7A");
			break;
		case 10 :
			strcpy(p->name,"SINGLE DURA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,G,D,D,A");
			strcpy(p->moveNumbers,"6,9,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 100 :
			strcpy(p->name,"ACG30");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,D,E,F,G,G,I,I");
			strcpy(p->moveNumbers,"5,11,8,11,6,15,14,18");
			strcpy(p->startFinish, "s,d,d,d,s,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 101 :
			strcpy(p->name,"ACG31");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,H,C,E,A");
			strcpy(p->moveNumbers,"5,10,13,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 102 :
			strcpy(p->name,"THIS IS NOW...");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,I,E,D,B,D");
			strcpy(p->moveNumbers,"5,10,12,15,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 103 :
			strcpy(p->name,"BATTLE OF THE PUDGE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"A,C,D,E,E,H,I");
			strcpy(p->moveNumbers,"18,5,11,8,16,5,10");
			strcpy(p->startFinish, "e,s,d,d,d,s,d");
			strcpy(p->grade, "7A+");
			break;
		case 104 :
			strcpy(p->name,"ACG37");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,J,I,J,G,C,C,A");
			strcpy(p->moveNumbers,"5,7,10,13,14,16,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 105 :
			strcpy(p->name,"CAROLYN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,C,I,G,I");
			strcpy(p->moveNumbers,"4,7,10,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 106 :
			strcpy(p->name,"AB1");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,A,E,A,D,A");
			strcpy(p->moveNumbers,"4,6,8,9,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 107 :
			strcpy(p->name,"ACG43");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,I,D,E,A,A,B,D");
			strcpy(p->moveNumbers,"5,10,11,14,14,9,6,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 108 :
			strcpy(p->name,"LIP GRIP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,K,H,K,I");
			strcpy(p->moveNumbers,"5,4,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 109 :
			strcpy(p->name,"COLPA DEL NONNO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,E,B,E,B,D");
			strcpy(p->moveNumbers,"6,5,9,10,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 11 :
			strcpy(p->name,"HAN DUO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,F,E,H,I");
			strcpy(p->moveNumbers,"6,11,14,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 110 :
			strcpy(p->name,"GS VR #1");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,B,E,C,E,D");
			strcpy(p->moveNumbers,"4,6,8,10,12,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 111 :
			strcpy(p->name,"ACG46");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"C,B,A,B,G,F,I,E,I,D");
			strcpy(p->moveNumbers,"5,6,9,10,10,13,14,16,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 112 :
			strcpy(p->name,"UNKNOWN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,D,H,J,E,I,D,I");
			strcpy(p->moveNumbers,"4,7,8,7,12,15,18,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,e");
			strcpy(p->grade, "6C+");
			break;
		case 113 :
			strcpy(p->name,"ROCK LOBSTER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,E,E,A,E,A,E,I");
			strcpy(p->moveNumbers,"5,6,8,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 114 :
			strcpy(p->name,"ACG48");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,K,H,F,B,D,A");
			strcpy(p->moveNumbers,"5,9,10,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 115 :
			strcpy(p->name,"SNIFFING DOG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,I,J,I,J,I");
			strcpy(p->moveNumbers,"5,7,10,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 116 :
			strcpy(p->name,"FUNKED JAM");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"B,C,D,B,G,H,C,D");
			strcpy(p->moveNumbers,"6,5,7,10,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "8A");
			break;
		case 117 :
			strcpy(p->name,"ACG49");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,D,E,I,D,B,I");
			strcpy(p->moveNumbers,"5,6,15,16,10,11,6,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 118 :
			strcpy(p->name,"KEEP IT TIGHT, YO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,G,F,G,D");
			strcpy(p->moveNumbers,"4,8,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 119 :
			strcpy(p->name,"SAREVOK");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,I,G,I");
			strcpy(p->moveNumbers,"4,8,9,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 12 :
			strcpy(p->name,"TODD, DARK AND HANDSOME");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,G,H,C,C,H,G,I");
			strcpy(p->moveNumbers,"4,6,8,8,13,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 120 :
			strcpy(p->name,"AB3");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,E,H,F,G,E,I");
			strcpy(p->moveNumbers,"5,6,8,10,13,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 121 :
			strcpy(p->name,"ZEUS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,B,D,D");
			strcpy(p->moveNumbers,"6,10,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 122 :
			strcpy(p->name,"LACERQUA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,E,G,D");
			strcpy(p->moveNumbers,"5,8,9,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 123 :
			strcpy(p->name,"AB4");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,E,F,F,I,I,K,I");
			strcpy(p->moveNumbers,"5,6,8,11,13,14,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 124 :
			strcpy(p->name,"LOUDREIGN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,I,J,E,E,A");
			strcpy(p->moveNumbers,"4,8,10,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 125 :
			strcpy(p->name,"ON OUR HEEL");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,K,H,C,E,D");
			strcpy(p->moveNumbers,"5,6,9,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 126 :
			strcpy(p->name,"SUC");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,F,B,G,I");
			strcpy(p->moveNumbers,"6,5,11,15,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 127 :
			strcpy(p->name,"MARK'S FAVORITE PROBLEM");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"A,C,D,E,F,F,G");
			strcpy(p->moveNumbers,"9,5,18,6,13,11,15");
			strcpy(p->startFinish, "d,s,e,s,d,d,d");
			strcpy(p->grade, "7B");
			break;
		case 128 :
			strcpy(p->name,"SCHWERE LEITER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,E,E,E,E,E,D");
			strcpy(p->moveNumbers,"6,8,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 129 :
			strcpy(p->name,"TAMAS DYNOMITE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,C,D,D");
			strcpy(p->moveNumbers,"4,5,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 13 :
			strcpy(p->name,"E-Z CHEESE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,H,J,G,H,D");
			strcpy(p->moveNumbers,"4,8,10,12,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 130 :
			strcpy(p->name,"GRAYLING");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,I,H,G,F,E,D,D");
			strcpy(p->moveNumbers,"5,7,8,9,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 131 :
			strcpy(p->name,"HAMPUS NEDERLAG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,E,G,D,E,B,D");
			strcpy(p->moveNumbers,"5,6,9,11,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 132 :
			strcpy(p->name,"NITERÓI 01");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,B,D,C,E,D,G,G,I");
			strcpy(p->moveNumbers,"5,6,7,8,9,11,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 133 :
			strcpy(p->name,"CEPPODE...");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,H,H,E,H,D,D");
			strcpy(p->moveNumbers,"5,5,8,9,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 134 :
			strcpy(p->name,"JAGUAR SHARK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,C,D,E,I");
			strcpy(p->moveNumbers,"5,10,12,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 135 :
			strcpy(p->name,"CRAYON PONYFISH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,C,I,D");
			strcpy(p->moveNumbers,"5,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 136 :
			strcpy(p->name,"ROCK N LOCK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,I,G,I");
			strcpy(p->moveNumbers,"4,7,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 137 :
			strcpy(p->name,"IL MANFRUITO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"A,E,E,F,G,G");
			strcpy(p->moveNumbers,"18,6,9,13,4,17");
			strcpy(p->startFinish, "e,s,d,d,s,d");
			strcpy(p->grade, "7C");
			break;
		case 138 :
			strcpy(p->name,"JAGUAR SHARK HARD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,C,E,I");
			strcpy(p->moveNumbers,"5,10,12,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 139 :
			strcpy(p->name,"BP");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,B,E,E,I,H,J,H,I");
			strcpy(p->moveNumbers,"5,6,9,8,10,12,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 14 :
			strcpy(p->name,"SNAGGLEPUSS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,K,H,I,H,I");
			strcpy(p->moveNumbers,"5,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 140 :
			strcpy(p->name,"LAGO NERO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,F,C,D,E,D");
			strcpy(p->moveNumbers,"4,6,8,11,13,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 141 :
			strcpy(p->name,"ACG56");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,I,H,E,C,B,A");
			strcpy(p->moveNumbers,"5,10,13,16,16,10,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 142 :
			strcpy(p->name,"ACG59");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,C,E,B,D,E,F,I");
			strcpy(p->moveNumbers,"5,5,8,10,15,16,11,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 143 :
			strcpy(p->name,"DIAGONALE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,F,D,A");
			strcpy(p->moveNumbers,"5,8,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 144 :
			strcpy(p->name,"HOLD THE SWING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,G,E,I,E,I");
			strcpy(p->moveNumbers,"5,6,9,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 145 :
			strcpy(p->name,"AF EASY ONE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,J,K,H,J,G,K,I");
			strcpy(p->moveNumbers,"5,7,9,10,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 146 :
			strcpy(p->name,"AF EASY FOUR");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,H,F,I,G,I");
			strcpy(p->moveNumbers,"4,6,8,10,13,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 147 :
			strcpy(p->name,"AF CHRISTMAS TUBERCULOSIS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,F,I,I,I");
			strcpy(p->moveNumbers,"6,7,10,11,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 148 :
			strcpy(p->name,"THE REAL DEAL");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,D,I,H,I,E,B,A");
			strcpy(p->moveNumbers,"5,7,7,12,15,14,12,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "8A");
			break;
		case 149 :
			strcpy(p->name,"TIRARONCHIE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,I,H,H,D");
			strcpy(p->moveNumbers,"5,6,9,12,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 15 :
			strcpy(p->name,"SHAKEN NOT STIRRED");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,H,F,E,A,D,A");
			strcpy(p->moveNumbers,"5,8,11,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 150 :
			strcpy(p->name,"EASY PINCH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,D,G,F,E,I");
			strcpy(p->moveNumbers,"5,7,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 151 :
			strcpy(p->name,"HER COMES THE QUEEN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,F,A,D");
			strcpy(p->moveNumbers,"4,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 152 :
			strcpy(p->name,"THE WING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,C,F,D,D,D");
			strcpy(p->moveNumbers,"5,6,8,11,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 153 :
			strcpy(p->name,"TB SAGA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,J,G,H,D");
			strcpy(p->moveNumbers,"4,7,10,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 154 :
			strcpy(p->name,"OLDENBOAD4");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,F,C,E,H,D");
			strcpy(p->moveNumbers,"5,6,11,13,16,10,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 155 :
			strcpy(p->name,"ENDUROV6");
			p->moveSize = 13;
			strcpy(p->moveLetters ,"J,J,H,G,F,A,D,E,G,C,B,E,I");
			strcpy(p->moveNumbers,"5,7,8,9,11,14,15,16,17,5,10,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 156 :
			strcpy(p->name,"VARIATION 2 6B+");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,G,E,B,C,A,A");
			strcpy(p->moveNumbers,"6,6,8,10,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 157 :
			strcpy(p->name,"GO BIG");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,K,G,A,A");
			strcpy(p->moveNumbers,"6,9,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 158 :
			strcpy(p->name,"OFD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,E,E,I,I");
			strcpy(p->moveNumbers,"4,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 159 :
			strcpy(p->name,"YEEEEAHHH");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,I,G,I");
			strcpy(p->moveNumbers,"4,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 16 :
			strcpy(p->name,"SALAD DAYS");
			p->moveSize = 12;
			strcpy(p->moveLetters ,"C,B,E,I,H,K,B,D,H,G,G,A");
			strcpy(p->moveNumbers,"5,6,8,10,12,14,15,15,16,17,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 160 :
			strcpy(p->name,"FRENCH INDUCED COMA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,D,D,A");
			strcpy(p->moveNumbers,"6,10,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 161 :
			strcpy(p->name,"HIEROGRIPIC");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,F,C,A,A");
			strcpy(p->moveNumbers,"5,6,11,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 162 :
			strcpy(p->name,"WLF46");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,I,H,G,I");
			strcpy(p->moveNumbers,"4,7,10,13,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 163 :
			strcpy(p->name,"POCKETLAND");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,G,G,A");
			strcpy(p->moveNumbers,"4,7,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 164 :
			strcpy(p->name,"POCKETLAND 2");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,D,G,H,E,I");
			strcpy(p->moveNumbers,"5,7,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 165 :
			strcpy(p->name,"FIRST WORLD PROBLEM");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,E,C,E,C,D");
			strcpy(p->moveNumbers,"6,9,8,14,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 166 :
			strcpy(p->name,"GAMBERO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,E,B,E,A");
			strcpy(p->moveNumbers,"5,6,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 167 :
			strcpy(p->name,"ROCKET");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"B,E,H,F,I");
			strcpy(p->moveNumbers,"6,6,10,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 168 :
			strcpy(p->name,"ACG6 PLUS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,C,E,C,I");
			strcpy(p->moveNumbers,"5,10,13,16,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 169 :
			strcpy(p->name,"SQUINCHER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,G,F,C,D,D");
			strcpy(p->moveNumbers,"5,8,9,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 17 :
			strcpy(p->name,"THE LADDER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,I,J,I,K,I");
			strcpy(p->moveNumbers,"5,7,10,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 170 :
			strcpy(p->name,"SHRINE1");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,C,F,F,J,I");
			strcpy(p->moveNumbers,"5,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 171 :
			strcpy(p->name,"VISUALIZZA STOC......");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,H,F,I");
			strcpy(p->moveNumbers,"5,8,9,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 172 :
			strcpy(p->name,"DEATH EATER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,I,J,G,I");
			strcpy(p->moveNumbers,"4,6,8,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 173 :
			strcpy(p->name,"ROBERTDS#1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,E,B,D,B,D,D");
			strcpy(p->moveNumbers,"6,8,10,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 174 :
			strcpy(p->name,"ACG68");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,E,F,D,B,E,A");
			strcpy(p->moveNumbers,"5,6,8,11,11,6,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 175 :
			strcpy(p->name,"DAS SCHNITZEL ALT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,I,F,G,D");
			strcpy(p->moveNumbers,"5,6,9,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 176 :
			strcpy(p->name,"MOON SHADOW");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,C,F,I,D,G,I");
			strcpy(p->moveNumbers,"5,6,8,11,14,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 177 :
			strcpy(p->name,"TIAMAT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,E,G,E,I,G,I");
			strcpy(p->moveNumbers,"5,6,9,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 178 :
			strcpy(p->name,"NEIL1");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,C,B,C,D,C,A");
			strcpy(p->moveNumbers,"6,6,8,10,13,11,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 179 :
			strcpy(p->name,"サミシクナイト");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"E,H,G,B,E,C,G,G,I");
			strcpy(p->moveNumbers,"6,5,9,10,12,13,15,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 18 :
			strcpy(p->name,"CRANKSHAFT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,H,G,F,E,B,D");
			strcpy(p->moveNumbers,"5,5,9,11,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 180 :
			strcpy(p->name,"FISHIN FOR A COMPLIMENT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,E,C,D");
			strcpy(p->moveNumbers,"4,8,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 181 :
			strcpy(p->name,"ZLATI");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,C,E,D");
			strcpy(p->moveNumbers,"5,9,10,13,12,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 182 :
			strcpy(p->name,"THE DAILY RATION");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,K,G,G,H,J,D");
			strcpy(p->moveNumbers,"4,14,17,15,10,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 183 :
			strcpy(p->name,"I LOVE ROCK AND ROLL");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,E,F,G,I,I,J");
			strcpy(p->moveNumbers,"8,16,11,9,14,18,5");
			strcpy(p->startFinish, "d,d,d,d,d,e,s");
			strcpy(p->grade, "6C+");
			break;
		case 184 :
			strcpy(p->name,"WPOLOGIM 2");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,I,H,I,D");
			strcpy(p->moveNumbers,"5,8,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 185 :
			strcpy(p->name,"CAPTAIN RILEY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,F,C,E,A");
			strcpy(p->moveNumbers,"4,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 186 :
			strcpy(p->name,"BLACK IS BACK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,G,B,C,I,D");
			strcpy(p->moveNumbers,"5,8,9,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 187 :
			strcpy(p->name,"CALCIUM20");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,G,G,B,D,B,D");
			strcpy(p->moveNumbers,"6,4,9,10,15,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 188 :
			strcpy(p->name,"GOOD LIFE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,C,D,F,A");
			strcpy(p->moveNumbers,"5,8,8,15,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 189 :
			strcpy(p->name,"BLACK MAGIC");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,G,C,H,F,H,I");
			strcpy(p->moveNumbers,"5,4,8,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 19 :
			strcpy(p->name,"AMIT 1.1");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,E,D,D");
			strcpy(p->moveNumbers,"4,8,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 190 :
			strcpy(p->name,"GORILLA NR.2");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,I,G,D");
			strcpy(p->moveNumbers,"6,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 191 :
			strcpy(p->name,"BLACK KISS BLACK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,H,C,H,C,G,E,I");
			strcpy(p->moveNumbers,"4,8,8,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 192 :
			strcpy(p->name,"BLACK CRAPPIE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,A,E,A,D");
			strcpy(p->moveNumbers,"4,9,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 193 :
			strcpy(p->name,"JET-BLACK HAIR");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,H,G,D,A");
			strcpy(p->moveNumbers,"5,9,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 194 :
			strcpy(p->name,"GOT A LICENSE TO KILL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,G,B,F,A");
			strcpy(p->moveNumbers,"5,9,14,15,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 195 :
			strcpy(p->name,"FOX AND JAX");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,H,F,I,I");
			strcpy(p->moveNumbers,"4,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 196 :
			strcpy(p->name,"BOTTLE SERVICE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,I,K,G,I");
			strcpy(p->moveNumbers,"4,5,10,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 197 :
			strcpy(p->name,"HUNTED BY GUSTAV");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,C,F,A,D,A");
			strcpy(p->moveNumbers,"4,8,8,11,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 198 :
			strcpy(p->name,"UFO@5");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,K,I,I,E,D");
			strcpy(p->moveNumbers,"5,9,10,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 199 :
			strcpy(p->name,"PEACHY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,H,C,F,C,D,A");
			strcpy(p->moveNumbers,"5,8,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 2 :
			strcpy(p->name,"PROBLEM 5");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,D,A,F,F,I,E,D");
			strcpy(p->moveNumbers,"5,7,9,11,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 20 :
			strcpy(p->name,"WAR OF THE TODDS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,I,I,H,D");
			strcpy(p->moveNumbers,"5,9,9,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 200 :
			strcpy(p->name,"THE YEAR OF THE ROOSTER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,E,E,F,G,I");
			strcpy(p->moveNumbers,"12,5,9,14,13,6,18");
			strcpy(p->startFinish, "d,d,d,d,d,s,e");
			strcpy(p->grade, "7B+");
			break;
		case 201 :
			strcpy(p->name,"EAZEEPEAZEE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,I,J,H,I");
			strcpy(p->moveNumbers,"4,7,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 202 :
			strcpy(p->name,"NEW YEARS DELUSIONS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,F,G,A,H,D,A");
			strcpy(p->moveNumbers,"4,7,11,15,14,8,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 203 :
			strcpy(p->name,"ALLIE WARM UP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,D,G,J,I");
			strcpy(p->moveNumbers,"5,8,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 204 :
			strcpy(p->name,"A SPY WHO LOVED ME");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,C,F,D,G,I,I");
			strcpy(p->moveNumbers,"5,8,11,15,15,10,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 205 :
			strcpy(p->name,"BOBBI'S STRETCH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,F,D,E,A");
			strcpy(p->moveNumbers,"6,11,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 206 :
			strcpy(p->name,"NINO LA RONCHIA");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"B,C,K,H,H,D,B,G,H,J,I");
			strcpy(p->moveNumbers,"6,5,9,13,16,7,10,10,10,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 207 :
			strcpy(p->name,"WORLDSTAR");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,A,E,A,D,A");
			strcpy(p->moveNumbers,"4,8,9,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 208 :
			strcpy(p->name,"SLASHSLASH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,A,C,A,A");
			strcpy(p->moveNumbers,"6,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 209 :
			strcpy(p->name,"BACKSLASH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,G,J,I,I");
			strcpy(p->moveNumbers,"4,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 21 :
			strcpy(p->name,"CHEETAHSAURUS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,H,E,H,G,I,G,I");
			strcpy(p->moveNumbers,"5,8,9,12,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 210 :
			strcpy(p->name,"SPORGASSE, GRAZ");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,F,E,D");
			strcpy(p->moveNumbers,"6,5,11,16,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 211 :
			strcpy(p->name,"YAYABLACK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,J,J,E,H,C,D,D");
			strcpy(p->moveNumbers,"5,5,7,8,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 212 :
			strcpy(p->name,"TRAVEQUE");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"B,C,J,H,H,H,G,E,H,I");
			strcpy(p->moveNumbers,"6,5,7,16,12,8,4,6,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 213 :
			strcpy(p->name,"TRAVEQUE II");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"C,B,G,C,D,K,H,H,K,G,I");
			strcpy(p->moveNumbers,"5,6,4,8,7,9,8,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 214 :
			strcpy(p->name,"BAMBINI");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,F,C,D,D");
			strcpy(p->moveNumbers,"4,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 215 :
			strcpy(p->name,"BLACK ON RICE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,E,H,E,C,A");
			strcpy(p->moveNumbers,"5,4,8,10,16,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 216 :
			strcpy(p->name,"ALL BLACK ERRTHANG");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,E,G,A");
			strcpy(p->moveNumbers,"5,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 217 :
			strcpy(p->name,"MO6.1");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,H,D,D,D");
			strcpy(p->moveNumbers,"5,5,10,15,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 218 :
			strcpy(p->name,"LONDON FROG");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,G,F,I,I");
			strcpy(p->moveNumbers,"4,7,9,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 219 :
			strcpy(p->name,"CAPTAIN AUBREY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,F,I,I");
			strcpy(p->moveNumbers,"5,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 22 :
			strcpy(p->name,"ANA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,J,I,H,E,D");
			strcpy(p->moveNumbers,"5,7,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 220 :
			strcpy(p->name,"BOUJEE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,D,H,C,D");
			strcpy(p->moveNumbers,"4,13,15,10,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 221 :
			strcpy(p->name,"PURPLE IN THE OPEN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,E,D,I,H,I");
			strcpy(p->moveNumbers,"6,8,12,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 222 :
			strcpy(p->name,"THE REAL \"ONE\"");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,C,E,E,I");
			strcpy(p->moveNumbers,"4,8,9,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 223 :
			strcpy(p->name,"BLACK TIGER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,K,H,K,I");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 224 :
			strcpy(p->name,"STREETS OF GOLD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,C,K,F,B,A");
			strcpy(p->moveNumbers,"5,16,9,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 225 :
			strcpy(p->name,"BISCUITS RETURNS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,C,D,D");
			strcpy(p->moveNumbers,"5,6,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 226 :
			strcpy(p->name,"OPPOSITES");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,H,J,F,G,D");
			strcpy(p->moveNumbers,"5,9,8,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 227 :
			strcpy(p->name,"OUT THERE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,H,C,D,B,D");
			strcpy(p->moveNumbers,"5,6,10,13,15,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 228 :
			strcpy(p->name,"THE GREAT HAMBINO");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,H,C,F,E,G,G,I");
			strcpy(p->moveNumbers,"4,6,8,8,11,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 229 :
			strcpy(p->name,"TOMTOM");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,C,D,A");
			strcpy(p->moveNumbers,"5,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 23 :
			strcpy(p->name,"LADYBUG");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"A,A,C,D,F,G,H,J");
			strcpy(p->moveNumbers,"9,14,13,18,11,6,10,5");
			strcpy(p->startFinish, "d,d,d,e,d,s,d,s");
			strcpy(p->grade, "7A+");
			break;
		case 230 :
			strcpy(p->name,"カラス");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,K,H,I,E,D");
			strcpy(p->moveNumbers,"5,7,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 231 :
			strcpy(p->name,"2 BLACK 2 HARD");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,E,D,A");
			strcpy(p->moveNumbers,"5,5,9,15,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "8A+");
			break;
		case 232 :
			strcpy(p->name,"BLACK HAWK DOWN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,D,G,D,E,D");
			strcpy(p->moveNumbers,"5,8,15,9,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 233 :
			strcpy(p->name,"FOUL LANGUAGE");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,H,K,H,K,G,G,B,D");
			strcpy(p->moveNumbers,"4,5,9,12,14,14,17,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 234 :
			strcpy(p->name,"V1.");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"E,H,C,G,C,E,A,C,A");
			strcpy(p->moveNumbers,"6,5,8,10,13,14,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 235 :
			strcpy(p->name,"TIGER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,D,G,H,C,C,A");
			strcpy(p->moveNumbers,"6,7,10,13,16,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 236 :
			strcpy(p->name,"TIGHT BOX");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,D,A,D,E,G,D");
			strcpy(p->moveNumbers,"5,6,7,9,11,12,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 237 :
			strcpy(p->name,"CAD");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,K,J,H,E,G,D");
			strcpy(p->moveNumbers,"5,5,9,12,12,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 238 :
			strcpy(p->name,"CAD");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,K,J,H,E,G,D");
			strcpy(p->moveNumbers,"5,5,9,12,12,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 239 :
			strcpy(p->name,"BLACK POCKETS MATTER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,D,B,G,H,C,D");
			strcpy(p->moveNumbers,"5,6,7,10,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 24 :
			strcpy(p->name,"LADYBUG'S HEEL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,C,H,D");
			strcpy(p->moveNumbers,"5,6,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 240 :
			strcpy(p->name,"SEANN'S START");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,C,E,E,G,D");
			strcpy(p->moveNumbers,"4,8,13,12,16,9,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 241 :
			strcpy(p->name,"BLACK HOLDS MATTER");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"G,J,J,H,H,F,J,K,G,G,I");
			strcpy(p->moveNumbers,"4,5,7,8,10,11,12,14,17,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 242 :
			strcpy(p->name,"SIMON");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,I,F,B,G,A");
			strcpy(p->moveNumbers,"6,5,7,11,12,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 243 :
			strcpy(p->name,"BLACK DOJO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,E,F,B,A");
			strcpy(p->moveNumbers,"6,5,16,11,10,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 244 :
			strcpy(p->name,"DAN1");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,G,F,E,C,D,D");
			strcpy(p->moveNumbers,"5,8,9,11,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 245 :
			strcpy(p->name,"모리");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,F,B,D,E,I");
			strcpy(p->moveNumbers,"4,8,11,12,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 246 :
			strcpy(p->name,"BLACK HOLE SUN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,C,B,A");
			strcpy(p->moveNumbers,"4,7,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 247 :
			strcpy(p->name,"HOLY IWAN");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"B,E,E,C,B,E,C,D,C,D");
			strcpy(p->moveNumbers,"6,6,8,8,10,12,13,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 248 :
			strcpy(p->name,"CRANK IT UP A NOTCH!");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,F,C,D");
			strcpy(p->moveNumbers,"6,11,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 249 :
			strcpy(p->name,"BLABLUB");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,E,B,E,A,D,D");
			strcpy(p->moveNumbers,"6,6,10,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 25 :
			strcpy(p->name,"MELET");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,H,H,I,J");
			strcpy(p->moveNumbers,"13,16,10,18,5");
			strcpy(p->startFinish, "d,d,d,e,s");
			strcpy(p->grade, "7A+");
			break;
		case 250 :
			strcpy(p->name,"ALEXS PROBLEM NUMBER ONE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"B,E,E,B,E,A,D,D");
			strcpy(p->moveNumbers,"6,6,8,10,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 251 :
			strcpy(p->name,"FORSØK 15");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,H,C,F,C,D,A");
			strcpy(p->moveNumbers,"5,8,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 252 :
			strcpy(p->name,"FULCRO HARD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,I,D,E,D");
			strcpy(p->moveNumbers,"4,6,9,11,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 253 :
			strcpy(p->name,"JOHNNY REHAB 4");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,H,K,J,I,E,J,D");
			strcpy(p->moveNumbers,"4,5,10,9,12,14,8,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 254 :
			strcpy(p->name,"180 CAMPUS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,K,H,I,D");
			strcpy(p->moveNumbers,"5,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 255 :
			strcpy(p->name,"EVERY WHICH WAY BUT RIGHT");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"G,B,C,A,C,B,I,G,G,I");
			strcpy(p->moveNumbers,"4,6,8,9,13,15,10,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 256 :
			strcpy(p->name,"IL LADRO DI POLLI");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,E,E,J,E,E,D");
			strcpy(p->moveNumbers,"5,6,8,9,7,12,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 257 :
			strcpy(p->name,"HAY IS FOR HORSES");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,G,D,D");
			strcpy(p->moveNumbers,"5,10,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 258 :
			strcpy(p->name,"BIFFOSMEG");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,C,E,A");
			strcpy(p->moveNumbers,"4,7,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 259 :
			strcpy(p->name,"CHIAPPO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,C,F,C,E,D");
			strcpy(p->moveNumbers,"4,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 26 :
			strcpy(p->name,"MELET VAR");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,C,G,A");
			strcpy(p->moveNumbers,"5,10,13,17,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 260 :
			strcpy(p->name,"DDD");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"G,G,H,H,G,H,G,G,H,G,I");
			strcpy(p->moveNumbers,"4,6,8,10,10,13,14,15,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 261 :
			strcpy(p->name,"WOKE UP FEELIN FROGGY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,E,F,E,J,K,I,I");
			strcpy(p->moveNumbers,"5,6,11,12,13,14,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 262 :
			strcpy(p->name,"DOJO BLACK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,K,I,J,D,G,C,D");
			strcpy(p->moveNumbers,"5,9,10,13,11,17,5,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 263 :
			strcpy(p->name,"CICCIOSPRUZZO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,A,F,A,E,D");
			strcpy(p->moveNumbers,"5,9,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 264 :
			strcpy(p->name,"STRATIFICAZIONI SOCIALI");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,K,H,G,C,C,D");
			strcpy(p->moveNumbers,"5,9,12,14,8,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 265 :
			strcpy(p->name,"ZANZARE, NEBBIA E VIN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,I,F,H,D");
			strcpy(p->moveNumbers,"6,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 266 :
			strcpy(p->name,"A LITTLE CROSSING");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,E,G,H,K,H,I");
			strcpy(p->moveNumbers,"5,4,8,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 267 :
			strcpy(p->name,"GYUUUUUN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,H,D,E,E,I");
			strcpy(p->moveNumbers,"6,10,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 268 :
			strcpy(p->name,"THE WIZARD");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,E,H,F,H,E,I");
			strcpy(p->moveNumbers,"4,7,8,10,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 269 :
			strcpy(p->name,"SMOKING AREA HARD");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,E,E,I");
			strcpy(p->moveNumbers,"4,8,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 27 :
			strcpy(p->name,"SCHWARTZ SCHNEIDER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,D,B,D,E,I");
			strcpy(p->moveNumbers,"5,10,11,6,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 270 :
			strcpy(p->name,"ON BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,F,C,D,A");
			strcpy(p->moveNumbers,"4,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 271 :
			strcpy(p->name,"TAMOA NARASAKI BOMB");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,C,I,E,C,A");
			strcpy(p->moveNumbers,"5,8,8,9,16,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 272 :
			strcpy(p->name,"POOP TWISTER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,J,G,D,G,E,I");
			strcpy(p->moveNumbers,"6,5,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 273 :
			strcpy(p->name,"GIVE ME SOMETHING BETTER");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"E,G,K,H,I,C,D,B,A");
			strcpy(p->moveNumbers,"6,4,9,13,14,13,15,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 274 :
			strcpy(p->name,"MONOTHEISM");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"E,G,K,H,C,C,I,D,A");
			strcpy(p->moveNumbers,"6,4,9,13,13,16,14,11,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 275 :
			strcpy(p->name,"BLACK HEART");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,I,G,I");
			strcpy(p->moveNumbers,"5,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 276 :
			strcpy(p->name,"NEW PROB");
			p->moveSize = 13;
			strcpy(p->moveLetters ,"G,C,C,A,B,C,B,A,D,C,E,D,A");
			strcpy(p->moveNumbers,"4,5,16,14,15,13,10,9,7,8,8,11,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 277 :
			strcpy(p->name,"FIRST PROB.");
			p->moveSize = 13;
			strcpy(p->moveLetters ,"G,C,C,E,G,G,D,C,A,D,C,E,A");
			strcpy(p->moveNumbers,"4,5,8,9,9,10,11,16,14,15,13,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 278 :
			strcpy(p->name,"TECH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,F,E,H,G,I");
			strcpy(p->moveNumbers,"4,8,11,12,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 279 :
			strcpy(p->name,"AKAHN N LIL CEASY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,H,E,F,E,J,I,E,D");
			strcpy(p->moveNumbers,"4,8,8,11,12,7,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 28 :
			strcpy(p->name,"E-16");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,E,C,E,A");
			strcpy(p->moveNumbers,"6,8,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 280 :
			strcpy(p->name,"EXIT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,E,E,A,A");
			strcpy(p->moveNumbers,"5,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 281 :
			strcpy(p->name,"PLAYING TINDER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,E,B,B,A");
			strcpy(p->moveNumbers,"5,9,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 282 :
			strcpy(p->name,"YE BOI");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,H,C,D");
			strcpy(p->moveNumbers,"4,10,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 283 :
			strcpy(p->name,"S1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,D,D,B,A");
			strcpy(p->moveNumbers,"6,5,8,11,15,6,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 284 :
			strcpy(p->name,"FORSØK 25");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"A,C,D,E,E,E,H,J");
			strcpy(p->moveNumbers,"14,5,18,6,8,12,8,5");
			strcpy(p->startFinish, "d,s,e,s,d,d,d,d");
			strcpy(p->grade, "6B+");
			break;
		case 285 :
			strcpy(p->name,"PONTUSBADET");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,I,H,J,H,I");
			strcpy(p->moveNumbers,"5,8,9,12,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 286 :
			strcpy(p->name,"ROSA PARKS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,D,C,H,G,A");
			strcpy(p->moveNumbers,"4,7,15,13,10,9,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 287 :
			strcpy(p->name,"PONTUSBADET 2");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,E,E,C,I,G,G,D");
			strcpy(p->moveNumbers,"5,8,12,13,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 288 :
			strcpy(p->name,"L'UOMO BISATTA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,G,H,C,H,D");
			strcpy(p->moveNumbers,"5,6,9,12,8,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 289 :
			strcpy(p->name,"WARM UP A6");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,J,I,I,I");
			strcpy(p->moveNumbers,"4,7,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 29 :
			strcpy(p->name,"ACG5");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,C,E,B,E,E,H,D");
			strcpy(p->moveNumbers,"5,5,8,10,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 290 :
			strcpy(p->name,"BOUNCE EZ");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,J,H,C,D");
			strcpy(p->moveNumbers,"6,5,10,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 291 :
			strcpy(p->name,"SEX LANCHEZ");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,E,G,D");
			strcpy(p->moveNumbers,"4,8,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 292 :
			strcpy(p->name,"YAY POCKETS!");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,E,B,E,B,D");
			strcpy(p->moveNumbers,"6,5,8,10,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 293 :
			strcpy(p->name,"MORNING SHAKE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,B,D,D");
			strcpy(p->moveNumbers,"4,8,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 294 :
			strcpy(p->name,"BOULDER AND EMIKO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,E,F,D,I,E,I");
			strcpy(p->moveNumbers,"5,4,8,11,11,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 295 :
			strcpy(p->name,"GREAT DANE ZANE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,F,G,E,B,G,I");
			strcpy(p->moveNumbers,"5,6,13,15,9,12,4,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 296 :
			strcpy(p->name,"ANACONDA MALT LIQUOR");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,I,H,E,D");
			strcpy(p->moveNumbers,"4,5,14,10,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 297 :
			strcpy(p->name,"BLACK DOJO MINI");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,F,C,E,A");
			strcpy(p->moveNumbers,"6,5,11,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 298 :
			strcpy(p->name,"MASTERFUL GAP 2.0");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,A,F,E,A,I");
			strcpy(p->moveNumbers,"5,6,9,11,16,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 299 :
			strcpy(p->name,"CHICKUGA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,E,C,E,D");
			strcpy(p->moveNumbers,"4,8,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 3 :
			strcpy(p->name,"PROBLEM 11");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,E,B,E,E,I");
			strcpy(p->moveNumbers,"5,6,8,10,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 30 :
			strcpy(p->name,"ACG6");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,G,C,C,C,E,I");
			strcpy(p->moveNumbers,"5,10,10,8,13,16,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 300 :
			strcpy(p->name,"BULA 3");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,F,I,E,I");
			strcpy(p->moveNumbers,"4,8,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 301 :
			strcpy(p->name,"SALUHALLEN 11");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,J,G,G,D");
			strcpy(p->moveNumbers,"4,7,10,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 302 :
			strcpy(p->name,"GASTON GRADE PLEASE");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"H,E,E,G,F,H,G,I,E,G,D");
			strcpy(p->moveNumbers,"5,6,8,9,11,12,14,14,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 303 :
			strcpy(p->name,"BLACK PEPPER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,E,E,A,C,D,D");
			strcpy(p->moveNumbers,"5,8,9,9,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 304 :
			strcpy(p->name,"TONE'S THROW");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,A,E,A,D");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 305 :
			strcpy(p->name,"AGRO-VATED");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,E,E,G,I");
			strcpy(p->moveNumbers,"5,7,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 306 :
			strcpy(p->name,"TIGELLA OF DREAM");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,F,C,E,D");
			strcpy(p->moveNumbers,"5,11,13,6,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 307 :
			strcpy(p->name,"BLACK SHEEP");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,C,H,G,H,I,C,I");
			strcpy(p->moveNumbers,"4,13,10,9,8,7,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 308 :
			strcpy(p->name,"BABA BLACK SHEEP");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"E,G,C,I,H,G,H,I,C,I");
			strcpy(p->moveNumbers,"6,4,13,14,10,9,8,7,8,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 309 :
			strcpy(p->name,"SACRED COW");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"E,G,I,C,A,C,H,G,H,I,I");
			strcpy(p->moveNumbers,"6,4,14,13,9,8,10,9,8,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 31 :
			strcpy(p->name,"ACG8");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,E,A,E,D");
			strcpy(p->moveNumbers,"5,5,8,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 310 :
			strcpy(p->name,"MARCUS IS THE PROBLEM");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,H,G,D,E,A,E,D");
			strcpy(p->moveNumbers,"6,5,9,11,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 311 :
			strcpy(p->name,"INSANE IN THE BRAIN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,E,B,A,D");
			strcpy(p->moveNumbers,"4,6,12,8,10,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 312 :
			strcpy(p->name,"VORPAL SWORD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,G,H,H,I");
			strcpy(p->moveNumbers,"5,8,9,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 313 :
			strcpy(p->name,"BELLE NOIRE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,E,J,I,I");
			strcpy(p->moveNumbers,"4,8,9,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 314 :
			strcpy(p->name,"WINGSPAN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,C,F,A,D");
			strcpy(p->moveNumbers,"5,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 315 :
			strcpy(p->name,"THE HUMAN FLAG");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,H,C,D");
			strcpy(p->moveNumbers,"6,10,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 316 :
			strcpy(p->name,"BIG TIME BRUH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,C,I,E,I");
			strcpy(p->moveNumbers,"4,6,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 317 :
			strcpy(p->name,"SHOULDER 'SPLODER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,J,E,J,E,D");
			strcpy(p->moveNumbers,"5,7,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 318 :
			strcpy(p->name,"CHAKA MAKA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,G,H,I,G,I");
			strcpy(p->moveNumbers,"5,10,10,13,7,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 319 :
			strcpy(p->name,"PAUNCH PINCHER");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"J,H,H,F,C,F,G,C,K,I");
			strcpy(p->moveNumbers,"5,5,8,11,8,13,15,5,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 32 :
			strcpy(p->name,"ACG10");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,G,G,E,B,I");
			strcpy(p->moveNumbers,"4,8,15,14,12,10,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 320 :
			strcpy(p->name,"PROJECT V1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,F,F,I,G,D");
			strcpy(p->moveNumbers,"4,8,11,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 321 :
			strcpy(p->name,"MR PINCH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,G,E,D");
			strcpy(p->moveNumbers,"4,8,9,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 322 :
			strcpy(p->name,"MUCCA");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,H,G,I");
			strcpy(p->moveNumbers,"4,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 323 :
			strcpy(p->name,"COMEBACK 3.5");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,G,G,C,D,E,I");
			strcpy(p->moveNumbers,"4,7,9,10,13,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 324 :
			strcpy(p->name,"COMEBACK 4.0");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,E,B,D,D");
			strcpy(p->moveNumbers,"4,7,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 325 :
			strcpy(p->name,"ACG79");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,E,I,F,H,D");
			strcpy(p->moveNumbers,"5,4,8,9,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 326 :
			strcpy(p->name,"BADMOTORFINGER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,F,F,J,E,D");
			strcpy(p->moveNumbers,"6,8,11,13,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 327 :
			strcpy(p->name,"JAB 2017");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,G,G,I");
			strcpy(p->moveNumbers,"4,8,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 328 :
			strcpy(p->name,"SCRUMPY MCBUTTERBALLS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,C,H,G,D");
			strcpy(p->moveNumbers,"5,8,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 329 :
			strcpy(p->name,"SOFT SERVE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,D,D,E,I");
			strcpy(p->moveNumbers,"6,8,11,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 33 :
			strcpy(p->name,"SUPERNOVA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,C,F,F,H,D");
			strcpy(p->moveNumbers,"5,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 330 :
			strcpy(p->name,"OH MY FAT FINGERS...");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,F,K,E,I");
			strcpy(p->moveNumbers,"4,10,13,14,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 331 :
			strcpy(p->name,"HUMPA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,H,F,I,G,E,H,I");
			strcpy(p->moveNumbers,"4,5,8,11,14,15,8,10,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 332 :
			strcpy(p->name,"GOT PINCH?");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,H,C,F,C,D,A");
			strcpy(p->moveNumbers,"5,5,8,8,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 333 :
			strcpy(p->name,"PINCHINGPANDA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,H,H,C,F,C,D,G,A");
			strcpy(p->moveNumbers,"5,5,8,8,11,13,15,9,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 334 :
			strcpy(p->name,"GIUDA BALLERINI");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,F,F,I,G,D");
			strcpy(p->moveNumbers,"4,7,11,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 335 :
			strcpy(p->name,"NIC_LAICALADDER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,I,G,J,I");
			strcpy(p->moveNumbers,"6,10,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 336 :
			strcpy(p->name,"A BIT REACHY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,G,G,H,G,I,G,I");
			strcpy(p->moveNumbers,"4,6,9,10,14,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 337 :
			strcpy(p->name,"PIZZAPUNT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,A,E,B,D");
			strcpy(p->moveNumbers,"4,6,8,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 338 :
			strcpy(p->name,"ONE PUNCH");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,G,K,H,K,G,I,D");
			strcpy(p->moveNumbers,"4,5,15,9,12,14,17,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 339 :
			strcpy(p->name,"THE F(L)IGHT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,G,F,J,J,E,I");
			strcpy(p->moveNumbers,"5,6,15,11,13,7,9,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 34 :
			strcpy(p->name,"MASTERFUL GAP");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"A,B,C,C,E,F,I");
			strcpy(p->moveNumbers,"9,6,5,13,16,11,18");
			strcpy(p->startFinish, "d,s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 340 :
			strcpy(p->name,"FACE DE RAT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,A,E,F,I,I");
			strcpy(p->moveNumbers,"4,6,8,9,12,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 341 :
			strcpy(p->name,"THE LITTLE ISLAND");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,K,H,G,D");
			strcpy(p->moveNumbers,"4,6,9,12,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 342 :
			strcpy(p->name,"THE MOVE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,E,H,H,I");
			strcpy(p->moveNumbers,"4,6,9,12,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 343 :
			strcpy(p->name,"LITTLE COSA NOSTRA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,C,F,K,G,I,E,D");
			strcpy(p->moveNumbers,"5,6,8,11,9,10,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 344 :
			strcpy(p->name,"SMALL COSA NOSTRA");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,J,F,E,J,H,I");
			strcpy(p->moveNumbers,"4,8,7,11,12,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 345 :
			strcpy(p->name,"LA COSA NOSTRA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,G,E,F,J,J,H,G,D");
			strcpy(p->moveNumbers,"4,9,6,11,7,13,16,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 346 :
			strcpy(p->name,"GTC&AMP;TCT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,F,G,J,I,J,D");
			strcpy(p->moveNumbers,"4,13,17,12,10,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 347 :
			strcpy(p->name,"LES DRUS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,H,E,I,I,D");
			strcpy(p->moveNumbers,"5,15,16,12,10,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 348 :
			strcpy(p->name,"NOIA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,C,E,A,A");
			strcpy(p->moveNumbers,"6,4,8,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 349 :
			strcpy(p->name,"SKWAMA");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,I,J,H,K,G,I");
			strcpy(p->moveNumbers,"4,8,10,7,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 35 :
			strcpy(p->name,"VERITGO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,F,H,D");
			strcpy(p->moveNumbers,"6,5,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 350 :
			strcpy(p->name,"MORE EFFORT LESS SKIN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,H,J,F,G,J,I");
			strcpy(p->moveNumbers,"6,6,16,13,11,9,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 351 :
			strcpy(p->name,"LESS REST MORE INJURY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,J,G,F,G,J,G,D");
			strcpy(p->moveNumbers,"6,6,7,9,11,17,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 352 :
			strcpy(p->name,"TENDON DAY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,G,C,E,A,E,A");
			strcpy(p->moveNumbers,"5,6,9,8,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 353 :
			strcpy(p->name,"THE LAPSUS SISTER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,B,E,B,D,D");
			strcpy(p->moveNumbers,"6,5,10,12,15,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 354 :
			strcpy(p->name,"THE BIG DREAM");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,G,H,C,E,F,I,I");
			strcpy(p->moveNumbers,"4,6,8,8,12,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 355 :
			strcpy(p->name,"THE NIGHTMARE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,I,I,B,E,F,D");
			strcpy(p->moveNumbers,"4,5,7,9,15,12,11,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 356 :
			strcpy(p->name,"THE UNREAL THING");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,J,E,A,D,A");
			strcpy(p->moveNumbers,"4,8,8,7,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 357 :
			strcpy(p->name,"PHSYCHO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,E,F,G,D,G,D");
			strcpy(p->moveNumbers,"6,6,13,17,7,10,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 358 :
			strcpy(p->name,"CLIMBING ON BLANK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,D,A,E,E,I");
			strcpy(p->moveNumbers,"5,7,9,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 359 :
			strcpy(p->name,"CRAZYCRACKER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,I,G,J,H,G,D");
			strcpy(p->moveNumbers,"5,6,7,10,12,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 36 :
			strcpy(p->name,"NOT TOO BAD");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,C,E,F,D,I,E,D");
			strcpy(p->moveNumbers,"4,5,8,11,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 360 :
			strcpy(p->name,"PACHIMAMA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,K,H,K,I");
			strcpy(p->moveNumbers,"6,5,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 361 :
			strcpy(p->name,"RECOVERY DRINK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,D,H,I,I");
			strcpy(p->moveNumbers,"5,9,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 362 :
			strcpy(p->name,"CRUXY E9");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,I,E,I,E,B,A");
			strcpy(p->moveNumbers,"5,9,9,7,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 363 :
			strcpy(p->name,"SHOULDER STRIKE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,G,H,I,I");
			strcpy(p->moveNumbers,"4,9,12,15,5,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 364 :
			strcpy(p->name,"UGLY LITTLE PROBLEM");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,D,B,B,A");
			strcpy(p->moveNumbers,"5,7,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 365 :
			strcpy(p->name,"BIG PAW");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,I,H,K,E,I");
			strcpy(p->moveNumbers,"6,5,9,12,16,9,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 366 :
			strcpy(p->name,"DEFYING GRAVITY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,I,F,H,E,D");
			strcpy(p->moveNumbers,"4,10,13,16,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 367 :
			strcpy(p->name,"THE ONLY LIGHT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,G,H,F,H,E,D");
			strcpy(p->moveNumbers,"6,6,8,11,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 368 :
			strcpy(p->name,"IN THE PINES");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,I,H,K,G,G,D");
			strcpy(p->moveNumbers,"4,8,10,12,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 369 :
			strcpy(p->name,"PUSSY DAVAILLE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,C,G,E,B,D");
			strcpy(p->moveNumbers,"6,5,8,9,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 37 :
			strcpy(p->name,"GOOD TIMES");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,E,F,C,D,A");
			strcpy(p->moveNumbers,"4,5,8,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 370 :
			strcpy(p->name,"THE POWER OF 9");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,H,E,E,E,I");
			strcpy(p->moveNumbers,"5,5,8,8,12,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 371 :
			strcpy(p->name,"LITTLEFINGER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,H,H,I");
			strcpy(p->moveNumbers,"4,8,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 372 :
			strcpy(p->name,"BIOGRAPHIE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,K,H,H,E,D");
			strcpy(p->moveNumbers,"6,5,9,12,16,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 373 :
			strcpy(p->name,"CORNALBA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,H,H,J,K,I");
			strcpy(p->moveNumbers,"5,6,8,12,12,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 374 :
			strcpy(p->name,"OMBRA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,F,E,G,D");
			strcpy(p->moveNumbers,"5,8,8,11,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 375 :
			strcpy(p->name,"COBRA REALE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,B,E,A");
			strcpy(p->moveNumbers,"4,6,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 376 :
			strcpy(p->name,"THE PINCH OF DEATH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,D,D,A");
			strcpy(p->moveNumbers,"4,7,10,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 377 :
			strcpy(p->name,"THE FUNERAL (RIP PINCH)");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,D,G,I");
			strcpy(p->moveNumbers,"4,7,10,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 378 :
			strcpy(p->name,"THE PROCESS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,K,J,G,K,H,D");
			strcpy(p->moveNumbers,"5,6,9,13,17,16,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 379 :
			strcpy(p->name,"LAST MOMENT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,I,G,I");
			strcpy(p->moveNumbers,"4,8,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 38 :
			strcpy(p->name,"DRAGONS DEN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,K,H,J,G,I");
			strcpy(p->moveNumbers,"5,6,9,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 380 :
			strcpy(p->name,"WITNESS THE FITNESS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,B,E,B,E,D");
			strcpy(p->moveNumbers,"4,7,10,12,15,6,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 381 :
			strcpy(p->name,"VASIL VASIL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,E,J,H,I");
			strcpy(p->moveNumbers,"4,7,9,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 382 :
			strcpy(p->name,"THE GOLDEN GATE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,C,E,B,D");
			strcpy(p->moveNumbers,"5,8,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 383 :
			strcpy(p->name,"HOTEL SOPRAMONTE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,G,G,I");
			strcpy(p->moveNumbers,"4,8,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 384 :
			strcpy(p->name,"CASSIN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"B,C,E,B,E,A");
			strcpy(p->moveNumbers,"6,5,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 385 :
			strcpy(p->name,"YOUR LAST PIECE OF CHALK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,K,I,F,I");
			strcpy(p->moveNumbers,"4,8,12,9,14,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 386 :
			strcpy(p->name,"THE 45 SECRETS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,E,J,E,A,A");
			strcpy(p->moveNumbers,"4,8,8,7,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 387 :
			strcpy(p->name,"CLASSY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,F,C,D");
			strcpy(p->moveNumbers,"4,8,11,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 388 :
			strcpy(p->name,"BLACK BEAN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,H,K,E,I,J,I");
			strcpy(p->moveNumbers,"5,6,12,14,9,9,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 389 :
			strcpy(p->name,"IL DOMANI");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,E,H,E,I");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 39 :
			strcpy(p->name,"ONE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,C,E,I");
			strcpy(p->moveNumbers,"4,8,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 390 :
			strcpy(p->name,"LAPINERIE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,B,E,E,I");
			strcpy(p->moveNumbers,"5,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 391 :
			strcpy(p->name,"LE DOIGHT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,D,B,E,C,G,I");
			strcpy(p->moveNumbers,"5,6,7,10,12,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 392 :
			strcpy(p->name,"CHRIS THE STRONGEST");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,J,F,G,D");
			strcpy(p->moveNumbers,"4,5,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 393 :
			strcpy(p->name,"HYPNOTIZED MINDS");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"B,C,G,J,I,C,H,J,I");
			strcpy(p->moveNumbers,"6,5,9,12,15,8,8,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 394 :
			strcpy(p->name,"BLACK CAVIAR");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,E,A,A,H,F,D");
			strcpy(p->moveNumbers,"4,5,6,9,14,8,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 395 :
			strcpy(p->name,"BAGHEERA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,D,G,I,G,G,D");
			strcpy(p->moveNumbers,"5,7,9,14,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 396 :
			strcpy(p->name,"MADISH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,C,E,F,C,E,D");
			strcpy(p->moveNumbers,"6,5,8,11,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 397 :
			strcpy(p->name,"RAINING MEANS TRAINING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,I,H,H,I,D");
			strcpy(p->moveNumbers,"5,9,9,12,16,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 398 :
			strcpy(p->name,"LAST HOPE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,I,H,K,I");
			strcpy(p->moveNumbers,"5,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 399 :
			strcpy(p->name,"FREERIDER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,I,H,H,D");
			strcpy(p->moveNumbers,"5,8,9,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 4 :
			strcpy(p->name,"PROBLEM 12");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,K,H,G,B,A");
			strcpy(p->moveNumbers,"6,9,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 40 :
			strcpy(p->name,"SALAD NIGHTS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,E,K,H,I,E,D");
			strcpy(p->moveNumbers,"5,6,8,9,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 400 :
			strcpy(p->name,"HUBBLE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,I,H,K,I");
			strcpy(p->moveNumbers,"5,6,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 401 :
			strcpy(p->name,"IMPACT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,H,E,J,E,B,E,D");
			strcpy(p->moveNumbers,"4,8,8,7,12,15,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 402 :
			strcpy(p->name,"WEEL OF WOLVO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,H,F,H,G,I");
			strcpy(p->moveNumbers,"5,9,5,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 403 :
			strcpy(p->name,"(S)ENDING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,I,E,J,G,G,D");
			strcpy(p->moveNumbers,"5,7,9,12,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 404 :
			strcpy(p->name,"CHARGER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,E,E,B,D");
			strcpy(p->moveNumbers,"5,7,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 405 :
			strcpy(p->name,"CHAMONIX BAD DAY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,E,A,D");
			strcpy(p->moveNumbers,"5,8,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 406 :
			strcpy(p->name,"LAPPNOR");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,I,H,J,G,I");
			strcpy(p->moveNumbers,"5,8,9,12,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 407 :
			strcpy(p->name,"CHALK DUST");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,E,B,E,E,I");
			strcpy(p->moveNumbers,"5,6,8,10,12,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 408 :
			strcpy(p->name,"MAIDENATOR2");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,C,C,H,C,F,A,B,A");
			strcpy(p->moveNumbers,"4,5,8,8,13,11,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 409 :
			strcpy(p->name,"TURKMENISTAN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,I,J,E,H,D");
			strcpy(p->moveNumbers,"4,8,10,7,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 41 :
			strcpy(p->name,"LINK TO THE PAST");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,A,E,E,H,D");
			strcpy(p->moveNumbers,"5,6,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 410 :
			strcpy(p->name,"RASTAMAN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,C,F,C,E,A");
			strcpy(p->moveNumbers,"4,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 411 :
			strcpy(p->name,"ONE LINE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,H,K,E,I,J,I");
			strcpy(p->moveNumbers,"5,6,12,16,9,9,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 412 :
			strcpy(p->name,"PINCHY PINCH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,C,F,C,D,A");
			strcpy(p->moveNumbers,"5,8,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 413 :
			strcpy(p->name,"SOFT LIKE BUTTER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,I,H,J,E,G,D");
			strcpy(p->moveNumbers,"4,8,10,12,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 414 :
			strcpy(p->name,"LE VOYAGE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,E,A,C,D");
			strcpy(p->moveNumbers,"4,8,12,14,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 415 :
			strcpy(p->name,"SPAIN IN VAIN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,F,E,A,D");
			strcpy(p->moveNumbers,"5,8,11,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 416 :
			strcpy(p->name,"CHIVAS");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,F,A,A");
			strcpy(p->moveNumbers,"6,11,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 417 :
			strcpy(p->name,"REACH FOR THE SKY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,G,C,D");
			strcpy(p->moveNumbers,"4,8,9,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 418 :
			strcpy(p->name,"BO");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,I,G,I");
			strcpy(p->moveNumbers,"6,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 419 :
			strcpy(p->name,"BAMBA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,I,E,D");
			strcpy(p->moveNumbers,"5,10,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 42 :
			strcpy(p->name,"SUBMARINE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,E,E,I,I");
			strcpy(p->moveNumbers,"4,8,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 420 :
			strcpy(p->name,"JUMP MAN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,I,G,D,D");
			strcpy(p->moveNumbers,"5,10,9,15,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 421 :
			strcpy(p->name,"JUST JUMP AND PINCH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,F,A,D");
			strcpy(p->moveNumbers,"6,5,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 422 :
			strcpy(p->name,"REACHY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,D,D,A");
			strcpy(p->moveNumbers,"4,6,10,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 423 :
			strcpy(p->name,"POLARIS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,F,A,D");
			strcpy(p->moveNumbers,"4,8,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 424 :
			strcpy(p->name,"HOLE IN FOUR");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,G,B,D,A");
			strcpy(p->moveNumbers,"6,10,10,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 425 :
			strcpy(p->name,"BLACK PANTHER");
			p->moveSize = 13;
			strcpy(p->moveLetters ,"G,H,E,G,C,B,H,C,D,D,F,G,A");
			strcpy(p->moveNumbers,"4,5,8,9,16,15,8,13,11,15,11,6,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 426 :
			strcpy(p->name,"BIROBIDJAN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,C,E,A");
			strcpy(p->moveNumbers,"4,8,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 427 :
			strcpy(p->name,"MOLOTOV COCKTEASE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,G,I,G,K,I");
			strcpy(p->moveNumbers,"6,9,7,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 428 :
			strcpy(p->name,"LIZARD 3");
			p->moveSize = 12;
			strcpy(p->moveLetters ,"G,H,J,I,H,F,E,C,D,B,A,A");
			strcpy(p->moveNumbers,"4,5,5,10,10,11,12,13,15,15,9,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 429 :
			strcpy(p->name,"BIT OF SIDE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,C,D,A");
			strcpy(p->moveNumbers,"5,6,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 43 :
			strcpy(p->name,"BLACK CAT'S");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,D,J,I,I");
			strcpy(p->moveNumbers,"5,9,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 430 :
			strcpy(p->name,"BITE YOUR NAILS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,B,E,C,E,D");
			strcpy(p->moveNumbers,"4,6,9,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 431 :
			strcpy(p->name,"TE LA TAMALANCH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,G,D,D,A");
			strcpy(p->moveNumbers,"5,6,9,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 432 :
			strcpy(p->name,"MEH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,E,D,F,G,I");
			strcpy(p->moveNumbers,"5,6,8,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 433 :
			strcpy(p->name,"APEX");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,F,E,I");
			strcpy(p->moveNumbers,"6,11,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 434 :
			strcpy(p->name,"COMMITTING WARM UP");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,D,C,I,D");
			strcpy(p->moveNumbers,"4,6,10,11,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 435 :
			strcpy(p->name,"LAYBACK WARM UP");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,C,D,A,D");
			strcpy(p->moveNumbers,"4,6,10,13,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 436 :
			strcpy(p->name,"PINCH &AMP; REACH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,D,C,D,D");
			strcpy(p->moveNumbers,"4,6,10,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 437 :
			strcpy(p->name,"PINCH WARM UP");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,D,C,D,A,D");
			strcpy(p->moveNumbers,"4,6,10,11,13,15,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 438 :
			strcpy(p->name,"A SIDE OF FRIES?");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,E,E,G,I");
			strcpy(p->moveNumbers,"5,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 439 :
			strcpy(p->name,"HUFFING BUBBLES");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,F,B,D,E,A");
			strcpy(p->moveNumbers,"5,11,10,15,6,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 44 :
			strcpy(p->name,"ACG19");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,J,G,B,E,E,I,I");
			strcpy(p->moveNumbers,"6,5,9,10,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 440 :
			strcpy(p->name,"VITAMIN B12");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,A,F,B,E,I");
			strcpy(p->moveNumbers,"5,9,11,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 441 :
			strcpy(p->name,"FUDGE YEAH");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,G,H,G,H,G,I,H,I");
			strcpy(p->moveNumbers,"5,6,8,10,12,14,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 442 :
			strcpy(p->name,"SHARK FIN");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,H,C,G,D,H,G,C,I");
			strcpy(p->moveNumbers,"5,5,8,9,11,13,15,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 443 :
			strcpy(p->name,"WARM UP BB");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,G,E,G,D,G,D");
			strcpy(p->moveNumbers,"6,4,9,8,14,15,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 444 :
			strcpy(p->name,"VANDO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,G,D,D");
			strcpy(p->moveNumbers,"5,10,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 445 :
			strcpy(p->name,"SLING SHOT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,F,G,I");
			strcpy(p->moveNumbers,"4,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 446 :
			strcpy(p->name,"FROCENZO A ROCCAMORICE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,E,B,D,A");
			strcpy(p->moveNumbers,"6,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 447 :
			strcpy(p->name,"FINGERY BY NATURE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,G,B,E,D");
			strcpy(p->moveNumbers,"4,6,10,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 448 :
			strcpy(p->name,"QUARTER PAST MIDNIGHT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,G,F,J,G,I");
			strcpy(p->moveNumbers,"5,5,9,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 449 :
			strcpy(p->name,"RECHARGE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,G,G,A");
			strcpy(p->moveNumbers,"6,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 45 :
			strcpy(p->name,"TESS WIDE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,E,H,C,D,D");
			strcpy(p->moveNumbers,"5,6,8,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 450 :
			strcpy(p->name,"LOCK IT DOWN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,K,J,E,H,D");
			strcpy(p->moveNumbers,"5,9,12,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 451 :
			strcpy(p->name,"BOOTHY TOOTHY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"B,G,E,J,E,I");
			strcpy(p->moveNumbers,"6,6,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 452 :
			strcpy(p->name,"THE EASY EASY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,H,G,E,I");
			strcpy(p->moveNumbers,"6,10,14,8,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 453 :
			strcpy(p->name,"BLACKLISTED");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,G,C,D,A");
			strcpy(p->moveNumbers,"4,8,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 454 :
			strcpy(p->name,"BUMPIN GO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,H,I,G,I");
			strcpy(p->moveNumbers,"4,7,10,12,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 455 :
			strcpy(p->name,"DESERT ROSE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,G,J,G,I");
			strcpy(p->moveNumbers,"5,8,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 456 :
			strcpy(p->name,"CALL ME A FOOL WILL YOU?");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"G,G,J,G,I,J,H,G,F,E,I");
			strcpy(p->moveNumbers,"6,4,5,15,14,16,8,9,11,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 457 :
			strcpy(p->name,"GRAPE THIEF");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,G,G,I");
			strcpy(p->moveNumbers,"6,14,9,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 458 :
			strcpy(p->name,"SLUG TRAIL");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,G,E,F,A,A,E,A");
			strcpy(p->moveNumbers,"5,6,8,11,9,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 459 :
			strcpy(p->name,"CREAKY SQUEAKY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,B,E,B,E,F,H,D");
			strcpy(p->moveNumbers,"5,6,9,12,12,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 46 :
			strcpy(p->name,"LANKY BASTARD");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,I,H,K,E,D");
			strcpy(p->moveNumbers,"4,8,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 460 :
			strcpy(p->name,"TAKEOFF");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,H,G,I");
			strcpy(p->moveNumbers,"5,5,10,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 461 :
			strcpy(p->name,"WIND BENEATH MY WINGS");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"J,I,G,D");
			strcpy(p->moveNumbers,"5,9,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 462 :
			strcpy(p->name,"ELECTRIC HEEL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,G,E,C,D");
			strcpy(p->moveNumbers,"5,8,9,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 463 :
			strcpy(p->name,"GHASTLY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,H,K,J,K,E,G,D");
			strcpy(p->moveNumbers,"6,5,9,12,14,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 464 :
			strcpy(p->name,"ONE CRIMP");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,I,H,G,D,D");
			strcpy(p->moveNumbers,"5,8,9,12,15,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 465 :
			strcpy(p->name,"PICTURES ON MY PHONE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,E,H,C,I,G,I");
			strcpy(p->moveNumbers,"5,5,8,10,13,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 466 :
			strcpy(p->name,"NOT A FIRSTIMER");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"J,E,H,E,C,I,G,G,J,I");
			strcpy(p->moveNumbers,"5,6,10,8,13,14,15,17,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 467 :
			strcpy(p->name,"APPLE PIE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,I,F,J,I");
			strcpy(p->moveNumbers,"4,8,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 468 :
			strcpy(p->name,"HIGH STEP IF YOU CAN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,B,E,E,B,E,D");
			strcpy(p->moveNumbers,"4,5,10,8,12,15,6,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 469 :
			strcpy(p->name,"TVÅ");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,H,H,E,E,G,D,D");
			strcpy(p->moveNumbers,"4,10,8,8,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 47 :
			strcpy(p->name,"ACG21");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,E,I,G,B,E,C,A");
			strcpy(p->moveNumbers,"5,6,10,10,10,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 470 :
			strcpy(p->name,"BLACK WINGS");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,D,C,H,C,E,H,I");
			strcpy(p->moveNumbers,"5,6,15,8,10,13,16,5,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 471 :
			strcpy(p->name,"INTERESTING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,H,G,H,E,I");
			strcpy(p->moveNumbers,"5,5,8,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 472 :
			strcpy(p->name,"POWER HUNGRY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,G,K,D,I,D");
			strcpy(p->moveNumbers,"5,4,9,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 473 :
			strcpy(p->name,"VALGULIOUS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,C,G,J,J,I,I");
			strcpy(p->moveNumbers,"5,8,9,5,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 474 :
			strcpy(p->name,"GS");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"E,H,H,H,F,C,E,A,E,A");
			strcpy(p->moveNumbers,"6,5,8,10,11,13,14,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 475 :
			strcpy(p->name,"ANY GIVEN DAY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,C,D,D");
			strcpy(p->moveNumbers,"4,8,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 476 :
			strcpy(p->name,"BASIC B*TCH");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"J,H,C,D");
			strcpy(p->moveNumbers,"5,10,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 477 :
			strcpy(p->name,"SLIGHTLY LESS BASIC B*TCH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,C,G,I");
			strcpy(p->moveNumbers,"5,10,13,17,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 478 :
			strcpy(p->name,"MO'RON");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,E,A,E,E,G,D");
			strcpy(p->moveNumbers,"6,4,8,9,12,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 479 :
			strcpy(p->name,"RONSTOPPABLE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,E,B,D");
			strcpy(p->moveNumbers,"4,8,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 48 :
			strcpy(p->name,"KANG MINA IOI");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,E,B,B,A,D,E,I");
			strcpy(p->moveNumbers,"6,9,10,12,14,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 480 :
			strcpy(p->name,"TESSME 1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,F,J,H,I");
			strcpy(p->moveNumbers,"5,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 481 :
			strcpy(p->name,"TESSME 3");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,I,E,E,I");
			strcpy(p->moveNumbers,"5,8,14,12,9,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 482 :
			strcpy(p->name,"TESSME 4");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,I,D,I");
			strcpy(p->moveNumbers,"5,8,12,14,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 483 :
			strcpy(p->name,"KHAZAD DUM");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,F,C,D,A");
			strcpy(p->moveNumbers,"5,9,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 484 :
			strcpy(p->name,"BLACK PHENOMENON");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,B,G,B,D");
			strcpy(p->moveNumbers,"4,6,6,10,10,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "8A");
			break;
		case 485 :
			strcpy(p->name,"OKLAHOMA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,G,D,A");
			strcpy(p->moveNumbers,"5,10,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 486 :
			strcpy(p->name,"CAPTAIN AUBREY VAR.");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,H,E,I,I");
			strcpy(p->moveNumbers,"5,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 487 :
			strcpy(p->name,"MATCHCATCH");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,I,J,G,I");
			strcpy(p->moveNumbers,"5,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 488 :
			strcpy(p->name,"KKSBSKAN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,D,C,I");
			strcpy(p->moveNumbers,"4,8,11,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 489 :
			strcpy(p->name,"ALLES IST MÖGLICH");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,F,E,D");
			strcpy(p->moveNumbers,"6,11,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 49 :
			strcpy(p->name,"USE THE BIG ONES");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,G,F,C,D,A");
			strcpy(p->moveNumbers,"4,8,9,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 490 :
			strcpy(p->name,"CRONENBERG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,A,E,E,I");
			strcpy(p->moveNumbers,"4,8,9,9,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 491 :
			strcpy(p->name,"A SAFE PLACE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,G,D,G,E,D");
			strcpy(p->moveNumbers,"5,9,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 492 :
			strcpy(p->name,"GNOCCHE AL RAGÙ");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,H,K,I");
			strcpy(p->moveNumbers,"4,7,10,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 493 :
			strcpy(p->name,"BRETT'S PROBLEM");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,B,G,B,C,D");
			strcpy(p->moveNumbers,"4,6,10,10,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 494 :
			strcpy(p->name,"THE TROLLOC WARS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,J,F,A,D");
			strcpy(p->moveNumbers,"6,5,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 495 :
			strcpy(p->name,"SO YOU THINK YOU CAN DYNO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,C,H,C,I");
			strcpy(p->moveNumbers,"4,5,13,8,8,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 496 :
			strcpy(p->name,"MATTS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,I,K,I,I");
			strcpy(p->moveNumbers,"4,11,7,14,9,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "8B+");
			break;
		case 497 :
			strcpy(p->name,"FIRSTEASY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,C,E,D");
			strcpy(p->moveNumbers,"4,8,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 498 :
			strcpy(p->name,"KAKAKAKA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,F,I,D");
			strcpy(p->moveNumbers,"5,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 499 :
			strcpy(p->name,"FLYING  BUDDAH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,G,F,I,D");
			strcpy(p->moveNumbers,"6,5,9,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 5 :
			strcpy(p->name,"PROBLEM 17");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,B,E,E,G,C,A");
			strcpy(p->moveNumbers,"5,6,9,12,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 50 :
			strcpy(p->name,"MATCH GAME");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,G,I,G,I");
			strcpy(p->moveNumbers,"4,6,10,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 500 :
			strcpy(p->name,"FROSTED AFRO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,F,E,J,D");
			strcpy(p->moveNumbers,"4,6,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 501 :
			strcpy(p->name,"JH 1.0");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,C,E,B,G,I");
			strcpy(p->moveNumbers,"5,8,8,12,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 502 :
			strcpy(p->name,"FOLLIA1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,H,G,H,G,I");
			strcpy(p->moveNumbers,"4,6,8,10,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 503 :
			strcpy(p->name,"TRYTRY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,C,B,C,C,A");
			strcpy(p->moveNumbers,"4,5,8,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 504 :
			strcpy(p->name,"TRYTRYTRY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,C,E,G,D");
			strcpy(p->moveNumbers,"5,6,13,8,9,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 505 :
			strcpy(p->name,"OKTRY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,E,C,C,D");
			strcpy(p->moveNumbers,"5,6,8,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 506 :
			strcpy(p->name,"RON DUC DONG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,G,E,I,E,D");
			strcpy(p->moveNumbers,"5,5,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 507 :
			strcpy(p->name,"ENRON");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,B,E,B,D");
			strcpy(p->moveNumbers,"4,6,9,12,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 508 :
			strcpy(p->name,"BOCHANPOWER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,G,E,G,D");
			strcpy(p->moveNumbers,"4,9,8,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 509 :
			strcpy(p->name,"FROGGERTON GOES TO SCHOOL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,D,C,A,A");
			strcpy(p->moveNumbers,"4,8,11,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 51 :
			strcpy(p->name,"BLACK HOLE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,I,J,G,G,D");
			strcpy(p->moveNumbers,"4,7,10,13,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 510 :
			strcpy(p->name,"FAMILY MAN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,D,E,E,H,I,J");
			strcpy(p->moveNumbers,"15,18,12,14,5,10,5");
			strcpy(p->startFinish, "d,e,d,d,s,d,s");
			strcpy(p->grade, "6C");
			break;
		case 511 :
			strcpy(p->name,"TEST111");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,I,H,F,E,D,A");
			strcpy(p->moveNumbers,"5,7,8,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 512 :
			strcpy(p->name,"PEAS AND GRAVY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,H,C,D,A");
			strcpy(p->moveNumbers,"6,5,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 513 :
			strcpy(p->name,"THE LAST PEA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,E,B,E,C,D,A");
			strcpy(p->moveNumbers,"6,8,10,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 514 :
			strcpy(p->name,"NUN");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"C,E,C,D");
			strcpy(p->moveNumbers,"5,8,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 515 :
			strcpy(p->name,"FUNNY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,I,G,I");
			strcpy(p->moveNumbers,"4,8,7,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 516 :
			strcpy(p->name,"I'M RON BURGUNDY?");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,E,F,D,A");
			strcpy(p->moveNumbers,"4,9,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 517 :
			strcpy(p->name,"몰라여");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,A,G,C,E,I");
			strcpy(p->moveNumbers,"6,5,9,9,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 518 :
			strcpy(p->name,"SPALLA&AMP;PIATTA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,K,F,G,D,D");
			strcpy(p->moveNumbers,"4,5,9,11,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 519 :
			strcpy(p->name,"SUCK IT ELLIOTT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,D,D,D");
			strcpy(p->moveNumbers,"4,6,8,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 52 :
			strcpy(p->name,"FA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,H,E,D");
			strcpy(p->moveNumbers,"4,8,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 520 :
			strcpy(p->name,"SIRIUS BLACK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,H,E,F,J,C,D");
			strcpy(p->moveNumbers,"5,5,9,11,5,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 521 :
			strcpy(p->name,"REAL SIRIUS BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,E,F,C,D");
			strcpy(p->moveNumbers,"5,6,9,11,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 522 :
			strcpy(p->name,"THE REAL SIRIUS BLACK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,J,E,F,C,D");
			strcpy(p->moveNumbers,"5,6,5,9,11,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 523 :
			strcpy(p->name,"BACK IN ACTION");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,E,B,E,C,E,D");
			strcpy(p->moveNumbers,"5,6,8,10,12,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 524 :
			strcpy(p->name,"MÄX 2");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"J,G,H,G,F,C,D,A,C,A,A");
			strcpy(p->moveNumbers,"5,4,8,9,11,13,15,9,5,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 525 :
			strcpy(p->name,"FIVEB PROJ 2");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"G,J,J,H,H,F,J,G,G,D");
			strcpy(p->moveNumbers,"4,5,7,8,10,11,12,15,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 526 :
			strcpy(p->name,"BOOKA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,H,E,E,A,D");
			strcpy(p->moveNumbers,"5,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 527 :
			strcpy(p->name,"LOOK UP TO ME");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,G,G,D");
			strcpy(p->moveNumbers,"5,6,10,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 528 :
			strcpy(p->name,"BUNNY GRAHAMS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,H,J,K,I,H");
			strcpy(p->moveNumbers,"5,6,12,13,16,18,8");
			strcpy(p->startFinish, "s,s,d,d,d,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 529 :
			strcpy(p->name,"SNEAKER JUICE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,K,H,I,F,I");
			strcpy(p->moveNumbers,"5,6,14,16,18,11,10");
			strcpy(p->startFinish, "s,d,d,d,e,d,d");
			strcpy(p->grade, "6B+");
			break;
		case 53 :
			strcpy(p->name,"CALLA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,H,F,G,E,I");
			strcpy(p->moveNumbers,"4,8,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 530 :
			strcpy(p->name,"MOTIVATION");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,E,E,B,B,D");
			strcpy(p->moveNumbers,"5,5,8,12,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 531 :
			strcpy(p->name,"GET WITH IT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,B,A,E,D,A");
			strcpy(p->moveNumbers,"6,12,14,8,18,9");
			strcpy(p->startFinish, "s,d,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 532 :
			strcpy(p->name,"BRICK TAMLAND");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,G,J,H,G,D,G");
			strcpy(p->moveNumbers,"6,9,10,5,12,17,18,15");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,d");
			strcpy(p->grade, "6C+");
			break;
		case 533 :
			strcpy(p->name,"THREE OF CUPS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,C,F,A,D");
			strcpy(p->moveNumbers,"5,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 534 :
			strcpy(p->name,"SNEAKER JUICE DEUX");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,I,F,K,I");
			strcpy(p->moveNumbers,"5,8,10,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 535 :
			strcpy(p->name,"HEART OF THE SEA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,A,E,B,F,A,D");
			strcpy(p->moveNumbers,"5,9,9,6,11,14,18");
			strcpy(p->startFinish, "s,d,d,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 536 :
			strcpy(p->name,"ONE DAY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,E,B,H,C,I");
			strcpy(p->moveNumbers,"4,8,9,10,13,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 537 :
			strcpy(p->name,"ZIO BENNY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,H,E,D");
			strcpy(p->moveNumbers,"5,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 538 :
			strcpy(p->name,"THE PEOPLE'S HEEL HOOK");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,E,E,I");
			strcpy(p->moveNumbers,"4,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 539 :
			strcpy(p->name,"SOFA KING JUGGY");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,H,H,H,D");
			strcpy(p->moveNumbers,"4,10,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 54 :
			strcpy(p->name,"DU SPICCI");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,I,D,E,D");
			strcpy(p->moveNumbers,"6,5,10,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 540 :
			strcpy(p->name,"SOFA KING SNAKED");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,E,D,I,D");
			strcpy(p->moveNumbers,"5,8,12,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 541 :
			strcpy(p->name,"HEAVY LIFTING");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,G,H,G,D,D");
			strcpy(p->moveNumbers,"6,6,10,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 542 :
			strcpy(p->name,"UNSULLIED");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,G,C,D");
			strcpy(p->moveNumbers,"6,10,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 543 :
			strcpy(p->name,"SLIPPERY WHEN WET");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,H,G,D,D,A");
			strcpy(p->moveNumbers,"4,8,10,14,15,18,18");
			strcpy(p->startFinish, "s,d,d,d,d,e,e");
			strcpy(p->grade, "7A");
			break;
		case 544 :
			strcpy(p->name,"BLACK.HO");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"H,C,A,E,I,A,E,G,H");
			strcpy(p->moveNumbers,"5,5,9,9,18,14,16,17,12");
			strcpy(p->startFinish, "s,d,d,d,e,d,d,d,d");
			strcpy(p->grade, "7C");
			break;
		case 545 :
			strcpy(p->name,"SZECHUAN");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,C,A,C,E,A,D,G,I");
			strcpy(p->moveNumbers,"4,8,9,5,12,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 546 :
			strcpy(p->name,"FLOOZY DOO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,G,F,A,C,A,D");
			strcpy(p->moveNumbers,"5,8,9,11,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 547 :
			strcpy(p->name,"HOG TROUGH");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,G,C,D,D");
			strcpy(p->moveNumbers,"4,7,9,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 548 :
			strcpy(p->name,"KILL HIM YOUR LEGS");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,H,C,I");
			strcpy(p->moveNumbers,"4,10,13,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 549 :
			strcpy(p->name,"LITTLE MAN ON CAMPUS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,B,F,H,K,I");
			strcpy(p->moveNumbers,"4,6,11,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 55 :
			strcpy(p->name,"BOGLI FOR PRESIDENT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,I,D,D,A,A");
			strcpy(p->moveNumbers,"6,5,9,11,15,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 550 :
			strcpy(p->name,"XCRAG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,G,C,E,I");
			strcpy(p->moveNumbers,"4,5,8,10,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 551 :
			strcpy(p->name,"RIESKO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,K,F,E,A");
			strcpy(p->moveNumbers,"4,6,9,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 552 :
			strcpy(p->name,"KIWAK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,H,E,G,D,A");
			strcpy(p->moveNumbers,"4,6,12,14,9,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 553 :
			strcpy(p->name,"BLACK MARINO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,H,C,E,D");
			strcpy(p->moveNumbers,"6,5,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 554 :
			strcpy(p->name,"JUDEMANDUD");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,E,E,A,B,B,A");
			strcpy(p->moveNumbers,"5,9,6,9,12,15,18");
			strcpy(p->startFinish, "s,d,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 555 :
			strcpy(p->name,"ALONE IN THE DARK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,I,G,I,I");
			strcpy(p->moveNumbers,"4,8,10,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 556 :
			strcpy(p->name,"WORLD CUP");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,G,H,H,I,J,G,J,I");
			strcpy(p->moveNumbers,"5,6,5,10,10,13,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 557 :
			strcpy(p->name,"BEST PROBLEM 567");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,E,H,E,A,G");
			strcpy(p->moveNumbers,"6,8,13,14,18,4");
			strcpy(p->startFinish, "d,d,d,d,e,s");
			strcpy(p->grade, "6C");
			break;
		case 558 :
			strcpy(p->name,"YAYYY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,H,G,H,G,H,I");
			strcpy(p->moveNumbers,"4,5,8,9,12,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 559 :
			strcpy(p->name,"WOOO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,H,G,F,H,G,I");
			strcpy(p->moveNumbers,"4,5,8,9,13,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 56 :
			strcpy(p->name,"SMOKING AREA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,E,E,I");
			strcpy(p->moveNumbers,"4,8,8,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 560 :
			strcpy(p->name,"LORD VADER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,C,H,F,E,G,D,D");
			strcpy(p->moveNumbers,"5,8,10,13,6,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 561 :
			strcpy(p->name,"BLACK IS WHERE YOU AT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,E,E,B,D,B,E");
			strcpy(p->moveNumbers,"6,4,9,12,15,18,12,16");
			strcpy(p->startFinish, "s,s,d,d,d,e,d,d");
			strcpy(p->grade, "7A");
			break;
		case 562 :
			strcpy(p->name,"WHAT IS YOUR PROBLEM???");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,G,E,D,F,I,F,I");
			strcpy(p->moveNumbers,"5,6,8,11,11,14,13,18");
			strcpy(p->startFinish, "d,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 563 :
			strcpy(p->name,"FIRST SNOW");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"B,B,B,B,D");
			strcpy(p->moveNumbers,"6,10,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 564 :
			strcpy(p->name,"TAR");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,C,D,B,D,I,H,E,F");
			strcpy(p->moveNumbers,"4,13,15,15,18,7,8,9,11");
			strcpy(p->startFinish, "s,d,d,d,e,d,d,d,d");
			strcpy(p->grade, "7A+");
			break;
		case 565 :
			strcpy(p->name,"HOONGA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"B,D,B,C,D,H,G,H,I");
			strcpy(p->moveNumbers,"6,7,10,5,11,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 566 :
			strcpy(p->name,"PROBLEM#148");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"H,I,E,F,E,I,D,E,B,A");
			strcpy(p->moveNumbers,"5,7,8,11,12,14,15,16,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 567 :
			strcpy(p->name,"JAM FUNK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"B,G,H,B,C,D,B,D");
			strcpy(p->moveNumbers,"10,10,13,12,16,18,6,7");
			strcpy(p->startFinish, "d,d,d,d,d,e,s,d");
			strcpy(p->grade, "8A");
			break;
		case 568 :
			strcpy(p->name,"STRAIGHTER THAN YOU");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,H,K,I");
			strcpy(p->moveNumbers,"5,9,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 569 :
			strcpy(p->name,"KYLO REN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,E,F,G,E,I,E");
			strcpy(p->moveNumbers,"5,5,8,11,14,16,18,9");
			strcpy(p->startFinish, "s,s,d,d,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 57 :
			strcpy(p->name,"COGUARO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,E,H,G,I");
			strcpy(p->moveNumbers,"6,8,8,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 570 :
			strcpy(p->name,"MALEDICTION");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,F,B,G,I,D");
			strcpy(p->moveNumbers,"6,11,12,15,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 571 :
			strcpy(p->name,"FUN1");
			p->moveSize = 14;
			strcpy(p->moveLetters ,"G,C,E,C,E,D,F,H,F,I,I,G,H,I");
			strcpy(p->moveNumbers,"4,5,8,8,9,11,11,12,13,14,15,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 572 :
			strcpy(p->name,"IGNORANT STYLE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,E,F,I,I");
			strcpy(p->moveNumbers,"5,6,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 573 :
			strcpy(p->name,"EDITHS BOULDER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,I,E,J,D,E,A");
			strcpy(p->moveNumbers,"12,7,8,5,15,16,18");
			strcpy(p->startFinish, "d,d,d,s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 574 :
			strcpy(p->name,"HOONGA (REMAKE)");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"B,C,D,B,E,D,H,G,H,I");
			strcpy(p->moveNumbers,"6,5,7,10,12,11,13,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 575 :
			strcpy(p->name,"SILENT MEDIA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,H,G,I,H,I");
			strcpy(p->moveNumbers,"5,6,10,9,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 576 :
			strcpy(p->name,"UPRISING");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,H,G,E,F,G,H,I");
			strcpy(p->moveNumbers,"4,5,8,9,12,13,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 577 :
			strcpy(p->name,"EASY GO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,E,H,F,C,D");
			strcpy(p->moveNumbers,"5,6,8,8,11,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 578 :
			strcpy(p->name,"LEAVE OR FOLLOW");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,J,I,J,G,I");
			strcpy(p->moveNumbers,"5,7,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 579 :
			strcpy(p->name,"JUDGEMENT RAINS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,E,H,H,K,I");
			strcpy(p->moveNumbers,"5,6,8,10,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 58 :
			strcpy(p->name,"UNDERTAKER");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,E,B,E,D");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 580 :
			strcpy(p->name,"FOR BEGINNERS - 3");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,I,F,I,H,E,D");
			strcpy(p->moveNumbers,"8,4,10,13,14,12,16,18");
			strcpy(p->startFinish, "d,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 581 :
			strcpy(p->name,"LOST DAY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,H,C,D,D");
			strcpy(p->moveNumbers,"6,5,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 582 :
			strcpy(p->name,"GLUTAMATO MONOSODICO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,G,C,B,E,D");
			strcpy(p->moveNumbers,"5,4,9,8,12,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 583 :
			strcpy(p->name,"LA BANDA DEL PATIO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,G,C,B,E,A,D");
			strcpy(p->moveNumbers,"4,5,9,8,12,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 584 :
			strcpy(p->name,"OACHKAZL");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,G,B,C,D,D,C");
			strcpy(p->moveNumbers,"5,8,9,12,16,18,15,8");
			strcpy(p->startFinish, "s,d,d,d,d,e,d,d");
			strcpy(p->grade, "7A+");
			break;
		case 585 :
			strcpy(p->name,"THE WALL 1");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"B,G,G,B,F,F,I,E,I");
			strcpy(p->moveNumbers,"6,4,9,10,11,13,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 586 :
			strcpy(p->name,"ET");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,E,B,E,E,I");
			strcpy(p->moveNumbers,"5,6,8,10,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 587 :
			strcpy(p->name,"SOFA 3");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"B,G,H,J,I");
			strcpy(p->moveNumbers,"6,9,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 588 :
			strcpy(p->name,"KLIK IT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,F,A,D");
			strcpy(p->moveNumbers,"4,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 589 :
			strcpy(p->name,"THE BLACK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,B,C,H,K,I");
			strcpy(p->moveNumbers,"4,7,10,13,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 59 :
			strcpy(p->name,"REALE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,C,F,G,K,I");
			strcpy(p->moveNumbers,"4,5,8,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 590 :
			strcpy(p->name,"NEW");
			p->moveSize = 14;
			strcpy(p->moveLetters ,"G,H,G,I,H,G,H,I,H,H,I,I,I,J");
			strcpy(p->moveNumbers,"4,5,6,7,8,9,10,10,12,13,14,15,18,16");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,d,d,d,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 591 :
			strcpy(p->name,"I");
			p->moveSize = 14;
			strcpy(p->moveLetters ,"G,E,H,J,G,G,J,J,I,I,E,H,E,D");
			strcpy(p->moveNumbers,"14,14,12,12,4,9,7,5,7,9,8,5,16,18");
			strcpy(p->startFinish, "d,d,d,d,s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 592 :
			strcpy(p->name,"III");
			p->moveSize = 14;
			strcpy(p->moveLetters ,"J,E,D,G,E,C,B,C,H,H,H,K,J,J");
			strcpy(p->moveNumbers,"16,16,18,9,8,8,6,5,10,16,12,14,12,7");
			strcpy(p->startFinish, "d,d,e,d,d,d,s,s,d,d,d,d,d,d");
			strcpy(p->grade, "6B+");
			break;
		case 593 :
			strcpy(p->name,"IV");
			p->moveSize = 12;
			strcpy(p->moveLetters ,"H,C,E,E,A,A,B,A,D,C,J,C");
			strcpy(p->moveNumbers,"8,8,6,9,9,14,15,18,11,13,5,5");
			strcpy(p->startFinish, "d,d,s,d,d,d,d,e,d,d,s,d");
			strcpy(p->grade, "6B+");
			break;
		case 594 :
			strcpy(p->name,"DIAGO");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,G,H,E,F,D,A");
			strcpy(p->moveNumbers,"5,4,9,8,12,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 595 :
			strcpy(p->name,"LAST PEA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,B,E,B,E,D,I,E,I");
			strcpy(p->moveNumbers,"4,6,8,10,12,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 596 :
			strcpy(p->name,"SQUASHED PEAS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,G,I,H,I,E,G,D");
			strcpy(p->moveNumbers,"5,6,10,12,14,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 597 :
			strcpy(p->name,"ROLLING PEAS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,C,D,D");
			strcpy(p->moveNumbers,"4,6,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 598 :
			strcpy(p->name,"BLACK 2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,G,H,E,G,D");
			strcpy(p->moveNumbers,"4,7,10,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 599 :
			strcpy(p->name,"BROKEN RECORD");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,C,E,A,D,A");
			strcpy(p->moveNumbers,"4,8,8,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 6 :
			strcpy(p->name,"PROBLEM 19");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,D,E,F,G,H,A");
			strcpy(p->moveNumbers,"5,15,12,11,9,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 60 :
			strcpy(p->name,"NANO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,I,H,K,I");
			strcpy(p->moveNumbers,"6,10,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 600 :
			strcpy(p->name,"MBT1RIGHT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,G,G,D,I");
			strcpy(p->moveNumbers,"4,9,14,11,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 601 :
			strcpy(p->name,"BLACK #268162639");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,I,H,J,D");
			strcpy(p->moveNumbers,"4,10,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 602 :
			strcpy(p->name,"DROPPIN SOAP");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,E,H,I");
			strcpy(p->moveNumbers,"5,9,14,12,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 603 :
			strcpy(p->name,"SIDEPULL SIDEWALK");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"G,J,G,H,G,H,F,I,G,I");
			strcpy(p->moveNumbers,"4,5,6,8,9,10,11,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 604 :
			strcpy(p->name,"ITIM");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,I,E,E,G,E,G");
			strcpy(p->moveNumbers,"13,18,9,16,14,8,4");
			strcpy(p->startFinish, "d,e,d,d,d,d,s");
			strcpy(p->grade, "7A+");
			break;
		case 605 :
			strcpy(p->name,"MSFTS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,G,E,J,J,H,I");
			strcpy(p->moveNumbers,"5,9,12,5,13,16,18");
			strcpy(p->startFinish, "s,d,d,s,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 606 :
			strcpy(p->name,"FAT 'N WEAK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,E,A,E,A");
			strcpy(p->moveNumbers,"4,8,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 607 :
			strcpy(p->name,"SNAP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"B,D,B,E,A,D");
			strcpy(p->moveNumbers,"6,7,10,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 608 :
			strcpy(p->name,"LUCID NONSENSE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,D,E,B,I");
			strcpy(p->moveNumbers,"4,8,15,16,10,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 609 :
			strcpy(p->name,"DON'T BLACKOUT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,F,A,D,H,A");
			strcpy(p->moveNumbers,"4,6,11,9,15,10,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 61 :
			strcpy(p->name,"LADYBUG RIGHT VAR");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,H,C,F,A,E,I");
			strcpy(p->moveNumbers,"6,5,10,13,11,9,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 610 :
			strcpy(p->name,"CHINGA SU ES TO MADRE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,F,B,A,B");
			strcpy(p->moveNumbers,"6,11,12,18,15");
			strcpy(p->startFinish, "s,d,d,e,d");
			strcpy(p->grade, "7C");
			break;
		case 611 :
			strcpy(p->name,"TWO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,E,F,E,I,I");
			strcpy(p->moveNumbers,"5,6,8,11,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 612 :
			strcpy(p->name,"BILLIONS AND BILLIONS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,K,H,G,D");
			strcpy(p->moveNumbers,"4,5,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 613 :
			strcpy(p->name,"INTO THE SHADOW DUST");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,F,C,G,G,I");
			strcpy(p->moveNumbers,"4,8,8,11,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 614 :
			strcpy(p->name,"GRO1");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,H,C,E,D");
			strcpy(p->moveNumbers,"4,8,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 615 :
			strcpy(p->name,"THREE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,C,E,A");
			strcpy(p->moveNumbers,"6,5,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 616 :
			strcpy(p->name,"DUST IN THE WIND");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,H,E,G,D");
			strcpy(p->moveNumbers,"5,6,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 617 :
			strcpy(p->name,"EM'S BUNNY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,H,I,E,I");
			strcpy(p->moveNumbers,"4,7,8,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 618 :
			strcpy(p->name,"DUDDY QUALIFIED");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,F,A,D,E,I");
			strcpy(p->moveNumbers,"5,9,11,14,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 619 :
			strcpy(p->name,"A MATCH MADE IN HEAVEN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,F,D,D");
			strcpy(p->moveNumbers,"4,6,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 62 :
			strcpy(p->name,"GRÜMPU-TURNIER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,A,E,A,E,A");
			strcpy(p->moveNumbers,"4,9,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 620 :
			strcpy(p->name,"CHEESE AND PICKLE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,E,B,E,A,E,A");
			strcpy(p->moveNumbers,"6,9,10,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 621 :
			strcpy(p->name,"GJ2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,H,F,C,D,A");
			strcpy(p->moveNumbers,"4,8,8,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 622 :
			strcpy(p->name,"WOA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,E,D,F,G,I");
			strcpy(p->moveNumbers,"4,5,9,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 623 :
			strcpy(p->name,"ATLANTIC SEA NETTLE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,C,F,B,D,A");
			strcpy(p->moveNumbers,"6,8,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 624 :
			strcpy(p->name,"5WL^4/(384EI)");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,F,A,B,A");
			strcpy(p->moveNumbers,"5,8,11,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 625 :
			strcpy(p->name,"MEK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,H,D,B,D,G,E,I");
			strcpy(p->moveNumbers,"10,13,11,6,7,4,16,18");
			strcpy(p->startFinish, "d,d,d,s,d,s,d,e");
			strcpy(p->grade, "7A");
			break;
		case 626 :
			strcpy(p->name,"LOPPULÄMPPÄ");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,E,D,G,I");
			strcpy(p->moveNumbers,"5,8,12,11,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 627 :
			strcpy(p->name,"COSTA NEGRA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,E,B,E,C,I,G,I");
			strcpy(p->moveNumbers,"4,6,8,10,12,13,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 628 :
			strcpy(p->name,"SALMON SNAKE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,F,D,A");
			strcpy(p->moveNumbers,"5,9,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 629 :
			strcpy(p->name,"FOUR");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,G,E,D,I,H,I");
			strcpy(p->moveNumbers,"5,4,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 63 :
			strcpy(p->name,"KICKER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,D,E,B,E,D");
			strcpy(p->moveNumbers,"4,7,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 630 :
			strcpy(p->name,"CAN’T REMEMBER THE NAME");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,E,I,G,D,E,A");
			strcpy(p->moveNumbers,"6,8,10,6,11,16,18");
			strcpy(p->startFinish, "s,d,d,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 631 :
			strcpy(p->name,"FREAKING MAIMED");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,E,C,G,H,I");
			strcpy(p->moveNumbers,"5,9,9,13,17,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 632 :
			strcpy(p->name,"BLACKSWING");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,B,A,D,C,E,D");
			strcpy(p->moveNumbers,"5,6,9,11,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "8A");
			break;
		case 633 :
			strcpy(p->name,"MÖRCSÖG");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,F,E,G,D");
			strcpy(p->moveNumbers,"5,8,11,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 634 :
			strcpy(p->name,"OLD SCHOOL BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,I,G,G,D");
			strcpy(p->moveNumbers,"4,5,10,14,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 635 :
			strcpy(p->name,"PINCH THE PINCH");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"J,H,G,D");
			strcpy(p->moveNumbers,"5,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 636 :
			strcpy(p->name,"THE BLACK MAMBA 🐍");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"G,E,G,C,B,E,C,D,B,D,A");
			strcpy(p->moveNumbers,"4,6,9,8,10,12,13,15,15,18,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e,e");
			strcpy(p->grade, "6B+");
			break;
		case 637 :
			strcpy(p->name,"SCIENTIFIC PROGRESS");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,C,F,A,A");
			strcpy(p->moveNumbers,"6,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 638 :
			strcpy(p->name,"YET ANOTHER WASTE OF SKIN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,E,D,A");
			strcpy(p->moveNumbers,"5,10,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 639 :
			strcpy(p->name,"BLACK-OUT");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,E,A,F,B,A,E,D");
			strcpy(p->moveNumbers,"4,6,8,9,11,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 64 :
			strcpy(p->name,"KICKER 2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,E,B,G,E,I");
			strcpy(p->moveNumbers,"4,7,9,12,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 640 :
			strcpy(p->name,"BLACK PROJECT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,H,H,H,I");
			strcpy(p->moveNumbers,"5,10,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 641 :
			strcpy(p->name,"TRIO TERNURA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,H,E,A,A");
			strcpy(p->moveNumbers,"5,6,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 642 :
			strcpy(p->name,"CK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,J,F,G,D");
			strcpy(p->moveNumbers,"5,8,12,13,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 643 :
			strcpy(p->name,"PINPANPUN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,C,E,A,E,A,D");
			strcpy(p->moveNumbers,"6,5,9,9,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 644 :
			strcpy(p->name,"DARK DAYS");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"B,D,B,E,D,I,K,I,I");
			strcpy(p->moveNumbers,"6,7,10,14,15,15,14,18,7");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e,d");
			strcpy(p->grade, "7A+");
			break;
		case 645 :
			strcpy(p->name,"WILD BILL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,K,G,D,D,A");
			strcpy(p->moveNumbers,"5,9,14,15,18,18");
			strcpy(p->startFinish, "s,d,d,d,e,e");
			strcpy(p->grade, "7B");
			break;
		case 646 :
			strcpy(p->name,"LA MARY ME PAGA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,E,E,B,E,D");
			strcpy(p->moveNumbers,"5,6,9,10,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 647 :
			strcpy(p->name,"FRUIT CAKE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,F,E,D,D");
			strcpy(p->moveNumbers,"4,8,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 648 :
			strcpy(p->name,"OLYMPUS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,B,E,D,F,G,I");
			strcpy(p->moveNumbers,"5,6,9,11,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 649 :
			strcpy(p->name,"EASE OF ACCESS");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"H,K,J,E,J,J,H,E,D");
			strcpy(p->moveNumbers,"5,9,7,9,13,16,16,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 65 :
			strcpy(p->name,"FULCO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,I,D,G,E,D");
			strcpy(p->moveNumbers,"4,6,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 650 :
			strcpy(p->name,"LAP OF LUXURY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,D,E,B,E,E,I");
			strcpy(p->moveNumbers,"5,7,9,10,12,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 651 :
			strcpy(p->name,"DARK HORSE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,G,H,F,I,D,E");
			strcpy(p->moveNumbers,"5,6,8,13,10,18,16");
			strcpy(p->startFinish, "s,d,d,d,d,e,d");
			strcpy(p->grade, "7B+");
			break;
		case 652 :
			strcpy(p->name,"GILDA");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,G,J,G,E,I,H,I");
			strcpy(p->moveNumbers,"4,6,7,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 653 :
			strcpy(p->name,"BLUE BOWLS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,I,H,G,D,H,J");
			strcpy(p->moveNumbers,"9,12,14,16,17,18,5,5");
			strcpy(p->startFinish, "d,d,d,d,d,e,s,s");
			strcpy(p->grade, "6C+");
			break;
		case 654 :
			strcpy(p->name,"THE FORGOTTEN ONES");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,B,A,F,F,K,I,I");
			strcpy(p->moveNumbers,"5,6,9,11,13,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 655 :
			strcpy(p->name,"GAMBIT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,I,E,D,A");
			strcpy(p->moveNumbers,"5,10,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 656 :
			strcpy(p->name,"OLI'S YELLOW FEVA");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,E,H,H,F,G,I,I");
			strcpy(p->moveNumbers,"4,6,8,5,10,11,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 657 :
			strcpy(p->name,"ELEMENTS OF STYLE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,J,D,F,A,D");
			strcpy(p->moveNumbers,"5,5,7,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 658 :
			strcpy(p->name,"GARAGE DAYS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,H,K,H,I,E,D");
			strcpy(p->moveNumbers,"6,5,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 659 :
			strcpy(p->name,"MÁVROS K2");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,G,C,C,D");
			strcpy(p->moveNumbers,"4,6,9,8,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 66 :
			strcpy(p->name,"DUBUCHI");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,D,G,C,C,A");
			strcpy(p->moveNumbers,"5,7,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 660 :
			strcpy(p->name,"SET1");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,E,H,F,I,G,I,J");
			strcpy(p->moveNumbers,"5,6,8,10,13,14,17,18,5");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 661 :
			strcpy(p->name,"MEN IN BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,H,I,E,D");
			strcpy(p->moveNumbers,"4,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 662 :
			strcpy(p->name,"ROADWAY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,G,F,I,E,G,D,I");
			strcpy(p->moveNumbers,"4,5,9,13,14,16,17,18,10");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 663 :
			strcpy(p->name,"BACK TO BASICS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,K,H,K,G,G,D");
			strcpy(p->moveNumbers,"5,9,12,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 664 :
			strcpy(p->name,"BIG DAWWWWG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,H,C,H,H,I");
			strcpy(p->moveNumbers,"4,7,10,13,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 665 :
			strcpy(p->name,"RIVER RAT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,E,D,E,A");
			strcpy(p->moveNumbers,"4,8,12,11,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 666 :
			strcpy(p->name,"MASTERFUL GAP ALT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"A,B,C,E,F,I");
			strcpy(p->moveNumbers,"9,6,5,16,11,18");
			strcpy(p->startFinish, "d,s,s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 667 :
			strcpy(p->name,"BRUTE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,B,B,G,I");
			strcpy(p->moveNumbers,"5,6,10,14,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 668 :
			strcpy(p->name,"EZ CLAP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,C,D,E");
			strcpy(p->moveNumbers,"4,5,10,13,18,14");
			strcpy(p->startFinish, "s,s,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 669 :
			strcpy(p->name,"HOWARD THE ALIEN");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,C,I,D");
			strcpy(p->moveNumbers,"5,9,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 67 :
			strcpy(p->name,"KIDSPROBLEM");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,G,B,C,H,E,D");
			strcpy(p->moveNumbers,"4,5,9,10,13,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 670 :
			strcpy(p->name,"DOMINOS PINZA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"B,G,D,I,I");
			strcpy(p->moveNumbers,"6,9,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 671 :
			strcpy(p->name,"POPPED A XAN-DON");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,G,H,K,I");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 672 :
			strcpy(p->name,"ELEVATOR MUSIC");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"D,G,K,J,F,I");
			strcpy(p->moveNumbers,"18,14,9,5,11,7");
			strcpy(p->startFinish, "e,d,d,s,d,d");
			strcpy(p->grade, "7A");
			break;
		case 673 :
			strcpy(p->name,"LEVITATOR MUSIC");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,A,A,F,K,J,I");
			strcpy(p->moveNumbers,"14,14,18,11,9,5,7");
			strcpy(p->startFinish, "d,d,e,d,d,s,d");
			strcpy(p->grade, "7A+");
			break;
		case 674 :
			strcpy(p->name,"TRIP3");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,E,B,C,C,D");
			strcpy(p->moveNumbers,"12,6,10,8,5,18");
			strcpy(p->startFinish, "d,s,d,d,s,e");
			strcpy(p->grade, "7A+");
			break;
		case 675 :
			strcpy(p->name,"TRIP4");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"H,J,K,J,H,D,D,I,D");
			strcpy(p->moveNumbers,"5,5,9,13,12,11,7,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 676 :
			strcpy(p->name,"HOJAR KLUBBEN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,H,J,G,H,G,I");
			strcpy(p->moveNumbers,"6,10,13,15,16,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 677 :
			strcpy(p->name,"PHILLING SHIFTS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"A,D,E,J,H,K,G");
			strcpy(p->moveNumbers,"18,18,14,12,8,9,4");
			strcpy(p->startFinish, "e,e,d,d,d,d,s");
			strcpy(p->grade, "7C");
			break;
		case 678 :
			strcpy(p->name,"LONG BOI 2");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,H,G,I");
			strcpy(p->moveNumbers,"6,10,15,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 679 :
			strcpy(p->name,"SUPE");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,I,G,G,C,G,E,I");
			strcpy(p->moveNumbers,"4,7,6,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 68 :
			strcpy(p->name,"TIME TO PLAY");
			p->moveSize = 11;
			strcpy(p->moveLetters ,"G,J,I,H,D,D,B,C,G,H,I");
			strcpy(p->moveNumbers,"4,7,10,12,11,15,6,16,17,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 680 :
			strcpy(p->name,"RYEBREAD");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,F,C,A,A");
			strcpy(p->moveNumbers,"4,11,5,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 681 :
			strcpy(p->name,"TRØNDERSPOTT");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,H,C,D");
			strcpy(p->moveNumbers,"4,6,10,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 682 :
			strcpy(p->name,"CATA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,J,F,A,D");
			strcpy(p->moveNumbers,"6,7,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 683 :
			strcpy(p->name,"LADYBUG DIRECT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,C,D,A");
			strcpy(p->moveNumbers,"6,5,10,13,18,9");
			strcpy(p->startFinish, "s,s,d,d,e,d");
			strcpy(p->grade, "7A+");
			break;
		case 684 :
			strcpy(p->name,"APRITI");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"C,E,E,H,D,C,D,D");
			strcpy(p->moveNumbers,"5,6,8,10,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 685 :
			strcpy(p->name,"PB AND JELLY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,I,E,H,I,D");
			strcpy(p->moveNumbers,"4,8,10,14,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 686 :
			strcpy(p->name,"INNSMOUTH HORROR");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,F,E,G,E,I,I,E");
			strcpy(p->moveNumbers,"5,8,11,12,14,16,18,7,6");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,d,s");
			strcpy(p->grade, "6B+");
			break;
		case 687 :
			strcpy(p->name,"BROWN DIRTY WATER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,C,F,A,D");
			strcpy(p->moveNumbers,"6,5,8,8,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 688 :
			strcpy(p->name,"ANTI JULIE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,G,A,B");
			strcpy(p->moveNumbers,"4,10,13,17,18,6");
			strcpy(p->startFinish, "s,d,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 689 :
			strcpy(p->name,"DUMBADUMBA EASY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,E,F,C,D,D,E,C");
			strcpy(p->moveNumbers,"4,5,8,11,13,15,18,6,5");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,s,d");
			strcpy(p->grade, "6B+");
			break;
		case 69 :
			strcpy(p->name,"FROM VALCHIUSELLAWITHLOVE");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,C,I,E,D");
			strcpy(p->moveNumbers,"5,8,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 690 :
			strcpy(p->name,"PURPLE NURPLE BOYS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,G,E,I,G,I");
			strcpy(p->moveNumbers,"4,6,9,12,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 691 :
			strcpy(p->name,"WHERE'S YOUR BERRY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,D,I,E,F,C,B,E,B");
			strcpy(p->moveNumbers,"5,15,18,16,11,13,10,8,6");
			strcpy(p->startFinish, "s,d,e,d,d,d,d,d,s");
			strcpy(p->grade, "6B+");
			break;
		case 692 :
			strcpy(p->name,"CATCH AND PULL");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,E,G,D,I");
			strcpy(p->moveNumbers,"14,8,4,18,9");
			strcpy(p->startFinish, "d,d,s,e,d");
			strcpy(p->grade, "7B");
			break;
		case 693 :
			strcpy(p->name,"ORDERLY HOUSING");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,F,E,D");
			strcpy(p->moveNumbers,"4,8,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 694 :
			strcpy(p->name,"VANTABLACK");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"H,B,D,A,G");
			strcpy(p->moveNumbers,"8,10,15,18,4");
			strcpy(p->startFinish, "d,d,d,e,s");
			strcpy(p->grade, "7B+");
			break;
		case 695 :
			strcpy(p->name,"WARM UP STUFF");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,E,D,E,A,D");
			strcpy(p->moveNumbers,"5,6,8,11,12,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 696 :
			strcpy(p->name,"OINTMENT 007");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,E,G,H,G,I,G,I");
			strcpy(p->moveNumbers,"4,6,8,9,10,14,14,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 697 :
			strcpy(p->name,"COCA COLA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,F,E,G,D,C");
			strcpy(p->moveNumbers,"5,6,11,12,15,18,8");
			strcpy(p->startFinish, "s,d,d,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 698 :
			strcpy(p->name,"ORANGE IS THE NEW BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,F,G,C,D");
			strcpy(p->moveNumbers,"5,6,11,14,8,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 699 :
			strcpy(p->name,"ZONING IN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,E,H,C,E,D");
			strcpy(p->moveNumbers,"4,8,12,8,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 7 :
			strcpy(p->name,"CHAD");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,D,A,F,F,E,D");
			strcpy(p->moveNumbers,"5,7,9,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 70 :
			strcpy(p->name,"A'TRAZIONE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,I,J,K,G,D");
			strcpy(p->moveNumbers,"6,10,13,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 700 :
			strcpy(p->name,"ZONING IN (ALT. START)");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,H,C,E,C,E,D");
			strcpy(p->moveNumbers,"6,4,8,8,12,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 701 :
			strcpy(p->name,"MONOLITH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,F,C,E,D");
			strcpy(p->moveNumbers,"5,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 702 :
			strcpy(p->name,"BLACKNANA OLDNANA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,I,I,H,D,D");
			strcpy(p->moveNumbers,"5,10,9,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 703 :
			strcpy(p->name,"LA FRICHINA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,H,G,H,I");
			strcpy(p->moveNumbers,"4,10,14,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 704 :
			strcpy(p->name,"LI VARDASCI");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,H,G,D");
			strcpy(p->moveNumbers,"4,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 705 :
			strcpy(p->name,"MOFOS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,J,H,C,D,D");
			strcpy(p->moveNumbers,"5,5,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 706 :
			strcpy(p->name,"MISSILE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,G,B,E,C,D");
			strcpy(p->moveNumbers,"5,6,9,10,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 707 :
			strcpy(p->name,"TESTJ");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,J,H,F,H,E,G,D,A");
			strcpy(p->moveNumbers,"4,5,8,11,13,14,17,18,14");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 708 :
			strcpy(p->name,"FLAPJACKS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,D,E,A");
			strcpy(p->moveNumbers,"4,6,8,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 709 :
			strcpy(p->name,"ZONED IN (H10 FOOT ONLY)");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,E,H,H,C,F,C,E,D");
			strcpy(p->moveNumbers,"4,6,8,10,8,11,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 71 :
			strcpy(p->name,"BUIONE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,E,B,A");
			strcpy(p->moveNumbers,"5,8,9,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 710 :
			strcpy(p->name,"CERBERO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,I,H,K,I");
			strcpy(p->moveNumbers,"4,10,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 711 :
			strcpy(p->name,"COW FUNK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,A,E,A,D");
			strcpy(p->moveNumbers,"4,6,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 712 :
			strcpy(p->name,"MOMOGO");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,H,K,I,J,F,I,H,I");
			strcpy(p->moveNumbers,"5,5,9,10,12,13,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 713 :
			strcpy(p->name,"LITTLE DIDDY");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"C,D,A,D,B,F,J,K,J,I");
			strcpy(p->moveNumbers,"5,7,9,11,12,13,12,9,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 714 :
			strcpy(p->name,"DARK MAGIC");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"C,C,G,E,I");
			strcpy(p->moveNumbers,"5,8,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 715 :
			strcpy(p->name,"DURANGO TANGO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,H,E,E,G,H,I");
			strcpy(p->moveNumbers,"4,10,12,9,15,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 716 :
			strcpy(p->name,"BLACKER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,G,H,C,H,D");
			strcpy(p->moveNumbers,"5,4,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 717 :
			strcpy(p->name,"URBAN WALL");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,E,F,A,D");
			strcpy(p->moveNumbers,"4,5,8,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 718 :
			strcpy(p->name,"GORILA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,J,G,F,C,E,D");
			strcpy(p->moveNumbers,"5,7,10,11,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 719 :
			strcpy(p->name,"JA ICH BIN NOCH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,E,G,E,E,E,I");
			strcpy(p->moveNumbers,"5,6,9,12,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 72 :
			strcpy(p->name,"MAFFEI");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,E,A,E,D");
			strcpy(p->moveNumbers,"5,12,14,8,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 720 :
			strcpy(p->name,"BLACKBOARD");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"B,C,H,G,K,J,K,H,G,D");
			strcpy(p->moveNumbers,"6,5,5,6,9,13,16,16,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 721 :
			strcpy(p->name,"BLACK 1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"D,E,G,B,B,A,D");
			strcpy(p->moveNumbers,"7,8,4,10,12,14,18");
			strcpy(p->startFinish, "d,d,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 722 :
			strcpy(p->name,"BLACK 1.1");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,K,H,I,E,D");
			strcpy(p->moveNumbers,"6,5,9,12,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 723 :
			strcpy(p->name,"BLACK HORSE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,K,H,D,E,A,I");
			strcpy(p->moveNumbers,"5,9,12,15,16,18,14");
			strcpy(p->startFinish, "s,d,d,d,d,e,d");
			strcpy(p->grade, "6C+");
			break;
		case 724 :
			strcpy(p->name,"MURPHY STINKS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,H,I,J,I,J,J");
			strcpy(p->moveNumbers,"8,10,14,12,18,7,5");
			strcpy(p->startFinish, "d,d,d,d,e,d,s");
			strcpy(p->grade, "6B+");
			break;
		case 725 :
			strcpy(p->name,"BLACKTOP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,K,I,I,D,D");
			strcpy(p->moveNumbers,"5,9,9,14,11,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 726 :
			strcpy(p->name,"WHO NEEDS DR. GREG");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,J,E,D,G,H,D");
			strcpy(p->moveNumbers,"6,5,14,18,9,12,11");
			strcpy(p->startFinish, "s,s,d,e,d,d,d");
			strcpy(p->grade, "7A+");
			break;
		case 727 :
			strcpy(p->name,"Z3GZAG");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,H,H,H,I,G,G,D,E");
			strcpy(p->moveNumbers,"4,8,10,12,14,15,17,18,6");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e,s");
			strcpy(p->grade, "6B+");
			break;
		case 728 :
			strcpy(p->name,"BLACK MIRROR");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,H,I,F,E,D,G,I");
			strcpy(p->moveNumbers,"5,8,9,11,12,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 729 :
			strcpy(p->name,"ESSEK");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,H,E,G,G,G,D");
			strcpy(p->moveNumbers,"6,5,10,12,14,15,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 73 :
			strcpy(p->name,"LEOCREMAFLANDERS");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,B,C,E,F,H,I");
			strcpy(p->moveNumbers,"12,6,5,9,13,12,18");
			strcpy(p->startFinish, "d,s,s,d,d,d,e");
			strcpy(p->grade, "7C");
			break;
		case 730 :
			strcpy(p->name,"WALLABY");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"E,G,E,F,E,J,I,H,I");
			strcpy(p->moveNumbers,"6,6,8,11,12,7,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 731 :
			strcpy(p->name,"SMALL HOT 3 SPLENDA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,H,D,I,E,D");
			strcpy(p->moveNumbers,"6,10,11,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 732 :
			strcpy(p->name,"THE GRANARY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,F,C,D,D");
			strcpy(p->moveNumbers,"5,6,11,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 733 :
			strcpy(p->name,"BREATHE");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"E,E,E,H,C,B,F,G,I,J");
			strcpy(p->moveNumbers,"8,9,12,5,5,6,13,15,18,12");
			strcpy(p->startFinish, "d,d,d,d,s,s,d,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 734 :
			strcpy(p->name,"BLACK GECKO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,E,H,C,E,D");
			strcpy(p->moveNumbers,"5,6,10,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 735 :
			strcpy(p->name,"TAFFO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,C,C,D,A");
			strcpy(p->moveNumbers,"4,9,8,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 736 :
			strcpy(p->name,"POCKET FULL OF DREAMS");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,B,B,A,E,D");
			strcpy(p->moveNumbers,"4,8,9,10,12,14,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 737 :
			strcpy(p->name,"LADYBUG CLEAN");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,G,H,F,C,D");
			strcpy(p->moveNumbers,"5,6,10,11,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 738 :
			strcpy(p->name,"BLACK BLOCK X");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,H,H,I,G,I,E");
			strcpy(p->moveNumbers,"4,8,10,12,14,17,18,6");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,s");
			strcpy(p->grade, "6C");
			break;
		case 739 :
			strcpy(p->name,"INVERTIDOSO");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,C,I,F,I");
			strcpy(p->moveNumbers,"4,8,9,13,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 74 :
			strcpy(p->name,"TIA");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,F,E,I,H,I");
			strcpy(p->moveNumbers,"4,8,11,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 740 :
			strcpy(p->name,"TORCI SPALLA");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,H,F,E,A,B,G,I");
			strcpy(p->moveNumbers,"6,10,11,12,14,15,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 741 :
			strcpy(p->name,"POALET");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,D,I,E,I,J,G");
			strcpy(p->moveNumbers,"10,11,14,16,18,7,6");
			strcpy(p->startFinish, "d,d,d,d,e,d,s");
			strcpy(p->grade, "6C");
			break;
		case 742 :
			strcpy(p->name,"YURP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,G,J,G,I");
			strcpy(p->moveNumbers,"4,8,10,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 743 :
			strcpy(p->name,"V7 ANOS DE AEP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,H,J,G,I");
			strcpy(p->moveNumbers,"4,9,8,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 744 :
			strcpy(p->name,"KOKURYU");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,G,D,G,E,I");
			strcpy(p->moveNumbers,"4,6,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 745 :
			strcpy(p->name,"CANIGAN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,K,G,I,F,K,H,I");
			strcpy(p->moveNumbers,"5,9,9,10,13,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 746 :
			strcpy(p->name,"BOARDMEETING 3.0");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,H,G,H,D");
			strcpy(p->moveNumbers,"6,5,10,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 747 :
			strcpy(p->name,"STRIZZANGELES");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,C,F,G,J,E,I");
			strcpy(p->moveNumbers,"4,8,11,14,7,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 748 :
			strcpy(p->name,"MAN IN BLACK");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"J,J,K,H,I,I,K,I,G");
			strcpy(p->moveNumbers,"5,7,9,12,14,15,16,18,4");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e,s");
			strcpy(p->grade, "6B+");
			break;
		case 749 :
			strcpy(p->name,"THE MOST HIGH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,H,G,D,G,E,I");
			strcpy(p->moveNumbers,"6,5,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 75 :
			strcpy(p->name,"BIG HOLDZ");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"G,H,C,E,A");
			strcpy(p->moveNumbers,"4,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 750 :
			strcpy(p->name,"THE DARK ARTS DIRECT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,G,H,C,G,I");
			strcpy(p->moveNumbers,"4,6,8,13,17,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 751 :
			strcpy(p->name,"BLACK ARE GOOD");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,J,I,J,G,I");
			strcpy(p->moveNumbers,"5,7,10,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 752 :
			strcpy(p->name,"MY FLOW");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,E,A,D");
			strcpy(p->moveNumbers,"5,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 753 :
			strcpy(p->name,"ELBOW GREASE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,G,D,D,C,A");
			strcpy(p->moveNumbers,"5,8,9,11,15,5,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 754 :
			strcpy(p->name,"ELBOW GREASE VAR");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,G,D,D,A");
			strcpy(p->moveNumbers,"5,8,9,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 755 :
			strcpy(p->name,"DITA DI BURRO");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"G,J,C,D");
			strcpy(p->moveNumbers,"9,5,13,18");
			strcpy(p->startFinish, "d,s,d,e");
			strcpy(p->grade, "7A");
			break;
		case 756 :
			strcpy(p->name,"BLACK JACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,G,E,F,A,D");
			strcpy(p->moveNumbers,"5,9,12,13,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 757 :
			strcpy(p->name,"LONG BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,E,E,D");
			strcpy(p->moveNumbers,"4,6,10,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 758 :
			strcpy(p->name,"CALCULO");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,E,E,F,G,I");
			strcpy(p->moveNumbers,"4,6,9,12,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 759 :
			strcpy(p->name,"BLACK CHAMBER ORDER");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,C,E,B,D,A");
			strcpy(p->moveNumbers,"5,6,8,9,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 76 :
			strcpy(p->name,"MEZZIF");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"B,C,E,F,J,I");
			strcpy(p->moveNumbers,"6,5,9,13,12,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 760 :
			strcpy(p->name,"BEYOND GOOD AND EVIL");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,G,E,B,G,E,I");
			strcpy(p->moveNumbers,"8,4,6,12,15,17,16,18");
			strcpy(p->startFinish, "d,s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 761 :
			strcpy(p->name,"THE WILL TO POWER");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"H,E,G,H,K,G,H,D");
			strcpy(p->moveNumbers,"5,6,9,12,14,17,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 762 :
			strcpy(p->name,"THE BIRTH OF TRAGEDY");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,G,G,C,D,A");
			strcpy(p->moveNumbers,"4,7,9,10,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 763 :
			strcpy(p->name,"CAVATELLI");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,F,J,D");
			strcpy(p->moveNumbers,"5,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 764 :
			strcpy(p->name,"WING SPANDEX");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,C,F,C,G,A");
			strcpy(p->moveNumbers,"6,8,11,13,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 765 :
			strcpy(p->name,"BLACK CAT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,I,E,E,J,I");
			strcpy(p->moveNumbers,"5,8,9,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 766 :
			strcpy(p->name,"GOBRIGHT SPECIAL");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"B,H,H,C,D");
			strcpy(p->moveNumbers,"6,5,10,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 767 :
			strcpy(p->name,"BASTION");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"H,J,E,F,B,E,B,G,E,I");
			strcpy(p->moveNumbers,"5,5,8,11,12,12,15,17,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 768 :
			strcpy(p->name,"19-1.2");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"B,G,D,B,C,G,I,J");
			strcpy(p->moveNumbers,"6,6,7,10,13,14,18,16");
			strcpy(p->startFinish, "s,s,d,d,d,d,e,d");
			strcpy(p->grade, "7C");
			break;
		case 769 :
			strcpy(p->name,"GGGGGGH");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"G,H,I,K,H,J,I,J,K");
			strcpy(p->moveNumbers,"4,5,7,9,10,13,18,16,16");
			strcpy(p->startFinish, "s,s,d,d,d,d,e,d,d");
			strcpy(p->grade, "6B+");
			break;
		case 77 :
			strcpy(p->name,"MADDEKÈ");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,I,G,G,D");
			strcpy(p->moveNumbers,"5,7,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 770 :
			strcpy(p->name,"MOMMSEN'S#2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,G,E,I,G,I");
			strcpy(p->moveNumbers,"5,6,9,12,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 771 :
			strcpy(p->name,"L’HEURE SOMBRE");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,D,E,D,E,B,C,A,B");
			strcpy(p->moveNumbers,"5,7,9,11,14,12,16,18,6");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e,s");
			strcpy(p->grade, "7B+");
			break;
		case 772 :
			strcpy(p->name,"NOT FOR HOONY");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,E,C,G,A,I,H");
			strcpy(p->moveNumbers,"4,6,9,13,17,9,18,16");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,d");
			strcpy(p->grade, "7A+");
			break;
		case 773 :
			strcpy(p->name,"LIZZY BLACK");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,I,F,E,D,I");
			strcpy(p->moveNumbers,"4,10,13,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B");
			break;
		case 774 :
			strcpy(p->name,"I ❤️ ELLIA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,G,C,D");
			strcpy(p->moveNumbers,"5,6,10,13,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 775 :
			strcpy(p->name,"DJWUDHDJWJCJDJE");
			p->moveSize = 10;
			strcpy(p->moveLetters ,"G,E,C,B,C,E,D,B,A,D");
			strcpy(p->moveNumbers,"4,6,8,10,13,12,15,15,18,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e,e");
			strcpy(p->grade, "6B+");
			break;
		case 776 :
			strcpy(p->name,"ULTRAVIOLENCE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,E,C,F,E,J,D");
			strcpy(p->moveNumbers,"6,6,8,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 777 :
			strcpy(p->name,"UP MY SLEEVES");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,J,E,A");
			strcpy(p->moveNumbers,"5,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7C+");
			break;
		case 778 :
			strcpy(p->name,"BO4");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,E,F,H,G,I,H");
			strcpy(p->moveNumbers,"5,9,11,5,15,18,12");
			strcpy(p->startFinish, "s,d,d,s,d,e,d");
			strcpy(p->grade, "7A");
			break;
		case 779 :
			strcpy(p->name,"BLACKROCK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,I,D,E,B,D");
			strcpy(p->moveNumbers,"4,6,10,11,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 78 :
			strcpy(p->name,"LU'S FINEST");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"B,D,B,G,E,F,J,H,I");
			strcpy(p->moveNumbers,"6,7,10,4,12,13,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 780 :
			strcpy(p->name,"STOUT LITE");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,D,G,D,G,G,I");
			strcpy(p->moveNumbers,"4,7,9,11,14,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 781 :
			strcpy(p->name,"PSYCHO MANTIS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,D,G,B,E,D");
			strcpy(p->moveNumbers,"5,7,10,10,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 782 :
			strcpy(p->name,"VISUALIZZA VERS2");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,H,E,H,E,D");
			strcpy(p->moveNumbers,"5,8,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 783 :
			strcpy(p->name,"SALAD APOCALYPSE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,B,E,H,D,A");
			strcpy(p->moveNumbers,"5,6,8,12,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 784 :
			strcpy(p->name,"FIRST COME, FIRST SERVED");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"J,G,F,A,D");
			strcpy(p->moveNumbers,"5,10,11,14,18");
			strcpy(p->startFinish, "s,d,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 785 :
			strcpy(p->name,"BIG LE MOVIES");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,G,J,H,G,G,I");
			strcpy(p->moveNumbers,"4,6,7,10,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 786 :
			strcpy(p->name,"FLEMMING THE BEAST");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,G,E,H,A,E,D");
			strcpy(p->moveNumbers,"4,5,9,12,8,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 787 :
			strcpy(p->name,"ALLBLACKS");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,G,H,C,D,A");
			strcpy(p->moveNumbers,"6,4,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 788 :
			strcpy(p->name,"BLACK LAMP");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"H,E,I,D,J,E");
			strcpy(p->moveNumbers,"10,14,14,18,5,6");
			strcpy(p->startFinish, "d,d,d,e,s,s");
			strcpy(p->grade, "6C+");
			break;
		case 789 :
			strcpy(p->name,"BARRET");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,D,A,B,A,D");
			strcpy(p->moveNumbers,"6,7,9,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 79 :
			strcpy(p->name,"BROWN FROWN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,E,C,H,F,C,E,D");
			strcpy(p->moveNumbers,"4,6,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 790 :
			strcpy(p->name,"TURBO CALLA");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,C,D,A");
			strcpy(p->moveNumbers,"4,8,8,13,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 791 :
			strcpy(p->name,"SIM");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,I,D,E,A");
			strcpy(p->moveNumbers,"4,6,9,11,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 792 :
			strcpy(p->name,"INTERNAL ROTATION");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,E,H,H,D,G,D,C");
			strcpy(p->moveNumbers,"8,9,12,5,15,15,18,5");
			strcpy(p->startFinish, "d,d,d,d,d,d,e,s");
			strcpy(p->grade, "7A+");
			break;
		case 793 :
			strcpy(p->name,"SUSHI ROLL");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,J,H,C,D,A,D");
			strcpy(p->moveNumbers,"6,5,10,13,18,18,15");
			strcpy(p->startFinish, "s,s,d,d,e,e,d");
			strcpy(p->grade, "6B+");
			break;
		case 794 :
			strcpy(p->name,"DEAD FISH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,E,G,F,I,E,D");
			strcpy(p->moveNumbers,"5,6,9,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 795 :
			strcpy(p->name,"CAMPUSING WITH A BACKPACK");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,J,E,H,C,D,D");
			strcpy(p->moveNumbers,"5,5,8,10,13,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 796 :
			strcpy(p->name,"DER SCHWÄCHLING");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"J,J,K,I,J,G,G,D");
			strcpy(p->moveNumbers,"5,7,9,10,12,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 797 :
			strcpy(p->name,"BURNED");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,H,G,J,J,G,E,I");
			strcpy(p->moveNumbers,"6,8,9,5,12,14,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 798 :
			strcpy(p->name,"ASHES");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"H,G,C,B,E,E,I,J,D");
			strcpy(p->moveNumbers,"5,6,5,10,14,16,18,13,7");
			strcpy(p->startFinish, "s,d,d,d,d,d,e,d,d");
			strcpy(p->grade, "7A+");
			break;
		case 799 :
			strcpy(p->name,"CHOSS 7");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,G,C,E,A,D");
			strcpy(p->moveNumbers,"5,8,9,8,12,14,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 8 :
			strcpy(p->name,"MAN WALKS DOWN THE STREET");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,H,E,B,E,B,E,A");
			strcpy(p->moveNumbers,"6,5,8,10,12,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 80 :
			strcpy(p->name,"MARYJANEFIGAROTTA");
			p->moveSize = 5;
			strcpy(p->moveLetters ,"E,H,H,I,I");
			strcpy(p->moveNumbers,"6,5,10,15,18");
			strcpy(p->startFinish, "s,s,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 800 :
			strcpy(p->name,"PANTHER");
			p->moveSize = 4;
			strcpy(p->moveLetters ,"E,G,G,I");
			strcpy(p->moveNumbers,"6,10,14,18");
			strcpy(p->startFinish, "s,d,d,e");
			strcpy(p->grade, "7B+");
			break;
		case 801 :
			strcpy(p->name,"1985-54");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,H,I,H,J,G,H,D");
			strcpy(p->moveNumbers,"6,5,10,10,13,15,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 802 :
			strcpy(p->name,"TRIAL ‘N’ ERROR");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,B,E,G,E,J,D");
			strcpy(p->moveNumbers,"6,6,9,10,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 803 :
			strcpy(p->name,"BLACK PSYCHO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,C,H,D,G,D");
			strcpy(p->moveNumbers,"4,5,8,11,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 804 :
			strcpy(p->name,"BATTLE OF THE PUDGE SHORT");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"C,H,E,I,D,D,D");
			strcpy(p->moveNumbers,"5,5,8,10,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 805 :
			strcpy(p->name,"JINJA TEMPLATE 2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"G,K,I,J,G,I,G");
			strcpy(p->moveNumbers,"6,9,9,13,14,18,4");
			strcpy(p->startFinish, "s,d,d,d,d,e,s");
			strcpy(p->grade, "6B+");
			break;
		case 806 :
			strcpy(p->name,"JUMPBUG");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,H,F,C,D");
			strcpy(p->moveNumbers,"6,5,10,11,13,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 81 :
			strcpy(p->name,"WARM UP A1");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,E,F,D,D");
			strcpy(p->moveNumbers,"4,8,8,11,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 82 :
			strcpy(p->name,"WARM UP A2");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,G,G,E,D,I,A");
			strcpy(p->moveNumbers,"5,6,9,12,15,7,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 83 :
			strcpy(p->name,"WARM UP A3");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,J,H,G,I,I");
			strcpy(p->moveNumbers,"6,5,10,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 84 :
			strcpy(p->name,"WARM UP A5");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"B,E,E,F,E,H,I");
			strcpy(p->moveNumbers,"6,6,8,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 85 :
			strcpy(p->name,"KEEP YOUR FEET DRY");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"C,H,G,D,D,D");
			strcpy(p->moveNumbers,"5,5,9,11,15,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 86 :
			strcpy(p->name,"POMPOUS POMPADOUR");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,G,C,E,A");
			strcpy(p->moveNumbers,"4,8,10,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 87 :
			strcpy(p->name,"RUSTY MORNING");
			p->moveSize = 9;
			strcpy(p->moveLetters ,"C,E,E,I,H,I,E,E,A");
			strcpy(p->moveNumbers,"5,6,8,10,12,14,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 88 :
			strcpy(p->name,"MY IDEA ?");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"E,G,C,H,C,C,A");
			strcpy(p->moveNumbers,"6,6,8,10,13,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		case 89 :
			strcpy(p->name,"SANTOKU SNATCH");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"H,H,C,F,F,J,I");
			strcpy(p->moveNumbers,"5,8,8,11,13,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 9 :
			strcpy(p->name,"GUNTER");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"J,K,H,E,B,D");
			strcpy(p->moveNumbers,"5,9,10,12,15,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "7A");
			break;
		case 90 :
			strcpy(p->name,"THE SENDTRAIN");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"E,G,G,G,G,I,I,J");
			strcpy(p->moveNumbers,"12,4,6,9,15,14,18,7");
			strcpy(p->startFinish, "d,s,d,d,d,d,e,d");
			strcpy(p->grade, "6C");
			break;
		case 91 :
			strcpy(p->name,"5 FINGER DISCOUNT");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"A,A,B,D,E,E,E,G");
			strcpy(p->moveNumbers,"9,14,12,18,6,8,14,4");
			strcpy(p->startFinish, "d,d,d,e,d,d,d,s");
			strcpy(p->grade, "7A+");
			break;
		case 92 :
			strcpy(p->name,"3/5TH A MAN");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,K,E,I,H,I");
			strcpy(p->moveNumbers,"5,12,14,8,9,16,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,e");
			strcpy(p->grade, "7A+");
			break;
		case 93 :
			strcpy(p->name,"DESTINY'S GRANDMA");
			p->moveSize = 8;
			strcpy(p->moveLetters ,"G,J,G,H,G,I,G,I");
			strcpy(p->moveNumbers,"4,7,9,10,14,14,17,18");
			strcpy(p->startFinish, "s,d,d,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 94 :
			strcpy(p->name,"NORTHSIDE");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"B,D,E,E,H,J");
			strcpy(p->moveNumbers,"15,18,8,12,5,5");
			strcpy(p->startFinish, "d,e,d,d,s,s");
			strcpy(p->grade, "7A");
			break;
		case 95 :
			strcpy(p->name,"SWIMMING GOAT");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,H,C,I,I,D");
			strcpy(p->moveNumbers,"4,10,13,14,7,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 96 :
			strcpy(p->name,"SWIM AND GO");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,H,C,I,D");
			strcpy(p->moveNumbers,"4,6,10,13,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 97 :
			strcpy(p->name,"FLAPODROM");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"E,J,H,E,I,I");
			strcpy(p->moveNumbers,"6,5,10,14,14,18");
			strcpy(p->startFinish, "s,s,d,d,d,e");
			strcpy(p->grade, "6C+");
			break;
		case 98 :
			strcpy(p->name,"L9");
			p->moveSize = 6;
			strcpy(p->moveLetters ,"G,E,C,E,C,D");
			strcpy(p->moveNumbers,"4,8,8,12,13,18");
			strcpy(p->startFinish, "s,d,d,d,d,e");
			strcpy(p->grade, "6B+");
			break;
		case 99 :
			strcpy(p->name,"ACG29");
			p->moveSize = 7;
			strcpy(p->moveLetters ,"J,H,E,F,E,H,D");
			strcpy(p->moveNumbers,"5,5,8,11,14,16,18");
			strcpy(p->startFinish, "s,s,d,d,d,d,e");
			strcpy(p->grade, "6C");
			break;
		default:
			break;
	}
}

