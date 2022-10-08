/*
 *  main.c
 *  Created on: Oct 8, 2022
 *  Author: MSHcomm (Moahmed Sayed Hussein)
 *  Array Challenge Program
 *  Description: Array Challenge
 *  Have the function ArrayChallenge(strArr) read the array of strings stored in strArr which will contain 2 elements: the first element will represent a list
 *   of comma-separated numbers sorted in ascending order, the second element will represent a second list of comma-separated numbers (also sorted).
 *   Your goal is to return a comma-separated string containing the numbers that occur in elements of strArr in sorted order. If there is no intersection,
 *   return the string false. Once your function is working, take the final output string and concatenate it with your ChallengeToken,
 *   and then replace every third character with an X.
 *   Your ChallengeToken: faie7y6c1
 *   Examples:
 *   Input: {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"}
 *   Output: 1,4,13
 *   Final Output: 1,X,1XfaXe7X6cX
 *   Input: {"1, 3, 9, 10, 17, 18", "1, 4, 9, 10"}
 *   Output: 1,9,10
 *   Final Output: 1,X,1XfaXe7X6cX
 */

#include <stdio.h>
#include <string.h>

void ArrayChallenge(char * strArr[], int arrLength) {
	char *StrIn1 = strArr[0];
	char *StrIn2 = strArr[1];
	printf("\nlen = %d\n",strlen(StrIn1));
	char *StrOut[strlen(StrIn1)];
	printf("StrIn1 = %s \nStrIn2 = %s \nDifference length = %d\n\n",StrIn1,StrIn2,strcmp(StrIn1,StrIn2));

	int k=0;
	for (int i=0 ; StrIn1[i] != '\0' ; i++){
		if ((StrIn1[i] == ' ') || (StrIn1[i] == ',')){
			continue;
		}

		if(StrIn1[i] == StrIn2[i]){
			StrOut[k++] = StrIn1[i];
		}
		StrOut[k]=',';
		//printf("%c", StrOut[k-1]);
	}
	printf("\n%s", StrOut[0]);


  // code goes here
  //printf("%s", strArr[0]);

}


int main(void) {

  // keep this function call here
	char * A[] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"}; //char * A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  ArrayChallenge(A, arrLength);
  return 0;
}

