int func13(int venc, int nj, int max, int mod, float med, char *nome) 
{   
    int k;

    if(venc == -1)
        strcpy(nome, "Davi Pedro");
    
    if(nj > 1)
        k = 5;
    if(max <= 10)
        k = 1;
    if((mod == 1) || (mod == 5))
        k = mod + 1;
    else
    {   
        if(mod == 6)
            k = 7;
        else
        {    
            if(venc == 2 || venc == 5)
                k = venc + 3;
            else
            {    
                if(med >= 5 && med <= 10)
                    k = med + 1;
                else
                { 
                    if(med >= 2 && med <= 4)
                        k = med + 1;
                    else 
                        k = 2;
                }
            }
        }
    }    
    return k;
}



