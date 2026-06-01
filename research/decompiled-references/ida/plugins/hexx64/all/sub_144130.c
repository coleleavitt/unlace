__int64 __fastcall sub_144130(
        __int64 *a1,
        __m128i *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  __m128i v8; // xmm0
  __int64 v10; // rbx
  char v12; // r12
  int v13; // ebp
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v8.m128i_i64[0] = 0;
  v10 = a1[65];
  v26 = __readfsqword(0x28u);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_14;
  }
  v12 = (char)a2;
  v13 = 0;
  do
  {
    if ( !v12 )
    {
      while ( (*(_DWORD *)(v10 + 24) & 0x3E0) == 0x200 )
      {
        v10 = *(_QWORD *)(v10 + 8);
        if ( !v10 )
          goto LABEL_7;
      }
    }
    a2 = &v23;
    v14 = sub_B5460(v10, &v23, (__int64)a3, a4, a5, a6);
    v10 = *(_QWORD *)(v10 + 8);
    v13 += v14;
  }
  while ( v10 );
LABEL_7:
  if ( v23.m128i_i64[0] )
    sub_104E10(v23.m128i_i64[0], 0.0);
  v15 = v24;
  if ( v24 )
  {
    v16 = *(_QWORD *)v24;
    if ( !v25 )
    {
      *(_QWORD *)v24 = *(_QWORD *)v24 & 3LL | v24 & 0xFFFFFFFFFFFFFFFCLL;
      v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
      *(__m128i *)(v24 + 8) = v8;
      *(_QWORD *)v24 &= ~1uLL;
      *(_QWORD *)v24 |= 2uLL;
      goto LABEL_12;
    }
    v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v20 & 2) != 0 )
    {
LABEL_25:
      *(_QWORD *)v15 = v16 & 3 | v15 & 0xFFFFFFFFFFFFFFFCLL;
      v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
      *(__m128i *)(v24 + 8) = v8;
      *(_QWORD *)v24 &= ~1uLL;
      *(_QWORD *)v24 |= 2uLL;
      v25 = 0;
LABEL_12:
      if ( v24 )
        qfree(v24);
      goto LABEL_14;
    }
    v21 = (__int64 *)v19[1];
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_28;
    }
    else
    {
      sub_135260(v21);
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_21;
    }
    sub_135260(v22);
LABEL_21:
    v20 = *v19;
    if ( (*v19 & 2) != 0 )
    {
LABEL_22:
      if ( v16 > 3 )
        qfree(v16 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = v24;
      v16 = *(_QWORD *)v24;
      goto LABEL_25;
    }
LABEL_28:
    *v19 = v20 | 2;
    goto LABEL_22;
  }
LABEL_14:
  v17 = sub_143540(a1, a2, *(double *)v8.m128i_i64, a8);
  if ( a3 )
    *a3 += v13 + v17;
  return 0;
}

