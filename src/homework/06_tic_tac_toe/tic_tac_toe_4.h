//h

#ifndef tic_tac_toe_4_h
#define tic_tac_toe_4_h

#include "tic_tac_toe.h"

class TicTacToe4: public TicTacToe
{
    public:
        TicTacToe4() : TicTacToe(4) {}

    private:
        bool check_column_win() override;
        bool check_diagonal_win() override;
        bool check_row_win() override;
};
#endif
