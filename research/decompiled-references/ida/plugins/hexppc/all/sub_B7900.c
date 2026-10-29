__int64 __fastcall sub_B7900(__int64 *a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rdi
  int v4; // r12d
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 i; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 j; // rbx
  __int64 v13; // r13
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  __int64 *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 *v23; // rdi
  __int64 *v24; // rdi

  result = (__int64)a1;
  v2 = a1[1] == 0;
  v3 = *a1;
  if ( !v2 )
  {
    v4 = 0;
    result = 0;
    while ( 1 )
    {
      v5 = *(_QWORD **)(v3 + 8 * result);
      if ( v5 )
        break;
LABEL_30:
      result = ++v4;
      if ( v4 >= (unsigned __int64)a1[1] )
        goto LABEL_31;
    }
    if ( v5[241] )
    {
      v5[242] = 0;
      qfree();
    }
    v6 = v5[237];
    if ( v6 )
    {
      v7 = v5[238];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = i;
          sub_119360(16 * v9 + v6);
          v6 = v5[237];
        }
      }
      v5[238] = 0;
      qfree();
    }
    v10 = v5[234];
    if ( v10 )
    {
      v11 = v5[235];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = v10 + 40 * j;
          if ( *(_QWORD *)(v13 + 16) )
          {
            *(_QWORD *)(v13 + 24) = 0;
            qfree();
          }
          sub_119360(v13);
          v10 = v5[234];
        }
      }
      v5[235] = 0;
      qfree();
    }
    v14 = (unsigned __int64 *)v5[232];
    if ( !v14 )
    {
LABEL_24:
      v18 = v5[229];
      if ( v18 )
      {
        v19 = v5[230];
        if ( v19 )
        {
          v20 = 0;
          v21 = 0;
          do
          {
            v22 = v18 + v20;
            ++v21;
            v20 += 88;
            sub_119360(v22 + 72);
            sub_119360(v22 + 56);
            sub_119360(v22 + 40);
            v18 = v5[229];
          }
          while ( v19 != v21 );
        }
        v5[230] = 0;
        qfree();
      }
      sub_B76E0(v5 + 190);
      sub_80850((__int64)v5);
      j__qfree();
      v3 = *a1;
      goto LABEL_30;
    }
    v15 = *v14;
    if ( !v5[233] )
    {
      *v14 = *v14 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v5[232],
                                      (__m128i)(unsigned __int64)v5[232]);
      *(_QWORD *)v5[232] &= ~1uLL;
      *(_QWORD *)v5[232] |= 2uLL;
LABEL_22:
      if ( v5[232] )
        qfree();
      goto LABEL_24;
    }
    v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v17 & 2) != 0 )
    {
LABEL_21:
      *v14 = v15 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5[232] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v5[232],
                                      (__m128i)(unsigned __int64)v5[232]);
      *(_QWORD *)v5[232] &= ~1uLL;
      *(_QWORD *)v5[232] |= 2uLL;
      v5[233] = 0;
      goto LABEL_22;
    }
    v23 = (__int64 *)v16[1];
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v24 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_43;
    }
    else
    {
      sub_B4AF0(v23);
      v24 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_38;
    }
    sub_B4AF0(v24);
LABEL_38:
    v17 = *v16;
    if ( (*v16 & 2) != 0 )
    {
LABEL_39:
      if ( v15 > 3 )
        qfree();
      v14 = (unsigned __int64 *)v5[232];
      v15 = *v14;
      goto LABEL_21;
    }
LABEL_43:
    *v16 = v17 | 2;
    goto LABEL_39;
  }
LABEL_31:
  if ( v3 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

