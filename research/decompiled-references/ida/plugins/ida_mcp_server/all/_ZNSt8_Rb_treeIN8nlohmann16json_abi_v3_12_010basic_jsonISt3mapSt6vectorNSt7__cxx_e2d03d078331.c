void __fastcall std::_Rb_tree<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,std::_Identity<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::less<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>::_M_erase(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // r13
  _QWORD *v7; // r14
  void *v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // [rsp+0h] [rbp-58h]
  _QWORD *v17; // [rsp+8h] [rbp-50h]
  _QWORD *v18; // [rsp+10h] [rbp-48h]
  void *v19; // [rsp+18h] [rbp-40h]
  _QWORD *v20; // [rsp+18h] [rbp-40h]

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
                                  while ( v7 )
                                  {
                                    std::_Rb_tree<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,std::_Identity<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::less<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>::_M_erase(
                                      v7[3],
                                      a2);
                                    v8 = v7;
                                    v7 = (_QWORD *)v7[2];
                                    v19 = v8;
                                    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                                    a2 = 48;
                                    operator delete(v19, 0x30u);
                                  }
                                  v9 = (_QWORD *)v6[2];
                                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                                  a2 = 48;
                                  operator delete(v6, 0x30u);
                                  if ( !v9 )
                                    break;
                                  v6 = v9;
                                }
                              }
                              v20 = (_QWORD *)v5[2];
                              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                              a2 = 48;
                              operator delete(v5, 0x30u);
                              if ( !v20 )
                                break;
                              v5 = v20;
                            }
                          }
                          v11 = (_QWORD *)v4[2];
                          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                          a2 = 48;
                          operator delete(v4, 0x30u);
                          if ( !v11 )
                            break;
                          v4 = v11;
                        }
                      }
                      v10 = (_QWORD *)v3[2];
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      a2 = 48;
                      operator delete(v3, 0x30u);
                      if ( !v10 )
                        break;
                      v3 = v10;
                    }
                  }
                  v12 = (_QWORD *)v2[2];
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  a2 = 48;
                  operator delete(v2, 0x30u);
                  if ( !v12 )
                    break;
                  v2 = v12;
                }
              }
              v13 = (_QWORD *)v17[2];
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              a2 = 48;
              operator delete(v17, 0x30u);
              if ( !v13 )
                break;
              v17 = v13;
            }
          }
          v14 = (_QWORD *)v16[2];
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          a2 = 48;
          operator delete(v16, 0x30u);
          if ( !v14 )
            break;
          v16 = v14;
        }
      }
      v15 = (_QWORD *)v18[2];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      a2 = 48;
      operator delete(v18, 0x30u);
      if ( !v15 )
        break;
      v18 = v15;
    }
  }
}

