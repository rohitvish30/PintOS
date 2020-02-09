
#define F (1 << 14)

int INT_TO_REAL(n){
    return n * F;       // Converting from int to real by multiplying by 2 power 14
}

int REAL_TO_INT(x){
    return x / F;       // Converting from real to int by dividing by 2 power 14
}

int REAL_TO_INT_ROUND(x){
    if(x>=0)
	{
		return (x+F/2)/F;   //Round into the nearest integer
	}
	else
	{
		return (x-F/2)/F;   // Round into the nearest integer
	} 
}

int REAL_ADD(x,y){
    return x + y;       //Add two real numbers
}

int REAL_SUB(x,y){
    return x - y;       // Subtraction of two real numbers.
}

int REAL_ADD_INT(x,n){
    return x + n * F;   // ADdition of one real and one integer. By multiplying int to 2 power 14
}

int REAL_SUB_INT(x,n){
    return x - n * F;   // SUbtract integer from a real number.
}

int REAL_MULT(x,y){
    return (int64_t)x * y / F; // Multiply  real numbers
}

int REAL_DIV(x,y){
    return (int64_t)x * F / y; // Divide real numbers
}


int REAL_MULT_INT(x,n){
    return x * n;       // Multiply Real and int number
}

int REAL_DIV_INT(x,n){
    return x / n;       // Divide real and int number
}


