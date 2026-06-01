__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>(
        _QWORD *a1,
        char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rax
  __int64 v7; // r8
  _BYTE *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+0h] [rbp-58h]
  int v37; // [rsp+8h] [rbp-50h]
  char v38; // [rsp+8h] [rbp-50h]
  char v39; // [rsp+8h] [rbp-50h]
  char v40; // [rsp+8h] [rbp-50h]
  char v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  int v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+8h] [rbp-50h]
  char v47; // [rsp+8h] [rbp-50h]
  char v48; // [rsp+8h] [rbp-50h]
  char v49; // [rsp+8h] [rbp-50h]
  char v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+10h] [rbp-48h]
  _BYTE *v52; // [rsp+10h] [rbp-48h]
  _BYTE *v53; // [rsp+10h] [rbp-48h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  _BYTE *v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+18h] [rbp-40h]
  __int64 v58; // [rsp+18h] [rbp-40h]
  __int64 v59; // [rsp+18h] [rbp-40h]
  __int64 v60; // [rsp+28h] [rbp-30h]

  v2 = a1[2];
  if ( a1[1] == v2 )
  {
    v18 = *a2;
    switch ( *a2 )
    {
      case 1:
        v50 = *a2;
        v35 = operator new(0x30u);
        v18 = v50;
        *(_DWORD *)(v35 + 8) = 0;
        *(_QWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 24) = v35 + 8;
        *(_QWORD *)(v35 + 32) = v35 + 8;
        *(_QWORD *)(v35 + 40) = 0;
        v60 = v35;
        break;
      case 2:
        v49 = *a2;
        v34 = operator new(0x18u);
        v18 = v49;
        *(_QWORD *)(v34 + 16) = 0;
        *(_OWORD *)v34 = 0;
        v60 = v34;
        break;
      case 3:
        LOBYTE(v37) = *a2;
        v29 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v29, "", v30, v31, v32, v33, v36, v37, v51);
        v60 = (__int64)v29;
        v18 = v48;
        break;
      case 4:
        LOBYTE(v60) = 0;
        break;
      case 7:
        v60 = 0;
        break;
      case 8:
        v47 = *a2;
        v28 = operator new(0x28u);
        v18 = v47;
        *(_QWORD *)(v28 + 16) = 0;
        *(_QWORD *)(v28 + 24) = 0;
        *(_BYTE *)(v28 + 32) = 0;
        *(_OWORD *)v28 = 0;
        v60 = v28;
        break;
      default:
        v60 = 0;
        break;
    }
    v19 = *a1;
    *(_BYTE *)v19 = v18;
    *(_QWORD *)(v19 + 8) = v60;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return *a1;
  }
  else
  {
    v3 = *(_QWORD *)(v2 - 8);
    if ( *(_BYTE *)v3 == 2 )
    {
      v7 = *(_QWORD *)(v3 + 8);
      v8 = *(_BYTE **)(v7 + 8);
      if ( v8 == *(_BYTE **)(v7 + 16) )
      {
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::detail::value_t>();
        v2 = a1[2];
      }
      else
      {
        v9 = (unsigned __int8)*a2;
        *v8 = v9;
        switch ( v9 )
        {
          case 1LL:
            v57 = v2;
            v52 = v8;
            v42 = v7;
            v20 = operator new(0x30u);
            v8 = v52;
            v7 = v42;
            *(_DWORD *)(v20 + 8) = 0;
            v2 = v57;
            *(_QWORD *)(v20 + 16) = 0;
            *(_QWORD *)(v20 + 24) = v20 + 8;
            *(_QWORD *)(v20 + 32) = v20 + 8;
            *(_QWORD *)(v20 + 40) = 0;
            *((_QWORD *)v52 + 1) = v20;
            break;
          case 2LL:
            v58 = v2;
            v53 = v8;
            v43 = v7;
            v21 = operator new(0x18u);
            v7 = v43;
            *(_OWORD *)v21 = 0;
            v2 = v58;
            *(_QWORD *)(v21 + 16) = 0;
            *((_QWORD *)v53 + 1) = v21;
            v8 = *(_BYTE **)(v43 + 8);
            break;
          case 3LL:
            v54 = (__int64)v8;
            v44 = v7;
            v22 = (__int64 *)operator new(0x20u);
            std::string::basic_string<std::allocator<char>>(v22, "", v23, v24, v25, v26, v36, v44, v54);
            v7 = v45;
            v2 = a1[2];
            *(_QWORD *)(v55 + 8) = v22;
            v8 = *(_BYTE **)(v45 + 8);
            break;
          case 4LL:
            v8[8] = 0;
            break;
          case 7LL:
            *((_QWORD *)v8 + 1) = 0;
            break;
          case 8LL:
            v59 = v2;
            v56 = v8;
            v46 = v7;
            v27 = operator new(0x28u);
            v8 = v56;
            v7 = v46;
            *(_QWORD *)(v27 + 16) = 0;
            v2 = v59;
            *(_QWORD *)(v27 + 24) = 0;
            *(_BYTE *)(v27 + 32) = 0;
            *(_OWORD *)v27 = 0;
            *((_QWORD *)v56 + 1) = v27;
            break;
          default:
            *((_QWORD *)v8 + 1) = 0;
            break;
        }
        *(_QWORD *)(v7 + 8) = v8 + 16;
      }
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 - 8) + 8LL) + 8LL) - 16LL;
    }
    else
    {
      v4 = *a2;
      switch ( *a2 )
      {
        case 1:
          v38 = *a2;
          v10 = operator new(0x30u);
          v4 = v38;
          *(_DWORD *)(v10 + 8) = 0;
          *(_QWORD *)(v10 + 16) = 0;
          *(_QWORD *)(v10 + 24) = v10 + 8;
          *(_QWORD *)(v10 + 32) = v10 + 8;
          *(_QWORD *)(v10 + 40) = 0;
          v60 = v10;
          break;
        case 2:
          v39 = *a2;
          v11 = operator new(0x18u);
          v4 = v39;
          *(_QWORD *)(v11 + 16) = 0;
          *(_OWORD *)v11 = 0;
          v60 = v11;
          break;
        case 3:
          LOBYTE(v37) = *a2;
          v12 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(v12, "", v13, v14, v15, v16, v36, v37, v51);
          v60 = (__int64)v12;
          v4 = v40;
          break;
        case 4:
          LOBYTE(v60) = 0;
          break;
        case 7:
          v60 = 0;
          break;
        case 8:
          v41 = *a2;
          v17 = operator new(0x28u);
          v4 = v41;
          *(_QWORD *)(v17 + 16) = 0;
          *(_QWORD *)(v17 + 24) = 0;
          *(_BYTE *)(v17 + 32) = 0;
          *(_OWORD *)v17 = 0;
          v60 = v17;
          break;
        default:
          v60 = 0;
          break;
      }
      v5 = a1[4];
      *(_BYTE *)v5 = v4;
      *(_QWORD *)(v5 + 8) = v60;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1[4];
    }
  }
}

