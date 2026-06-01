__int64 __fastcall sub_5E40(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // r14
  _QWORD *src; // [rsp+20h] [rbp-1C8h]
  char v18; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v19; // [rsp+1A8h] [rbp-40h] BYREF

  v19 = __readfsqword(0x28u);
  result = 0;
  if ( (*(_BYTE *)(a4 + 1) & 0x40) != 0 )
  {
    v7 = (unsigned __int64 *)&v18;
    do
    {
      *(_WORD *)v7 = 0;
      v7 += 5;
      *((_WORD *)v7 - 19) = 0;
      *((_WORD *)v7 - 18) = 0;
      *((_DWORD *)v7 - 2) = 0;
      *((_WORD *)v7 - 17) = 0;
      *((_OWORD *)v7 - 2) = 0;
      *(v7 - 2) = 0;
    }
    while ( &v19 != v7 );
    decode_insn();
    src = (_QWORD *)qvector_reserve();
    v8 = 0;
    *src = 0;
    if ( *(_WORD *)(a4 + 4) )
    {
      do
      {
        decode_insn();
        if ( a2 )
        {
          v12 = a2[1];
          v13 = *a2;
          if ( a2[2] < (unsigned __int64)(v12 + 1) )
          {
            v14 = qvector_reserve();
            *a2 = v14;
            v13 = v14;
            v12 = a2[1];
          }
          *(_QWORD *)(v13 + 8 * v12) = -1;
          ++a2[1];
        }
        if ( a1 )
        {
          *src = v8;
          v16 = (void *)qalloc_or_throw();
          memcpy(v16, src, 8u);
          v9 = a1[1];
          v10 = *a1;
          if ( a1[2] < (unsigned __int64)(v9 + 1) )
          {
            v15 = qvector_reserve();
            v9 = a1[1];
            *a1 = v15;
            v10 = v15;
          }
          v11 = v10 + 24 * v9;
          *(_QWORD *)v11 = v16;
          *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
          ++a1[1];
        }
        ++v8;
      }
      while ( *(unsigned __int16 *)(a4 + 4) > (int)v8 );
    }
    if ( src )
      qfree();
    return 1;
  }
  return result;
}

