__int64 __fastcall sub_6F600(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 *v8; // rax
  __int64 v9; // rbp
  void *v10; // r14
  size_t v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  size_t na; // [rsp+10h] [rbp-1E8h]
  __int64 n; // [rsp+10h] [rbp-1E8h]
  size_t v23; // [rsp+18h] [rbp-1E0h]
  void *src; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-1C0h]
  __int128 v26; // [rsp+50h] [rbp-1A8h]
  __int64 v27; // [rsp+60h] [rbp-198h]
  __int64 v28; // [rsp+68h] [rbp-190h]
  __int64 v29; // [rsp+70h] [rbp-188h]
  _BYTE v30[16]; // [rsp+78h] [rbp-180h] BYREF
  __int64 v31; // [rsp+88h] [rbp-170h]
  unsigned __int64 v32; // [rsp+1B8h] [rbp-40h] BYREF

  v32 = __readfsqword(0x28u);
  result = 0;
  if ( (*(_BYTE *)(a4 + 1) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    v25 = 0;
    src = 0;
    src = (void *)qvector_reserve((__int64)&src, 0, 1, 8);
    *((_QWORD *)src + v25) = 0;
    v8 = (unsigned __int64 *)v30;
    *(_QWORD *)&v25 = v25 + 1;
    v27 = -1;
    v28 = 0;
    v29 = 0;
    v26 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( &v32 != v8 );
    v9 = 0;
    if ( *(_WORD *)(a4 + 4) )
    {
      do
      {
        decode_insn();
        if ( a2 )
        {
          v15 = a2[1];
          v16 = *a2;
          v17 = v15 + 1;
          if ( (_WORD)v28 == 3 && v30[1] == 7 )
            v18 = v31 + 16 * v26;
          else
            v18 = v27;
          if ( a2[2] < v17 )
          {
            v19 = qvector_reserve((__int64)a2, v16, v17, 8);
            *a2 = v19;
            v16 = v19;
            v15 = a2[1];
          }
          *(_QWORD *)(v16 + 8 * v15) = v18;
          ++a2[1];
        }
        v5 += WORD1(v28);
        if ( a1 )
        {
          v10 = 0;
          *(_QWORD *)src = v9;
          v11 = v25;
          if ( (_QWORD)v25 )
          {
            v23 = v25;
            n = 8 * v25;
            v10 = (void *)qalloc_or_throw();
            memcpy(v10, src, n);
            v11 = v23;
          }
          v12 = a1[1];
          v13 = *a1;
          if ( a1[2] < (unsigned __int64)(v12 + 1) )
          {
            na = v11;
            v20 = qvector_reserve((__int64)a1, v13, v12 + 1, 24);
            v12 = a1[1];
            v11 = na;
            *a1 = v20;
            v13 = v20;
          }
          v14 = v13 + 24 * v12;
          *(_QWORD *)v14 = v10;
          *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
          ++a1[1];
        }
        ++v9;
      }
      while ( *(unsigned __int16 *)(a4 + 4) > (int)v9 );
    }
    if ( src )
    {
      *(_QWORD *)&v25 = 0;
      qfree((__int64)src);
    }
    return 1;
  }
  return result;
}
