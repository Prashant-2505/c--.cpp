/* Raman is a student of GGSIPU. He is in 2nd semester. He had 5 subjects this semester. The passing marks for each subject is 40. If he fails in three or more subjects Mr. Diamond will give him a year lag. Raman was busy this semester in Codestorm and did not prepare for his exams. The marks he gets in each subject is given to you. Tell him whether he gets a year lag or not.

Input Format

There is only one line of input containing 5 integers,image, marks that Raman obtained in the 5 subjects.

Constraints

image

Output Format

Print YEARLAG if Raman fails in three or more subjects or CAZZ otherwise.\

Sample Input 0

66 24 7 95 53 
Sample Output 0

CAZZ
Sample Input 1

36 54 56 27 34 
Sample Output 1

YEARLAG
*/


#include <iostream>
using namespace std;

int main()
{

  int cnt = 0;
  for (int i=0; i<5; i++)
  {
    int a ;
    cin>>a;
    if (a <40)
    cnt++;
  }

if (cnt <=3)
{
    cout<<" YERLANG "<<endl;
}
else 
{
    cout<<"CAZZ"<<endl;
}
  
    return 0;
}
