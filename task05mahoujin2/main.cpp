/*******************************************************************************
* �^�C�g��:		�����w
* �v���O������:	main.cpp
* �쐬��:		GP11B341 13 ���R�_��
* �쐬��:		2018/05/25
*******************************************************************************/

/*******************************************************************************
* scanf ��warning�h�~
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

/*******************************************************************************
* �C���N���[�h�t�@�C��
*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "nijikansu.h"

/*******************************************************************************
* �}�N����`
*******************************************************************************/
#define Y_MAX (11)


/*******************************************************************************
* �\���̒�`
*******************************************************************************/


/*******************************************************************************
* �v���g�^�C�v�錾
*******************************************************************************/
void mahoujin1(void);
void mahoujin2(void);
void mahoujin3(void);
void mahoujin4(void);
void mahoujin5(void);
void mahoujin6(void);
void mahoujin7(void);
void mahoujin8(void);
void mahoujin9(void);
void mahoujin10(int loop);





/*******************************************************************************
* �O���[�o���ϐ�
*******************************************************************************/


/*******************************************************************************
 �֐���:	int main( void )
 ����:	void
 �߂�l:	����I��: int�^�� 0
 ����:	���C���֐�
*******************************************************************************/
int main( void )
{	
	//�ϐ��錾
	int select = 0;
	int loop = 0;

	while (1)
	{

		printf("GP11 �ۑ�No.5 �u�����w�v�@�@�@�@�@�@�@�@�@�@�@�@�@�@GP11B341_13_���R�_��\n");
		printf("1�`8����͂��Ă�������\n");
		printf("1�`6�͐}�`�`��B7�̓A�j���[�V�����ɂȂ�܂�\n");
		printf("8�͓񎟌��z��̃A�j���[�V�����ɂȂ�܂�\n");
		printf("0�ŏI�����܂�\n");
		scanf("%d", &select);

		system("cls");

		switch (select)
		{
		case 0:
			return 0;

		case 1:

			printf("1��\n");

			mahoujin1();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");
			break;

		case 2:

			/*�֐��Ăяo��*/

			printf("2��\n");

			mahoujin2();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 3:

			/*�֐��Ăяo��*/

			printf("3��\n");

			mahoujin3();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 4:

			/*�֐��Ăяo��*/
			printf("4��\n");

			mahoujin4();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 5:

			/*�֐��Ăяo��*/
			printf("5��\n");

			mahoujin7();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 6:

			/*�֐��Ăяo��*/
			printf("6��\n");

			mahoujin8();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 7:

			/*�֐��Ăяo��*/
			printf("7��\n");
			printf("���[�v�������񐔂���͂��Ă�������\n");
			scanf("%d", &loop);

			system("cls");

			mahoujin10(loop);

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 8:

			/*�֐��Ăяo��*/
			system("cls");
			animetion();

			// �L�[���͑҂�
			rewind(stdin);
			_getch();

			system("cls");

			break;
		
		}
		
	}
		
	// �L�[���͑҂�
	rewind(stdin);
	_getch();
	
	/* �I�� */
	return 0;
}

/***********
**�֐�1��*
************/
void mahoujin1(void)
{
	int i, j;

	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		printf("\n");
	}


}


/***********
**�֐�2��*
************/
void mahoujin2(void)
{

	int i, j, k;

	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("��");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		
		printf("\n");
	}
		

}

/***********
**�֐�3��*
************/
void mahoujin3(void)
{
	//printf("�������3�߂̖��@�w�ł�\n");
	int i, j, k;
	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (k = Y_MAX; k > i; k--)
		{
			printf("��");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}


		printf("\n");
	}

}

/***********
**�֐�4��*
************/
void mahoujin4(void)
{
	mahoujin2();
	mahoujin3();
}

/***********
**�֐�5��*
************/
void mahoujin5(void)
{
	int i, j, k;

	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("��");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("��");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("��");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}

		printf("\n");
	}
}

/***********
**�֐�6��*
************/
void mahoujin6(void)
{
	int i, j, k;
	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (k = Y_MAX; k > i; k--)
		{
			printf("��");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (k = Y_MAX; k > i; k--)
		{
			printf("��");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (k = Y_MAX; k > i; k--)
		{
			printf("��");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}


		printf("\n");
	}
}

/***********
**�֐�7��*
************/
void mahoujin7(void)
{
	mahoujin5();
	mahoujin6();
}

/***********
**�֐�8��*
************/
void mahoujin8(void)
{
	int i, j, k;

	for (i = 0; i < 21; i++)
	{
		for (j = 0; j < 22 - i; j++)
		{
			printf("l");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (j = 0; j < 2 + i; j++)
		{
			printf("l");

		}

		printf("\n");
	}
}


/***********
**�֐�9��*
************/
void mahoujin9(void)
{
	int i, j, k;

	for (i = 0; i < 21; i++)
	{
		for (j = 0; j < 22 - i; j++)
		{
			printf("l");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (k = 0; k < 4; k++)
		{
			printf("��");
		}

		for (j = 0; j < 2 + i; j++)
		{
			printf("l");

		}

		printf("\n");
	}
}

/***********
**�֐�10��*
************/
void mahoujin10(int loop)
{
	int i;
	for (i = 0; i < loop; i++)
	{

		mahoujin8();
		Sleep(500);
		system("cls");
		mahoujin9();
		Sleep(500);
		system("cls");
	}
}