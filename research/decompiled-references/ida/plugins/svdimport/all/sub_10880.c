unsigned __int64 __fastcall sub_10880(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int128 v4; // xmm0
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __m128 v16; // xmm0
  __int64 i; // rbx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __m128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) )
    return v21 - __readfsqword(0x28u);
  sub_10710(a1);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v19 = 0;
  v20 = 0;
  v5 = v3 + 48 * v2;
  if ( v3 == v5 )
  {
    v15 = 0;
    v7 = 0;
    v8 = 0;
    goto LABEL_17;
  }
  v6 = v3;
  v7 = 0;
  v8 = 0;
LABEL_5:
  if ( v20.m128_u64[1] < v7 + 1 )
    goto LABEL_11;
LABEL_6:
  v9 = v8 + 48 * v7;
  *(_OWORD *)v9 = v4;
  *(_BYTE *)(v9 + 16) = 0;
  ++v20.m128_u64[0];
  *(_QWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 32) = v4;
  *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)v3);
  *(_BYTE *)(v9 + 16) = *(_BYTE *)(v3 + 16);
  if ( *(_QWORD *)(v3 + 32) )
  {
    v12 = **(_QWORD **)(v3 + 24);
    v13 = qvector_reserve();
    v14 = *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v13;
    *(_QWORD *)(v13 + 8 * v14) = v12;
    ++*(_QWORD *)(v9 + 32);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v6 += 48;
    v8 = v19;
    v7 = v20.m128_u64[0];
    v3 = v6;
    if ( v5 == v6 )
      break;
    v10 = v19 + 48 * v20.m128_u64[0] - 48;
    v11 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v6 >= v11 )
      goto LABEL_5;
    if ( *(_BYTE *)(v10 + 16) )
    {
      *(_QWORD *)v6 = v11;
      v7 = v20.m128_u64[0];
      v8 = v19;
      if ( v20.m128_u64[1] < v20.m128_u64[0] + 1 )
      {
LABEL_11:
        v19 = qvector_reserve();
        v8 = v19;
        v4 = 0;
        v7 = v20.m128_u64[0];
      }
      goto LABEL_6;
    }
    if ( *(_BYTE *)(v6 + 16) )
    {
      *(_QWORD *)(v10 + 8) = *(_QWORD *)v6;
      v7 = v20.m128_u64[0];
      goto LABEL_5;
    }
    sub_107E0(a1, &v19, (unsigned __int64 *)v6);
LABEL_13:
    v4 = 0;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v15 = v20.m128_u64[1];
LABEL_17:
  *(_QWORD *)(a1 + 8) = v8;
  v16 = _mm_loadh_ps((const double *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v15;
  v19 = v5;
  v20 = v16;
  if ( v5 )
  {
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v18 = v5 + 48 * i;
        if ( *(_QWORD *)(v18 + 24) )
        {
          *(_QWORD *)(v18 + 32) = 0;
          qfree();
          v5 = v19;
        }
      }
    }
    v20.m128_u64[0] = 0;
    qfree();
  }
  return v21 - __readfsqword(0x28u);
}

