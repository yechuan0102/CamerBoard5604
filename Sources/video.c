#include "includes.h"
//*************************************************************************
//*		 *************************��������*****************************   *
//*************************************************************************
//����ͼ����
word crow = 0;           //����������
byte prow = 0;  	  	    //����ͷ������ǰ��
byte pcolumn = 0;        //����ͷ��ǰ��
byte RowSAIC_DelayTime=43;   //ͼ����ʱʱ��43
//����������־
byte fieldover = 0;                //һ������������־�� 
int kkk=0;
int kkk2=0;
//������ά����    
volatile byte g_pix[ROWS][COLUMNS]; 
byte pix[ROWS][COLUMNS];

word selectRows[ROWS]=
{
//��С��:23
//�����:257
//ͼ������ӽ���Զ
/*23 ,39 ,52 ,65 ,76 ,89 ,96 ,105,113,121,
128,134,140,146,151,156,161,165,169,173,
177,180,183,186,189,192,195,198,200,202,
204,206,208,210,212,214,216,218,220,222,
224,225,226,227,228,229,230,231,232,233,
234,235,236,237,238,239,240,241,242,243,
244,245,246,247,248,249,250,251,252,253,
*/
	8  ,12 ,16 ,20 ,24 ,28, 32, 36 ,
	40 ,44 ,48 ,52 ,56 ,60 ,64 ,68 ,
	72 ,76 ,80 ,84 ,88 ,92 ,96 ,100,
	104,108,112,116,120,124,128,132,
	136,140,144,148,152,156,160,164,
	168,172,176,180,184,188,192,196,
	200,204,208,212,216,220,224,228,
	232,236,240,244,248,252,256,260,//64
	261,262,263,264,265,271//X


};

//*************************************************************************
//*   **************************�жϺ���****************************      *
//*************************************************************************
void FieldInputCapture(void) 
{	
	D0=~D0;
//    	EMIOS_0.CH[3].CSR.B.FLAG = 1;
	EMIOS_0.CH[3].CCR.B.FEN=0;  //�رճ��ж� 
	prow=0;crow=0;
	EMIOS_0.CH[7].CCR.B.FEN=1;	//�������ж�
}


void RowInputCapture(void) 
{	
		D1=~D1;
	EMIOS_0.CH[7].CSR.B.FLAG = 1;
	
	++crow;
	//������ʼ
	//����Ӱ ��Ϊ����ͷ����źŵ�ǰ�����ǲ����õģ������ӵ�ǰROWS_MIN��
	if(crow>selectRows[prow])
  	{
	    for(pcolumn=0;pcolumn<RowSAIC_DelayTime;++pcolumn) {}
	    /************************
	    	��ʱ������
	    ***********************************/ 
	   
	   	g_pix[ROW-prow][82]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][81]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][80]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][79]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][78]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][77]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][76]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][75]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][74]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][73]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][72]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][71]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][70]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	    																																																			
	   	g_pix[ROW-prow][69]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][68]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][67]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][66]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][65]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][64]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][63]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][62]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][61]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][60]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   																																																			 
	   	g_pix[ROW-prow][59]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][58]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][57]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][56]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][55]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][54]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][53]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][52]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][51]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][50]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");

	   	g_pix[ROW-prow][49]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][48]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][47]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][46]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][45]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][44]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][43]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][42]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][41]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][40]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	    	   		   		   		   		
	   	g_pix[ROW-prow][39]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][38]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][37]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][36]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][35]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][34]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][33]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][32]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][31]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][30]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	
	   	g_pix[ROW-prow][29]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][28]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][27]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][26]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][25]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][24]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][23]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][22]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][21]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][20]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   		   		   		   	
	   	g_pix[ROW-prow][19]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][18]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][17]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][16]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][15]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][14]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][13]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][12]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][11]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][10]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	
	   	g_pix[ROW-prow][9]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][8]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][7]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][6]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][5]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][4]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][3]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][2]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][1]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");
	   	g_pix[ROW-prow][0]=SIU.GPDI[42].R; asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");	
	    ++prow;
		if(prow==ROWS)
		{
			EMIOS_0.CH[7].CCR.B.FEN=0; 	//�ر����ж�
			fieldover=1; 
		}
	}
}

/*----------------------------------------------------------------------*/
/*��Ƶ�ź����                                            	 */
/*----------------------------------------------------------------------*/
void Video_Image(void)
{
	int y,x,i;
	for(y=0;y<ROWS/8;y++)
		for(x=0;x<COLUMNS;x++)
		{
			pix[y][x]=0;
			for(i=7;i>=0;i--)
				pix[y][x]=pix[y][x]*2+g_pix[y*8+i][x];
		}	
}
void Display_Video(void)
{
	BYTE x,y;
	Video_Image();
	for(y=0;y<8;y++)
	{
		LCD_Set_Pos(10,y);				
    	for(x=0;x<COLUMNS;x++)
	    {      
	    	LCD_WrDat(pix[y][x]);	    	
	    }
	}
}

//*************************************************************************																							                        
//*   ********************���߷���ͼ��******************************      *	
//*************************************************************************
/*void Send_CCD_Video(void) 
{
  unsigned char i,j;
  LINFlex_TX(0x55);
  LINFlex_TX(0xAA);
  LINFlex_TX(0xFF);
  for(i = 0;i < ROWS;i ++)
  {   
   for(j = 0;j < COLUMNS;j ++)
    LINFlex_TX(g_pix[i][j]*255);
  }
  LINFlex_TX(0xFF);
  LINFlex_TX(0xAA);
  LINFlex_TX(0x55);
}

void SetupCCD(void)
{   
  LINFlex_TX(0xAA);        
  LINFlex_TX(0xBB);        
  LINFlex_TX(0xFF);        
  LINFlex_TX(ROWS);        
  LINFlex_TX(COLUMNS);         
  LINFlex_TX(0xFF);        
  LINFlex_TX(0xBB);        
  LINFlex_TX(0xAA);        
}

void SetupBKL(void)
{
    unsigned char para1[10] = {"L"};//������ʾ����λ���ϵı�����
    unsigned char para2[10] = {"R"};  
    unsigned char para3[10] = {"target_a"};
    byte i;
       
    LINFlex_TX(0xCC);        
    LINFlex_TX(0xDD);        
    LINFlex_TX(0xFF);         
                                             
    LINFlex_TX(ROWS);        
    LINFlex_TX(COLUMNS);        
    LINFlex_TX(3);         // number of parameters
    
    LINFlex_TX(0);         // display position  0��1�ֱ��ʾ����ߴ��ڻ����ұߴ�����ʾ
    LINFlex_TX(0);         // display position
    LINFlex_TX(1);
    
    for(i=0;i<10;++i)
    	LINFlex_TX(para1[i]);
    for(i=0;i<10;++i)
    	LINFlex_TX(para2[i]);
   	for(i=0;i<10;++i)
    	LINFlex_TX(para3[i]);
    	        
    LINFlex_TX(9);         // parameter color
    LINFlex_TX(5);
    LINFlex_TX(9);         // parameter color
    
    LINFlex_TX(0xFF);        
    LINFlex_TX(0xDD);        
    LINFlex_TX(0xCC);  
}

void Send_CCD_Blackline(void)
{
	byte i=0;
    LINFlex_TX(0x55);
    LINFlex_TX(0xBB);
    LINFlex_TX(0xFF);
    for(;i<ROWS;++i)
    	LINFlex_TX(BlackLine[0][i]);
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(LineType[0]);//
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(LineType[1]);//
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(0x00);
    LINFlex_TX(target_offset);//
    LINFlex_TX(0xFF);        
    LINFlex_TX(0xBB);        
    LINFlex_TX(0x55);              
}

*/
