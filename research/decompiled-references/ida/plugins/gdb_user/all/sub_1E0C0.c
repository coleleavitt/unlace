void __fastcall sub_1E0C0(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  _QWORD *v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // [rsp+0h] [rbp-58h]
  _QWORD *v17; // [rsp+8h] [rbp-50h]
  _QWORD *v18; // [rsp+10h] [rbp-48h]
  _QWORD *v19; // [rsp+18h] [rbp-40h]

  v18 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v16 = (_QWORD *)v18[3];
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = (_QWORD *)v16[3];
          if ( v17 )
          {
            while ( 1 )
            {
              v1 = (_QWORD *)v17[3];
              if ( v1 )
              {
                while ( 1 )
                {
                  v2 = (_QWORD *)v1[3];
                  if ( v2 )
                  {
                    while ( 1 )
                    {
                      v3 = (_QWORD *)v2[3];
                      if ( v3 )
                      {
                        while ( 1 )
                        {
                          v4 = (_QWORD *)v3[3];
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
                                  while ( v6 )
                                  {
                                    sub_1E0C0(v6[3]);
                                    v7 = v6;
                                    v6 = (_QWORD *)v6[2];
                                    if ( v7[4] )
                                    {
                                      v7[5] = 0;
                                      v19 = v7;
                                      qfree();
                                      v7 = v19;
                                    }
                                    operator delete(v7, 0x38u);
                                  }
                                  v8 = (_QWORD *)v5[2];
                                  if ( v5[4] )
                                  {
                                    v5[5] = 0;
                                    qfree();
                                  }
                                  operator delete(v5, 0x38u);
                                  if ( !v8 )
                                    break;
                                  v5 = v8;
                                }
                              }
                              v12 = (_QWORD *)v4[2];
                              if ( v4[4] )
                              {
                                v4[5] = 0;
                                qfree();
                              }
                              operator delete(v4, 0x38u);
                              if ( !v12 )
                                break;
                              v4 = v12;
                            }
                          }
                          v10 = (_QWORD *)v3[2];
                          if ( v3[4] )
                          {
                            v3[5] = 0;
                            qfree();
                          }
                          operator delete(v3, 0x38u);
                          if ( !v10 )
                            break;
                          v3 = v10;
                        }
                      }
                      v9 = (_QWORD *)v2[2];
                      if ( v2[4] )
                      {
                        v2[5] = 0;
                        qfree();
                      }
                      operator delete(v2, 0x38u);
                      if ( !v9 )
                        break;
                      v2 = v9;
                    }
                  }
                  v11 = (_QWORD *)v1[2];
                  if ( v1[4] )
                  {
                    v1[5] = 0;
                    qfree();
                  }
                  operator delete(v1, 0x38u);
                  if ( !v11 )
                    break;
                  v1 = v11;
                }
              }
              v13 = (_QWORD *)v17[2];
              if ( v17[4] )
              {
                v17[5] = 0;
                qfree();
              }
              operator delete(v17, 0x38u);
              if ( !v13 )
                break;
              v17 = v13;
            }
          }
          v14 = (_QWORD *)v16[2];
          if ( v16[4] )
          {
            v16[5] = 0;
            qfree();
          }
          operator delete(v16, 0x38u);
          if ( !v14 )
            break;
          v16 = v14;
        }
      }
      v15 = (_QWORD *)v18[2];
      if ( v18[4] )
      {
        v18[5] = 0;
        qfree();
      }
      operator delete(v18, 0x38u);
      if ( !v15 )
        break;
      v18 = v15;
    }
  }
}

