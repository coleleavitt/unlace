__int64 __fastcall sub_3AA840(_QWORD *a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  double v8; // xmm0_8
  __int64 *v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rbx
  __int64 v31; // rdi
  __m128i v32; // xmm1
  __m128i v33; // [rsp+0h] [rbp-D8h]
  __int64 v34; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+28h] [rbp-B0h]
  _QWORD v36[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v37[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v38; // [rsp+80h] [rbp-58h] BYREF
  __m128i v39; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 64 && *(_QWORD *)(a2 + 24) == a1[9] )
  {
    v5 = a1[11];
    v6 = a1[12];
    if ( v6 < v5 + 1 )
    {
      v19 = qvector_reserve();
      v20 = a1[11];
      v7 = v19;
      v21 = a1[12];
      a1[12] = v6;
      v22 = a1[10];
      v33.m128i_i64[0] = v21;
      v23 = v20 - 1;
      if ( v23 >= 0 )
      {
        v24 = v7;
        do
        {
          *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)v22);
          v25 = *(_QWORD *)(v22 + 16);
          v26 = _mm_loadu_si128((const __m128i *)(v22 + 24));
          *(_QWORD *)(v22 + 16) = 0;
          *(_QWORD *)(v24 + 16) = v25;
          *(__m128i *)(v24 + 24) = v26;
          LODWORD(v25) = *(_DWORD *)(v22 + 40);
          *(_QWORD *)(v22 + 32) = 0;
          *(_DWORD *)(v24 + 40) = v25;
          if ( *(_QWORD *)(v22 + 16) )
          {
            *(_QWORD *)(v22 + 24) = 0;
            qfree();
          }
          v22 += 48;
          v24 += 48;
        }
        while ( v23-- != 0 );
      }
      qfree();
      v28 = v33.m128i_i64[0];
      a1[10] = v7;
      a1[12] = v28;
      v5 = a1[11];
    }
    else
    {
      v7 = a1[10];
    }
    v8 = 0.0;
    v9 = a1 + 2;
    v10 = v7 + 48 * v5;
    *(_QWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 24) = 0;
    v11 = (_QWORD *)a1[8];
    ++a1[11];
    *(_QWORD *)v10 = *v11;
    v12 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == -1 )
    {
      v13 = a1[3];
      while ( v13 )
      {
        --v13;
        v14 = *(__int64 **)(a1[2] + 8 * v13);
        if ( v14 )
        {
          v15 = *v14;
          if ( v15 != -1 )
          {
            v12 = v15;
            break;
          }
        }
      }
    }
    *(_QWORD *)(v10 + 8) = v12;
    *(_DWORD *)(v10 + 40) = sub_3A7A70(v9, a2, 0);
    v16 = a1[3];
    do
    {
      if ( !v16 )
      {
        v30 = *(_QWORD *)(v10 + 24);
        goto LABEL_29;
      }
      --v16;
      v17 = *(_QWORD *)(a1[2] + 8 * v16);
      if ( !v17 )
      {
        if ( !under_debugger )
          sub_37EEE0(0xCEB5u, 0.0);
LABEL_49:
        BUG();
      }
    }
    while ( *(int *)(v17 + 8) <= 69 );
    v18 = a1[8];
    v34 = 0;
    v35 = 0;
    switch ( *(_DWORD *)(v17 + 8) )
    {
      case 'I':
        sub_3A5320((__int64)&v38, *(_QWORD *)(v17 + 24), v18);
        sub_67E30(&v34);
        if ( !v38 )
          goto LABEL_25;
        goto LABEL_24;
      case 'J':
        sub_3A5320((__int64)&v38, *(_QWORD *)(v17 + 24) + 136LL, v18);
        sub_3A5320((__int64)v37, *(_QWORD *)(v17 + 24), v18);
        sub_3A5320((__int64)v36, *(_QWORD *)(v17 + 24) + 72LL, v18);
        sub_67E30(&v34);
        if ( v36[0] )
        {
          v36[1] = 0;
          qfree();
        }
        if ( v37[0] )
        {
          v37[1] = 0;
          qfree();
        }
        if ( v38 )
          goto LABEL_24;
        goto LABEL_25;
      case 'K':
        sub_3A5320((__int64)&v38, *(_QWORD *)(v17 + 24), v18);
        sub_67E30(&v34);
        if ( v38 )
          goto LABEL_24;
        goto LABEL_25;
      case 'L':
        sub_3A5320((__int64)&v38, *(_QWORD *)(v17 + 24), v18);
        sub_67E30(&v34);
        if ( v38 )
          goto LABEL_24;
        goto LABEL_25;
      case 'M':
        sub_3A5320((__int64)&v38, *(_QWORD *)(v17 + 24), v18);
        sub_67E30(&v34);
        if ( v38 )
        {
LABEL_24:
          v39.m128i_i64[0] = 0;
          qfree();
        }
LABEL_25:
        v29 = v34;
        v8 = *((double *)&v35 + 1);
        v30 = v35;
        break;
      default:
        sub_3A5320((__int64)&v38, v17, v18);
        v32 = _mm_loadu_si128(&v39);
        v29 = v38;
        v39 = 0;
        v30 = v32.m128i_i64[0];
        v33 = v32;
        v38 = 0;
        *(_QWORD *)&v8 = _mm_srli_si128(v32, 8).m128i_u64[0];
        break;
    }
    v34 = 0;
    v35 = 0;
    if ( *(_QWORD *)(v10 + 16) )
    {
      *(_QWORD *)(v10 + 24) = 0;
      *(double *)v33.m128i_i64 = v8;
      qfree();
      v8 = *(double *)v33.m128i_i64;
      v31 = v34;
      *(_QWORD *)(v10 + 16) = v29;
      *(_QWORD *)(v10 + 24) = v30;
      *(double *)(v10 + 32) = v8;
      if ( v31 )
      {
        *(_QWORD *)&v35 = 0;
        qfree();
        v30 = *(_QWORD *)(v10 + 24);
      }
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v29;
      *(_QWORD *)(v10 + 24) = v30;
      *(double *)(v10 + 32) = v8;
    }
LABEL_29:
    if ( v30 <= 1 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xCEB6u, v8);
      goto LABEL_49;
    }
  }
  return 0;
}

