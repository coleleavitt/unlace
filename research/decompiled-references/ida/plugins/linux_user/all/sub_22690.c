__m128 *__fastcall sub_22690(__m128 *a1, __int64 a2, __int64 a3, double *a4)
{
  __int64 v4; // rdx
  signed __int64 v5; // r14
  double v7; // r15
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __m128 v15; // xmm1
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  v4 = a3 - a2;
  v5 = 0x8E38E38E38E38E39LL * (v4 >> 3);
  v7 = *a4;
  v8 = *((_QWORD *)a4 + 2);
  v19 = a2;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v9 = 0x8E38E38E38E38E39LL * ((v8 - *(_QWORD *)&v7) >> 3);
      if ( v9 > v5 )
        v9 = v5;
      v10 = v9;
      v11 = v19;
      v20 = 72 * v9;
      v19 += 72 * v9;
      v12 = 0x8E38E38E38E38E39LL * ((72 * v9) >> 3);
      if ( 72 * v9 > 0 )
      {
        do
        {
          v11 += 72;
          *(_QWORD *)&v7 += 72LL;
          copy_debug_event();
          --v12;
        }
        while ( v12 );
        v7 = *a4;
      }
      v13 = v10 - 0x71C71C71C71C71C7LL * ((__int64)(*(_QWORD *)&v7 - *((_QWORD *)a4 + 1)) >> 3);
      if ( v13 < 0 )
        break;
      if ( v13 > 6 )
      {
        v16 = v13 / 7;
LABEL_13:
        v17 = (__int64 *)(8 * v16 + *((_QWORD *)a4 + 3));
        *((_QWORD *)a4 + 3) = v17;
        v18 = *v17;
        v8 = *v17 + 504;
        *(_QWORD *)&v7 = v18 + 72 * (v13 - 7 * v16);
        *((_QWORD *)a4 + 1) = v18;
        *((_QWORD *)a4 + 2) = v8;
        *a4 = v7;
        goto LABEL_10;
      }
      *(_QWORD *)&v7 += v20;
      v8 = *((_QWORD *)a4 + 2);
      *a4 = v7;
LABEL_10:
      v5 -= v10;
      if ( v5 <= 0 )
        goto LABEL_11;
    }
    v16 = ~(~v13 / 7);
    goto LABEL_13;
  }
LABEL_11:
  v15 = _mm_loadh_ps(a4 + 3);
  *a1 = _mm_loadh_ps(a4 + 1);
  a1[1] = v15;
  return a1;
}

