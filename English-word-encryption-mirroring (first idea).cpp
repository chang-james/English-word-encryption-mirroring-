int main() {  
	int a ,i;
  char  c1 ,c2 ,c3 ,c4 ;     
  while(cin >> a >> c1 >> c2 >> c3 >> c4)
	{  
		if(c1+a>122)
		{
			for (i=1;i<=26;i++)
			{
				if (c1+i==123)
				{
					c1=96+i;
					break;
				}
			}
		}else if(c1+a>90&&c1<97)
		{
			for (i=1;i<=26;i++)
			{
				if (c1+i==91)
				{
					c1=64+i;
					break;
				}
			}
		}else{
			c1+=a;
		}
		if(c2+a>122)
		{
			for (i=1;i<=26;i++)
			{
				if (c2+i==123)
				{
					c2=96+i;
					break;
				}
			}
		}
		else if(c2+a>90&&c2<97)
		{
			for (i=1;i<=26;i++)
			{
				if (c2+i==91)
				{
					c2=64+i;
					break;
				}
			}
		}else{
			c2+=a;
		}
		if(c3+a>122){
			for (i=1;i<=26;i++)
			{
				if (c3+i==123)
				{
					c3=96+i;
					break;
				}
			}
		}
		else if(c3+a>90&&c3<97)
		{
			for (i=1;i<=26;i++)
			{
				if (c3+i==91)
				{
					c3=64+i;
					break;
				}
			}
		}else{
			c3+=a;
		}
		if(c4+a>122){
			for (i=1;i<=26;i++)
			{
				if (c4+i==123)
				{
					c4=96+i;
					break;
				}
			}
		}
		else if(c4+a>90&&c4<97)
		{
			for (i=1;i<=26;i++)
			{
				if (c4+i==91)
				{
					c4=64+i;
					break;
				}
			}
		}else{
			c4+=a;
		}
  cout << c2 << c1 << c4 << c3 << endl;  
	}
}