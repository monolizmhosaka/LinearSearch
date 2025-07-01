// LinearSearch.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

void showArray(const int* p, int size)
{
    if (p == nullptr) return;

    for (int i = 0; i < size; i++)
    {
        cout << p[i] << "(" << i << "), ";
    }
    cout << endl;
}

int linearSearch(const int* p, int size, int target)
{
    if (p == nullptr) return -1;

    for (int i = 0; i<size; i++)
    {
        if (p[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// ここの数値を変えるだけで処理がしっかり変わる。
const int ARR_SIZE = 30;

int main()
{
    srand((unsigned int)time(NULL));

    // 配列を乱数初期化と、探す対象も乱数でもとめとく。
    int arr[ARR_SIZE] = {0};
    for (int i = 0; i < ARR_SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    int target = rand() % 100;

    // デバッグのため探す対象と配列の中身を表示
    cout << "target=" << target << endl;
    showArray(arr, ARR_SIZE);

    // 自作線形探索関数を呼び出して、結果を表示する。
    int r = linearSearch(arr, ARR_SIZE, target);
    if (r == -1)
    {
        cout << "ないで。" << endl;
    }
    else
    {
        cout << r << "番目に見つかったで。" << endl;
    }

}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
