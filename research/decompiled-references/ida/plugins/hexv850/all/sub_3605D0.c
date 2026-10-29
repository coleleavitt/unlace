__m128 *__fastcall sub_3605D0(__m128 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  bool v16; // sf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rsi
  __m128 v23; // xmm0

  v4 = a3 - (_QWORD)a2;
  v5 = v4 >> 3;
  v8 = *(_QWORD **)a4;
  v9 = *(_QWORD *)(a4 + 16);
  if ( v4 > 0 )
  {
    v10 = a2;
    do
    {
      while ( 1 )
      {
        v11 = v10;
        v12 = (v9 - (__int64)v8) >> 3;
        if ( v12 > v5 )
          v12 = v5;
        v13 = 8 * v12;
        v14 = v12;
        v10 += v12;
        if ( 8 * v12 <= 8 )
        {
          if ( 8 * v12 == 8 )
          {
            *v8 = *v11;
            v8 = *(_QWORD **)a4;
          }
        }
        else
        {
          memmove(v8, v11, 8 * v12);
          v8 = *(_QWORD **)a4;
        }
        v15 = ((__int64)v8 - *(_QWORD *)(a4 + 8)) >> 3;
        v16 = v14 + v15 < 0;
        v17 = v14 + v15;
        v18 = v17;
        if ( !v16 )
          break;
        v19 = ~((unsigned __int64)~v17 >> 6);
LABEL_11:
        v5 -= v14;
        v20 = (__int64 *)(*(_QWORD *)(a4 + 24) + 8 * v19);
        *(_QWORD *)(a4 + 24) = v20;
        v21 = *v20;
        v9 = *v20 + 512;
        v8 = (_QWORD *)(v21 + 8 * (v18 - (v19 << 6)));
        *(_QWORD *)(a4 + 8) = v21;
        *(_QWORD *)(a4 + 16) = v9;
        *(_QWORD *)a4 = v8;
        if ( v5 <= 0 )
          goto LABEL_12;
      }
      if ( v17 > 63 )
      {
        v19 = v17 >> 6;
        goto LABEL_11;
      }
      v8 = (_QWORD *)((char *)v8 + v13);
      v5 -= v14;
      v9 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)a4 = v8;
    }
    while ( v5 > 0 );
  }
LABEL_12:
  v23 = _mm_loadh_ps((const double *)(a4 + 24));
  *a1 = _mm_loadh_ps((const double *)(a4 + 8));
  a1[1] = v23;
  return a1;
}

