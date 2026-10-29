void __fastcall sub_33860(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  char *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax
  _QWORD *v12; // r15
  void (__fastcall *v13)(__int64, _QWORD *); // rax
  _QWORD *v14; // rbp
  void (__fastcall *v15)(__int64, _QWORD *); // rax
  _QWORD *v16; // r12
  void (__fastcall *v17)(__int64, _QWORD *); // rax
  _QWORD *v18; // rbx
  void (__fastcall *v19)(__int64, _QWORD *); // rax
  _QWORD *v20; // r15
  void (__fastcall *v21)(__int64, _QWORD *); // rax
  _QWORD *v22; // rbx
  void (__fastcall *v23)(__int64, _QWORD *); // rax
  _QWORD *v24; // rbx
  void (__fastcall *v25)(__int64, _QWORD *); // rax
  _QWORD *v26; // rbx
  void (__fastcall *v27)(__int64, _QWORD *); // rax
  _QWORD *v28; // [rsp+0h] [rbp-58h]
  _QWORD *v29; // [rsp+8h] [rbp-50h]
  _QWORD *v30; // [rsp+10h] [rbp-48h]
  char *v31; // [rsp+18h] [rbp-40h]

  v30 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v28 = (_QWORD *)v30[3];
      if ( v28 )
      {
        while ( 1 )
        {
          v29 = (_QWORD *)v28[3];
          if ( v29 )
          {
            while ( 1 )
            {
              v3 = (_QWORD *)v29[3];
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
                              v7 = (_QWORD *)v6[3];
                              if ( v7 )
                              {
                                while ( 1 )
                                {
                                  v8 = (char *)v7[3];
                                  while ( v8 )
                                  {
                                    v9 = *((_QWORD *)v8 + 3);
                                    sub_33860(v9);
                                    v31 = v8;
                                    v8 = *((char **)v8 + 2);
                                    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v9, a2, v10);
                                    hexdsp(276, v31 + 32);
                                    a1 = v31;
                                    a2 = 64;
                                    operator delete(v31, 0x40u);
                                  }
                                  v12 = (_QWORD *)v7[2];
                                  v13 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
                                  v13(276, v7 + 4);
                                  a2 = 64;
                                  a1 = v7;
                                  operator delete(v7, 0x40u);
                                  if ( !v12 )
                                    break;
                                  v7 = v12;
                                }
                              }
                              v20 = (_QWORD *)v6[2];
                              v21 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
                              v21(276, v6 + 4);
                              a2 = 64;
                              a1 = v6;
                              operator delete(v6, 0x40u);
                              if ( !v20 )
                                break;
                              v6 = v20;
                            }
                          }
                          v16 = (_QWORD *)v5[2];
                          v17 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
                          v17(276, v5 + 4);
                          a2 = 64;
                          a1 = v5;
                          operator delete(v5, 0x40u);
                          if ( !v16 )
                            break;
                          v5 = v16;
                        }
                      }
                      v14 = (_QWORD *)v4[2];
                      v15 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
                      v15(276, v4 + 4);
                      a2 = 64;
                      a1 = v4;
                      operator delete(v4, 0x40u);
                      if ( !v14 )
                        break;
                      v4 = v14;
                    }
                  }
                  v18 = (_QWORD *)v3[2];
                  v19 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
                  v19(276, v3 + 4);
                  a2 = 64;
                  a1 = v3;
                  operator delete(v3, 0x40u);
                  if ( !v18 )
                    break;
                  v3 = v18;
                }
              }
              v22 = (_QWORD *)v29[2];
              v23 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
              v23(276, v29 + 4);
              a2 = 64;
              a1 = v29;
              operator delete(v29, 0x40u);
              if ( !v22 )
                break;
              v29 = v22;
            }
          }
          v24 = (_QWORD *)v28[2];
          v25 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
          v25(276, v28 + 4);
          a2 = 64;
          a1 = v28;
          operator delete(v28, 0x40u);
          if ( !v24 )
            break;
          v28 = v24;
        }
      }
      v26 = (_QWORD *)v30[2];
      v27 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2, a3);
      v27(276, v30 + 4);
      a2 = 64;
      a1 = v30;
      operator delete(v30, 0x40u);
      if ( !v26 )
        break;
      v30 = v26;
    }
  }
}

