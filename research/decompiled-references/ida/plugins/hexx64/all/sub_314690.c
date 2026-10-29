__int64 __fastcall sub_314690(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  unsigned int v4; // edx
  _QWORD *v7; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v4 = 0;
  v16 = __readfsqword(0x28u);
  if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 4);
    v9 = -1;
    v10 = *v7 + a2;
    if ( v8 != 8 )
    {
      v9 = (1LL << (8 * (unsigned __int8)v8)) - 1;
      v10 &= v9;
    }
    v11 = v7[1] + *v7 + a2 - 1;
    *(_QWORD *)(a1 + 16) = 0;
    v12 = v9 & v11;
    if ( v12 >= v10 )
    {
      v15.m128i_i64[0] = v10;
      v15.m128i_i64[1] = v12 + 1 - v10;
      sub_316BB0((__int64 *)(a1 + 8), &v15, a3, a4);
    }
    else
    {
      v15.m128i_i64[1] = v12 + 1;
      v15.m128i_i64[0] = 0;
      sub_316BB0((__int64 *)(a1 + 8), &v15, a3, a4);
      v13 = *(_DWORD *)(a1 + 4);
      v14 = -1;
      if ( v13 != 8 )
        v14 = (1LL << (8 * (unsigned __int8)v13)) - 1;
      v15.m128i_i64[0] = v10;
      v15.m128i_i64[1] = v14 - v10 + 1;
      sub_316BB0((__int64 *)(a1 + 8), &v15, a3, a4);
    }
    return 1;
  }
  return v4;
}

