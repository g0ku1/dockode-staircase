#include <string>
using namespace std;
int main()
{
    int step,space=0,i,j;
    char a=' ';
    cout<<"enter the number of steps:";
    cin>>step;
    cout<<"\n";
    for(i=0;i<=step;i++)
    {
     if(i==0)
      {
            std::cout<<"____\n";
            space=space+4;

        }
     else if(i<step)
      {
            std::cout<<"|"<<std::string(space,' ')<<"|\n";
            std::cout<<"|"<<std::string(space,' ')<<"|___ \n";
            space=space+4;
      }
     else if(i==step)
      {
            std::cout<<"|"<<std::string(space,' ')<<"|\n";
            std::cout<<"|"<<std::string(space,'_')<<"|\n";
      }

    }

}

