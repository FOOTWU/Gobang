//
// Created by wmk03 on 2021/5/25.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#define ROW 10
#define COL 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBord(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们4种游戏状态
// 玩家WIN ‘*’
// 电脑WIN ‘#’
char IsWin(char board[ROW][COL], int row, int col);

#endif //UNTITLED_GAME_H
