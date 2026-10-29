// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvE10json_valueC1ENS0_6detail7value_tE'
void __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value(
        __int64 *a1,
        char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp-8h] [rbp-28h]
  __int64 **v11; // [rsp+0h] [rbp-20h]
  __int64 v12; // [rsp+8h] [rbp-18h]

  switch ( a2 )
  {
    case 0:
      *a1 = 0;
      break;
    case 1:
      v3 = operator new(0x30u);
      *(_DWORD *)(v3 + 8) = 0;
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 24) = v3 + 8;
      *(_QWORD *)(v3 + 32) = v3 + 8;
      *(_QWORD *)(v3 + 40) = 0;
      *a1 = v3;
      break;
    case 2:
      v4 = operator new(0x18u);
      *(_QWORD *)(v4 + 16) = 0;
      *(_OWORD *)v4 = 0;
      *a1 = v4;
      break;
    case 3:
      v5 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v5, "", v6, v7, v8, v9, v10, (int)a1, v12);
      *v11 = v5;
      break;
    case 4:
      *(_BYTE *)a1 = 0;
      break;
    case 5:
    case 6:
      *a1 = 0;
      break;
    case 7:
      *a1 = 0;
      break;
    case 8:
      v2 = operator new(0x28u);
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 24) = 0;
      *(_BYTE *)(v2 + 32) = 0;
      *(_OWORD *)v2 = 0;
      *a1 = v2;
      break;
    default:
      *a1 = 0;
      break;
  }
}

