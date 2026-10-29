__int64 __fastcall sub_C08A0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  signed __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-48h]
  char v24; // [rsp+Ch] [rbp-3Ch]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD **)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v5 - (_QWORD)v6;
  v9 = a2 + ((v5 - (__int64)v6) >> 3) + 1;
  if ( 2 * v9 >= v7 )
  {
    v16 = a2;
    if ( v7 >= a2 )
      v16 = *(_QWORD *)(a1 + 8);
    v17 = v7 + v16 + 2;
    if ( v17 >> 60 )
    {
      if ( v17 >> 61 )
        sub_5D0B6(a1, v6, v5, v3);
      std::__throw_bad_alloc();
    }
    v24 = v3;
    v23 = a2 + ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v6) >> 3) + 1;
    v18 = operator new(8 * v17);
    v19 = v18;
    v20 = *(_QWORD **)(a1 + 40);
    v21 = 8 * ((v17 - v23) >> 1);
    if ( v24 )
      v21 += 8 * a2;
    v11 = (_QWORD *)(v18 + v21);
    v22 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v20;
    if ( v22 <= 8 )
    {
      if ( v22 == 8 )
        *v11 = *v20;
    }
    else
    {
      memmove(v11, v20, v22);
    }
    operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
    *(_QWORD *)a1 = v19;
    *(_QWORD *)(a1 + 8) = v17;
  }
  else
  {
    v10 = 8 * ((v7 - v9) >> 1);
    if ( (_BYTE)v3 )
      v10 += 8 * a2;
    v11 = (_QWORD *)(*(_QWORD *)a1 + v10);
    v12 = v5 + 8 - (_QWORD)v6;
    if ( v11 < v6 )
    {
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          *v11 = *v6;
      }
      else
      {
        memmove(v11, v6, v12);
      }
    }
    else if ( v12 <= 8 )
    {
      if ( v12 == 8 )
        *(_QWORD *)((char *)v11 + v8) = *v6;
    }
    else
    {
      memmove((char *)v11 + v8 - v12 + 8, v6, v12);
    }
  }
  *(_QWORD *)(a1 + 40) = v11;
  v13 = *v11;
  v14 = (_QWORD *)((char *)v11 + v8);
  *(_QWORD *)(a1 + 72) = v14;
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + 504));
  result = *v14;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64((__m128i)*v14, (__m128i)(*v14 + 504));
  return result;
}

