char *__fastcall sub_1BA8A0(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  char **v8; // rdx
  char *result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r14
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // r15
  signed __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = a1[9];
  v4 = (_QWORD *)a1[5];
  v5 = v3 - (_QWORD)v4;
  v6 = (v3 - (__int64)v4) >> 3;
  if ( (((v3 == 0) + v6 - 1) << 7) + ((a1[4] - a1[2]) >> 2) + ((a1[6] - a1[7]) >> 2) == 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  v7 = a1[1];
  if ( v7 - ((v3 - *a1) >> 3) <= 1 )
  {
    if ( 2 * (v6 + 2) >= v7 )
    {
      v14 = 1;
      if ( v7 )
        v14 = a1[1];
      v15 = v14 + v7;
      v16 = v15 + 2;
      if ( (v15 + 2) >> 60 )
      {
        if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
          sub_5FD6E();
        std::__throw_bad_alloc();
      }
      v21 = v15;
      v17 = operator new(8 * v16);
      v18 = (_QWORD *)a1[5];
      v19 = v17;
      v11 = (_QWORD *)(v17 + 8 * ((v21 - v6) >> 1));
      v20 = a1[9] + 8 - (_QWORD)v18;
      if ( v20 <= 8 )
      {
        if ( v20 == 8 )
          *v11 = *v18;
      }
      else
      {
        memmove(v11, v18, v20);
      }
      operator delete((void *)*a1, 8 * a1[1]);
      *a1 = v19;
      a1[1] = v16;
    }
    else
    {
      v11 = (_QWORD *)(*a1 + 8 * ((v7 - (v6 + 2)) >> 1));
      v12 = v3 + 8 - (_QWORD)v4;
      if ( v11 < v4 )
      {
        if ( v12 <= 8 )
        {
          if ( v12 == 8 )
            *v11 = *v4;
        }
        else
        {
          memmove(v11, v4, v12);
        }
      }
      else if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          *(_QWORD *)((char *)v11 + v5) = *v4;
      }
      else
      {
        memmove(v11, v4, a1[9] + 8 - (_QWORD)v4);
      }
    }
    a1[5] = (__int64)v11;
    v13 = *v11;
    v3 = (__int64)v11 + v5;
    a1[9] = (__int64)v11 + v5;
    *(__m128i *)(a1 + 3) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 512));
    *(__m128i *)(a1 + 7) = _mm_unpacklo_epi64(
                             (__m128i)*(unsigned __int64 *)((char *)v11 + v5),
                             (__m128i)(unsigned __int64)(*(_QWORD *)((char *)v11 + v5) + 512LL));
  }
  *(_QWORD *)(v3 + 8) = operator new(0x200u);
  *(_DWORD *)a1[6] = *a2;
  v8 = (char **)(a1[9] + 8);
  a1[9] = (__int64)v8;
  result = *v8;
  v10 = (__int64)(*v8 + 512);
  a1[7] = (__int64)result;
  a1[8] = v10;
  a1[6] = (__int64)result;
  return result;
}

