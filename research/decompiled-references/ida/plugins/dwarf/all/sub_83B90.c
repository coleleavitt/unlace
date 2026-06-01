void __fastcall sub_83B90(__int64 *a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  __int64 v4; // rax
  void *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdi
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 i; // r12
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 j; // r12
  __int64 *v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 k; // r12
  __int64 v34; // rdi
  __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi

  v2 = a1[13];
  if ( a1[14] )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *(void **)(v2 + 8 * v4);
      if ( v5 )
      {
        sub_83B90(*(_QWORD *)(v2 + 8 * v4));
        operator delete(v5, 0x1D0u);
        v2 = a1[13];
      }
      v4 = ++v3;
    }
    while ( v3 < (unsigned __int64)a1[14] );
  }
  if ( v2 )
  {
    a1[14] = 0;
    qfree(v2);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( !a1[10] )
  {
    v54 = a1[21];
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
  }
  v6 = a1[35];
  if ( v6 )
  {
    v7 = a1[36];
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = v8 + v6;
        ++v9;
        v8 += 264;
        sub_1B750(v10);
        v6 = a1[35];
      }
      while ( v7 != v9 );
    }
    a1[36] = 0;
    qfree(v6);
    a1[35] = 0;
    a1[37] = 0;
  }
  v11 = a1[38];
  if ( v11 )
  {
    v12 = a1[39];
    if ( v12 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = v13 + v11;
        ++v14;
        v13 += 264;
        sub_1B750(v15);
        v11 = a1[38];
      }
      while ( v12 != v14 );
    }
    a1[39] = 0;
    qfree(v11);
    a1[38] = 0;
    a1[40] = 0;
  }
  if ( a1[20] )
  {
    (*(void (**)(void))(a1[11] + 8))();
    a1[20] = 0;
  }
  if ( *((_BYTE *)a1 + 152) )
  {
    v16 = (_QWORD *)a1[17];
    if ( v16 )
    {
      sub_83090((__int64 *)a1[17]);
      v17 = v16[41];
      if ( v17 )
      {
        v18 = v16[42];
        if ( v18 )
        {
          for ( i = 0; i != v18; ++i )
          {
            v20 = (__int64 *)(v17 + 24 * i);
            v21 = *v20;
            if ( *v20 )
            {
              v20[1] = 0;
              qfree(v21);
              v17 = v16[41];
            }
          }
        }
        v16[42] = 0;
        qfree(v17);
      }
      v22 = v16[38];
      if ( v22 )
      {
        v23 = v16[39];
        if ( v23 )
        {
          for ( j = 0; j != v23; ++j )
          {
            v25 = (__int64 *)(v22 + 72 * j);
            v26 = v25[3];
            if ( v26 )
            {
              v25[4] = 0;
              qfree(v26);
            }
            v27 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v27);
            }
            v22 = v16[38];
          }
        }
        v16[39] = 0;
        qfree(v22);
      }
      v28 = v16[24];
      if ( v28 )
      {
        v16[25] = 0;
        qfree(v28);
      }
      v29 = v16[16];
      if ( v29 )
      {
        v16[17] = 0;
        qfree(v29);
      }
      v30 = v16[13];
      if ( v30 )
      {
        v31 = v16[14];
        if ( v31 )
        {
          v32 = 0;
          for ( k = 0; k != v31; ++k )
          {
            v34 = *(_QWORD *)(v30 + v32 + 16);
            if ( v34 )
            {
              *(_QWORD *)(v30 + v32 + 24) = 0;
              qfree(v34);
              v30 = v16[13];
            }
            v32 += 120;
          }
        }
        v16[14] = 0;
        qfree(v30);
      }
      operator delete(v16, 0x160u);
    }
    a1[17] = 0;
  }
  v35 = a1[54];
  while ( v35 )
  {
    sub_80520(*(_QWORD **)(v35 + 24));
    v36 = (void *)v35;
    v35 = *(_QWORD *)(v35 + 16);
    operator delete(v36, 0x38u);
  }
  v37 = a1[48];
  if ( v37 )
  {
    a1[49] = 0;
    qfree(v37);
  }
  v38 = a1[42];
  if ( v38 )
  {
    a1[43] = 0;
    qfree(v38);
  }
  v39 = a1[38];
  if ( v39 )
  {
    v40 = a1[39];
    if ( v40 )
    {
      v41 = 0;
      v42 = 0;
      do
      {
        v43 = v41 + v39;
        ++v42;
        v41 += 264;
        sub_1B750(v43);
        v39 = a1[38];
      }
      while ( v40 != v42 );
    }
    a1[39] = 0;
    qfree(v39);
  }
  v44 = a1[35];
  if ( v44 )
  {
    v45 = a1[36];
    if ( v45 )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        v48 = v46 + v44;
        ++v47;
        v46 += 264;
        sub_1B750(v48);
        v44 = a1[35];
      }
      while ( v45 != v47 );
    }
    a1[36] = 0;
    qfree(v44);
  }
  v49 = a1[32];
  if ( v49 )
  {
    a1[33] = 0;
    qfree(v49);
  }
  v50 = a1[13];
  if ( v50 )
  {
    a1[14] = 0;
    qfree(v50);
  }
  v51 = a1[7];
  if ( v51 )
  {
    a1[8] = 0;
    qfree(v51);
  }
  v52 = a1[4];
  if ( v52 )
  {
    a1[5] = 0;
    qfree(v52);
  }
  v53 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v53);
  }
}

