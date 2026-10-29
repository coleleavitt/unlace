__int64 __fastcall sub_3AE9C0(__int64 *a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  double v8; // xmm0_8
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rbp
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __m128i v34; // xmm1
  __m128i v35; // [rsp+0h] [rbp-D8h]
  __int64 v36; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-B0h]
  __int64 v38[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v39[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v40; // [rsp+80h] [rbp-58h] BYREF
  __m128i v41; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 64 && *(_QWORD *)(a2 + 24) == a1[9] )
  {
    v5 = a1[11];
    v6 = a1[12];
    if ( v6 < v5 + 1 )
    {
      v18 = qvector_reserve((__int64)(a1 + 10), 0, v5 + 1, 48);
      v19 = a1[11];
      v7 = v18;
      v20 = a1[12];
      a1[12] = v6;
      v21 = a1[10];
      v35.m128i_i64[0] = v20;
      v22 = v19 - 1;
      if ( v22 >= 0 )
      {
        v23 = v7;
        do
        {
          *(__m128i *)v23 = _mm_loadu_si128((const __m128i *)v21);
          v24 = *(_QWORD *)(v21 + 16);
          v25 = _mm_loadu_si128((const __m128i *)(v21 + 24));
          *(_QWORD *)(v21 + 16) = 0;
          *(_QWORD *)(v23 + 16) = v24;
          *(__m128i *)(v23 + 24) = v25;
          LODWORD(v24) = *(_DWORD *)(v21 + 40);
          *(_QWORD *)(v21 + 32) = 0;
          *(_DWORD *)(v23 + 40) = v24;
          v26 = *(_QWORD *)(v21 + 16);
          if ( v26 )
          {
            *(_QWORD *)(v21 + 24) = 0;
            qfree(v26);
          }
          v21 += 48;
          v23 += 48;
        }
        while ( v22-- != 0 );
        v21 = a1[10];
      }
      qfree(v21);
      v28 = v35.m128i_i64[0];
      a1[10] = v7;
      a1[12] = v28;
      v5 = a1[11];
    }
    else
    {
      v7 = a1[10];
    }
    v8 = 0.0;
    v9 = v7 + 48 * v5;
    *(_QWORD *)(v9 + 16) = 0;
    *(_OWORD *)(v9 + 24) = 0;
    v10 = (_QWORD *)a1[8];
    ++a1[11];
    *(_QWORD *)v9 = *v10;
    v11 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == -1 )
    {
      v12 = a1[3];
      while ( v12 )
      {
        --v12;
        v13 = *(__int64 **)(a1[2] + 8 * v12);
        if ( v13 )
        {
          v14 = *v13;
          if ( v14 != -1 )
          {
            v11 = v14;
            break;
          }
        }
      }
    }
    *(_QWORD *)(v9 + 8) = v11;
    *(_DWORD *)(v9 + 40) = sub_3ABBF0(a1 + 2, a2, 0);
    v15 = a1[3];
    do
    {
      if ( !v15 )
      {
        v31 = *(_QWORD *)(v9 + 24);
        goto LABEL_30;
      }
      --v15;
      v16 = *(_QWORD *)(a1[2] + 8 * v15);
      if ( !v16 )
      {
        if ( !under_debugger )
          sub_383060(0xCEB5u, 0.0);
LABEL_50:
        BUG();
      }
    }
    while ( *(int *)(v16 + 8) <= 69 );
    v17 = a1[8];
    v36 = 0;
    v37 = 0;
    switch ( *(_DWORD *)(v16 + 8) )
    {
      case 'I':
        sub_3A94A0((__int64)&v40, *(_QWORD *)(v16 + 24), v17);
        sub_6B870(&v36);
        v29 = v40;
        if ( !v40 )
          goto LABEL_26;
        goto LABEL_25;
      case 'J':
        sub_3A94A0((__int64)&v40, *(_QWORD *)(v16 + 24) + 136LL, v17);
        sub_3A94A0((__int64)v39, *(_QWORD *)(v16 + 24), v17);
        sub_3A94A0((__int64)v38, *(_QWORD *)(v16 + 24) + 72LL, v17);
        sub_6B870(&v36);
        if ( v38[0] )
        {
          v38[1] = 0;
          qfree(v38[0]);
        }
        if ( v39[0] )
        {
          v39[1] = 0;
          qfree(v39[0]);
        }
        v29 = v40;
        if ( v40 )
          goto LABEL_25;
        goto LABEL_26;
      case 'K':
        sub_3A94A0((__int64)&v40, *(_QWORD *)(v16 + 24), v17);
        sub_6B870(&v36);
        v29 = v40;
        if ( v40 )
          goto LABEL_25;
        goto LABEL_26;
      case 'L':
        sub_3A94A0((__int64)&v40, *(_QWORD *)(v16 + 24), v17);
        sub_6B870(&v36);
        v29 = v40;
        if ( v40 )
          goto LABEL_25;
        goto LABEL_26;
      case 'M':
        sub_3A94A0((__int64)&v40, *(_QWORD *)(v16 + 24), v17);
        sub_6B870(&v36);
        v29 = v40;
        if ( v40 )
        {
LABEL_25:
          v41.m128i_i64[0] = 0;
          qfree(v29);
        }
LABEL_26:
        v30 = v36;
        v8 = *((double *)&v37 + 1);
        v31 = v37;
        break;
      default:
        sub_3A94A0((__int64)&v40, v16, v17);
        v34 = _mm_loadu_si128(&v41);
        v30 = v40;
        v41 = 0;
        v31 = v34.m128i_i64[0];
        v35 = v34;
        v40 = 0;
        *(_QWORD *)&v8 = _mm_srli_si128(v34, 8).m128i_u64[0];
        break;
    }
    v36 = 0;
    v37 = 0;
    v32 = *(_QWORD *)(v9 + 16);
    if ( v32 )
    {
      *(_QWORD *)(v9 + 24) = 0;
      *(double *)v35.m128i_i64 = v8;
      qfree(v32);
      v8 = *(double *)v35.m128i_i64;
      v33 = v36;
      *(_QWORD *)(v9 + 16) = v30;
      *(_QWORD *)(v9 + 24) = v31;
      *(double *)(v9 + 32) = v8;
      if ( v33 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v33);
        v31 = *(_QWORD *)(v9 + 24);
      }
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v30;
      *(_QWORD *)(v9 + 24) = v31;
      *(double *)(v9 + 32) = v8;
    }
LABEL_30:
    if ( v31 <= 1 )
    {
      if ( !under_debugger )
        sub_383060(0xCEB6u, v8);
      goto LABEL_50;
    }
  }
  return 0;
}

