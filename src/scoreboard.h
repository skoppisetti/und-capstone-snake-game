//
// Created by Suresh Koppisetti on 8/9/20.
//

#ifndef SDL2TEST_SCOREBOARD_H
#define SDL2TEST_SCOREBOARD_H

#include <iostream>

class ScoreBoard{
public:
    ScoreBoard(const std::size_t width, const std::size_t height);
    ~ScoreBoard();
    void UpdateScoreBoard();

private:
    std::string score;
    const std::size_t width;
    const std::size_t height;
};

#endif //SDL2TEST_SCOREBOARD_H
