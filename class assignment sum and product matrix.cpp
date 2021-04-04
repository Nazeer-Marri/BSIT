#include<iostream>
using namespace std;
const int MAX=3;
class matrix
{
	private:
		int mat[MAX][MAX];//mat[3][3]
		public:
			matrix();
			void create();
			void display();
			void add_mat(matrix &mat1,matrix &mat2);
			void mul_mat(matrix &mat1,matrix&mat2);

};
matrix::matrix()
{
	for(int m=0;m<MAX;m++)
	  for(int n=0;n<MAX;n++)
	     mat[m][n]=0;
}
void matrix::create()
{
		for(int m=0;m<MAX;m++)
	  for(int n=0;n<MAX;n++)
	       cin>>mat[m][n];
}
void matrix::add_mat(matrix &mat1,matrix&mat2)
{
		for(int m=0;m<MAX;m++)
	  for(int n=0;n<MAX;n++)
	  {
	  	mat[m][n]=mat1.mat[m][n]+mat2.mat[m][n];
	  }
}
void matrix::mul_mat(matrix &mat1,matrix&mat2)
{
	for(int k=0;k<MAX;k++)
		for(int m=0;m<MAX;m++)
	        for(int n=0;n<MAX;n++)
	      {
	  	    mat[m][n]=mat[m][n]+mat1.mat[m][n]*mat2.mat[m][n];
	  	}
}
void matrix::display()
  {
         	for(int m=0;m<MAX;m++)
         {
         	 for(int n=0;n<MAX;n++)
	  {
	  	cout<<mat[m][n]<<" ";
		  }	
		  cout<<endl;
	}
}
int main()
{
	matrix mat1,mat2,mat3;
	cout<<"enter frist matrix:"<<endl;
	mat1.create();
		cout<<"enter second matrix:"<<endl;
		mat2.create();
			cout<<"enter frist matrix:"<<endl;
	mat1.display();
		cout<<"enter second matrix:"<<endl;
		mat2.display();
	mat3.add_mat(mat1,mat2);
	 cout<<"addition of 3 matrix: "<<endl;
	mat3.display();
	cout<<"multiplication of 3 matrix: "<<endl;
	mat3.mul_mat(mat1,mat2);
	mat3.display();
	return 0;
}














