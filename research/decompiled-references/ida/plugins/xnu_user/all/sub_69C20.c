__int64 __fastcall sub_69C20(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  size_t v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  _DWORD *v12; // r13
  __int64 v14; // rax
  void *v15; // r15
  __int64 v16; // r14
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 i; // r15
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  char v24; // bl
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rsi
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  __int128 v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 304);
  v37 = __readfsqword(0x28u);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    qfree();
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 320) = 0;
  }
  *(_QWORD *)(a1 + 336) = 0;
  if ( a3 == 1 )
  {
    if ( *a2 == 43 )
      return 1;
    v36 = 0;
    v35 = 0;
    v19 = qvector_reserve();
    goto LABEL_27;
  }
  v35 = 0;
  v36 = 0;
  if ( a3 )
  {
    v19 = qvector_reserve();
LABEL_27:
    v35 = v19;
    for ( i = 0; i < a3; ++i )
    {
      v24 = a2[i];
      if ( v24 != 92 )
      {
        if ( (unsigned __int8)(v24 - 32) <= 0x5Eu )
        {
          v21 = v36;
          v22 = 2;
          if ( (_QWORD)v36 )
          {
            v22 = v36 + 1;
            v21 = v36 - 1;
          }
          v23 = v35;
          if ( *((_QWORD *)&v36 + 1) < v22 )
          {
            v34 = v21;
            v33.m128i_i64[0] = v22;
            v35 = qvector_reserve();
            v21 = v34;
            v23 = v35;
            v22 = v33.m128i_i64[0];
          }
          *(_QWORD *)&v36 = v22;
          *(_BYTE *)(v23 + v21) = v24;
          *(_BYTE *)(v35 + v21 + 1) = 0;
        }
        else
        {
          sub_55970(&v35);
        }
        continue;
      }
      v25 = v36;
      if ( (_QWORD)v36 )
      {
        v26 = v36 + 1;
        v27 = v36 + 2;
        v28 = v35;
        v25 = v36 - 1;
        if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 2) )
          goto LABEL_41;
      }
      else
      {
        v28 = v35;
        v27 = 3;
        v26 = 2;
        if ( *((_QWORD *)&v36 + 1) < 3u )
        {
LABEL_41:
          v34 = v26;
          v33.m128i_i64[0] = v27;
          v35 = qvector_reserve();
          v26 = v34;
          v28 = v35;
          v27 = v33.m128i_i64[0];
        }
      }
      *(_QWORD *)&v36 = v27;
      *(_BYTE *)(v28 + v26) = 0;
      *(_WORD *)(v35 + v25) = 23644;
    }
  }
  v7 = sub_69B10(a1 + 256, (__int64)&v35);
  if ( v7 == (_QWORD *)(a1 + 264) )
    goto LABEL_7;
  v8 = v7[10];
  if ( v8 >= v7[8] )
    goto LABEL_7;
  v14 = v7[7] + 32 * v8;
  v15 = nullptr;
  v9 = *(_QWORD *)(v14 + 8);
  v16 = v14;
  if ( v9 )
  {
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, *(const void **)v16, v9);
  }
  v17 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( *(_QWORD *)(a1 + 304) )
  {
    *(_QWORD *)(a1 + 312) = 0;
    v33 = v17;
    qfree();
    v17 = _mm_load_si128(&v33);
  }
  *(_QWORD *)(a1 + 304) = v15;
  *(__m128i *)(a1 + 312) = v17;
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(v16 + 24);
  v18 = v7[10];
  if ( v18 < v7[8] - 1LL )
  {
    v7[10] = v18 + 1;
LABEL_7:
    v9 = *(_QWORD *)(a1 + 312);
  }
  if ( !v9 && !*(_BYTE *)(a1 + 328) )
  {
    if ( *(_BYTE *)(a1 + 248) )
    {
      v10 = 7;
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 304);
      if ( !*(_QWORD *)(a1 + 320) )
      {
        v32 = qvector_reserve();
        *(_QWORD *)(a1 + 304) = v32;
        v9 = *(_QWORD *)(a1 + 312);
        v29 = v32;
      }
      memset((void *)(v29 + v9), 0, 1 - v9);
      v30 = *(_BYTE **)(a1 + 304);
      *(_QWORD *)(a1 + 312) = 1;
      *v30 = 43;
      v9 = *(_QWORD *)(a1 + 312);
      v10 = v9 + 7;
      if ( v9 >= 0xFFFFFFFFFFFFFFF9LL )
      {
        v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
        v12 = (_DWORD *)(*(_QWORD *)(a1 + 304) + v9);
        *(_QWORD *)(a1 + 312) = v10;
        *v12 = 1179010340;
        *(_DWORD *)((char *)v12 + 3) = 828646214;
        goto LABEL_16;
      }
    }
    v11 = *(_QWORD *)(a1 + 304);
    if ( *(_QWORD *)(a1 + 320) < v10 )
    {
      v31 = qvector_reserve();
      *(_QWORD *)(a1 + 304) = v31;
      v11 = v31;
    }
    memset((void *)(v11 + *(_QWORD *)(a1 + 312)), 0, v10 - *(_QWORD *)(a1 + 312));
    goto LABEL_15;
  }
LABEL_16:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return a3;
}

