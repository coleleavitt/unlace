void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_erase(
        _QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  _QWORD *v5; // r14
  char *v6; // r13
  char *v7; // rdx
  char **v8; // rdx
  char *v9; // rdi
  _QWORD *v10; // r13
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // r12
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // r13
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  _QWORD *v23; // rdi
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  char **v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+10h] [rbp-48h]
  _QWORD *v29; // [rsp+18h] [rbp-40h]

  v29 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v27 = (_QWORD *)v29[3];
      if ( v27 )
      {
        while ( 1 )
        {
          v28 = (_QWORD *)v27[3];
          if ( v28 )
          {
            while ( 1 )
            {
              v1 = (_QWORD *)v28[3];
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
                                  v6 = (char *)v5[3];
                                  while ( v6 )
                                  {
                                    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_erase(*((_QWORD *)v6 + 3));
                                    v7 = v6;
                                    v6 = *((char **)v6 + 2);
                                    v26 = (char **)v7;
                                    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                                    v8 = v26;
                                    v9 = v26[4];
                                    if ( v9 != (char *)(v26 + 6) )
                                    {
                                      operator delete(v9, (unsigned __int64)(v26[6] + 1));
                                      v8 = v26;
                                    }
                                    operator delete(v8, 0x50u);
                                  }
                                  v10 = (_QWORD *)v5[2];
                                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                                  v11 = (_QWORD *)v5[4];
                                  if ( v11 != v5 + 6 )
                                    operator delete(v11, v5[6] + 1LL);
                                  operator delete(v5, 0x50u);
                                  if ( !v10 )
                                    break;
                                  v5 = v10;
                                }
                              }
                              v18 = (_QWORD *)v4[2];
                              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                              v19 = (_QWORD *)v4[4];
                              if ( v19 != v4 + 6 )
                                operator delete(v19, v4[6] + 1LL);
                              operator delete(v4, 0x50u);
                              if ( !v18 )
                                break;
                              v4 = v18;
                            }
                          }
                          v14 = (_QWORD *)v3[2];
                          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                          v15 = (_QWORD *)v3[4];
                          if ( v15 != v3 + 6 )
                            operator delete(v15, v3[6] + 1LL);
                          operator delete(v3, 0x50u);
                          if ( !v14 )
                            break;
                          v3 = v14;
                        }
                      }
                      v12 = (_QWORD *)v2[2];
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      v13 = (_QWORD *)v2[4];
                      if ( v13 != v2 + 6 )
                        operator delete(v13, v2[6] + 1LL);
                      operator delete(v2, 0x50u);
                      if ( !v12 )
                        break;
                      v2 = v12;
                    }
                  }
                  v16 = (_QWORD *)v1[2];
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v17 = (_QWORD *)v1[4];
                  if ( v17 != v1 + 6 )
                    operator delete(v17, v1[6] + 1LL);
                  operator delete(v1, 0x50u);
                  if ( !v16 )
                    break;
                  v1 = v16;
                }
              }
              v20 = (_QWORD *)v28[2];
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v21 = (_QWORD *)v28[4];
              if ( v21 != v28 + 6 )
                operator delete(v21, v28[6] + 1LL);
              operator delete(v28, 0x50u);
              if ( !v20 )
                break;
              v28 = v20;
            }
          }
          v22 = (_QWORD *)v27[2];
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v23 = (_QWORD *)v27[4];
          if ( v23 != v27 + 6 )
            operator delete(v23, v27[6] + 1LL);
          operator delete(v27, 0x50u);
          if ( !v22 )
            break;
          v27 = v22;
        }
      }
      v24 = (_QWORD *)v29[2];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v25 = (_QWORD *)v29[4];
      if ( v25 != v29 + 6 )
        operator delete(v25, v29[6] + 1LL);
      operator delete(v29, 0x50u);
      if ( !v24 )
        break;
      v29 = v24;
    }
  }
}

