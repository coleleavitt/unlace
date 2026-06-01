void __fastcall sub_1DCF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // r12
  __int64 v15; // rdi
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  _QWORD *v18; // r12
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  _QWORD *v22; // r12
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  _QWORD *v29; // [rsp+0h] [rbp-58h]
  _QWORD *v30; // [rsp+8h] [rbp-50h]
  _QWORD *v31; // [rsp+10h] [rbp-48h]
  _QWORD *v32; // [rsp+18h] [rbp-40h]

  v31 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v29 = (_QWORD *)v31[3];
      if ( v29 )
      {
        while ( 1 )
        {
          v30 = (_QWORD *)v29[3];
          if ( v30 )
          {
            while ( 1 )
            {
              v4 = (_QWORD *)v30[3];
              if ( v4 )
              {
                while ( 1 )
                {
                  v5 = (_QWORD *)v4[3];
                  if ( v5 )
                  {
                    while ( 1 )
                    {
                      v6 = (_QWORD *)v5[3];
                      if ( v6 )
                      {
                        while ( 1 )
                        {
                          v7 = (_QWORD *)v6[3];
                          if ( v7 )
                          {
                            while ( 1 )
                            {
                              v8 = (_QWORD *)v7[3];
                              if ( v8 )
                              {
                                while ( 1 )
                                {
                                  v9 = (_QWORD *)v8[3];
                                  while ( v9 )
                                  {
                                    sub_1DCF0(v9[3]);
                                    v11 = v9;
                                    v9 = (_QWORD *)v9[2];
                                    v12 = v11[4];
                                    if ( v12 )
                                    {
                                      v11[5] = 0;
                                      v32 = v11;
                                      qfree(v12, a2, v11, v10);
                                      v11 = v32;
                                    }
                                    a2 = 56;
                                    operator delete(v11, 0x38u);
                                  }
                                  v13 = v8[4];
                                  v14 = (_QWORD *)v8[2];
                                  if ( v13 )
                                  {
                                    v8[5] = 0;
                                    qfree(v13, a2, a3, a4);
                                  }
                                  a2 = 56;
                                  operator delete(v8, 0x38u);
                                  if ( !v14 )
                                    break;
                                  v8 = v14;
                                }
                              }
                              v21 = v7[4];
                              v22 = (_QWORD *)v7[2];
                              if ( v21 )
                              {
                                v7[5] = 0;
                                qfree(v21, a2, a3, a4);
                              }
                              a2 = 56;
                              operator delete(v7, 0x38u);
                              if ( !v22 )
                                break;
                              v7 = v22;
                            }
                          }
                          v17 = v6[4];
                          v18 = (_QWORD *)v6[2];
                          if ( v17 )
                          {
                            v6[5] = 0;
                            qfree(v17, a2, a3, a4);
                          }
                          a2 = 56;
                          operator delete(v6, 0x38u);
                          if ( !v18 )
                            break;
                          v6 = v18;
                        }
                      }
                      v15 = v5[4];
                      v16 = (_QWORD *)v5[2];
                      if ( v15 )
                      {
                        v5[5] = 0;
                        qfree(v15, a2, a3, a4);
                      }
                      a2 = 56;
                      operator delete(v5, 0x38u);
                      if ( !v16 )
                        break;
                      v5 = v16;
                    }
                  }
                  v19 = v4[4];
                  v20 = (_QWORD *)v4[2];
                  if ( v19 )
                  {
                    v4[5] = 0;
                    qfree(v19, a2, a3, a4);
                  }
                  a2 = 56;
                  operator delete(v4, 0x38u);
                  if ( !v20 )
                    break;
                  v4 = v20;
                }
              }
              v23 = v30[4];
              v24 = (_QWORD *)v30[2];
              if ( v23 )
              {
                v30[5] = 0;
                qfree(v23, a2, a3, a4);
              }
              a2 = 56;
              operator delete(v30, 0x38u);
              if ( !v24 )
                break;
              v30 = v24;
            }
          }
          v25 = v29[4];
          v26 = (_QWORD *)v29[2];
          if ( v25 )
          {
            v29[5] = 0;
            qfree(v25, a2, a3, a4);
          }
          a2 = 56;
          operator delete(v29, 0x38u);
          if ( !v26 )
            break;
          v29 = v26;
        }
      }
      v27 = v31[4];
      v28 = (_QWORD *)v31[2];
      if ( v27 )
      {
        v31[5] = 0;
        qfree(v27, a2, a3, a4);
      }
      a2 = 56;
      operator delete(v31, 0x38u);
      if ( !v28 )
        break;
      v31 = v28;
    }
  }
}
