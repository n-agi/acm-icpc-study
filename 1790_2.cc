#include <stdio.h>
#include <math.h>

int main(void)
{
		int in1, in2;
			int cnt = 0;
				int num1, x, y, z; //in2를 위한 변수
					int num2, u=0; //in1를 위한 변수

						scanf("%d %d", &in1, &in2);

							num2 = in1;
								while (num2)
										{
													num2 /= 10;
															cnt++;
																}
									for (int i = 2; i <= cnt; i++)
											{
														u = u + (i-1) * (pow(10, i-1) - pow(10, i-2));
															}
										in1 = in1 - (pow(10, cnt - 1) - 1);
											u = u + in1 * cnt;
												if (u < in2)
														{
																	printf("-1");
																			return 0;
																				}

													num1 = in2;
														cnt = 0;
															while (num1)
																	{
																				num1 /= 10;
																						cnt++;
																							}
																in2 = in2 - (pow(10, cnt - 1) - 1);
																	x = in2 / cnt;
																		y = in2 % cnt;
																			z = (pow(10, cnt - 1)-1) + x;
																				
																				while (y--)
																						{
																									z = z / 10;
																										}

																					printf("%d", z % 10);
																						return 0;
}

