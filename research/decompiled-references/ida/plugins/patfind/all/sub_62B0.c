__int64 __fastcall sub_62B0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // r15
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 j; // r15
  __int64 *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 k; // r12
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 m; // r12
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 n; // r12
  __int64 *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-48h]
  __int64 v43; // [rsp+8h] [rbp-40h]

  v2 = a1[9];
  if ( v2 )
  {
    v43 = a1[10];
    if ( v43 )
    {
      v42 = 0;
      v3 = 0;
      do
      {
        v4 = (__int64 *)(v2 + v3);
        v5 = *(_QWORD *)(v2 + v3 + 48);
        if ( v5 )
        {
          v6 = v4[7];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (__int64 *)(v5 + 80 * i);
              v9 = v8[6];
              if ( v9 )
              {
                v8[7] = 0;
                qfree(v9);
              }
              v10 = v8[3];
              if ( v10 )
              {
                v8[4] = 0;
                qfree(v10);
              }
              v11 = *v8;
              if ( *v8 )
              {
                v8[1] = 0;
                qfree(v11);
              }
              v5 = v4[6];
            }
          }
          v4[7] = 0;
          qfree(v5);
        }
        v12 = v4[3];
        if ( v12 )
        {
          v13 = v4[4];
          if ( v13 )
          {
            for ( j = 0; j != v13; ++j )
            {
              v15 = (__int64 *)(v12 + 80 * j);
              v16 = v15[6];
              if ( v16 )
              {
                v15[7] = 0;
                qfree(v16);
              }
              v17 = v15[3];
              if ( v17 )
              {
                v15[4] = 0;
                qfree(v17);
              }
              v18 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v18);
              }
              v12 = v4[3];
            }
          }
          v4[4] = 0;
          qfree(v12);
        }
        v19 = *v4;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree(v19);
        }
        ++v42;
        v2 = a1[9];
        v3 += 88;
      }
      while ( v43 != v42 );
    }
    a1[10] = 0;
    result = qfree(v2);
  }
  v21 = a1[6];
  if ( v21 )
  {
    v22 = a1[7];
    if ( v22 )
    {
      for ( k = 0; k != v22; ++k )
      {
        v24 = (__int64 *)(v21 + 80 * k);
        v25 = v24[6];
        if ( v25 )
        {
          v24[7] = 0;
          qfree(v25);
        }
        v26 = v24[3];
        if ( v26 )
        {
          v24[4] = 0;
          qfree(v26);
        }
        v27 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          qfree(v27);
        }
        v21 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree(v21);
  }
  v28 = a1[3];
  if ( v28 )
  {
    v29 = a1[4];
    if ( v29 )
    {
      for ( m = 0; m != v29; ++m )
      {
        v31 = (__int64 *)(v28 + 80 * m);
        v32 = v31[6];
        if ( v32 )
        {
          v31[7] = 0;
          qfree(v32);
        }
        v33 = v31[3];
        if ( v33 )
        {
          v31[4] = 0;
          qfree(v33);
        }
        v34 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v34);
        }
        v28 = a1[3];
      }
    }
    a1[4] = 0;
    result = qfree(v28);
  }
  v35 = *a1;
  if ( *a1 )
  {
    v36 = a1[1];
    if ( v36 )
    {
      for ( n = 0; n != v36; ++n )
      {
        v38 = (__int64 *)(v35 + 80 * n);
        v39 = v38[6];
        if ( v39 )
        {
          v38[7] = 0;
          qfree(v39);
        }
        v40 = v38[3];
        if ( v40 )
        {
          v38[4] = 0;
          qfree(v40);
        }
        v41 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          qfree(v41);
        }
        v35 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v35);
  }
  return result;
}

