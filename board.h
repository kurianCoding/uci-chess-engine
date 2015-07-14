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

// Precalculated arrays for kindergarten bitboard move generation
const uint64_t KNIGHTMOVES[64] = {
0x0000000000020400, 0x0000000000050800, 0x00000000000a1100, 0x0000000000142200,
0x0000000000284400, 0x0000000000508800, 0x0000000000a01000, 0x0000000000402000,
0x0000000002040004, 0x0000000005080008, 0x000000000a110011, 0x0000000014220022,
0x0000000028440044, 0x0000000050880088, 0x00000000a0100010, 0x0000000040200020,
0x0000000204000402, 0x0000000508000805, 0x0000000a1100110a, 0x0000001422002214,
0x0000002844004428, 0x0000005088008850, 0x000000a0100010a0, 0x0000004020002040,
0x0000020400040200, 0x0000050800080500, 0x00000a1100110a00, 0x0000142200221400,
0x0000284400442800, 0x0000508800885000, 0x0000a0100010a000, 0x0000402000204000,
0x0002040004020000, 0x0005080008050000, 0x000a1100110a0000, 0x0014220022140000,
0x0028440044280000, 0x0050880088500000, 0x00a0100010a00000, 0x0040200020400000,
0x0204000402000000, 0x0508000805000000, 0x0a1100110a000000, 0x1422002214000000,
0x2844004428000000, 0x5088008850000000, 0xa0100010a0000000, 0x4020002040000000,
0x0400040200000000, 0x0800080500000000, 0x1100110a00000000, 0x2200221400000000,
0x4400442800000000, 0x8800885000000000, 0x100010a000000000, 0x2000204000000000,
0x0004020000000000, 0x0008050000000000, 0x00110a0000000000, 0x0022140000000000,
0x0044280000000000, 0x0088500000000000, 0x0010a00000000000, 0x0020400000000000
};

const uint64_t KINGMOVES[64] = {
0x0000000000000302, 0x0000000000000705, 0x0000000000000e0a, 0x0000000000001c14,
0x0000000000003828, 0x0000000000007050, 0x000000000000e0a0, 0x000000000000c040,
0x0000000000030203, 0x0000000000070507, 0x00000000000e0a0e, 0x00000000001c141c,
0x0000000000382838, 0x0000000000705070, 0x0000000000e0a0e0, 0x0000000000c040c0,
0x0000000003020300, 0x0000000007050700, 0x000000000e0a0e00, 0x000000001c141c00,
0x0000000038283800, 0x0000000070507000, 0x00000000e0a0e000, 0x00000000c040c000,
0x0000000302030000, 0x0000000705070000, 0x0000000e0a0e0000, 0x0000001c141c0000,
0x0000003828380000, 0x0000007050700000, 0x000000e0a0e00000, 0x000000c040c00000,
0x0000030203000000, 0x0000070507000000, 0x00000e0a0e000000, 0x00001c141c000000,
0x0000382838000000, 0x0000705070000000, 0x0000e0a0e0000000, 0x0000c040c0000000,
0x0003020300000000, 0x0007050700000000, 0x000e0a0e00000000, 0x001c141c00000000,
0x0038283800000000, 0x0070507000000000, 0x00e0a0e000000000, 0x00c040c000000000,
0x0302030000000000, 0x0705070000000000, 0x0e0a0e0000000000, 0x1c141c0000000000,
0x3828380000000000, 0x7050700000000000, 0xe0a0e00000000000, 0xc040c00000000000,
0x0203000000000000, 0x0507000000000000, 0x0a0e000000000000, 0x141c000000000000,
0x2838000000000000, 0x5070000000000000, 0xa0e0000000000000, 0x40c0000000000000
};

const uint64_t FILERAY[64] = {
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080, 
0x0101010101010101, 0x0202020202020202, 0x0404040404040404, 0x0808080808080808, 
0x1010101010101010, 0x2020202020202020, 0x4040404040404040, 0x8080808080808080
};

const uint64_t RANKRAY[64] = {
0x00000000000000ff, 0x00000000000000ff, 0x00000000000000ff, 0x00000000000000ff, 
0x00000000000000ff, 0x00000000000000ff, 0x00000000000000ff, 0x00000000000000ff, 
0x000000000000ff00, 0x000000000000ff00, 0x000000000000ff00, 0x000000000000ff00, 
0x000000000000ff00, 0x000000000000ff00, 0x000000000000ff00, 0x000000000000ff00, 
0x0000000000ff0000, 0x0000000000ff0000, 0x0000000000ff0000, 0x0000000000ff0000, 
0x0000000000ff0000, 0x0000000000ff0000, 0x0000000000ff0000, 0x0000000000ff0000, 
0x00000000ff000000, 0x00000000ff000000, 0x00000000ff000000, 0x00000000ff000000, 
0x00000000ff000000, 0x00000000ff000000, 0x00000000ff000000, 0x00000000ff000000, 
0x000000ff00000000, 0x000000ff00000000, 0x000000ff00000000, 0x000000ff00000000, 
0x000000ff00000000, 0x000000ff00000000, 0x000000ff00000000, 0x000000ff00000000, 
0x0000ff0000000000, 0x0000ff0000000000, 0x0000ff0000000000, 0x0000ff0000000000, 
0x0000ff0000000000, 0x0000ff0000000000, 0x0000ff0000000000, 0x0000ff0000000000, 
0x00ff000000000000, 0x00ff000000000000, 0x00ff000000000000, 0x00ff000000000000, 
0x00ff000000000000, 0x00ff000000000000, 0x00ff000000000000, 0x00ff000000000000, 
0xff00000000000000, 0xff00000000000000, 0xff00000000000000, 0xff00000000000000, 
0xff00000000000000, 0xff00000000000000, 0xff00000000000000, 0xff00000000000000
};

const uint64_t DIAGRAY[64] = {
0x8040201008040201, 0x0080402010080402, 0x0000804020100804, 0x0000008040201008, 
0x0000000080402010, 0x0000000000804020, 0x0000000000008040, 0x0000000000000080, 
0x4020100804020100, 0x8040201008040201, 0x0080402010080402, 0x0000804020100804, 
0x0000008040201008, 0x0000000080402010, 0x0000000000804020, 0x0000000000008040, 
0x2010080402010000, 0x4020100804020100, 0x8040201008040201, 0x0080402010080402, 
0x0000804020100804, 0x0000008040201008, 0x0000000080402010, 0x0000000000804020, 
0x1008040201000000, 0x2010080402010000, 0x4020100804020100, 0x8040201008040201, 
0x0080402010080402, 0x0000804020100804, 0x0000008040201008, 0x0000000080402010, 
0x0804020100000000, 0x1008040201000000, 0x2010080402010000, 0x4020100804020100, 
0x8040201008040201, 0x0080402010080402, 0x0000804020100804, 0x0000008040201008, 
0x0402010000000000, 0x0804020100000000, 0x1008040201000000, 0x2010080402010000, 
0x4020100804020100, 0x8040201008040201, 0x0080402010080402, 0x0000804020100804, 
0x0201000000000000, 0x0402010000000000, 0x0804020100000000, 0x1008040201000000, 
0x2010080402010000, 0x4020100804020100, 0x8040201008040201, 0x0080402010080402, 
0x0100000000000000, 0x0201000000000000, 0x0402010000000000, 0x0804020100000000, 
0x1008040201000000, 0x2010080402010000, 0x4020100804020100, 0x8040201008040201
};

const uint64_t ANTIDIAGRAY[64] = {
0x0000000000000001, 0x0000000000000102, 0x0000000000010204, 0x0000000001020408, 
0x0000000102040810, 0x0000010204081020, 0x0001020408102040, 0x0102040810204080, 
0x0000000000000102, 0x0000000000010204, 0x0000000001020408, 0x0000000102040810, 
0x0000010204081020, 0x0001020408102040, 0x0102040810204080, 0x0204081020408000, 
0x0000000000010204, 0x0000000001020408, 0x0000000102040810, 0x0000010204081020, 
0x0001020408102040, 0x0102040810204080, 0x0204081020408000, 0x0408102040800000, 
0x0000000001020408, 0x0000000102040810, 0x0000010204081020, 0x0001020408102040, 
0x0102040810204080, 0x0204081020408000, 0x0408102040800000, 0x0810204080000000, 
0x0000000102040810, 0x0000010204081020, 0x0001020408102040, 0x0102040810204080, 
0x0204081020408000, 0x0408102040800000, 0x0810204080000000, 0x1020408000000000, 
0x0000010204081020, 0x0001020408102040, 0x0102040810204080, 0x0204081020408000, 
0x0408102040800000, 0x0810204080000000, 0x1020408000000000, 0x2040800000000000, 
0x0001020408102040, 0x0102040810204080, 0x0204081020408000, 0x0408102040800000, 
0x0810204080000000, 0x1020408000000000, 0x2040800000000000, 0x4080000000000000, 
0x0102040810204080, 0x0204081020408000, 0x0408102040800000, 0x0810204080000000, 
0x1020408000000000, 0x2040800000000000, 0x4080000000000000, 0x8000000000000000
};

const uint64_t rankArray[8][64] = {
{0xfefefefefefefefe, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x1e1e1e1e1e1e1e1e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x3e3e3e3e3e3e3e3e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x1e1e1e1e1e1e1e1e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x7e7e7e7e7e7e7e7e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x1e1e1e1e1e1e1e1e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x3e3e3e3e3e3e3e3e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x1e1e1e1e1e1e1e1e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202, 
0x0e0e0e0e0e0e0e0e, 0x0202020202020202, 0x0606060606060606, 0x0202020202020202},
{0xfdfdfdfdfdfdfdfd, 0xfdfdfdfdfdfdfdfd, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x1d1d1d1d1d1d1d1d, 0x1d1d1d1d1d1d1d1d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x3d3d3d3d3d3d3d3d, 0x3d3d3d3d3d3d3d3d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x1d1d1d1d1d1d1d1d, 0x1d1d1d1d1d1d1d1d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x7d7d7d7d7d7d7d7d, 0x7d7d7d7d7d7d7d7d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x1d1d1d1d1d1d1d1d, 0x1d1d1d1d1d1d1d1d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x3d3d3d3d3d3d3d3d, 0x3d3d3d3d3d3d3d3d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505, 
0x1d1d1d1d1d1d1d1d, 0x1d1d1d1d1d1d1d1d, 0x0505050505050505, 0x0505050505050505, 
0x0d0d0d0d0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 0x0505050505050505, 0x0505050505050505},
{0xfbfbfbfbfbfbfbfb, 0xfafafafafafafafa, 0xfbfbfbfbfbfbfbfb, 0xfafafafafafafafa, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x3b3b3b3b3b3b3b3b, 0x3a3a3a3a3a3a3a3a, 0x3b3b3b3b3b3b3b3b, 0x3a3a3a3a3a3a3a3a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x7b7b7b7b7b7b7b7b, 0x7a7a7a7a7a7a7a7a, 0x7b7b7b7b7b7b7b7b, 0x7a7a7a7a7a7a7a7a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x3b3b3b3b3b3b3b3b, 0x3a3a3a3a3a3a3a3a, 0x3b3b3b3b3b3b3b3b, 0x3a3a3a3a3a3a3a3a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 
0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 0x1b1b1b1b1b1b1b1b, 0x1a1a1a1a1a1a1a1a, 
0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a, 0x0b0b0b0b0b0b0b0b, 0x0a0a0a0a0a0a0a0a},
{0xf7f7f7f7f7f7f7f7, 0xf6f6f6f6f6f6f6f6, 0xf4f4f4f4f4f4f4f4, 0xf4f4f4f4f4f4f4f4, 
0xf7f7f7f7f7f7f7f7, 0xf6f6f6f6f6f6f6f6, 0xf4f4f4f4f4f4f4f4, 0xf4f4f4f4f4f4f4f4, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x3737373737373737, 0x3636363636363636, 0x3434343434343434, 0x3434343434343434, 
0x3737373737373737, 0x3636363636363636, 0x3434343434343434, 0x3434343434343434, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x7777777777777777, 0x7676767676767676, 0x7474747474747474, 0x7474747474747474, 
0x7777777777777777, 0x7676767676767676, 0x7474747474747474, 0x7474747474747474, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x3737373737373737, 0x3636363636363636, 0x3434343434343434, 0x3434343434343434, 
0x3737373737373737, 0x3636363636363636, 0x3434343434343434, 0x3434343434343434, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414, 
0x1717171717171717, 0x1616161616161616, 0x1414141414141414, 0x1414141414141414},
{0xefefefefefefefef, 0xeeeeeeeeeeeeeeee, 0xecececececececec, 0xecececececececec, 
0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 
0xefefefefefefefef, 0xeeeeeeeeeeeeeeee, 0xecececececececec, 0xecececececececec, 
0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 0xe8e8e8e8e8e8e8e8, 
0x2f2f2f2f2f2f2f2f, 0x2e2e2e2e2e2e2e2e, 0x2c2c2c2c2c2c2c2c, 0x2c2c2c2c2c2c2c2c, 
0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 
0x2f2f2f2f2f2f2f2f, 0x2e2e2e2e2e2e2e2e, 0x2c2c2c2c2c2c2c2c, 0x2c2c2c2c2c2c2c2c, 
0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 
0x6f6f6f6f6f6f6f6f, 0x6e6e6e6e6e6e6e6e, 0x6c6c6c6c6c6c6c6c, 0x6c6c6c6c6c6c6c6c, 
0x6868686868686868, 0x6868686868686868, 0x6868686868686868, 0x6868686868686868, 
0x6f6f6f6f6f6f6f6f, 0x6e6e6e6e6e6e6e6e, 0x6c6c6c6c6c6c6c6c, 0x6c6c6c6c6c6c6c6c, 
0x6868686868686868, 0x6868686868686868, 0x6868686868686868, 0x6868686868686868, 
0x2f2f2f2f2f2f2f2f, 0x2e2e2e2e2e2e2e2e, 0x2c2c2c2c2c2c2c2c, 0x2c2c2c2c2c2c2c2c, 
0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 
0x2f2f2f2f2f2f2f2f, 0x2e2e2e2e2e2e2e2e, 0x2c2c2c2c2c2c2c2c, 0x2c2c2c2c2c2c2c2c, 
0x2828282828282828, 0x2828282828282828, 0x2828282828282828, 0x2828282828282828},
{0xdfdfdfdfdfdfdfdf, 0xdededededededede, 0xdcdcdcdcdcdcdcdc, 0xdcdcdcdcdcdcdcdc, 
0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 
0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 
0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 
0xdfdfdfdfdfdfdfdf, 0xdededededededede, 0xdcdcdcdcdcdcdcdc, 0xdcdcdcdcdcdcdcdc, 
0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 0xd8d8d8d8d8d8d8d8, 
0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 
0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 0xd0d0d0d0d0d0d0d0, 
0x5f5f5f5f5f5f5f5f, 0x5e5e5e5e5e5e5e5e, 0x5c5c5c5c5c5c5c5c, 0x5c5c5c5c5c5c5c5c, 
0x5858585858585858, 0x5858585858585858, 0x5858585858585858, 0x5858585858585858, 
0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 
0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 
0x5f5f5f5f5f5f5f5f, 0x5e5e5e5e5e5e5e5e, 0x5c5c5c5c5c5c5c5c, 0x5c5c5c5c5c5c5c5c, 
0x5858585858585858, 0x5858585858585858, 0x5858585858585858, 0x5858585858585858, 
0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 
0x5050505050505050, 0x5050505050505050, 0x5050505050505050, 0x5050505050505050},
{0xbfbfbfbfbfbfbfbf, 0xbebebebebebebebe, 0xbcbcbcbcbcbcbcbc, 0xbcbcbcbcbcbcbcbc, 
0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 
0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xbfbfbfbfbfbfbfbf, 0xbebebebebebebebe, 0xbcbcbcbcbcbcbcbc, 0xbcbcbcbcbcbcbcbc, 
0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 0xb8b8b8b8b8b8b8b8, 
0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 0xb0b0b0b0b0b0b0b0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 
0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0, 0xa0a0a0a0a0a0a0a0},
{0x7f7f7f7f7f7f7f7f, 0x7e7e7e7e7e7e7e7e, 0x7c7c7c7c7c7c7c7c, 0x7c7c7c7c7c7c7c7c, 
0x7878787878787878, 0x7878787878787878, 0x7878787878787878, 0x7878787878787878, 
0x7070707070707070, 0x7070707070707070, 0x7070707070707070, 0x7070707070707070, 
0x7070707070707070, 0x7070707070707070, 0x7070707070707070, 0x7070707070707070, 
0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 
0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 
0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 
0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 0x6060606060606060, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 
0x4040404040404040, 0x4040404040404040, 0x4040404040404040, 0x4040404040404040}
};

const uint64_t fileArray[8][64] = {
{0x0101010101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000010101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0001010101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000010101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000101010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100, 
0x0000000001010100, 0x0000000000000100, 0x0000000000010100, 0x0000000000000100},
{0x0101010101010001, 0x0101010101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000101010001, 0x0000000101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000010101010001, 0x0000010101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000101010001, 0x0000000101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0001010101010001, 0x0001010101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000101010001, 0x0000000101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000010101010001, 0x0000010101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000101010001, 0x0000000101010001, 0x0000000000010001, 0x0000000000010001, 
0x0000000001010001, 0x0000000001010001, 0x0000000000010001, 0x0000000000010001},
{0x0101010101000101, 0x0101010101000100, 0x0101010101000101, 0x0101010101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000000101000101, 0x0000000101000100, 0x0000000101000101, 0x0000000101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000010101000101, 0x0000010101000100, 0x0000010101000101, 0x0000010101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000000101000101, 0x0000000101000100, 0x0000000101000101, 0x0000000101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0001010101000101, 0x0001010101000100, 0x0001010101000101, 0x0001010101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000000101000101, 0x0000000101000100, 0x0000000101000101, 0x0000000101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000010101000101, 0x0000010101000100, 0x0000010101000101, 0x0000010101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100, 
0x0000000101000101, 0x0000000101000100, 0x0000000101000101, 0x0000000101000100, 
0x0000000001000101, 0x0000000001000100, 0x0000000001000101, 0x0000000001000100},
{0x0101010100010101, 0x0101010100010100, 0x0101010100010000, 0x0101010100010000, 
0x0101010100010101, 0x0101010100010100, 0x0101010100010000, 0x0101010100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000010100010101, 0x0000010100010100, 0x0000010100010000, 0x0000010100010000, 
0x0000010100010101, 0x0000010100010100, 0x0000010100010000, 0x0000010100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0001010100010101, 0x0001010100010100, 0x0001010100010000, 0x0001010100010000, 
0x0001010100010101, 0x0001010100010100, 0x0001010100010000, 0x0001010100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000010100010101, 0x0000010100010100, 0x0000010100010000, 0x0000010100010000, 
0x0000010100010101, 0x0000010100010100, 0x0000010100010000, 0x0000010100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000, 
0x0000000100010101, 0x0000000100010100, 0x0000000100010000, 0x0000000100010000},
{0x0101010001010101, 0x0101010001010100, 0x0101010001010000, 0x0101010001010000, 
0x0101010001000000, 0x0101010001000000, 0x0101010001000000, 0x0101010001000000, 
0x0101010001010101, 0x0101010001010100, 0x0101010001010000, 0x0101010001010000, 
0x0101010001000000, 0x0101010001000000, 0x0101010001000000, 0x0101010001000000, 
0x0000010001010101, 0x0000010001010100, 0x0000010001010000, 0x0000010001010000, 
0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 
0x0000010001010101, 0x0000010001010100, 0x0000010001010000, 0x0000010001010000, 
0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 
0x0001010001010101, 0x0001010001010100, 0x0001010001010000, 0x0001010001010000, 
0x0001010001000000, 0x0001010001000000, 0x0001010001000000, 0x0001010001000000, 
0x0001010001010101, 0x0001010001010100, 0x0001010001010000, 0x0001010001010000, 
0x0001010001000000, 0x0001010001000000, 0x0001010001000000, 0x0001010001000000, 
0x0000010001010101, 0x0000010001010100, 0x0000010001010000, 0x0000010001010000, 
0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 
0x0000010001010101, 0x0000010001010100, 0x0000010001010000, 0x0000010001010000, 
0x0000010001000000, 0x0000010001000000, 0x0000010001000000, 0x0000010001000000},
{0x0101000101010101, 0x0101000101010100, 0x0101000101010000, 0x0101000101010000, 
0x0101000101000000, 0x0101000101000000, 0x0101000101000000, 0x0101000101000000, 
0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 
0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 
0x0101000101010101, 0x0101000101010100, 0x0101000101010000, 0x0101000101010000, 
0x0101000101000000, 0x0101000101000000, 0x0101000101000000, 0x0101000101000000, 
0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 
0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 0x0101000100000000, 
0x0001000101010101, 0x0001000101010100, 0x0001000101010000, 0x0001000101010000, 
0x0001000101000000, 0x0001000101000000, 0x0001000101000000, 0x0001000101000000, 
0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 
0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 
0x0001000101010101, 0x0001000101010100, 0x0001000101010000, 0x0001000101010000, 
0x0001000101000000, 0x0001000101000000, 0x0001000101000000, 0x0001000101000000, 
0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 
0x0001000100000000, 0x0001000100000000, 0x0001000100000000, 0x0001000100000000},
{0x0100010101010101, 0x0100010101010100, 0x0100010101010000, 0x0100010101010000, 
0x0100010101000000, 0x0100010101000000, 0x0100010101000000, 0x0100010101000000, 
0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 
0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010101010101, 0x0100010101010100, 0x0100010101010000, 0x0100010101010000, 
0x0100010101000000, 0x0100010101000000, 0x0100010101000000, 0x0100010101000000, 
0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 
0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 0x0100010100000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 
0x0100010000000000, 0x0100010000000000, 0x0100010000000000, 0x0100010000000000},
{0x0001010101010101, 0x0001010101010100, 0x0001010101010000, 0x0001010101010000, 
0x0001010101000000, 0x0001010101000000, 0x0001010101000000, 0x0001010101000000, 
0x0001010100000000, 0x0001010100000000, 0x0001010100000000, 0x0001010100000000, 
0x0001010100000000, 0x0001010100000000, 0x0001010100000000, 0x0001010100000000, 
0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 
0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 
0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 
0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 0x0001010000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 
0x0001000000000000, 0x0001000000000000, 0x0001000000000000, 0x0001000000000000}
};

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
-100,-100,-100,-100,-100,-100,-100,-100,
 -80, -80, -80, -80, -80, -80, -80, -80,
 -60, -60, -60, -60, -60, -60, -60, -60,
 -40, -40, -40, -40, -40, -40, -40, -40,
 -20, -20, -20, -20, -20, -20, -20, -20,
   0,   5,  -5, -10, -10,  -5,   5,   0,
  10,  15,   0,  -5,  -5,   0,  15,  10,
  20,  35,  15,   0,   5,  10,  40,  20 
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
    uint32_t twoFoldPTM;

    // Stack<BMove> history = new Stack<BMove>();

public:
    // Redundant mailbox representation to make evaluation easier
    // mailbox[0] is a1, mailbox[63] is h8
    int mailbox[64];

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
    // void undoMove();
    bool isLegalMove(Move m, int color);

    MoveList getAllLegalMoves(int color);
    MoveList getLegalMoves(int color);
    MoveList getPseudoLegalMoves(int color);
    MoveList getLegalCaptures(int color);
    MoveList getPseudoLegalCaptures(int color);

    bool getInCheck(int color);
    bool isWinMate();
    bool isBinMate();
    bool isStalemate(int sideToMove);

    // Evaluation
    int evaluate();
    bool pieceOn(int color, int x, int y);
    int getPseudoMobility(int color);
    // Static exchange evaluation code: for checking material trades on a single square
    uint64_t getAttackMap(int color, int sq);
    uint64_t getLeastValuableAttacker(uint64_t attackers, int color, int &piece);
    int getSEE(int color, int sq);
    int valueOfPiece(int piece);

    // Move generation
    // ___Moves(): moves for all of that piece type on the board.
    // ___Squares(): moves for a single piece of that type.
    uint64_t getWPawnMoves(uint64_t pawns);
    uint64_t getBPawnMoves(uint64_t pawns);
    uint64_t getWPawnCaptures(uint64_t pawns);
    uint64_t getBPawnCaptures(uint64_t pawns);
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
};

#endif
