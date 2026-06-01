void __fastcall sub_400F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  _QWORD *v6; // r13
  char *v7; // r15
  __int64 v8; // rdi
  void (__fastcall *hexdsp)(__int64, char *); // rax
  _QWORD *v10; // r15
  void (__fastcall *v11)(__int64, _QWORD *); // rax
  _QWORD *v12; // rbp
  void (__fastcall *v13)(__int64, _QWORD *); // rax
  _QWORD *v14; // r12
  void (__fastcall *v15)(__int64, _QWORD *); // rax
  _QWORD *v16; // rbx
  void (__fastcall *v17)(__int64, _QWORD *); // rax
  _QWORD *v18; // r15
  void (__fastcall *v19)(__int64, _QWORD *); // rax
  _QWORD *v20; // rbx
  void (__fastcall *v21)(__int64, _QWORD *); // rax
  _QWORD *v22; // rbx
  void (__fastcall *v23)(__int64, _QWORD *); // rax
  _QWORD *v24; // rbx
  void (__fastcall *v25)(__int64, _QWORD *); // rax
  _QWORD *v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+10h] [rbp-48h]
  char *v29; // [rsp+18h] [rbp-40h]

  v28 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v26 = (_QWORD *)v28[3];
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = (_QWORD *)v26[3];
          if ( v27 )
          {
            while ( 1 )
            {
              v2 = (_QWORD *)v27[3];
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
                                  v7 = (char *)v6[3];
                                  while ( v7 )
                                  {
                                    v8 = *((_QWORD *)v7 + 3);
                                    sub_400F0(v8);
                                    v29 = v7;
                                    v7 = *((char **)v7 + 2);
                                    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v8, a2);
                                    hexdsp(276, v29 + 32);
                                    a1 = v29;
                                    a2 = 56;
                                    operator delete(v29, 0x38u);
                                  }
                                  v10 = (_QWORD *)v6[2];
                                  v11 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
                                  v11(276, v6 + 4);
                                  a2 = 56;
                                  a1 = v6;
                                  operator delete(v6, 0x38u);
                                  if ( !v10 )
                                    break;
                                  v6 = v10;
                                }
                              }
                              v18 = (_QWORD *)v5[2];
                              v19 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
                              v19(276, v5 + 4);
                              a2 = 56;
                              a1 = v5;
                              operator delete(v5, 0x38u);
                              if ( !v18 )
                                break;
                              v5 = v18;
                            }
                          }
                          v14 = (_QWORD *)v4[2];
                          v15 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
                          v15(276, v4 + 4);
                          a2 = 56;
                          a1 = v4;
                          operator delete(v4, 0x38u);
                          if ( !v14 )
                            break;
                          v4 = v14;
                        }
                      }
                      v12 = (_QWORD *)v3[2];
                      v13 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
                      v13(276, v3 + 4);
                      a2 = 56;
                      a1 = v3;
                      operator delete(v3, 0x38u);
                      if ( !v12 )
                        break;
                      v3 = v12;
                    }
                  }
                  v16 = (_QWORD *)v2[2];
                  v17 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
                  v17(276, v2 + 4);
                  a2 = 56;
                  a1 = v2;
                  operator delete(v2, 0x38u);
                  if ( !v16 )
                    break;
                  v2 = v16;
                }
              }
              v20 = (_QWORD *)v27[2];
              v21 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
              v21(276, v27 + 4);
              a2 = 56;
              a1 = v27;
              operator delete(v27, 0x38u);
              if ( !v20 )
                break;
              v27 = v20;
            }
          }
          v22 = (_QWORD *)v26[2];
          v23 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
          v23(276, v26 + 4);
          a2 = 56;
          a1 = v26;
          operator delete(v26, 0x38u);
          if ( !v22 )
            break;
          v26 = v22;
        }
      }
      v24 = (_QWORD *)v28[2];
      v25 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
      v25(276, v28 + 4);
      a2 = 56;
      a1 = v28;
      operator delete(v28, 0x38u);
      if ( !v24 )
        break;
      v28 = v24;
    }
  }
}
