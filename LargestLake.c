//Assume that there are four lakes b, d, t and h with totally different size. Based 
//on the following descriptions, write a program to print the size sequence from big 
//to small

#include <stdio.h>
int main (){
  int lake_sizes[4] = { 0 };	// initialize all sizes to 0
  
// student A's statement
    lake_sizes[1] = 4;		// lake 'd' is at index 1
    lake_sizes[3] = 1;		// lake 'h' is at index 3
    lake_sizes[0] = 3;		// lake 'b' is at index 0
  
// student B's statement
    lake_sizes[3] = 4;		// lake 'h' is at index 3
    lake_sizes[1] = 1;		// lake 'd' is at index 1
    lake_sizes[0] = 2;		// lake 'b' is at index 0
    lake_sizes[2] = 3;		// lake 't' is at index 2
  
// student C's statement
    lake_sizes[3] = 0;		// lake 'h' is at index 3
    lake_sizes[1] = 3;		// lake 'd' is at index 1
  
// student D's statement
    lake_sizes[0] = 4;		// lake 'b' is at index 0
    lake_sizes[2] = 1;		// lake 't' is at index 2
    lake_sizes[3] = 2;		// lake 'h' is at index 3
    lake_sizes[1] = 3;		// lake 'd' is at index 1
  
// create an array to store the lake names
    char lake_names[] = { 'b', 'd', 't', 'h' };
  
// sort the lake_sizes array in descending order
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (lake_sizes[i] < lake_sizes[j]){
                // swap the values in lake_sizes
	            int temp = lake_sizes[i];
	            lake_sizes[i] = lake_sizes[j];
	            lake_sizes[j] = temp;
	            // swap the names in lake_names
	            char temp_name = lake_names[i];
	            lake_names[i] = lake_names[j];
	            lake_names[j] = temp_name;
                
            }
            
        }
        
    } 
 
// print the lake names in descending order of size
    printf
    ("The size sequence from big to small, with 0 being the largest lake: ");
    for (int i = 0; i < 4; i++){
        printf ("%d-%c, ", i, lake_names[i]);   
    } 
    printf ("\n");
} 
 
 
