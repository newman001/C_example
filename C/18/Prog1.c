/*------------------------------------------------
【程序设计】
--------------------------------------------------

打印如下所示的九九乘法表，采用for循环
------------------------------------------------*/

#include <stdio.h>
void main()
{
        int i,j,k;
        for(i=1;i<=9;i++)
                printf("%d\t",i); /*打印表头，第一行，1-9 */
        printf("\n");
        for(i=1;i<=9;i++)    /*打印表头，第2行，横线 */
                printf("-\t");
        printf("\n");
        /**********Program**********/
        for(i=1;i<=9;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d*%d=%d\t",j,i,j*i);
			}
			printf("\n");
		}
         /**********  End  **********/
}
