#include<iostream>
#include<cmath>
using namespace std;

 class Result{
    public:
    float res;
    b
 };

 class SimpleCal {
    protected:
    float a,b,res;
    public:
     SimpleCal(){};
     SimpleCal(float a, float b):a(a),b(b){};
     void calci(){
         char c;
         cout<<"enter the operand"<<endl;
         cin>>c;
         switch (c)
         {
         case '+':
         res=a+b;
            break;
         case '*':
         res=a*b;
            break;
         case '-':
         res=a-b;
            break;
         case '/':
         res=a/b;
            break;
         
          
         }
        cout<<res<<endl;

         
     }
     
     
  
 };

 class ScientificCalc {
    protected:
     float a1,res;
     public:
     ScientificCalc(){};
     ScientificCalc(float a1):a1(a1){};
     void SciCalci(){
        cout<<"1.sin"<<endl<<"2.cos"<<endl<<"3.log"<<endl<<"4.tan"<<endl;
        int n;
        cin>>n;
        switch (n)
        {
        case  1:
        res=sin(a1);
           break;
        
        case  2:
        res=cos(a1);
           break;
        
        case  3:
        res=log(a1);
           break;
        
        case  4:
        res=tan(a1);
           break;
        
        
        }
        cout<<res<<endl;
     }
     

     




 };

 class HybridCalc:public ScientificCalc, public SimpleCal  {
    public:
    HybridCalc(){};
    HybridCalc(float a):ScientificCalc(a){};
    HybridCalc(float a,float b):SimpleCal(a,b){};
    
     


    
    

 };
 
 int main(){
   
     float a,b;
     cin>>a>>b;
     HybridCalc y(a);
     HybridCalc z(a,b);
     y.SciCalci();
     z.calci();
     
     
     
     
     
      
      
     
      
 return 0;
 }#include<iostream>
 #include<cmath>
 using namespace std;

 class Result{
    public:
    float res;
    
 };

 class SimpleCal {
    protected:
    float a,b,res;
    public:
     SimpleCal(){};
     SimpleCal(float a, float b):a(a),b(b){};
     void calci(){
         char c;
         cout<<"enter the operand"<<endl;
         cin>>c;
         switch (c)
         {
         case '+':
         res=a+b;
            break;
         case '*':
         res=a*b;
            break;
         case '-':
         res=a-b;
            break;
         case '/':
         res=a/b;
            break;
         
          
         }
        cout<<res<<endl;

         
     }
     
     
  
 };

 class ScientificCalc {
    protected:
     float a1,res;
     public:
     ScientificCalc(){};
     ScientificCalc(float a1):a1(a1){};
     void SciCalci(){
        cout<<"1.sin"<<endl<<"2.cos"<<endl<<"3.log"<<endl<<"4.tan"<<endl;
        int n;
        cin>>n;
        switch (n)
        {
        case  1:
        res=sin(a1);
           break;
        
        case  2:
        res=cos(a1);
           break;
        
        case  3:
        res=log(a1);
           break;
        
        case  4:
        res=tan(a1);
           break;
        
        
        }
        cout<<res<<endl;
     }
     

     




 };

 class HybridCalc:public ScientificCalc, public SimpleCal  {
    public:
    HybridCalc(){};
    HybridCalc(float a):ScientificCalc(a){};
    HybridCalc(float a,float b):SimpleCal(a,b){};
    
     


    
    

 };
 
 int main(){
   
     float a,b;
     cin>>a>>b;
     HybridCalc y(a);
     HybridCalc z(a,b);
     y.SciCalci();
     z.calci();
     
     
     
     
     
      
      
     
      
 return 0;
 }