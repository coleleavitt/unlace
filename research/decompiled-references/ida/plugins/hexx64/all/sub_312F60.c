unsigned __int64 __fastcall sub_312F60(__int64 a1, double a2, __m128 a3)
{
  int v3; // eax
  int v4; // eax
  unsigned __int64 v5; // r12
  int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v11; // r13
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)a1;
  v16 = __readfsqword(0x28u);
  v4 = v3 & 0xF;
  if ( v4 <= 4 )
  {
    if ( v4 > 2 )
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( ((v11 + 1) & 0xFFFFFFFFFFFFFFFDLL) == 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        v9 = *(_QWORD *)(a1 + 16);
        if ( v9 < v5 )
        {
          v14 = *(_QWORD *)(a1 + 8);
          v11 = -v11;
          v5 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 24) = v11;
          v9 = v14;
        }
        sub_312B80(a1, a2);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( v11 != -1 )
          goto LABEL_7;
        v15.m128i_i64[0] = 0;
        v15.m128i_i64[1] = v5 + 1;
        sub_316BB0((__int64 *)(a1 + 8), &v15, 0.0, a3);
        v12 = *(_DWORD *)(a1 + 4);
        v13 = -1;
        if ( v12 != 8 )
          v13 = (1LL << (8 * (unsigned __int8)v12)) - 1;
        v15.m128i_i64[0] = v9;
        v15.m128i_i64[1] = v13 - v9 + 1;
        sub_316BB0((__int64 *)(a1 + 8), &v15, 0.0, a3);
      }
    }
  }
  else if ( v4 == 5 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 4);
    v7 = v5 | *(_QWORD *)(a1 + 8);
    if ( v6 != 8 )
      v7 |= -1LL << (8 * (unsigned __int8)v6);
    v8 = ~v7;
    if ( (~v7 & -(__int64)v7) == 0 )
    {
      v9 = v5 + v8;
      sub_312B80(a1, a2);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
LABEL_7:
      v15.m128i_i64[0] = v5;
      v15.m128i_i64[1] = v9 + 1 - v5;
      sub_316BB0((__int64 *)(a1 + 8), &v15, 0.0, a3);
      return v16 - __readfsqword(0x28u);
    }
    if ( (~v7 & (-(__int64)v7 - 2)) == 0 )
    {
      sub_312B80(a1, a2);
      v15.m128i_i64[0] = v5;
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v15.m128i_i64[1] = 1;
      sub_316BB0((__int64 *)(a1 + 8), &v15, 0.0, a3);
      v15.m128i_i64[0] = v5 + v8;
      v15.m128i_i64[1] = 1;
      sub_316BB0((__int64 *)(a1 + 8), &v15, 0.0, a3);
    }
  }
  return v16 - __readfsqword(0x28u);
}

