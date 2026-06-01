__int64 __fastcall sub_1CE4F0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, __m128 a6)
{
  __m128i v6; // xmm0
  __int64 v8; // rsi
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // r14
  __int64 fchunk; // r13
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 *next_fchunk; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  unsigned __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r11
  unsigned __int64 *v25; // rax
  signed __int64 v26; // r13
  _QWORD *func; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int8 v31; // [rsp+1h] [rbp-C1h]
  unsigned __int8 v32; // [rsp+1h] [rbp-C1h]
  __m128i v35; // [rsp+1Ah] [rbp-A8h] BYREF
  __int64 v36; // [rsp+2Ah] [rbp-98h] BYREF
  __int128 v37; // [rsp+32h] [rbp-90h]
  __m128i v38; // [rsp+4Ah] [rbp-78h]
  __int64 v39; // [rsp+5Ah] [rbp-68h]
  int v40; // [rsp+62h] [rbp-60h]
  __int128 v41; // [rsp+6Ah] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+82h] [rbp-40h]

  v6.m128i_i64[0] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v42 = __readfsqword(0x28u);
  v40 = -1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  v36 = 0;
  v39 = 0;
  v37 = 0;
  v38 = 0;
  v41 = 0;
  if ( v8 )
  {
    v9 = (unsigned __int64 *)v38.m128i_i64[0];
    if ( !(unsigned __int8)func_tail_iterator_set() )
      goto LABEL_24;
  }
  else
  {
    v9 = *(unsigned __int64 **)(a1 + 16);
    v25 = &v9[2 * *(_QWORD *)(a1 + 24)];
    a6 = (__m128)(unsigned __int64)v25;
    v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v25);
    v38 = v6;
    if ( v9 == v25 )
      goto LABEL_24;
  }
  if ( !v9 )
    v9 = (unsigned __int64 *)&v41;
  while ( 2 )
  {
    while ( 2 )
    {
      v10 = *v9;
      while ( 1 )
      {
        v14 = v9[1];
        if ( v10 >= v14 )
          break;
        if ( !a4 )
          goto LABEL_9;
        fchunk = get_fchunk();
        v14 = v10;
        if ( fchunk )
          goto LABEL_12;
        next_fchunk = (unsigned __int64 *)get_next_fchunk();
        v14 = v9[1];
        fchunk = (__int64)next_fchunk;
        if ( next_fchunk )
        {
          v16 = *next_fchunk;
          if ( v14 > v16 )
            v14 = v16;
        }
        else
        {
LABEL_9:
          fchunk = 0;
        }
        v35.m128i_i64[0] = v10;
        v35.m128i_i64[1] = v14 - v10;
        sub_316BB0(&v36, &v35, *(double *)v6.m128i_i64, a6);
        result = sub_1CDC40(a1, v10, v14);
        if ( !(_BYTE)result )
          goto LABEL_35;
        if ( !fchunk )
          break;
LABEL_12:
        v13 = v9[1];
        if ( *(_QWORD *)(fchunk + 8) <= v13 )
          v13 = *(_QWORD *)(fchunk + 8);
        v10 = v13;
        sub_1CDF20((_QWORD *)a1, fchunk, v14, v13);
      }
      if ( v38.m128i_i64[0] )
      {
        v9 = (unsigned __int64 *)(v38.m128i_i64[0] + 16);
        v38.m128i_i64[0] = (__int64)v9;
        if ( v9 == (unsigned __int64 *)v38.m128i_i64[1] )
          goto LABEL_24;
        continue;
      }
      break;
    }
    v9 = (unsigned __int64 *)v39;
    if ( v39 && v40 + 1 < *(_DWORD *)(v39 + 128) )
    {
      if ( ++v40 >= 0 && v40 < *(_DWORD *)(v39 + 128) )
        v9 = (unsigned __int64 *)(*(_QWORD *)(v39 + 136) + 16LL * v40);
      continue;
    }
    break;
  }
LABEL_24:
  nullsub_115();
  if ( (unsigned __int64)v37 | a3 )
  {
    v17 = 0;
    if ( *(_QWORD *)(a1 + 8) )
      v17 = a3;
    sub_1CE460((_QWORD *)a1, a2, (__int64)&v36, v17);
    nullsub_115();
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v18 = *(_QWORD *)(a1 + 40);
LABEL_30:
    v19 = *(char **)(a1 + 1192);
    v20 = sub_1CCFD0(v19, (__int64)&v19[16 * *(_QWORD *)(a1 + 1200)], v18);
    v23 = v20;
    if ( v24 == v20 || v18 < *v20 )
    {
      if ( v19 != (char *)v20 && *(v20 - 1) )
      {
        v26 = (char *)v20 - v19;
        if ( *(_QWORD *)(a1 + 1208) < (unsigned __int64)(v22 + 1) )
        {
          v28 = qvector_reserve(a1 + 1192, (__int64)v19, v22 + 1, 16);
          v29 = *(_QWORD *)(a1 + 1200);
          *(_QWORD *)(a1 + 1192) = v28;
          v23 = (unsigned __int64 *)(v26 + v28);
          v21 = 16 * v29;
        }
        memmove(v23 + 2, v23, v21 - v26);
        *v23 = v18;
        v23[1] = 0;
        ++*(_QWORD *)(a1 + 1200);
      }
    }
    else if ( v20[1] )
    {
      v20[1] = 0;
    }
  }
  else if ( (*(_BYTE *)(a1 + 5) & 0x40) == 0 )
  {
    func = (_QWORD *)get_func();
    if ( func )
    {
      v18 = *(_QWORD *)(a1 + 40);
      if ( *func == v18 )
        goto LABEL_30;
    }
  }
  result = 1;
LABEL_35:
  if ( v39 )
  {
    v31 = result;
    lock_func_range();
    result = v31;
  }
  if ( v36 )
  {
    v32 = result;
    *(_QWORD *)&v37 = 0;
    qfree(v36);
    return v32;
  }
  return result;
}

