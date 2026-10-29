void __fastcall std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  _QWORD *i; // r13
  void *v9; // rdi
  _QWORD *v10; // r13
  _QWORD *v11; // rbp
  _QWORD *v12; // rbp
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbx
  _QWORD *v17; // [rsp+8h] [rbp-50h]
  _QWORD *v18; // [rsp+10h] [rbp-48h]
  _QWORD *v19; // [rsp+18h] [rbp-40h]
  _QWORD *v20; // [rsp+18h] [rbp-40h]

  v18 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)v18[3];
      if ( v17 )
      {
        while ( 1 )
        {
          v2 = (_QWORD *)v17[3];
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
                              v7 = (_QWORD *)v6[3];
                              if ( v7 )
                              {
                                while ( 1 )
                                {
                                  for ( i = (_QWORD *)v7[3]; i; v7 = v19 )
                                  {
                                    v19 = v7;
                                    std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
                                      i[3],
                                      a2);
                                    v9 = i;
                                    i = (_QWORD *)i[2];
                                    a2 = 40;
                                    operator delete(v9, 0x28u);
                                  }
                                  v10 = (_QWORD *)v7[2];
                                  a2 = 40;
                                  operator delete(v7, 0x28u);
                                  if ( !v10 )
                                    break;
                                  v7 = v10;
                                }
                              }
                              a2 = 40;
                              v20 = (_QWORD *)v6[2];
                              operator delete(v6, 0x28u);
                              if ( !v20 )
                                break;
                              v6 = v20;
                            }
                          }
                          v12 = (_QWORD *)v5[2];
                          a2 = 40;
                          operator delete(v5, 0x28u);
                          if ( !v12 )
                            break;
                          v5 = v12;
                        }
                      }
                      v11 = (_QWORD *)v4[2];
                      a2 = 40;
                      operator delete(v4, 0x28u);
                      if ( !v11 )
                        break;
                      v4 = v11;
                    }
                  }
                  v13 = (_QWORD *)v3[2];
                  a2 = 40;
                  operator delete(v3, 0x28u);
                  if ( !v13 )
                    break;
                  v3 = v13;
                }
              }
              v14 = (_QWORD *)v2[2];
              a2 = 40;
              operator delete(v2, 0x28u);
              if ( !v14 )
                break;
              v2 = v14;
            }
          }
          a2 = 40;
          v15 = (_QWORD *)v17[2];
          operator delete(v17, 0x28u);
          if ( !v15 )
            break;
          v17 = v15;
        }
      }
      a2 = 40;
      v16 = (_QWORD *)v18[2];
      operator delete(v18, 0x28u);
      if ( !v16 )
        break;
      v18 = v16;
    }
  }
}

