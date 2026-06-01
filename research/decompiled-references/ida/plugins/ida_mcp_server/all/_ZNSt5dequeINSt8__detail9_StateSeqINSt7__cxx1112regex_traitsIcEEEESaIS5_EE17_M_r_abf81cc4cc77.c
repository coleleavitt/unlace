unsigned __int64 __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reallocate_map(
        __int64 a1,
        unsigned __int64 a2,
        char a3)
{
  __int64 *v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r9
  __int64 v9; // rbp
  signed __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  signed __int64 v18; // rdx
  unsigned __int64 *v19; // rbx
  unsigned __int64 result; // rax
  __int64 *v21; // rdi
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 *src; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]

  v5 = *(__int64 **)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 72) - (_QWORD)v5;
  v8 = (v7 >> 3) + a2 + 1;
  if ( 2 * v8 >= v6 )
  {
    v13 = a2;
    src = *(__int64 **)(a1 + 40);
    if ( v6 >= a2 )
      v13 = *(_QWORD *)(a1 + 8);
    v23 = *(_QWORD *)(a1 + 72);
    v22 = a2;
    v14 = v6 + v13 + 2;
    v25 = ((v23 - (__int64)v5) >> 3) + a2 + 1;
    v15 = operator new(8 * v14);
    v16 = v15;
    v17 = 8 * ((unsigned __int64)(v14 - v25) >> 1);
    if ( a3 )
      v17 += 8 * v22;
    v18 = v23 + 8 - (_QWORD)src;
    v11 = (__int64 *)(v15 + v17);
    if ( v18 <= 8 )
    {
      if ( v18 == 8 )
        *v11 = *src;
    }
    else
    {
      memmove(v11, src, v18);
    }
    operator delete(*(void **)a1, 8 * v6);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_14:
    v12 = *v11;
    goto LABEL_15;
  }
  v9 = 8 * ((v6 - v8) >> 1);
  if ( a3 )
    v9 += 8 * a2;
  v10 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v5;
  v11 = (__int64 *)(v9 + *(_QWORD *)a1);
  if ( v11 >= v5 )
  {
    v21 = (__int64 *)((char *)v11 + 0x1FFFFFFFFFFFFFFFLL * v10 + v7 + 8);
    if ( v10 > 8 )
    {
      memmove(v21, v5, v10);
      v12 = *v11;
      goto LABEL_15;
    }
    if ( v10 == 8 )
    {
      *v21 = *v5;
      v12 = *v11;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v10 <= 8 )
  {
    if ( v10 == 8 )
    {
      v12 = *v5;
      *v11 = *v5;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  memmove((void *)(v9 + *(_QWORD *)a1), v5, v10);
  v12 = *v11;
LABEL_15:
  *(_QWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v11;
  v19 = (unsigned __int64 *)((char *)v11 + v7);
  *(_QWORD *)(a1 + 32) = v12 + 504;
  result = *v19;
  *(_QWORD *)(a1 + 72) = v19;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64((__m128i)result, (__m128i)(result + 504));
  return result;
}

