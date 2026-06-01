__int64 __fastcall sub_3ECC0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // rbx
  void *v17; // r13
  size_t v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+4h] [rbp-204h]
  size_t na; // [rsp+10h] [rbp-1F8h]
  __int64 n; // [rsp+10h] [rbp-1F8h]
  size_t v29; // [rsp+18h] [rbp-1F0h]
  void *src; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-1C0h]
  __int128 v32; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-198h]
  __int64 v34; // [rsp+78h] [rbp-190h]
  __int64 v35; // [rsp+80h] [rbp-188h]
  _BYTE v36[16]; // [rsp+88h] [rbp-180h] BYREF
  __int64 v37; // [rsp+98h] [rbp-170h]
  _QWORD v38[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v38[0] = __readfsqword(0x28u);
  if ( (*(_DWORD *)a5 & 0x4000) == 0 )
    return 1;
  v5 = *(_QWORD *)(a5 + 8);
  v26 = 2;
  v9 = *(_DWORD *)a5 & 0x404;
  if ( v9 )
  {
    if ( v9 == 4 )
    {
      v26 = 4;
    }
    else
    {
      v10 = v9 == 1024;
      v11 = 8;
      if ( v10 )
        v11 = 1;
      v26 = v11;
    }
  }
  v31 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 1, 8);
  *((_QWORD *)src + v31) = 0;
  v12 = v36;
  v13 = (unsigned __int64)v38;
  *(_QWORD *)&v31 = v31 + 1;
  v33 = -1;
  v34 = 0;
  v35 = 0;
  v32 = -1;
  v14.m128i_i64[0] = 0;
  do
  {
    v15 = 0;
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v38 != v12 );
  v16 = 0;
  if ( *(_WORD *)(a5 + 4) )
  {
    while ( 1 )
    {
      v15 = v5;
      decode_insn(&v32, v5, v13, *(double *)v14.m128i_i64);
      if ( !a3 )
        goto LABEL_12;
      if ( (_WORD)v34 == 13 && v36[1] == 7 )
        break;
      v20 = a3[1];
      v21 = v33;
      v15 = *a3;
      v13 = v20 + 1;
      if ( a3[2] < (unsigned __int64)(v20 + 1) )
      {
        v22 = qvector_reserve(a3, v15, v13, 8);
LABEL_24:
        *a3 = v22;
        v15 = v22;
        v20 = a3[1];
      }
LABEL_11:
      *(_QWORD *)(v15 + 8 * v20) = v21;
      ++a3[1];
LABEL_12:
      if ( a2 )
      {
        v17 = nullptr;
        *(_QWORD *)src = v16;
        v18 = v31;
        if ( (_QWORD)v31 )
        {
          v29 = v31;
          n = 8 * v31;
          v17 = (void *)qalloc_or_throw(8 * v31);
          memcpy(v17, src, n);
          v18 = v29;
        }
        v13 = a2[1];
        v15 = *a2;
        if ( a2[2] < v13 + 1 )
        {
          na = v18;
          v24 = qvector_reserve(a2, v15, v13 + 1, 24);
          v13 = a2[1];
          v18 = na;
          *a2 = v24;
          v15 = v24;
        }
        v19 = v15 + 24 * v13;
        v14 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
        *(_QWORD *)v19 = v17;
        *(__m128i *)(v19 + 8) = v14;
        ++a2[1];
      }
      ++v16;
      v5 += v26;
      if ( *(unsigned __int16 *)(a5 + 4) <= (int)v16 )
        goto LABEL_25;
    }
    v25 = v37 + 16 * v32;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v25 != v21 )
    {
      v21 &= v25;
      if ( v25 == -1 )
        v21 = -1;
    }
    v20 = a3[1];
    v13 = a3[2];
    v15 = *a3;
    if ( v13 >= v20 + 1 )
      goto LABEL_11;
    v22 = qvector_reserve(a3, v15, v20 + 1, 8);
    goto LABEL_24;
  }
LABEL_25:
  if ( src )
  {
    *(_QWORD *)&v31 = 0;
    qfree(src, v15, v13, *(double *)v14.m128i_i64);
  }
  return 1;
}

