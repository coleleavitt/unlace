unsigned __int64 __fastcall sub_1CDF20(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 fchunk; // r15
  __m128i *v7; // rdi
  char *v8; // rbp
  __int64 v9; // r10
  __int64 v10; // rax
  signed __int64 v11; // rbx
  unsigned __int64 *v12; // r9
  unsigned __int64 *v13; // r14
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // r9
  __int64 i; // rax
  unsigned __int64 *v17; // rdx
  unsigned __int64 *v18; // r9
  unsigned __int64 *v19; // rbx
  unsigned __int64 *v20; // rcx
  __int64 v21; // rdx
  __m128i *v22; // rax
  __int64 v23; // rsi
  signed __int64 v24; // r11
  __int64 v25; // r15
  unsigned __int64 v26; // r10
  signed __int64 v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 *v32; // r10
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  signed __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 spd; // [rsp+10h] [rbp-68h]
  unsigned __int64 *v41; // [rsp+18h] [rbp-60h]
  __m128i v42; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a2 || (fchunk = a2, *(char *)(a2 + 17) < 0) && (fchunk = get_fchunk()) == 0 || !*(_DWORD *)(fchunk + 68) )
  {
    spd = 0;
LABEL_6:
    v7 = (__m128i *)a1[149];
    v8 = (char *)sub_1CCFD0(v7, (__int64)v7[a1[150]].m128i_i64, a3);
    goto LABEL_7;
  }
  spd = get_spd();
  v13 = sub_1CCFD0(*(_QWORD **)(fchunk + 72), *(_QWORD *)(fchunk + 72) + 16LL * *(unsigned int *)(fchunk + 68), a3);
  if ( v12 == v13 )
    goto LABEL_6;
  v14 = v12;
  v15 = v13;
  for ( i = ((char *)v14 - (char *)v13) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v17 = &v15[2 * (i >> 1)];
      if ( a4 < *v17 )
        break;
      v15 = v17 + 2;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_21;
    }
  }
LABEL_21:
  v7 = (__m128i *)a1[149];
  v8 = (char *)sub_1CCFD0(v7, (__int64)v7[a1[150]].m128i_i64, a3);
  if ( v13 == v18 )
    goto LABEL_7;
  v19 = v13;
  while ( 1 )
  {
    v20 = v19;
    v19 += 2;
    if ( v19 == v18 )
      break;
    if ( *(v19 - 2) >= *v19 )
    {
      v41 = v20;
      sub_3311F0(a1, *v19, 0x29u);
      v20 = v41;
      v9 = a1[150];
      v7 = (__m128i *)a1[149];
      if ( v19 == v13 )
        goto LABEL_7;
      break;
    }
  }
  v21 = 16 * v9;
  v22 = &v7[v9];
  if ( v22 != (__m128i *)v8 )
  {
    v23 = *(_QWORD *)v8;
    if ( *(unsigned __int64 **)(fchunk + 72) != v19 && *(v19 - 2) == a4 )
    {
      if ( a4 == v23 )
      {
        v19 = v20;
      }
      else if ( v22 != (__m128i *)(v8 + 16) && *((_QWORD *)v8 + 2) == a4 )
      {
        v19 = v20;
      }
    }
    if ( a3 == v23 && *v13 >= a3 )
    {
      v8 += 16;
      if ( *v13 == a3 )
        v13 += 2;
    }
  }
  v24 = (char *)v19 - (char *)v13;
  v25 = ((char *)v19 - (char *)v13) >> 4;
  if ( !v25 )
  {
LABEL_7:
    if ( v9 )
      goto LABEL_8;
LABEL_35:
    v29 = v9 + 1;
    v42.m128i_i64[0] = a3;
    v42.m128i_i64[1] = spd;
    v30 = a1[151];
    if ( &v42 >= v7 && &v42 < &v7[v30] )
    {
      if ( v30 < v29 )
      {
        v37 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v37;
        v7 = (__m128i *)v37;
      }
      v32 = (unsigned __int64 *)&v7[v9];
      *v32 = a3;
      v32[1] = spd;
    }
    else
    {
      if ( v30 < v29 )
      {
        v33 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v33;
        v7 = (__m128i *)v33;
      }
      v7[v9] = _mm_load_si128(&v42);
    }
    goto LABEL_40;
  }
  v26 = v25 + v9;
  v27 = v8 - (char *)v7;
  if ( a1[151] < v26 )
  {
    v34 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v26, 16);
    v27 = v8 - (char *)v7;
    v24 = (char *)v19 - (char *)v13;
    v35 = a1[150];
    a1[149] = v34;
    v8 = (char *)(v34 + v8 - (char *)v7);
    v21 = 16 * v35;
  }
  v39 = v27;
  memmove(&v8[v24], v8, v21 - v27);
  v28 = 0;
  if ( v13 != v19 )
  {
    do
    {
      *(__m128i *)&v8[v28] = _mm_loadu_si128((const __m128i *)&v13[v28 / 8]);
      v28 += 16LL;
    }
    while ( v28 != (char *)v19 - (char *)v13 );
  }
  v7 = (__m128i *)a1[149];
  v9 = a1[150] + v25;
  a1[150] = v9;
  v8 = &v7->m128i_i8[v39];
  if ( !v9 )
    goto LABEL_35;
LABEL_8:
  v10 = v9;
  if ( v8 == (char *)&v7[v9] )
  {
    if ( a3 == v7[v10 - 1].m128i_i64[0] )
      return v43 - __readfsqword(0x28u);
    goto LABEL_35;
  }
  if ( *(_QWORD *)v8 != a3 )
  {
    if ( v8 == (char *)v7 )
    {
      v11 = 0;
      goto LABEL_13;
    }
    if ( *((_QWORD *)v8 - 2) != a3 )
    {
      v11 = v8 - (char *)v7;
LABEL_13:
      if ( a1[151] < (unsigned __int64)(v9 + 1) )
      {
        v36 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v36;
        v8 = (char *)(v36 + v11);
      }
      memmove(v8 + 16, v8, 16 * v9 - v11);
      *(_QWORD *)v8 = a3;
      *((_QWORD *)v8 + 1) = spd;
LABEL_40:
      ++a1[150];
      return v43 - __readfsqword(0x28u);
    }
    if ( spd != *((_QWORD *)v8 - 1) )
    {
      if ( v8 - 16 == (char *)v7 )
      {
        memmove(v7, v8, v10 * 16 - 16);
        --a1[150];
      }
      else
      {
        *((_QWORD *)v8 - 1) = spd;
      }
      v7 = (__m128i *)a1[149];
      if ( v8 - 16 == (char *)v7 )
      {
        v9 = a1[150];
        v8 = (char *)a1[149];
        v11 = 0;
        goto LABEL_13;
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}

