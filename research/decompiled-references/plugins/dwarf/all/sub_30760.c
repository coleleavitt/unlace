__int64 __fastcall sub_30760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const __m128i **a5, unsigned int a6)
{
  __int64 v6; // rax
  const __m128i *v7; // rdx
  const __m128i *v8; // r14
  __int64 v9; // r12
  const __m128i **v10; // rbp
  unsigned int v11; // r15d
  __m128i *v12; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax
  const __m128i *v18; // rcx
  __int64 v19; // rbx
  const __m128i *v20; // rax
  const __m128i *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  const __m128i *v26; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  const __m128i *v30; // [rsp+28h] [rbp-40h]
  const __m128i *v31; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 232);
  if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6 == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  v7 = a5[1];
  v8 = *a5;
  v9 = a1;
  v10 = a5;
  v11 = a6;
  v12 = (__m128i *)&(*a5)[(_QWORD)v7];
  if ( *a5 != v12 )
  {
    do
    {
      if ( !(unsigned int)sub_849A0(a1 + 232, v8) )
        break;
      ++v8;
    }
    while ( v12 != v8 );
    v7 = v10[1];
    v12 = (__m128i *)&(*v10)[(_QWORD)v7];
    if ( v8 != v12 )
      return 0;
  }
  v14 = (unsigned __int64)v7->m128i_u64 + 1;
  v15 = *(_QWORD *)(a1 + 232);
  v16 = *(_QWORD *)(a1 + 240);
  if ( (unsigned __int64)v10[2] < v14 )
  {
    v30 = v10[2];
    v29 = *(_QWORD *)(a1 + 232);
    v17 = qvector_reserve(v10, 0, v14, 16);
    v18 = v10[2];
    v19 = v17;
    v20 = v10[1];
    v21 = *v10;
    v10[2] = v30;
    v22 = (__int64)&v20[-1].m128i_i64[1] + 7;
    if ( v22 >= 0 )
    {
      v23 = v19;
      do
      {
        v24 = _mm_loadu_si128(v21);
        v23 += 16;
        ++v21;
        *(__m128i *)(v23 - 16) = v24;
      }
      while ( v22-- != 0 );
      v21 = *v10;
    }
    v31 = v18;
    qfree(v21);
    v26 = v10[1];
    *v10 = (const __m128i *)v19;
    v15 = v29;
    v10[2] = v31;
    v12 = (__m128i *)(16LL * (_QWORD)v26 + v19);
  }
  v12->m128i_i64[0] = v15;
  v12->m128i_i64[1] = v16;
  v10[1] = (const __m128i *)((char *)v10[1] + 1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, const __m128i **, _QWORD))(*(_QWORD *)v9 + 32LL))(
           v9,
           a2,
           a3,
           a4,
           v10,
           v11);
}
