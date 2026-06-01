__int64 __fastcall sub_1B9A0(__int64 a1)
{
  char *v1; // rbp
  char *v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  _QWORD *v7; // rdi
  __int64 *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r14
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rbp
  signed __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v1 = *(char **)(a1 + 72);
  v2 = *(char **)(a1 + 40);
  v3 = v1 - v2;
  v4 = (v1 - v2) >> 3;
  if ( 0x8E38E38E38E38E39LL
     * (((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 56)) >> 3))
     + 8 * ((v1 == nullptr) + v4 - 1)
     - ((v1 == nullptr)
      + v4
      - 1) == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 - ((__int64)&v1[-*(_QWORD *)a1] >> 3) <= 1 )
  {
    if ( 2 * (v4 + 2) >= v5 )
    {
      v14 = 1;
      if ( v5 )
        v14 = *(_QWORD *)(a1 + 8);
      v15 = v14 + v5;
      v16 = v15 + 2;
      if ( (v15 + 2) >> 60 )
      {
        if ( v16 >> 61 )
          sub_D7B9();
        std::__throw_bad_alloc();
      }
      v21 = v15;
      v17 = operator new(8 * v16);
      v18 = *(_QWORD **)(a1 + 40);
      v19 = v17;
      v11 = (_QWORD *)(v17 + 8 * ((v21 - v4) >> 1));
      v20 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v18;
      if ( v20 <= 8 )
      {
        if ( v20 == 8 )
          *v11 = *v18;
      }
      else
      {
        memmove(v11, v18, v20);
      }
      operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 8) = v16;
    }
    else
    {
      v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * ((v5 - (v4 + 2)) >> 1));
      v12 = v1 + 8 - v2;
      if ( v11 < (_QWORD *)v2 )
      {
        if ( v12 <= 8 )
        {
          if ( v12 == 8 )
            *v11 = *(_QWORD *)v2;
        }
        else
        {
          memmove(v11, v2, v12);
        }
      }
      else if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          *(_QWORD *)((char *)v11 + v3) = *(_QWORD *)v2;
      }
      else
      {
        memmove(v11, v2, *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v2);
      }
    }
    *(_QWORD *)(a1 + 40) = v11;
    v13 = *v11;
    v1 = (char *)v11 + v3;
    *(_QWORD *)(a1 + 72) = (char *)v11 + v3;
    *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 504));
    *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(
                              (__m128i)*(unsigned __int64 *)((char *)v11 + v3),
                              (__m128i)(unsigned __int64)(*(_QWORD *)((char *)v11 + v3) + 504LL));
  }
  *((_QWORD *)v1 + 1) = operator new(0x1F8u);
  v7 = *(_QWORD **)(a1 + 48);
  *v7 = 0xFFFFFFFFLL;
  v7[1] = -1;
  v7[2] = 0;
  copy_debug_event();
  v8 = (__int64 *)(*(_QWORD *)(a1 + 72) + 8LL);
  *(_QWORD *)(a1 + 72) = v8;
  result = *v8;
  v10 = *v8 + 504;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = v10;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

