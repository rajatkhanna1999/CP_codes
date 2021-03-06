


//!!!大きく分けて、二つのものがある。
//!!!一つは、軸が傾いている斜交座標系となるもの
//!!!もう一つは、交互に左右にずれているもの
//!!!大きく違うので、注意。
//vector<string>で与えられる時は"左右にずれ"パターンが多いと思う
//書いて確かめてみるのが良い

//■"左右にずれ"パターン
/*
	X軸が傾いていなくて、最初は左で、左右にずれている場合
	 ／＼／＼／＼／＼
	｜00｜10｜20｜30｜―→X軸
	 ＼／＼／＼／＼／＼
    ｜01｜11｜21｜31｜
   ／＼／＼／＼／＼／
	｜02｜12｜22｜32｜
	 ＼／＼／＼／＼／
*/

//接している6方向
int dx1[] = {-1,0,-1,1,-1,0}, dx2[] = {0,1,-1,1,0,1}, dy[] = {-1,-1,0,0,1,1};
//下のようにして使う(i,jは元々のの座標)
	int y = i + dy[k];
	int x = j + (i % 2 == 0 ? dx1[k] : dx2[k]);
//プラス方向のみ
int dx1[] = {1,-1,0}, dx2[] = {1,0,1}, dy[] = {0,1,1};


//■斜交座標系パターン
/*
	Y軸が傾いてなくて、X軸が下に傾いている場合
	         ___
	     ___/ 0,\___
	 ___/-1,\-2_/ 1,\___
	/-2,\-1_/~0,\-2_/ 2,\
	\_0_/-1,\-1_/~1,\-2_/
	/-2,\_0_/~0,\-1_/~2,\
	\_1_/-1,\_0_/~1,\-1_/
	/-2,\_1_/ 0,\_0_/~2,\
	\_2_/-1,\_1_/ 1,\_0_/、
	    \_2_/ 0,\_1_/     ＼|
	        \_2_/         ~~'
	          |              X軸
	         \|/
	         Y軸

	角度(1/6, 1/3pi, 60°)の斜交座標系
*/


//接している座標 プラス方向のみ
int dx[] = {1, 1, 0}, dy[] = {0, 1, 1};
//接している座標 6方向全て
int dx[] = {1, 1, 0, -1, -1, 0}, dy[] = {0, 1, 1, 0, -1, -1};

//大きさ(中心からの距離)が与えられた時の範囲
//注意: Nをデクリメントしとく
N --;
rer(x, -N, N) {
	int yl = max(-N, x - N);
	int yu = min(x + N, N);
	rer(y, yl, yu) {
		//(y, x)が座標
		//0-indexにしたい時は、
		//(N+y, N+x) を使えば良い
	}
}


/*
	斜交座標系のものを傾けて整数で扱えるようにする
	http://community.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm206
	HexagonIntersections.cpp
*/

