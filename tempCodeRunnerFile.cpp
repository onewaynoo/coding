vector<int> v;
     int det = b*b-4*a*c;
     if(det<0)
     v.push_back(-1);
     else
     {
        v.push_back((-1*b+sqrt(det))/2*a);
        v.push_back((-1*b-sqrt(det))/2*a);
     }
     return v;