unsigned __int64 __fastcall sub_6F3D0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 *v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 *v15; // r12
  __int64 v16; // r13
  __int64 v17; // r12
  size_t v18; // rdx
  const char *v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r12
  const char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r12
  const char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 *v42; // r12

  v2 = 0;
  sub_69D50(a2);
  v4 = a1[2];
  sub_69D50(a2);
  if ( v4 )
  {
    do
    {
      v6 = s1;
      v7 = a1[1] + 24 * v2;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 )
      {
        v5 = strlen(v6) + 1;
      }
      else
      {
        v5 = 1;
        v6 = "";
      }
      ++v2;
      sub_67AC0(a2, v6, v5);
    }
    while ( v4 != v2 );
  }
  v8 = a1[5];
  v9 = 0;
  sub_69D50(a2);
  if ( v8 )
  {
    do
    {
      v10 = v9++;
      v11 = (__int64 *)(a1[4] + 16 * v10);
      sub_6A9B0(a2, *v11);
      sub_6A9B0(a2, v11[1]);
    }
    while ( v8 != v9 );
  }
  v12 = a1[8];
  v13 = 0;
  sub_69D50(a2);
  if ( v12 )
  {
    do
    {
      v14 = v13++;
      v15 = (__int64 *)(a1[7] + 16 * v14);
      sub_6A9B0(a2, *v15);
      sub_6A9B0(a2, v15[1]);
    }
    while ( v12 != v13 );
  }
  v16 = a1[11];
  v17 = 0;
  sub_69D50(a2);
  if ( v16 )
  {
    do
    {
      v19 = s1;
      v20 = a1[10] + 24 * v17;
      if ( *(_QWORD *)(v20 + 8) )
        v19 = *(const char **)v20;
      if ( v19 )
      {
        v18 = strlen(v19) + 1;
      }
      else
      {
        v18 = 1;
        v19 = "";
      }
      ++v17;
      sub_67AC0(a2, v19, v18);
    }
    while ( v16 != v17 );
  }
  v21 = a1[14];
  v22 = 0;
  sub_69D50(a2);
  if ( v21 )
  {
    do
    {
      v23 = s1;
      v24 = a1[13] + 24 * v22;
      if ( *(_QWORD *)(v24 + 8) )
        v23 = *(const char **)v24;
      ++v22;
      sub_6AA10(a2, v23);
    }
    while ( v22 != v21 );
  }
  v25 = a1[17];
  v26 = 0;
  sub_69D50(a2);
  if ( v25 )
  {
    do
    {
      v27 = s1;
      v28 = a1[16] + 24 * v26;
      if ( *(_QWORD *)(v28 + 8) )
        v27 = *(const char **)v28;
      ++v26;
      sub_6AA10(a2, v27);
    }
    while ( v26 != v25 );
  }
  v29 = a1[20];
  v30 = 0;
  sub_69D50(a2);
  if ( v29 )
  {
    do
    {
      v31 = s1;
      v32 = a1[19] + 24 * v30;
      if ( *(_QWORD *)(v32 + 8) )
        v31 = *(const char **)v32;
      ++v30;
      sub_6AA10(a2, v31);
    }
    while ( v30 != v29 );
  }
  v33 = a1[23];
  v34 = 0;
  sub_69D50(a2);
  if ( v33 )
  {
    do
    {
      v35 = v34++;
      sub_67AC0(a2, (const void *)(a1[22] + 16 * v35), 0x10u);
    }
    while ( v34 != v33 );
  }
  v36 = a1[26];
  v37 = 0;
  sub_69D50(a2);
  if ( v36 )
  {
    do
    {
      v38 = v37++;
      sub_67AC0(a2, (const void *)(a1[25] + 16 * v38), 0x10u);
    }
    while ( v37 != v36 );
  }
  v39 = a1[29];
  v40 = 0;
  sub_69D50(a2);
  if ( v39 )
  {
    do
    {
      v41 = v40++;
      v42 = (__int64 *)(a1[28] + 16 * v41);
      sub_6A9B0(a2, *v42);
      sub_6A9B0(a2, v42[1]);
    }
    while ( v40 != v39 );
  }
  return sub_6A9B0(a2, a1[31]);
}
