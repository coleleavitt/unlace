__int64 __fastcall sub_39B0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // r15
  _QWORD *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 k; // r15
  __int64 *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 m; // r13
  __int64 *v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 n; // r13
  __int64 *v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 ii; // r13
  __int64 *v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 i; // [rsp+10h] [rbp-58h]
  __int64 v46; // [rsp+20h] [rbp-48h]
  _QWORD *v47; // [rsp+28h] [rbp-40h]

  *a1 = off_12BE8;
  v47 = a1 + 13;
  unhook_event_listener(0, a1 + 13);
  v2 = a1[22];
  if ( v2 )
  {
    v46 = a1[23];
    if ( v46 )
    {
      for ( i = 0; i != v46; ++i )
      {
        v3 = (__int64 *)(v2 + 96 * i);
        v4 = v3[9];
        if ( v4 )
        {
          v43 = v3[10];
          if ( v43 )
          {
            v42 = 0;
            v5 = 0;
            do
            {
              v6 = (__int64 *)(v4 + v5);
              v7 = *(_QWORD *)(v4 + v5 + 48);
              if ( v7 )
              {
                v8 = v6[7];
                if ( v8 )
                {
                  for ( j = 0; j != v8; ++j )
                  {
                    v10 = (_QWORD *)(v7 + 80 * j);
                    if ( v10[6] )
                    {
                      v10[7] = 0;
                      ((void (*)(void))qfree)();
                    }
                    if ( v10[3] )
                    {
                      v10[4] = 0;
                      ((void (*)(void))qfree)();
                    }
                    if ( *v10 )
                    {
                      v10[1] = 0;
                      ((void (*)(void))qfree)();
                    }
                    v7 = v6[6];
                  }
                }
                v6[7] = 0;
                qfree(v7);
              }
              v11 = v6[3];
              if ( v11 )
              {
                v12 = v6[4];
                if ( v12 )
                {
                  for ( k = 0; k != v12; ++k )
                  {
                    v14 = (__int64 *)(v11 + 80 * k);
                    v15 = v14[6];
                    if ( v15 )
                    {
                      v14[7] = 0;
                      qfree(v15);
                    }
                    v16 = v14[3];
                    if ( v16 )
                    {
                      v14[4] = 0;
                      qfree(v16);
                    }
                    v17 = *v14;
                    if ( *v14 )
                    {
                      v14[1] = 0;
                      qfree(v17);
                    }
                    v11 = v6[3];
                  }
                }
                v6[4] = 0;
                qfree(v11);
              }
              v18 = *v6;
              if ( *v6 )
              {
                v6[1] = 0;
                qfree(v18);
              }
              ++v42;
              v4 = v3[9];
              v5 += 88;
            }
            while ( v43 != v42 );
          }
          v3[10] = 0;
          qfree(v4);
        }
        v19 = v3[6];
        if ( v19 )
        {
          v20 = v3[7];
          if ( v20 )
          {
            for ( m = 0; m != v20; ++m )
            {
              v22 = (__int64 *)(v19 + 80 * m);
              v23 = v22[6];
              if ( v23 )
              {
                v22[7] = 0;
                qfree(v23);
              }
              v24 = v22[3];
              if ( v24 )
              {
                v22[4] = 0;
                qfree(v24);
              }
              v25 = *v22;
              if ( *v22 )
              {
                v22[1] = 0;
                qfree(v25);
              }
              v19 = v3[6];
            }
          }
          v3[7] = 0;
          qfree(v19);
        }
        v26 = v3[3];
        if ( v26 )
        {
          v27 = v3[4];
          if ( v27 )
          {
            for ( n = 0; n != v27; ++n )
            {
              v29 = (__int64 *)(v26 + 80 * n);
              v30 = v29[6];
              if ( v30 )
              {
                v29[7] = 0;
                qfree(v30);
              }
              v31 = v29[3];
              if ( v31 )
              {
                v29[4] = 0;
                qfree(v31);
              }
              v32 = *v29;
              if ( *v29 )
              {
                v29[1] = 0;
                qfree(v32);
              }
              v26 = v3[3];
            }
          }
          v3[4] = 0;
          qfree(v26);
        }
        v33 = *v3;
        if ( *v3 )
        {
          v34 = v3[1];
          if ( v34 )
          {
            for ( ii = 0; ii != v34; ++ii )
            {
              v36 = (__int64 *)(v33 + 80 * ii);
              v37 = v36[6];
              if ( v37 )
              {
                v36[7] = 0;
                qfree(v37);
              }
              v38 = v36[3];
              if ( v38 )
              {
                v36[4] = 0;
                qfree(v38);
              }
              v39 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                qfree(v39);
              }
              v33 = *v3;
            }
          }
          v3[1] = 0;
          qfree(v33);
        }
        v2 = a1[22];
      }
    }
    a1[23] = 0;
    qfree(v2);
  }
  v40 = a1[18];
  if ( v40 )
  {
    a1[19] = 0;
    qfree(v40);
  }
  a1[13] = &off_12D30;
  return remove_event_listener(v47);
}

