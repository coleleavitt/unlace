unsigned __int64 __fastcall sub_704A0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 i; // r12
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 j; // r12
  __int64 v12; // r13
  __int64 k; // r12
  __int64 v14; // r13
  __int64 m; // r12
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 n; // r12
  __int64 v19; // r13
  __int64 ii; // r12
  const char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 jj; // r12
  __int64 v25; // r13
  __int64 kk; // r12
  const char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 mm; // r12
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 nn; // r12
  __int64 v34; // r13
  __int64 i1; // r12
  const char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 i2; // r12
  __int64 v40; // r13
  __int64 i3; // r12
  const char *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 i4; // r12
  __int64 v46; // r13
  __int64 i5; // r12
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 i6; // r12
  __int64 v52; // r13
  __int64 i7; // r12
  const char *v54; // rsi
  __int64 v55; // rax

  v3 = a1[3];
  sub_69D50(a2);
  if ( v3 )
  {
    v4 = 0;
    do
    {
      v5 = 5 * v4++;
      v6 = (__int64 *)(a1[2] + 16 * v5);
      sub_70140(v6, a2);
      sub_6A9B0(a2, v6[8]);
      sub_69D50(a2);
      sub_69D50(a2);
    }
    while ( v3 != v4 );
  }
  v7 = a1[6];
  sub_69D50(a2);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v9 = 9 * i;
      sub_70140((__int64 *)(a1[5] + 8 * v9), a2);
      sub_69D50(a2);
    }
  }
  v10 = a1[9];
  sub_69D50(a2);
  if ( v10 )
  {
    for ( j = 0; j != v10; ++j )
      sub_69D50(a2);
  }
  v12 = a1[12];
  sub_69D50(a2);
  if ( v12 )
  {
    for ( k = 0; k != v12; ++k )
      sub_69D50(a2);
  }
  v14 = a1[15];
  sub_69D50(a2);
  if ( v14 )
  {
    for ( m = 0; m != v14; ++m )
    {
      v16 = m;
      sub_67AC0(a2, (const void *)(a1[14] + 16 * v16), 0x10u);
    }
  }
  v17 = a1[18];
  sub_69D50(a2);
  if ( v17 )
  {
    for ( n = 0; n != v17; ++n )
      sub_69D50(a2);
  }
  v19 = a1[21];
  sub_69D50(a2);
  if ( v19 )
  {
    for ( ii = 0; ii != v19; ++ii )
    {
      v21 = s1;
      v22 = a1[20] + 24 * ii;
      if ( *(_QWORD *)(v22 + 8) )
        v21 = *(const char **)v22;
      sub_6AA10(a2, v21);
    }
  }
  v23 = a1[24];
  sub_69D50(a2);
  if ( v23 )
  {
    for ( jj = 0; jj != v23; ++jj )
      sub_69D50(a2);
  }
  v25 = a1[27];
  sub_69D50(a2);
  if ( v25 )
  {
    for ( kk = 0; kk != v25; ++kk )
    {
      v27 = s1;
      v28 = a1[26] + 24 * kk;
      if ( *(_QWORD *)(v28 + 8) )
        v27 = *(const char **)v28;
      sub_6AA10(a2, v27);
    }
  }
  v29 = a1[30];
  sub_69D50(a2);
  if ( v29 )
  {
    for ( mm = 0; mm != v29; ++mm )
    {
      v31 = mm;
      sub_67AC0(a2, (const void *)(a1[29] + 16 * v31), 0x10u);
    }
  }
  v32 = a1[33];
  sub_69D50(a2);
  if ( v32 )
  {
    for ( nn = 0; nn != v32; ++nn )
      sub_69D50(a2);
  }
  v34 = a1[36];
  sub_69D50(a2);
  if ( v34 )
  {
    for ( i1 = 0; i1 != v34; ++i1 )
    {
      v36 = s1;
      v37 = a1[35] + 24 * i1;
      if ( *(_QWORD *)(v37 + 8) )
        v36 = *(const char **)v37;
      sub_6AA10(a2, v36);
    }
  }
  v38 = a1[39];
  sub_69D50(a2);
  if ( v38 )
  {
    for ( i2 = 0; i2 != v38; ++i2 )
      sub_69D50(a2);
  }
  v40 = a1[42];
  sub_69D50(a2);
  if ( v40 )
  {
    for ( i3 = 0; i3 != v40; ++i3 )
    {
      v42 = s1;
      v43 = a1[41] + 24 * i3;
      if ( *(_QWORD *)(v43 + 8) )
        v42 = *(const char **)v43;
      sub_6AA10(a2, v42);
    }
  }
  v44 = a1[45];
  sub_69D50(a2);
  if ( v44 )
  {
    for ( i4 = 0; i4 != v44; ++i4 )
      sub_69D50(a2);
  }
  v46 = a1[48];
  sub_69D50(a2);
  if ( v46 )
  {
    for ( i5 = 0; i5 != v46; ++i5 )
    {
      v48 = s1;
      v49 = a1[47] + 24 * i5;
      if ( *(_QWORD *)(v49 + 8) )
        v48 = *(const char **)v49;
      sub_6AA10(a2, v48);
    }
  }
  v50 = a1[51];
  sub_69D50(a2);
  if ( v50 )
  {
    for ( i6 = 0; i6 != v50; ++i6 )
      sub_69D50(a2);
  }
  v52 = a1[54];
  sub_69D50(a2);
  if ( v52 )
  {
    for ( i7 = 0; i7 != v52; ++i7 )
    {
      v54 = s1;
      v55 = a1[53] + 24 * i7;
      if ( *(_QWORD *)(v55 + 8) )
        v54 = *(const char **)v55;
      sub_6AA10(a2, v54);
    }
  }
  return sub_69D50(a2);
}
