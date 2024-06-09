#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sort(int arr[], size_t len)
{
    for(size_t i=0; i<len-1;i++)
    {
        for(size_t j=i+1; j<len; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


int solution(int A[], size_t A_len, int B[], size_t B_len) {
    
    int answer = 0;
    
    sort(A,A_len);
    sort(B,B_len);
    
    for(size_t i = 0; i < A_len; i++)
    {
        answer += A[i] * B[B_len-i-1];
    }
    
    return answer;
}

void main(void){}