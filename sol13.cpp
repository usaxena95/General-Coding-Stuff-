#include <iostream>
#include <fstream>
using namespace std;
string add(string num1,string num2)
{
		string ans;
			int q,carry=0;
				
				reverse(num1.begin(),num1.end());
					reverse(num2.begin(),num2.end());
						
						if(num1.size()>num2.size())
								swap(num1,num2);
							
							for(int i=0;i<num1.size();i++)
									{
											q = carry+(num1[i]-48)+(num2[i]-48);
												if(q>9)
														{
																ans += 48+(q%10);
																	carry=1;}
																		else{
																				ans += 48+q;
																					carry=0;}
																						}
								for(int i=num1.size();i<num2.size();i++)
										{
												q = carry+(num2[i]-48);
													if(q>9)
															{
																	ans += 48+(q%10);
																		carry=1;}
																			else{
																					ans += 48+q;
																						carry=0;}
																							}
									if(carry==1)
											ans+="1";
										reverse(ans.begin(),ans.end());
											return ans;
}

int main()
{
		string lol,answer;
			ifstream fin("add.txt");
				for(int i=0;i<100;i++)
						{
								fin >> lol;
									answer = add(answer,lol);
										}
					for(int i=0;i<10;i++)
							cout << answer[i];
						cout << endl;
							fin.close();
}
