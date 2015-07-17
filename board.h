#ifndef __BOARD_H__
#define __BOARD_H__

#include "common.h"

const uint64_t AFILE = 0x0101010101010101;
const uint64_t HFILE = 0x8080808080808080;
const uint64_t FILES[8] = {
    0x0101010101010101, 0x0202020202020202, 0x0404040404040404,
    0x0808080808080808, 0x1010101010101010, 0x2020202020202020,
    0x4040404040404040, 0x8080808080808080
};
const uint64_t RANKS[8] = {
    0x00000000000000FF, 0x000000000000FF00, 0x0000000000FF0000,
    0x00000000FF000000, 0x000000FF00000000, 0x0000FF0000000000,
    0x00FF000000000000, 0xFF00000000000000
};
const uint64_t DIAGONAL = 0x8040201008040201;
const uint64_t ANTIDIAGONAL = 0x0102040810204080;
const uint64_t LIGHT = 0x55AA55AA55AA55AA;
const uint64_t DARK = 0xAA55AA55AA55AA55;
const uint64_t NOTA = 0xFEFEFEFEFEFEFEFE;
const uint64_t NOTH = 0x7F7F7F7F7F7F7F7F;

//------------------------------Piece tables--------------------------------
const int pawnValues[64] = {
  0,  0,  0,  0,  0,  0,  0,  0,
 15, 25, 35, 40, 40, 35, 25, 15,
  5, 10, 15, 25, 25, 15, 10,  5,
  0,  5, 15, 20, 20, 10,  5,  0,
 -5, -5, 10, 15, 15,  0, -5, -5,
 -5, -5,  5, 10, 10,-10, -5, -5,
-10,  0,  0,  0,  0,  0,  0,-10,
  0,  0,  0,  0,  0,  0,  0,  0
};

const int egPawnValues[64] = {
  0,  0,  0,  0,  0,  0,  0,  0,
 90,100,110,110,110,110,100, 90,
 50, 60, 70, 70, 70, 70, 60, 50,
 15, 25, 35, 35, 35, 35, 25, 15,
 -5,  5, 10, 10, 10, 10,  5, -5,
-15, -5,  0,  0,  0,  0, -5,-15,
-25,-15,-10,-10,-10,-10,-15,-25,
  0,  0,  0,  0,  0,  0,  0,  0
};

const int knightValues[64] = {
-30,-15,-10,-10,-10,-10,-15,-30,
-20,-10,  0,  0,  0,  0,-10,-20,
-10,  0,  5,  5,  5,  5,  0,-10,
-10,  5,  5,  5,  5,  5,  5,-10,
-10,  0,  5,  5,  5,  5,  0,-10,
-10,  5,  5,  5,  5,  5,  5,-10,
-20,-10,  0,  5,  5,  0,-10,-20,
-30,-15,-10,-10,-10,-10,-15,-30
};

const int bishopValues[64] = {
-20,-10,-10,-10,-10,-10,-10,-20,
-10,  0,  0,  0,  0,  0,  0,-10,
-10,  0,  5,  0,  0,  5,  0,-10,
-10,  5,  5,  0,  0,  5,  5,-10,
-10,  5,  5,  0,  0,  5,  5,-10,
-10,  5,  5,  0,  0,  5,  5,-10,
-10,  5,  0,  0,  0,  0,  5,-10,
-20,-10,-10,-10,-10,-10,-10,-20
};

const int rookValues[64] = {
-10,  0,  0,  0,  0,  0,  0,-10,
  0, 10, 10, 10, 10, 10, 10,  0,
-10,  0,  0,  0,  0,  0,  0,-10,
-10,  0,  0,  0,  0,  0,  0,-10,
-10,  0,  0,  0,  0,  0,  0,-10,
-10,  0,  0,  0,  0,  0,  0,-10,
-10,  0,  0,  0,  0,  0,  0,-10,
-10, -5,  0,  0,  0,  0, -5,-10
};

const int queenValues[64] = {
-10, -5, -5, -5, -5, -5, -5,-10
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
-10, -5, -5, -5, -5, -5, -5,-10
};

const int kingValues[64] = {
 -75, -75, -75, -75, -75, -75, -75, -75,
 -60, -60, -60, -60, -60, -60, -60, -60,
 -45, -45, -45, -45, -45, -45, -45, -45,
 -30, -30, -30, -30, -30, -30, -30, -30,
 -15, -15, -15, -15, -15, -15, -15, -15,
   0,   5,  -5, -10, -10,  -5,   5,   0,
  10,  15,   0,  -5,  -5,   0,  15,  10,
  20,  35,  15,   0,   5,  10,  40,  20 
};

const int egKingValues[64] = {
 -20, -15, -10, -10, -10, -10, -15, -20,
 -15, -10,  -5,   0,   0,  -5, -10, -15,
 -10,  -5,   5,  10,  10,   5,  -5, -10,
 -10,   0,  10,  20,  20,  10,   0, -10,
 -10,   0,  10,  20,  20,  10,   0, -10,
 -10,  -5,   5,  10,  10,   5,  -5, -10,
 -15, -10,  -5,   0,   0,  -5, -10, -15,
 -20, -15, -10, -10, -10, -10, -15, -20 
};

// Mobility tables
const int knightMobility[9] = {
-15,-10, -5,  0,  4,  7,  9, 12, 15};
const int bishopMobility[14] = {
-20,-15,-10, -5,  0,  4,  7,  9, 11, 13, 15, 17, 19, 20};
const int rookMobility[15] = {
-20,-15,-10, -5, -2,  0,  2,  4,  6,  8, 10, 11, 12, 13, 14};
const int queenMobility[28] = {
-20,-13, -8, -6, -5, -4, -3, -2, -1,  0,  1,  1,  2,  2,
  3,  3,  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9};

// The initial board setup in mailbox form.
const int initMailbox[64] = {
    7, 3, 6, 10, 11, 6, 3, 7,
    2, 2, 2, 2, 2, 2, 2, 2,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    5, 1, 4, 8, 9, 4, 1, 5
};

/**
 * @brief A chess board and its associated functionality, including get legal
 *        moves and evaluation.
 */
class Board {

public:
    Board();
    Board(int *mailboxBoard, bool _whiteCanKCastle, bool _blackCanKCastle,
            bool _whiteCanQCastle, bool _blackCanQCastle,
            uint64_t _whiteEPCaptureSq, uint64_t _blackEPCaptureSq,
            int _fiftyMoveCounter, int _moveNumber, int _playerToMove);
    ~Board();
    Board staticCopy();
    Board *dynamicCopy();

    void doMove(Move m, int color);
    bool doPseudoLegalMove(Move m, int color);

    MoveList getAllLegalMoves(int color);
    MoveList getAllPseudoLegalMoves(int color);
    MoveList getLegalCaptures(int color);
    MoveList getPseudoLegalCaptures(int color);

    uint64_t getAttackMap(int color, int sq);
    bool getInCheck(int color);
    bool isWinMate();
    bool isBinMate();
    bool isStalemate(int sideToMove);

    // Evaluation
    int evaluate();
    int getPseudoMobility(int color);
    int getEGFactor();
    // Static exchange evaluation code: for checking material trades on a single square
    uint64_t getLeastValuableAttacker(uint64_t attackers, int color, int &piece);
    int getSEE(int color, int sq);
    int valueOfPiece(int piece);

    // Getter methods
    bool getWhiteCanKCastle();
    bool getBlackCanKCastle();
    bool getWhiteCanQCastle();
    bool getBlackCanQCastle();
    uint64_t getWhiteEPCaptureSq();
    uint64_t getBlackEPCaptureSq();
    int getFiftyMoveCounter();
    int getMoveNumber();
    int getPlayerToMove();
    uint64_t getWhitePieces();
    uint64_t getBlackPieces();
    int *getMailbox();

    string toString();

private:
    // 12 bitboards, one for each of the 12 piece types, indexed by the
    // constants given in common.h
    uint64_t pieces[12];
    // Bitboards for all white or all black pieces
    uint64_t whitePieces;
    uint64_t blackPieces;
    // Booleans indicating whether castling is possible
    bool whiteCanKCastle;
    bool blackCanKCastle;
    bool whiteCanQCastle;
    bool blackCanQCastle;
    // 0 if cannot en passant, if en passant is possible, the bitboard has a bit
    // set at the square of the pawn being captured
    uint64_t whiteEPCaptureSq;
    uint64_t blackEPCaptureSq;
    // Counts half moves for the 50-move rule
    int fiftyMoveCounter;
    // Move number
    int moveNumber;
    // Whose move is it?
    int playerToMove;

    // Keep track of the last 4 half-plys for two-fold repetition
    // Lowest bits are most recent
    uint32_t twoFoldStartSqs;
    uint32_t twoFoldEndSqs;

    int getCapturedPiece(int colorCaptured, int endSq);

    // Move generation
    // ___Moves(): moves for all of that piece type on the board.
    // ___Squares(): moves for a single piece of that type.
    uint64_t getWPawnSingleMoves(uint64_t pawns);
    uint64_t getBPawnSingleMoves(uint64_t pawns);
    uint64_t getWPawnDoubleMoves(uint64_t pawns);
    uint64_t getBPawnDoubleMoves(uint64_t pawns);
    uint64_t getWPawnLeftCaptures(uint64_t pawns);
    uint64_t getBPawnLeftCaptures(uint64_t pawns);
    uint64_t getWPawnRightCaptures(uint64_t pawns);
    uint64_t getBPawnRightCaptures(uint64_t pawns);
    uint64_t getKnightSquares(int single);
    uint64_t getKnightMoves(uint64_t knights);
    uint64_t getBishopSquares(int single);
    uint64_t getBishopMoves(uint64_t bishops);
    uint64_t getRookSquares(int single);
    uint64_t getRookMoves(uint64_t rooks);
    uint64_t getQueenSquares(int single);
    uint64_t getQueenMoves(uint64_t queens);
    uint64_t getKingSquares(int single);
    uint64_t getKingAttacks(int color);

    // Kindergarten bitboard methods
    uint64_t rankAttacks(uint64_t occ, int single);
    uint64_t fileAttacks(uint64_t occ, int single);
    uint64_t diagAttacks(uint64_t occ, int single);
    uint64_t antiDiagAttacks(uint64_t occ, int single);

    // Dumb7fill methods
    uint64_t southAttacks(uint64_t rooks, uint64_t empty);
    uint64_t northAttacks(uint64_t rooks, uint64_t empty);
    uint64_t eastAttacks(uint64_t rooks, uint64_t empty);
    uint64_t neAttacks(uint64_t bishops, uint64_t empty);
    uint64_t seAttacks(uint64_t bishops, uint64_t empty);
    uint64_t westAttacks(uint64_t rooks, uint64_t empty);
    uint64_t swAttacks(uint64_t bishops, uint64_t empty);
    uint64_t nwAttacks(uint64_t bishops, uint64_t empty);
};

#endif
