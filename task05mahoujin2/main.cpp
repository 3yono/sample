/*******************************************************************************
* タイトル:		魔方陣
* プログラム名:	main.cpp
* 作成者:		GP11B341 13 佐山浩樹
* 作成日:		2018/05/25
*******************************************************************************/

/*******************************************************************************
* scanf のwarning防止
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "nijikansu.h"

/*******************************************************************************
* マクロ定義
*******************************************************************************/
#define Y_MAX (11)


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* プロトタイプ宣言
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
* グローバル変数
*******************************************************************************/


/*******************************************************************************
 関数名:	int main( void )
 引数:	void
 戻り値:	正常終了: int型の 0
 説明:	メイン関数
*******************************************************************************/
int main( void )
{	
	//変数宣言
	int select = 0;
	int loop = 0;

	while (1)
	{

		printf("GP11 課題No.5 「魔方陣」　　　　　　　　　　　　　　GP11B341_13_佐山浩樹\n");
		printf("1～8を入力してください\n");
		printf("1～6は図形描画。7はアニメーションになります\n");
		printf("8は二次元配列のアニメーションになります\n");
		printf("0で終了します\n");
		scanf("%d", &select);

		system("cls");

		switch (select)
		{
		case 0:
			return 0;

		case 1:

			printf("1つ目\n");

			mahoujin1();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");
			break;

		case 2:

			/*関数呼び出し*/

			printf("2つ目\n");

			mahoujin2();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 3:

			/*関数呼び出し*/

			printf("3つ目\n");

			mahoujin3();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 4:

			/*関数呼び出し*/
			printf("4つ目\n");

			mahoujin4();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 5:

			/*関数呼び出し*/
			printf("5つ目\n");

			mahoujin7();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 6:

			/*関数呼び出し*/
			printf("6つ目\n");

			mahoujin8();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 7:

			/*関数呼び出し*/
			printf("7つ目\n");
			printf("ループしたい回数を入力してください\n");
			scanf("%d", &loop);

			system("cls");

			mahoujin10(loop);

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;

		case 8:

			/*関数呼び出し*/
			system("cls");
			animetion();

			// キー入力待ち
			rewind(stdin);
			_getch();

			system("cls");

			break;
		
		}
		
	}
		
	// キー入力待ち
	rewind(stdin);
	_getch();
	
	/* 終了 */
	return 0;
}

/***********
**関数1つ目*
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
**関数2つ目*
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
			printf("◆");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}
		
		printf("\n");
	}
		

}

/***********
**関数3つ目*
************/
void mahoujin3(void)
{
	//printf("こちらは3つめの魔法陣です\n");
	int i, j, k;
	for (i = 0; i < Y_MAX; i++)
	{
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}
		for (k = Y_MAX; k > i; k--)
		{
			printf("◇");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}


		printf("\n");
	}

}

/***********
**関数4つ目*
************/
void mahoujin4(void)
{
	mahoujin2();
	mahoujin3();
}

/***********
**関数5つ目*
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
			printf("◆");


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
			printf("◇");


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
			printf("◆");


		}
		for (j = 0; j < Y_MAX - i; j++)
		{
			printf("l");
		}

		printf("\n");
	}
}

/***********
**関数6つ目*
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
			printf("◇");


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
			printf("◆");


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
			printf("◇");


		}
		for (j = 0; j < 1 + i; j++)
		{
			printf("l");

		}


		printf("\n");
	}
}

/***********
**関数7つ目*
************/
void mahoujin7(void)
{
	mahoujin5();
	mahoujin6();
}

/***********
**関数8つ目*
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
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (j = 0; j < 2 + i; j++)
		{
			printf("l");

		}

		printf("\n");
	}
}


/***********
**関数9つ目*
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
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◆");
		}

		for (k = 0; k < 4; k++)
		{
			printf("◇");
		}

		for (j = 0; j < 2 + i; j++)
		{
			printf("l");

		}

		printf("\n");
	}
}

/***********
**関数10個目*
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