__int64 __fastcall sub_EC50(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // r15
  char n; // [rsp+0h] [rbp-68h]
  _QWORD *src; // [rsp+10h] [rbp-58h]

  v8 = *(_QWORD *)(a5 + 72);
  if ( v8 != 3 && v8 != 16 )
    sub_C250((__int64)"calc_switch_cases: wrong custom switch id %a", v8, (__int64)a3, a4, a5, a6, n);
  v10 = 0;
  src = (_QWORD *)qvector_reserve();
  memset(src, 0, sizeof(_QWORD));
  v11 = *(_QWORD *)(a5 + 8) + (*(_QWORD *)(a5 + 16) << ((*(_DWORD *)a5 >> 7) & 3));
  if ( *(_WORD *)(a5 + 4) )
  {
    do
    {
      v15 = a3[1];
      v16 = *a3;
      if ( a3[2] < (unsigned __int64)(v15 + 1) )
      {
        v17 = qvector_reserve();
        *a3 = v17;
        v16 = v17;
        v15 = a3[1];
      }
      *(_QWORD *)(v16 + 8 * v15) = v11;
      ++a3[1];
      if ( a2 )
      {
        *src = v10 + *(_QWORD *)(a5 + 16);
        v19 = (void *)qalloc_or_throw();
        memcpy(v19, src, 8u);
        v12 = a2[1];
        v13 = *a2;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v18 = qvector_reserve();
          v12 = a2[1];
          *a2 = v18;
          v13 = v18;
        }
        v14 = v13 + 24 * v12;
        *(_QWORD *)v14 = v19;
        *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
        ++a2[1];
      }
      ++v10;
      v11 += *(_QWORD *)(a5 + 72);
    }
    while ( *(unsigned __int16 *)(a5 + 4) > (int)v10 );
  }
  if ( src )
    qfree();
  return 1;
}
