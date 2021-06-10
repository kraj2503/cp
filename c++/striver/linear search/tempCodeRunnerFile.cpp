   int a,D,d,A,B,C;
        cin>>a>>d>>A>>B>>C;
        D=a*d;
        if(D<10){
            cout<<"0"<<endl;
        }
        else if((D>=10)&&(D<21)){
            cout<<A<<endl;
        }
        else if((D>=21)&&(D<42)){
            cout<<B<<endl;
        }
        else if(D<=42){
            cout<<C<<endl;
        }