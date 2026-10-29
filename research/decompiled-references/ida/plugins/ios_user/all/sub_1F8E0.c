__int64 __fastcall sub_1F8E0(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  signed __int64 v11; // rdx
  _QWORD *v12; // r14
  unsigned __int64 v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  _QWORD *v19; // rsi
  signed __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 72);
  v2 = *(_QWORD **)(a1 + 40);
  v3 = v1 - (_QWORD)v2;
  v4 = (v1 - (__int64)v2) >> 3;
  if ( 0x8E38E38E38E38E39LL
     * (((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 56)) >> 3))
     + 8 * ((v1 == 0) + v4 - 1)
     - ((v1 == 0)
      + v4
      - 1) == 0x1C71C71C71C71C7LL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v2 == *(_QWORD **)a1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( 2 * (v4 + 2) >= v9 )
    {
      v15 = 1;
      if ( v9 )
        v15 = *(_QWORD *)(a1 + 8);
      v16 = v9 + v15;
      v17 = v16 + 2;
      if ( (v16 + 2) >> 60 )
      {
        if ( v17 >> 61 )
          sub_1192E();
        std::__throw_bad_alloc();
      }
      v21 = v4;
      v18 = operator new(8 * v17);
      v19 = *(_QWORD **)(a1 + 40);
      v2 = (_QWORD *)(v18 + 8 * ((v16 - v21) >> 1) + 8);
      v20 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v19;
      if ( v20 <= 8 )
      {
        if ( v20 == 8 )
          *v2 = *v19;
      }
      else
      {
        memmove(v2, v19, v20);
      }
      operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
      *(_QWORD *)a1 = v18;
      *(_QWORD *)(a1 + 8) = v17;
    }
    else
    {
      v10 = (v9 - (v4 + 2)) >> 1;
      v11 = v1 + 8 - (_QWORD)v2;
      v12 = &v2[v10 + 1];
      if ( v12 < v2 )
      {
        if ( v11 <= 8 )
        {
          if ( v11 == 8 )
            *v12 = *v2;
        }
        else
        {
          memmove(&v2[v10 + 1], v2, v11);
        }
      }
      else if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          *(_QWORD *)((char *)v12 + v3) = *v2;
      }
      else
      {
        memmove((char *)v12 + v3 - v11 + 8, v2, v11);
      }
      v2 = v12;
    }
    *(_QWORD *)(a1 + 40) = v2;
    v13 = *v2;
    v14 = (_QWORD *)((char *)v2 + v3);
    *(_QWORD *)(a1 + 72) = v14;
    *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 504));
    *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int64)*v14,
                              (__m128i)(unsigned __int64)(*v14 + 504LL));
  }
  *(v2 - 1) = operator new(0x1F8u);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 40) - 8LL);
  *(_QWORD *)(a1 + 40) = v5;
  v6 = (_QWORD *)*v5;
  v7 = *v5 + 504LL;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 16) = v6 + 54;
  v6[54] = 0xFFFFFFFFLL;
  v6[55] = -1;
  v6[56] = 0;
  return copy_debug_event();
}

