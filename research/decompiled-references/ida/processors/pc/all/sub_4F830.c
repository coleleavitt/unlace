__int64 __fastcall sub_4F830(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        const void *a4,
        __int64 a5,
        double a6,
        __m128i a7,
        __m128i a8)
{
  __m128i si128; // xmm0
  _QWORD v10[50]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v11[24]; // [rsp+190h] [rbp-38h] BYREF
  __int64 v12; // [rsp+1A8h] [rbp-20h]
  __int64 v13; // [rsp+1B0h] [rbp-18h]

  *(_QWORD *)v11 = 256;
  *(_OWORD *)&v11[8] = 0;
  *(_WORD *)&v11[6] = a5;
  si128 = _mm_load_si128((const __m128i *)v11);
  v12 = 0;
  LODWORD(v13) = 0;
  *(__m128i *)&v10[45] = si128;
  v10[49] = v13;
  qmemcpy(v10, a4, 0x168u);
  return sub_4F170(
           a1,
           a2,
           a3,
           1,
           a5,
           (__int64)a2,
           v10[0],
           v10[1],
           v10[2],
           v10[3],
           v10[4],
           v10[5],
           v10[6],
           v10[7],
           v10[8],
           v10[9],
           _mm_load_si128((const __m128i *)&v11[16]),
           *(__int128 *)&v10[10],
           v10[12],
           v10[13],
           v10[14],
           v10[15],
           v10[16],
           v10[17],
           v10[18],
           v10[19],
           v10[20],
           v10[21],
           v10[22],
           v10[23],
           v10[24],
           v10[25],
           v10[26],
           v10[27],
           v10[28],
           v10[29],
           v10[30],
           v10[31],
           v10[32],
           v10[33],
           v10[34],
           v10[35],
           v10[36],
           v10[37],
           v10[38],
           v10[39],
           v10[40],
           v10[41],
           v10[42],
           a7,
           a8,
           v10[43]);
}
