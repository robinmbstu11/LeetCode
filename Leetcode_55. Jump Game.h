//
// Created by FNU Shariful on 7/7/22.
//
// https://leetcode.com/problems/jump-game/

#ifndef LEETCODE_LEETCODE_55_JUMP_GAME_H
#define LEETCODE_LEETCODE_55_JUMP_GAME_H

#include "vector"

using namespace std;

bool canJump(vector<int> &nums) {
    int mx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(  i > mx ) return false;
        else if (nums.at(i) + i > mx) mx = nums.at(i) + i;
    }
    return true;
}

#endif //LEETCODE_LEETCODE_55_JUMP_GAME_H
