#include <iostream>
using namespace std;
class divi
{
private:
  int A,B,rdivi;
  public:
    void division();
};
class multi
{
  private:
    divi n1;
    int C,D,rmulti;
  public:
    void multiplication();
};
class sub
{
  private:
    multi n2;
    int E,F,rsub;
  public:
    void subraction();
};
class add
{
  private:
    sub n3;
    int G,H,radd;
  public:
    void addition();
};
void add::addition()
{
  cout<<"\n ENTER THE VALUE FOR [ADDITION]:";
  cin>>G>>H;
  radd=G+H;
  cout<<"THE ADDITION IS:"<<radd;
  n3.subraction();
}
void sub::subraction()
{
  cout<<"\n ENTER THE VALUE FOR [SUBRACTION]:";
  cin>>E>>F;
  rsub=E-F;
  cout<<"THE SUBRACTION IS:"<<rsub;
  n2.multiplication();
}
void multi::multiplication()
{
  cout<<"\n ENTER THE VALUE FOR [MULTIPLICATION]:";
  cin>>C>>D;
  rmulti=C*D;
  cout<<"THE MULTIPLICATION IS:"<<rmulti;
  n1.division();
}
void divi::division()
{
  cout<<"\n ENTER THE VALUE FOR [DIVISION]:";
  cin>>A>>B;
  rdivi=A/B;
  cout<<"THE DIVISION IS:"<<rdivi;
}
int main()
{
  add n;
  n.addition();
  return(0);
}
