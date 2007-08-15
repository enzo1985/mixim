/********************************
	File:		pos_tools.c
	Project:	pos_test
	Author:		Chris Savarese
	Date:		3/14/01
 ********************************/  
    
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pos_tools.h"

// generates a rand whole number less then max
{
	


// generates a normally distributed random value with zero mean and var variance
{
	
	float x;		// N(0,1) random variable
	
	
	
	


/* allocate a float matrix with subscript range m[nrl..nrh][ncl..nch] */ 
{
	
	
	
	    /* allocate pointers to rows */ 
	    m = (float **) malloc((size_t) ((nrow + NR_END) * sizeof(float *)));
	
		nrerror("allocation failure 1 in matrix()");
	
	
	
	    /* allocate rows and set pointers to them */ 
	    m[nrl] =
	    (float *) malloc((size_t) ((nrow * ncol + NR_END) * sizeof(float)));
	
		nrerror("allocation failure 2 in matrix()");
	
	
	
		m[i] = m[i - 1] + ncol;
	
	    /* return pointer to array of pointers to rows */ 
	    return m;


/* allocate an int matrix with subscript range m[nrl..nrh][ncl..nch] */ 
{
	
	
	
	    /* allocate pointers to rows */ 
	    m = (int **) malloc((size_t) ((nrow + NR_END) * sizeof(int *)));
	
		nrerror("allocation failure 1 in matrix()");
	
	
	
	    /* allocate rows and set pointers to them */ 
	    m[nrl] =
	    (int *) malloc((size_t) ((nrow * ncol + NR_END) * sizeof(int)));
	
		nrerror("allocation failure 2 in matrix()");
	
	
	
		m[i] = m[i - 1] + ncol;
	
	    /* return pointer to array of pointers to rows */ 
	    return m;


/* Numerical Recipes standard error handler */ 
{
	
	
	
	


/* free a float matrix allocated by matrix() */ 
{
	
	


/* free an int matrix allocated by imatrix() */ 
{
	
	


/* print a float matrix allocated by matrix() */ 
{
	
	
		
			
		
	


	 /*print an integer vector allocated by ivector() */ 
{
	
	
		
	


/* write a float matrix allocated by matrix() */ 
{
	
	
		
			


/* zero a float matrix allocated by matrix() */ 
{
	
	
		
			
	


/* allocate a float vector with subscript range v[nl..nh] */ 
{
	
	
	    malloc((size_t) ((nh - nl + 1 + NR_END) * sizeof(float)));
	
		nrerror("allocation failure in vector()");
	


/* free a float vector allocated with vector() */ 
{
	


/* allocate an int vector with subscript range v[nl..nh] */ 
{
	
	
	
		nrerror("allocation failure in ivector()");
	


/* free an int vector allocated with ivector() */ 
{
	


//find the inverse of matrix 'a' which will be overwritten
// result returned in y. y must be allocated as an (0,N-1,0,N-1) matrix externally
// returns 1 if successful, 0 if error
{
	
	
	
	
	
		
		
		
		
		
	
		
			col[i] = 0.0;
		
		
		
			y[i][j] = col[i];
	
	
	
	


// returns the transpose of matrix a without affecting a.  a has dimensions mxn.
// result returned in aT.  aT must be allocated externally as a (0,n-1,0,m-1) matrix.
{
	
	
		
			


// returns the product of matricies a and b.  does not change a or b.  dimensions of return matrix are mxn. inner product dimension is l.
// warning: assumed that inner dimensions of product match (else a runtime error will result)
// returns result in x.  x must be allocated externally as a (0,m-1,0,n-1) matrix.
{
	
	
	
		
			
				


// returns 1 if successful, 0 if error
{
	
	
	
	
	
	
		
		
			
				big = temp;
		
//              if (big == 0.0) nrerror("Singular matrix in routine ludcmp");
		    if (big == 0.0)
			
			
			
			
		
	
	    /*This is the loop over columns of Crout's method. */ 
	    for (j = 0; j < n; j++) {
		
			
			
				sum -= a[i][k] * a[k][j];
			
		
		
		    /*Initialize for the search for largest pivot element. */ 
		    big = 0.0;
		
		
		    /*This is i = j of equation (2.3.12/13) and i = j+1..N */ 
		    for (i = j; i < n; i++) {
			
			
				
			
			
				
				
			
		
			
				
				
				
			
			
			
		
		
		
			a[j][j] = (float) TINY;
		
		    /*
		       If the pivot element is zero the matrix is singular (at least to the 
		       precision of the algorithm). For some applications on singular matrices, 
		       it is desirable to substitute TINY for zero.
		     */ 
		    if (j != (n - 1)) {	/*Now, finally, divide by the pivot element. */
			
			
				a[i][j] *= dum;
		
	
	
	


	 /*Solves the set of n linear equations A*X = B. Herea[0..n-1][0..n-1] is input, 
	    not as the matrix A but rather as its LU decomposition, determined by the routine ludcmp.
	    indx[1..n] is input as the permutation vector returned by ludcmp. b[1..n] is input as
	    the right-hand side vector B, and returns with the solution vector X. a, n, and indx 
	    are not modified by this routine and can be left in place for successive calls with 
	    different right-hand sides b. This routine takes into account the possibility that 
	    b will begin with many zero elements, so it is efficient for use in matrix inversion. 
	  */ 
{
	
	
	
		
		    /*When ii is set to a positive value, it will become the index of the first 
		       nonvanishing element of b. We now do the forward substitution, equation 
		       (2.3.6). The only new wrinkle is to unscramble the permutation as we go. */ 
		    ip = indx[i];
		
		
		
			
				sum -= a[i][j] * b[j];
		
		else if (sum)
			ii = i + 1;
		
		    /*A nonzero element was encountered, so from now on we will 
		       have to do the sums in the loop above. */ 
		    b[i] = sum;
	
	
		
		
			sum -= a[i][j] * b[j];
		
	


/*Q-R Decomposition of matrix A */ 
// returns 1 if successful, 0 if error
{
	
	
		
			
		
			
			
				
			
				
		
		
		
			
		
		
			
//                      nrerror("Singularity observed. R[i][i] = 0. Quitting...\n");
			    return (0);
		
			
	
	


	       float *col) 
/* return x = inv(R)*trans(Q)*b by backsubstituting w/ cols of trans(Q)*/ 
// return parameter is pointer col.  col must be allocated externally as a (0,rDIM-1) vector.
// returns 1 if successful, 0 if error
{
	
	
	
	
	
		
		
		
		
		
	
		
			col[i] = q[j][i];	/*backsubs w/ cols of trans(q) */
		
		
			y[i][j] = col[i];
	
	
		
		
			
	
	
	
	


// searches for target in array.  searching starts at array[start_ind] and stops at array[stop_ind], inclusive.
// the absolute index of the first occurence of target in array is returned. if target is not found, -1 is returned.
{
	
	
		
			
	
