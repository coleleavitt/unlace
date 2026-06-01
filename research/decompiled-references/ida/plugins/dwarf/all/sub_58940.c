void __fastcall sub_58940(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  const __m128i *v17; // r12
  __m128i *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  const __m128i *v22; // rdi
  __int64 v23; // rax
  const __m128i *v24; // rdx
  __m128i v25; // xmm0
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+18h] [rbp-40h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v4 = a1 + 32;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 != a1 + 32 )
  {
    v7 = a3;
    do
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v5 + 40) == v7 )
        {
          v8 = *(_QWORD *)(v5 + 32);
          v27 = v5;
          v9 = sub_84320(*(_QWORD *)(a4 + 8));
          v10 = v8 & 0x7FFFFFFF;
          v11 = v8 >> 31;
          v12 = sub_844A0(v9, v10, v11 == 0);
          v5 = v27;
          v13 = v12;
          if ( v12 )
          {
            v14 = v10 - *(_QWORD *)(v12 + 8 * (28 - ((v11 == 0) - 1LL)));
            LOBYTE(v28) = v11 == 0;
            v15 = v14 | (v28 << 63);
            if ( (v14 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v15 != -1 )
              break;
          }
        }
        v5 = std::_Rb_tree_increment(v5);
        if ( v5 == v4 )
          return;
      }
      v16 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v16 + 1) )
      {
        v29 = *(_QWORD *)(a2 + 16);
        v28 = v13;
        v19 = qvector_reserve(a2, 0, v16 + 1, 16);
        v20 = *(_QWORD *)(a2 + 16);
        v17 = (const __m128i *)v19;
        v21 = *(_QWORD *)(a2 + 8);
        v22 = *(const __m128i **)a2;
        *(_QWORD *)(a2 + 16) = v29;
        v23 = v21 - 1;
        if ( v23 >= 0 )
        {
          v24 = v17;
          do
          {
            v25 = _mm_loadu_si128(v22);
            ++v24;
            ++v22;
            v24[-1] = v25;
          }
          while ( v23-- != 0 );
          v22 = *(const __m128i **)a2;
        }
        v30 = v20;
        qfree(v22);
        *(_QWORD *)a2 = v17;
        v16 = *(_QWORD *)(a2 + 8);
        v13 = v28;
        *(_QWORD *)(a2 + 16) = v30;
        v5 = v27;
      }
      else
      {
        v17 = *(const __m128i **)a2;
      }
      v18 = (__m128i *)&v17[v16];
      v18->m128i_i64[0] = v15;
      v18->m128i_i64[1] = v13;
      ++*(_QWORD *)(a2 + 8);
      v5 = std::_Rb_tree_increment(v5);
    }
    while ( v5 != v4 );
  }
}

