/*#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
#define MATRIX_DIM 2048
int main(int argc, char **argv)
{
        int i, j;
        double** m1 = new double*[MATRIX_DIM];
        for (int i = 0; i < MATRIX_DIM; ++i)
                m1[i] = new double[MATRIX_DIM];


        for(i=0;i<MATRIX_DIM;i++)
        {
                for(j=0;j<MATRIX_DIM;j++)
                {
                        m1[i][j]=9.5;
                }
        }


for(i=0;i<MATRIX_DIM;i++)
        {
                for(j=0;j<MATRIX_DIM;j++)
                {
                        cout<<m1[i][j];
                }
                cout<<endl;
        }
        cout<<m1[2047][2047];

        for (int i = 0; i < MATRIX_DIM; ++i)
                delete [] m1[i];
        delete [] m1;
        int i, c;
        char *big_massive = new char[1073741824];
    srand((unsigned)time(0));

        for(;;)
        {
                i = (rand()%1073741824)+1;
                big_massive[i]=55;
                cout<<big_massive[i]<<endl;
        }
        cin>>c;
        delete big_massive;
    return 0;

}*/


//   #include <iostream>
//    #include <thread>
//
//    //This function will be called from a thread
//
//    void call_from_thread() {
//        std::cout << "Hello, World" << std::endl;
//    }
//
//    int main() {
//        //Launch a thread
//        std::thread t1(call_from_thread);
//        //Join the thread with the main thread
//        t1.join();
//
//        return 0;
//    }



#include <cstdlib>
#include <ctime>
#include <iostream>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
const int VECTOR_DIM = 2048;

void vector_matrix_mult()
{
    register int i, j, k;
    using namespace boost::numeric::ublas;
    matrix<int> m(VECTOR_DIM, VECTOR_DIM);
    vector<int> v_in(VECTOR_DIM);
    vector<int> v_out(VECTOR_DIM);

    for(i = 0; i < VECTOR_DIM; ++i) {
	for(j = 0; j < VECTOR_DIM; ++j) {
	    m(i, j) = i + j;
	}
	v_in(i) = i;
	v_out(i) = 0;
    }

    clock_t startTime, endTime;
    for(;;)
	{
		startTime = clock();
		for (i = 0; i < VECTOR_DIM ; ++ i)
		{
			for ( j = 0; j < VECTOR_DIM; ++ j)
			{
					v_out(i) = v_out(i) + v_in(j)* m(i,j);
			}
		}
		//v_out = prod(v_in, m);
		endTime = clock();
		std::cout << double(endTime - startTime) << std::endl;
	}
    //std::cout << v_in << std::endl;
    //std::cout << m << std::endl;
    //std::cout << v_out << std::endl;
    std::cin >> k;
}





//
//
//
//
//#include <cstdlib>
//#include <ctime>
//#include <iostream>
//#include <boost/numeric/ublas/matrix.hpp>
//#include <boost/numeric/ublas/io.hpp>
//const int VECTOR_DIM = 2048;
//
//int Matrix_Mult()
//{
//    int i, j, k;
//    using namespace boost::numeric::ublas;
//    matrix<double> m_out(VECTOR_DIM, VECTOR_DIM);
//    matrix<double> m_1(VECTOR_DIM, VECTOR_DIM);
//	matrix<double> m_2(VECTOR_DIM, VECTOR_DIM);
//
//    for(i = 0; i < VECTOR_DIM; ++i) 
//	{
//		for(j = 0; j < VECTOR_DIM; ++j) 
//		{
//			m_1(i, j) = i + j;
//			m_2(i, j) = i + j;
//			m_out(i, j) = 0;
//		}
//    }
//
//    clock_t startTime, endTime;
//    startTime = clock();
//
//
//	for (i = 0; i < VECTOR_DIM ; ++ i) 
//	{
//		for ( j = 0; j < VECTOR_DIM; ++ j)
//		{
//			for ( k = 0; k < VECTOR_DIM; ++ k)
//			{
//				m_out(i,j) = m_out(i,j) + m_1(i,k)* m_2(k,j);
//			}
//		}
//	}
//
//    //m_out = prod(m_1, m_2);
//
//    endTime = clock();
//    std::cout << double(endTime - startTime) << std::endl;
//    //std::cout << m_1 << std::endl;
//	//std::cout << m_2 << std::endl;
//	//std::cout << m_out << std::endl;    
//    std::cin >> k;
//}


int main()
{
	vector_matrix_mult();
	return 0;
}