__int64 __fastcall sub_132040(
        const __m128i *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        double a6,
        __m128 a7)
{
  unsigned int v7; // r15d
  __int64 v9; // rax
  unsigned __int64 *v13; // r15
  unsigned int v14; // eax
  _BYTE v15[8]; // [rsp+10h] [rbp-90h] BYREF
  __int128 v16; // [rsp+18h] [rbp-88h]
  _QWORD v17[2]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v19[10]; // [rsp+50h] [rbp-50h] BYREF

  v7 = 0;
  v19[3] = __readfsqword(0x28u);
  if ( a3[17] < (int)a5[17] )
  {
    v9 = a1[30].m128i_i64[0];
    v17[1] = 0;
    v13 = *(unsigned __int64 **)(v9 + 112);
    v18[1] = 0;
    v17[0] = 0xFFFFFFFF00000000LL;
    v18[0] = 0xFFFFFFFF00000000LL;
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    v16 = 0;
    sub_1253A0((__int64)v15, (__int64)a5);
    if ( !(unsigned __int8)sub_12B6F0((__int64)v15, v13, 10, a3[17], 1, (__m128i)0LL)
      || (LOBYTE(v14) = sub_130620((__int64)v13, a1, a2, a3, a4, v15, (__m128i)0LL, a7, 0), v7 = v14, !(_BYTE)v14) )
    {
      v7 = sub_131970(a1, a2, a3, a4, a5, 1, (__m128i)0LL, a7, 1);
    }
    sub_11CDA0((__int64)v19);
    sub_11CDA0((__int64)v18);
    sub_11CDA0((__int64)v17);
  }
  return v7;
}

