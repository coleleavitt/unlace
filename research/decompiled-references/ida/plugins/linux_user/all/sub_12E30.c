void __fastcall sub_12E30(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  void *v10; // rdx
  void *v11; // rax
  _QWORD *v12; // rax
  void *v13; // rdx
  void *v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rdi
  _QWORD *v19; // r14
  __int64 v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // r14
  __int64 v25; // rdi
  __int64 v26; // r15
  _QWORD *v27; // rdx
  _QWORD *v28; // r13
  __int64 v29; // rbp
  _QWORD *v30; // r12
  __int64 v31; // rdi
  _QWORD *v32; // r12
  __int64 v33; // rbx
  _QWORD *v34; // rbp
  __int64 v35; // rdi
  _QWORD *v36; // r12
  __int64 v37; // rbx
  _QWORD *v38; // rbp
  __int64 v39; // rdi
  _QWORD *v40; // [rsp+0h] [rbp-68h]
  _QWORD *v41; // [rsp+8h] [rbp-60h]
  _QWORD *v42; // [rsp+10h] [rbp-58h]
  _QWORD *v43; // [rsp+10h] [rbp-58h]
  _QWORD *v44; // [rsp+10h] [rbp-58h]
  _QWORD *v45; // [rsp+10h] [rbp-58h]
  _QWORD *v46; // [rsp+18h] [rbp-50h]
  _QWORD *v47; // [rsp+18h] [rbp-50h]
  _QWORD *v48; // [rsp+18h] [rbp-50h]
  _QWORD *v49; // [rsp+18h] [rbp-50h]
  _QWORD *v50; // [rsp+20h] [rbp-48h]
  _QWORD *v51; // [rsp+20h] [rbp-48h]
  void *v52; // [rsp+20h] [rbp-48h]
  void *v53; // [rsp+28h] [rbp-40h]

  v41 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v40 = (_QWORD *)v41[3];
      if ( v40 )
      {
        while ( 1 )
        {
          v1 = (_QWORD *)v40[3];
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
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  v46 = (_QWORD *)v6[3];
                                  while ( v46 )
                                  {
                                    sub_12E30(v46[3]);
                                    v7 = v46;
                                    v42 = v46;
                                    v8 = v46[22];
                                    v46 = (_QWORD *)v46[2];
                                    if ( v8 )
                                    {
                                      v7[23] = 0;
                                      qfree();
                                    }
                                    if ( v42[19] )
                                    {
                                      v42[20] = 0;
                                      qfree();
                                    }
                                    v9 = (_QWORD *)v42[15];
                                    if ( v9 )
                                    {
                                      do
                                      {
                                        v50 = v9;
                                        sub_122F0((_QWORD *)v9[3]);
                                        v10 = v50;
                                        v11 = (void *)v50[2];
                                        if ( v50[5] )
                                        {
                                          v50[6] = 0;
                                          v53 = v11;
                                          qfree();
                                          v11 = v53;
                                          v10 = v50;
                                        }
                                        v51 = v11;
                                        operator delete(v10, 0x40u);
                                        v9 = v51;
                                      }
                                      while ( v51 );
                                    }
                                    if ( v42[10] )
                                    {
                                      v42[11] = 0;
                                      qfree();
                                    }
                                    if ( v42[7] )
                                    {
                                      v42[8] = 0;
                                      qfree();
                                    }
                                    operator delete(v42, 0xD0u);
                                  }
                                  v43 = (_QWORD *)v6[2];
                                  if ( v6[22] )
                                  {
                                    v6[23] = 0;
                                    qfree();
                                  }
                                  if ( v6[19] )
                                  {
                                    v6[20] = 0;
                                    qfree();
                                  }
                                  v12 = (_QWORD *)v6[15];
                                  if ( v12 )
                                  {
                                    do
                                    {
                                      v47 = v12;
                                      sub_122F0((_QWORD *)v12[3]);
                                      v13 = v47;
                                      v14 = (void *)v47[2];
                                      if ( v47[5] )
                                      {
                                        v47[6] = 0;
                                        v52 = v14;
                                        qfree();
                                        v14 = v52;
                                        v13 = v47;
                                      }
                                      v48 = v14;
                                      operator delete(v13, 0x40u);
                                      v12 = v48;
                                    }
                                    while ( v48 );
                                  }
                                  if ( v6[10] )
                                  {
                                    v6[11] = 0;
                                    qfree();
                                  }
                                  if ( v6[7] )
                                  {
                                    v6[8] = 0;
                                    qfree();
                                  }
                                  operator delete(v6, 0xD0u);
                                  if ( !v43 )
                                    break;
                                  v6 = v43;
                                }
                              }
                              v45 = (_QWORD *)v5[2];
                              if ( v5[22] )
                              {
                                v5[23] = 0;
                                qfree();
                              }
                              if ( v5[19] )
                              {
                                v5[20] = 0;
                                qfree();
                              }
                              v26 = v5[15];
                              while ( v26 )
                              {
                                sub_122F0(*(_QWORD **)(v26 + 24));
                                v27 = (_QWORD *)v26;
                                v26 = *(_QWORD *)(v26 + 16);
                                if ( v27[5] )
                                {
                                  v27[6] = 0;
                                  v49 = v27;
                                  qfree();
                                  v27 = v49;
                                }
                                operator delete(v27, 0x40u);
                              }
                              if ( v5[10] )
                              {
                                v5[11] = 0;
                                qfree();
                              }
                              if ( v5[7] )
                              {
                                v5[8] = 0;
                                qfree();
                              }
                              operator delete(v5, 0xD0u);
                              if ( !v45 )
                                break;
                              v5 = v45;
                            }
                          }
                          v19 = (_QWORD *)v4[2];
                          if ( v4[22] )
                          {
                            v4[23] = 0;
                            qfree();
                          }
                          if ( v4[19] )
                          {
                            v4[20] = 0;
                            qfree();
                          }
                          v20 = v4[15];
                          while ( v20 )
                          {
                            sub_122F0(*(_QWORD **)(v20 + 24));
                            v21 = (_QWORD *)v20;
                            v20 = *(_QWORD *)(v20 + 16);
                            if ( v21[5] )
                            {
                              v21[6] = 0;
                              v44 = v21;
                              qfree();
                              v21 = v44;
                            }
                            operator delete(v21, 0x40u);
                          }
                          if ( v4[10] )
                          {
                            v4[11] = 0;
                            qfree();
                          }
                          if ( v4[7] )
                          {
                            v4[8] = 0;
                            qfree();
                          }
                          operator delete(v4, 0xD0u);
                          if ( !v19 )
                            break;
                          v4 = v19;
                        }
                      }
                      v15 = (_QWORD *)v3[2];
                      if ( v3[22] )
                      {
                        v3[23] = 0;
                        qfree();
                      }
                      if ( v3[19] )
                      {
                        v3[20] = 0;
                        qfree();
                      }
                      v16 = v3[15];
                      while ( v16 )
                      {
                        v17 = (_QWORD *)v16;
                        sub_122F0(*(_QWORD **)(v16 + 24));
                        v18 = *(_QWORD *)(v16 + 40);
                        v16 = *(_QWORD *)(v16 + 16);
                        if ( v18 )
                        {
                          v17[6] = 0;
                          qfree();
                        }
                        operator delete(v17, 0x40u);
                      }
                      if ( v3[10] )
                      {
                        v3[11] = 0;
                        qfree();
                      }
                      if ( v3[7] )
                      {
                        v3[8] = 0;
                        qfree();
                      }
                      operator delete(v3, 0xD0u);
                      if ( !v15 )
                        break;
                      v3 = v15;
                    }
                  }
                  v22 = (_QWORD *)v2[2];
                  if ( v2[22] )
                  {
                    v2[23] = 0;
                    qfree();
                  }
                  if ( v2[19] )
                  {
                    v2[20] = 0;
                    qfree();
                  }
                  v23 = v2[15];
                  while ( v23 )
                  {
                    v24 = (_QWORD *)v23;
                    sub_122F0(*(_QWORD **)(v23 + 24));
                    v25 = *(_QWORD *)(v23 + 40);
                    v23 = *(_QWORD *)(v23 + 16);
                    if ( v25 )
                    {
                      v24[6] = 0;
                      qfree();
                    }
                    operator delete(v24, 0x40u);
                  }
                  if ( v2[10] )
                  {
                    v2[11] = 0;
                    qfree();
                  }
                  if ( v2[7] )
                  {
                    v2[8] = 0;
                    qfree();
                  }
                  operator delete(v2, 0xD0u);
                  if ( !v22 )
                    break;
                  v2 = v22;
                }
              }
              v28 = (_QWORD *)v1[2];
              if ( v1[22] )
              {
                v1[23] = 0;
                qfree();
              }
              if ( v1[19] )
              {
                v1[20] = 0;
                qfree();
              }
              v29 = v1[15];
              while ( v29 )
              {
                v30 = (_QWORD *)v29;
                sub_122F0(*(_QWORD **)(v29 + 24));
                v31 = *(_QWORD *)(v29 + 40);
                v29 = *(_QWORD *)(v29 + 16);
                if ( v31 )
                {
                  v30[6] = 0;
                  qfree();
                }
                operator delete(v30, 0x40u);
              }
              if ( v1[10] )
              {
                v1[11] = 0;
                qfree();
              }
              if ( v1[7] )
              {
                v1[8] = 0;
                qfree();
              }
              operator delete(v1, 0xD0u);
              if ( !v28 )
                break;
              v1 = v28;
            }
          }
          v32 = (_QWORD *)v40[2];
          if ( v40[22] )
          {
            v40[23] = 0;
            qfree();
          }
          if ( v40[19] )
          {
            v40[20] = 0;
            qfree();
          }
          v33 = v40[15];
          while ( v33 )
          {
            v34 = (_QWORD *)v33;
            sub_122F0(*(_QWORD **)(v33 + 24));
            v35 = *(_QWORD *)(v33 + 40);
            v33 = *(_QWORD *)(v33 + 16);
            if ( v35 )
            {
              v34[6] = 0;
              qfree();
            }
            operator delete(v34, 0x40u);
          }
          if ( v40[10] )
          {
            v40[11] = 0;
            qfree();
          }
          if ( v40[7] )
          {
            v40[8] = 0;
            qfree();
          }
          operator delete(v40, 0xD0u);
          if ( !v32 )
            break;
          v40 = v32;
        }
      }
      v36 = (_QWORD *)v41[2];
      if ( v41[22] )
      {
        v41[23] = 0;
        qfree();
      }
      if ( v41[19] )
      {
        v41[20] = 0;
        qfree();
      }
      v37 = v41[15];
      while ( v37 )
      {
        v38 = (_QWORD *)v37;
        sub_122F0(*(_QWORD **)(v37 + 24));
        v39 = *(_QWORD *)(v37 + 40);
        v37 = *(_QWORD *)(v37 + 16);
        if ( v39 )
        {
          v38[6] = 0;
          qfree();
        }
        operator delete(v38, 0x40u);
      }
      if ( v41[10] )
      {
        v41[11] = 0;
        qfree();
      }
      if ( v41[7] )
      {
        v41[8] = 0;
        qfree();
      }
      operator delete(v41, 0xD0u);
      if ( !v36 )
        break;
      v41 = v36;
    }
  }
}

