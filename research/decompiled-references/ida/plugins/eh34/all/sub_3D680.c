__int64 __fastcall sub_3D680(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-78h]
  int v13; // [rsp+Ch] [rbp-6Ch]
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __m128i v15; // [rsp+18h] [rbp-60h] BYREF
  char v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a3 + 88) )
    goto LABEL_2;
  v12 = a2[2];
  sub_744C0(&v14, *a2, a2[1]);
  if ( v16 )
  {
LABEL_11:
    *(_QWORD *)a1 = v14;
    v11 = _mm_loadu_si128(&v15);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v11;
    return a1;
  }
  v6 = v14;
  v13 = v14;
  a2[1] += v15.m128i_i64[0];
  if ( v6 )
  {
    v7 = 0;
    do
    {
      sub_74310(&v14, *a2);
      if ( v16 )
        goto LABEL_11;
      v8 = *a2;
      v9 = v14;
      a2[1] += 4LL;
      sub_74310(&v14, v8);
      if ( v16 )
        goto LABEL_11;
      v10 = v14;
      a2[1] += 4LL;
      if ( v12 == v9 )
      {
        *(_QWORD *)(a3 + 56) = v10;
        *(_BYTE *)(a3 + 64) = 1;
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
    }
    while ( ++v7 != v13 );
  }
LABEL_2:
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

