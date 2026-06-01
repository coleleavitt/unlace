__int64 __fastcall sub_4C400(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rcx
  __int64 v9; // rax
  char *v10; // r8
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi

  v3 = 32 * a3;
  v4 = &a2[4 * a3];
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  if ( (unsigned __int64)(32 * a3) > 0x7FFFFFFFFFFFFFE0LL )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  if ( v3 )
  {
    v5 = a2;
    v6 = operator new(32 * a3);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v6 + v3;
    if ( v4 == a2 )
    {
      v7 = v6;
    }
    else
    {
      v7 = v6;
      do
      {
        v8 = (char *)v5[2];
        v9 = *v5;
        *(_QWORD *)(v7 + 24) = 0;
        v10 = (char *)v5[1];
        *(_OWORD *)(v7 + 8) = 0;
        *(_QWORD *)v7 = v9;
        v11 = v8 - v10;
        if ( v8 == v10 )
        {
          v13 = 0;
        }
        else
        {
          if ( (unsigned __int64)v11 > 0x7FFFFFFFFFFFFFF8LL )
          {
            if ( v11 < 0 )
              sub_1A9B7();
            std::__throw_bad_alloc();
          }
          v12 = operator new(v8 - v10);
          v8 = (char *)v5[2];
          v10 = (char *)v5[1];
          v13 = v12;
        }
        *(_QWORD *)(v7 + 24) = v13 + v11;
        *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
        if ( v8 != v10 )
        {
          v14 = v10;
          v15 = v13;
          do
          {
            v16 = *(_QWORD *)v14;
            v14 += 12;
            v15 += 12;
            *(_QWORD *)(v15 - 12) = v16;
            *(_DWORD *)(v15 - 4) = *((_DWORD *)v14 - 1);
          }
          while ( v8 != v14 );
          v13 += 12 * ((0x2AAAAAAAAAAAAAABLL * ((unsigned __int64)(v8 - 12 - v10) >> 2)) & 0x3FFFFFFFFFFFFFFFLL) + 12;
        }
        v5 += 4;
        *(_QWORD *)(v7 + 16) = v13;
        v7 += 32;
      }
      while ( v4 != v5 );
    }
  }
  else
  {
    v7 = 0;
  }
  *(_QWORD *)(a1 + 8) = v7;
  return a1;
}

