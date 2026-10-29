__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump(
        __int64 (__fastcall ****a1)(__int64 a1, __int64 a2, unsigned __int64 a3),
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __m128d v10; // xmm0
  __int64 (__fastcall ***v11)(__int64, __int64, unsigned __int64); // rdi
  __int64 (__fastcall *v12)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall **v14)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v15)(__int64, __int64, unsigned __int64); // rax
  unsigned __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v18)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v19)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v21)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v22)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v23)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall ***v24)(__int64, __int64, unsigned __int64); // rdi
  __int64 (__fastcall *v25)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v26)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall **v27)(__int64, __int64, unsigned __int64); // rdx
  __int64 (__fastcall *v28)(__int64, __int64, unsigned __int64); // rax
  __int64 *v29; // rdx
  __int64 v30; // r12
  __int64 (__fastcall *v31)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v32)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v33)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v34)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v35)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall ***v36)(__int64, __int64, unsigned __int64); // rdi
  __int64 (__fastcall *v37)(__int64, __int64, unsigned __int64); // rax
  unsigned __int64 v38; // rcx
  __int64 (__fastcall ****v39)(__int64, __int64, unsigned __int64); // r9
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  _WORD *v42; // rsi
  unsigned __int64 v43; // r8
  __int16 v44; // ax
  char v45; // al
  __int64 (__fastcall *v46)(__int64, __int64, unsigned __int64); // rcx
  __int64 (__fastcall ***v47)(__int64, __int64, unsigned __int64); // rdi
  __int64 (__fastcall *v48)(__int64, __int64, unsigned __int64); // rax
  unsigned __int64 v49; // r14
  __int64 (__fastcall *v50)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v51)(__int64, __int64, unsigned __int64); // rax
  __int64 *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 (__fastcall ***v55)(__int64, __int64, unsigned __int64); // rdi
  __int64 (__fastcall *v56)(__int64, __int64, unsigned __int64); // rax
  __int64 *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r12
  __int64 (__fastcall *v61)(__int64, __int64, unsigned __int64); // rax
  const char *v62; // rbp
  nlohmann::json_abi_v3_12_0::detail::dtoa_impl *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 *v66; // rax
  __int64 v67; // rbp
  __int64 (__fastcall *v68)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v69)(__int64, __int64, unsigned __int64); // rax
  unsigned __int64 v70; // r14
  __int64 (__fastcall *v71)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v72)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v73)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v74)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v75)(__int64, __int64, unsigned __int64); // rax
  unsigned __int64 v76; // rsi
  __int64 (__fastcall *v77)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v78)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v79)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v80)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v81)(__int64, __int64, unsigned __int64); // rax
  const char *v82; // rsi
  int v83; // r9d
  unsigned __int64 v87; // [rsp+18h] [rbp-70h]
  unsigned __int64 v88; // [rsp+18h] [rbp-70h]
  unsigned __int64 v89; // [rsp+48h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      goto LABEL_3;
    case 1:
      v11 = *a1;
      v14 = *v11;
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) )
      {
        v12 = v14[1];
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 2;
        v82 = "{}";
        return v12((__int64)v11, (__int64)v82, v65);
      }
      if ( !a3 )
      {
        v69 = *v14;
        if ( (char *)v69 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
          std::string::push_back();
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v69)(v11, 123);
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) != 1 )
        {
          v70 = 0;
          do
          {
            v71 = ***a1;
            if ( (char *)v71 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
              std::string::push_back();
            else
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v71)(*a1, 34);
            nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped();
            v72 = (**a1)[1];
            if ( v72 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
              nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
            else
              v72((__int64)*a1, (__int64)"\":", 2u);
            nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
            v73 = ***a1;
            if ( (char *)v73 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
              std::string::push_back();
            else
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v73)(*a1, 44);
            ++v70;
            std::_Rb_tree_increment();
          }
          while ( v70 < *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) - 1LL );
        }
        v74 = ***a1;
        if ( (char *)v74 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
          std::string::push_back();
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v74)(*a1, 34);
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped();
        v75 = (**a1)[1];
        if ( v75 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v75((__int64)*a1, (__int64)"\":", 2u);
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
        goto LABEL_32;
      }
      v15 = v14[1];
      if ( v15 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        v15((__int64)v11, (__int64)"{\n", 2u);
      v87 = a6 + a5;
      if ( (unsigned __int64)a1[77] < v87 )
        std::string::resize();
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) != 1 )
      {
        v16 = 0;
        do
        {
          v17 = (**a1)[1];
          if ( v17 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
          else
            v17((__int64)*a1, (__int64)a1[76], v87);
          v18 = ***a1;
          if ( (char *)v18 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
            std::string::push_back();
          else
            ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v18)(*a1, 34);
          nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped();
          v19 = (**a1)[1];
          if ( v19 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
          else
            v19((__int64)*a1, (__int64)"\": ", 3u);
          nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
          v20 = (**a1)[1];
          if ( v20 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
          else
            v20((__int64)*a1, (__int64)",\n", 2u);
          ++v16;
          std::_Rb_tree_increment();
        }
        while ( v16 < *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) - 1LL );
      }
      v21 = (**a1)[1];
      if ( v21 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        v21((__int64)*a1, (__int64)a1[76], v87);
      v22 = ***a1;
      if ( (char *)v22 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        std::string::push_back();
      else
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v22)(*a1, 34);
      nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped();
      v23 = (**a1)[1];
      if ( v23 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        v23((__int64)*a1, (__int64)"\": ", 3u);
      nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
      v24 = *a1;
      v25 = ***a1;
      if ( (char *)v25 != (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        goto LABEL_159;
      goto LABEL_29;
    case 2:
      v11 = *a1;
      v27 = *v11;
      if ( **(_QWORD **)(a2 + 8) == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) )
      {
        v12 = v27[1];
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 2;
        v82 = "[]";
        return v12((__int64)v11, (__int64)v82, v65);
      }
      if ( a3 )
      {
        v28 = v27[1];
        if ( v28 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v28((__int64)v11, (__int64)"[\n", 2u);
        v88 = a6 + a5;
        if ( (unsigned __int64)a1[77] < v88 )
          std::string::resize();
        v29 = *(__int64 **)(a2 + 8);
        v30 = *v29;
        if ( *v29 != v29[1] - 16 )
        {
          do
          {
            v31 = (**a1)[1];
            if ( v31 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
              nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
            else
              v31((__int64)*a1, (__int64)a1[76], v88);
            nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
            v32 = (**a1)[1];
            if ( v32 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
              nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
            else
              v32((__int64)*a1, (__int64)",\n", 2u);
            v30 += 16;
          }
          while ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) - 16LL != v30 );
        }
        v33 = (**a1)[1];
        if ( v33 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v33((__int64)*a1, (__int64)a1[76], v88);
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
        v34 = ***a1;
        if ( (char *)v34 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
          std::string::push_back();
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v34)(*a1, 10);
        v35 = (**a1)[1];
        if ( v35 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v35((__int64)*a1, (__int64)a1[76], a6);
      }
      else
      {
        if ( (char *)*v27 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
          std::string::push_back();
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))*v27)(v11, 91);
        v66 = *(__int64 **)(a2 + 8);
        if ( *v66 != v66[1] - 16 )
        {
          v67 = *v66;
          do
          {
            nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
            v68 = ***a1;
            if ( (char *)v68 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
              std::string::push_back();
            else
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v68)(*a1, 44);
            v67 += 16;
          }
          while ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) - 16LL != v67 );
        }
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
      }
      v11 = *a1;
      v12 = ***a1;
      if ( (char *)v12 != (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
      {
        v65 = v89 - __readfsqword(0x28u);
        v82 = (_BYTE *)(&qword_58 + 5);
        return v12((__int64)v11, (__int64)v82, v65);
      }
      return std::string::push_back();
    case 3:
      v36 = *a1;
      v37 = **v36;
      if ( (char *)v37 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        std::string::push_back();
      else
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v37)(v36, 34);
      nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped();
      v11 = *a1;
      v12 = ***a1;
      if ( (char *)v12 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        return std::string::push_back();
      v65 = v89 - __readfsqword(0x28u);
      v82 = (_BYTE *)(&qword_20 + 2);
      return v12((__int64)v11, (__int64)v82, v65);
    case 4:
      v11 = *a1;
      v12 = (*v11)[1];
      if ( *(_BYTE *)(a2 + 8) )
      {
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 4;
        v82 = "true";
      }
      else
      {
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 5;
        v82 = "false";
      }
      return v12((__int64)v11, (__int64)v82, v65);
    case 5:
      v38 = *(_QWORD *)(a2 + 8);
      if ( v38 )
      {
        v39 = a1 + 2;
        if ( (v38 & 0x8000000000000000LL) != 0LL )
        {
          v38 = -(__int64)v38;
          *((_BYTE *)a1 + 16) = 45;
          if ( v38 <= 9 )
          {
            v42 = (_WORD *)a1 + 9;
            v41 = 2;
            goto LABEL_72;
          }
          v76 = v38;
          LODWORD(v41) = 1;
          while ( 1 )
          {
            if ( v76 <= 0x63 )
            {
              LODWORD(v41) = v41 + 1;
              goto LABEL_68;
            }
            if ( v76 <= 0x3E7 )
            {
              LODWORD(v41) = v41 + 2;
              goto LABEL_68;
            }
            if ( v76 <= 0x270F )
              break;
            LODWORD(v41) = v41 + 4;
            if ( v76 <= 0x1869F )
              goto LABEL_68;
            v76 /= 0x2710u;
          }
          LODWORD(v41) = v41 + 3;
        }
        else
        {
          if ( v38 <= 9 )
          {
            v42 = (_WORD *)((char *)a1 + 17);
            v41 = 1;
            goto LABEL_72;
          }
          v40 = *(_QWORD *)(a2 + 8);
          LODWORD(v41) = 1;
          while ( v40 > 0x63 )
          {
            if ( v40 <= 0x3E7 )
            {
              v41 = (unsigned int)(v41 + 2);
              goto LABEL_69;
            }
            if ( v40 <= 0x270F )
            {
              v41 = (unsigned int)(v41 + 3);
              goto LABEL_69;
            }
            v41 = (unsigned int)(v41 + 4);
            if ( v40 <= 0x1869F )
              goto LABEL_69;
            v40 /= 0x2710u;
          }
        }
LABEL_68:
        v41 = (unsigned int)(v41 + 1);
LABEL_69:
        v42 = (_WORD *)((char *)v39 + v41);
        if ( v38 <= 0x63 )
          goto LABEL_170;
        do
        {
          --v42;
          v43 = v38;
          v44 = *(_WORD *)&nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<long,0>(long)::digits_to_99[2 * (v38 % 0x64)];
          v38 /= 0x64u;
          *v42 = v44;
        }
        while ( v43 > 0x270F );
        if ( v43 > 0x3E7 )
        {
LABEL_170:
          v45 = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<long,0>(long)::digits_to_99[2 * v38 + 1];
          *((_BYTE *)v42 - 2) = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<long,0>(long)::digits_to_99[2 * v38];
LABEL_73:
          *((_BYTE *)v42 - 1) = v45;
          v46 = (**a1)[1];
          if ( v46 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            return v46((__int64)*a1, (__int64)v39, v41);
          if ( 0x7FFFFFFFFFFFFFFELL - (__int64)(*a1)[1][1] < v41 )
LABEL_232:
            std::__throw_length_error("basic_string::append");
          return std::string::_M_append();
        }
LABEL_72:
        v45 = v38 + 48;
        goto LABEL_73;
      }
      v11 = *a1;
      v12 = **v11;
      if ( (char *)v12 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        return std::string::push_back();
      v65 = v89 - __readfsqword(0x28u);
      v82 = (const char *)&dword_30;
      return v12((__int64)v11, (__int64)v82, v65);
    case 6:
      return nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>();
    case 7:
      v10 = (__m128d)*(unsigned __int64 *)(a2 + 8);
      if ( fabs(*(double *)(a2 + 8)) > 1.797693134862316e308 )
      {
LABEL_3:
        v11 = *a1;
        v12 = (**a1)[1];
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 4;
        v82 = "null";
        return v12((__int64)v11, (__int64)v82, v65);
      }
      v62 = (const char *)(a1 + 2);
      v63 = (nlohmann::json_abi_v3_12_0::detail::dtoa_impl *)(a1 + 2);
      if ( (_mm_movemask_pd(v10) & 1) != 0 )
      {
        *((_BYTE *)a1 + 16) = 45;
        v10.m128d_f64[0] = -v10.m128d_f64[0];
        v63 = (nlohmann::json_abi_v3_12_0::detail::dtoa_impl *)((char *)a1 + 17);
      }
      if ( v10.m128d_f64[0] == 0.0 )
      {
        *((_BYTE *)v63 + 2) = 48;
        v64 = (__int64)v63 + 3;
        *(_WORD *)v63 = 11824;
      }
      else
      {
        nlohmann::json_abi_v3_12_0::detail::dtoa_impl::grisu2<double>();
        v64 = nlohmann::json_abi_v3_12_0::detail::dtoa_impl::format_buffer(v63, nullptr, 0, -4, 15, v83);
      }
      v11 = *a1;
      v65 = v64 - (_QWORD)v62;
      v12 = (**a1)[1];
      if ( v12 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
      {
        v82 = v62;
        return v12((__int64)v11, (__int64)v82, v65);
      }
      return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
    case 8:
      v47 = *a1;
      v48 = (*v47)[1];
      if ( a3 )
      {
        if ( v48 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v48((__int64)v47, (__int64)"{\n", 2u);
        v49 = a6 + a5;
        if ( (unsigned __int64)a1[77] < v49 )
          std::string::resize();
        v50 = (**a1)[1];
        if ( v50 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v50((__int64)*a1, (__int64)a1[76], v49);
        v51 = (**a1)[1];
        if ( v51 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v51((__int64)*a1, (__int64)"\"bytes\": [", 10u);
        v52 = *(__int64 **)(a2 + 8);
        v53 = v52[1];
        v54 = *v52;
        if ( v53 != *v52 )
        {
          if ( v54 != v53 - 1 )
          {
            do
            {
              nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>();
              v55 = *a1;
              v56 = (**a1)[1];
              if ( v56 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
              {
                if ( (unsigned __int64)v55[1][1] - 0x7FFFFFFFFFFFFFFDLL <= 1 )
                  goto LABEL_232;
                std::string::_M_append();
              }
              else
              {
                v56((__int64)v55, (__int64)", ", 2u);
              }
              ++v54;
            }
            while ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) - 1LL != v54 );
          }
          nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>();
        }
        v77 = (**a1)[1];
        if ( v77 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v77((__int64)*a1, (__int64)"],\n", 3u);
        v78 = (**a1)[1];
        if ( v78 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v78((__int64)*a1, (__int64)a1[76], v49);
        v79 = (**a1)[1];
        if ( v79 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v79((__int64)*a1, (__int64)"\"subtype\": ", 11u);
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 32LL) )
        {
          nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>();
        }
        else
        {
          v80 = (**a1)[1];
          if ( v80 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
          else
            v80((__int64)*a1, (__int64)"null", 4u);
        }
        v24 = *a1;
        v25 = ***a1;
        if ( (char *)v25 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
LABEL_29:
          std::string::push_back();
        else
LABEL_159:
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v25)(v24, 10);
        v26 = (**a1)[1];
        if ( v26 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        else
          v26((__int64)*a1, (__int64)a1[76], a6);
LABEL_32:
        v11 = *a1;
        v12 = ***a1;
        if ( (char *)v12 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
          return std::string::push_back();
        goto LABEL_175;
      }
      if ( v48 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        v48((__int64)v47, (__int64)"{\"bytes\":[", 10u);
      v57 = *(__int64 **)(a2 + 8);
      v58 = v57[1];
      v59 = *v57;
      if ( v58 != v59 )
      {
        if ( v59 != v58 - 1 )
        {
          v60 = v59;
          do
          {
            nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>();
            v61 = ***a1;
            if ( (char *)v61 == (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
              std::string::push_back();
            else
              ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, __int64, unsigned __int64), __int64))v61)(*a1, 44);
            ++v60;
          }
          while ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) - 1LL != v60 );
        }
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>();
      }
      v81 = (**a1)[1];
      if ( v81 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        v81((__int64)*a1, (__int64)"],\"subtype\":", 12u);
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 32LL) )
      {
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>();
        v11 = *a1;
        v12 = ***a1;
        if ( (char *)v12 != (char *)nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
        {
LABEL_175:
          v65 = v89 - __readfsqword(0x28u);
          v82 = (_BYTE *)(&dword_7C + 1);
          return v12((__int64)v11, (__int64)v82, v65);
        }
        return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character();
      }
      else
      {
        v11 = *a1;
        v12 = (**a1)[1];
        if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
          return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
        v65 = 5;
        v82 = "null}";
        return v12((__int64)v11, (__int64)v82, v65);
      }
    case 9:
      v11 = *a1;
      v12 = (*v11)[1];
      if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      v65 = 11;
      v82 = "<discarded>";
      return v12((__int64)v11, (__int64)v82, v65);
    default:
      return v89 - __readfsqword(0x28u);
  }
}

