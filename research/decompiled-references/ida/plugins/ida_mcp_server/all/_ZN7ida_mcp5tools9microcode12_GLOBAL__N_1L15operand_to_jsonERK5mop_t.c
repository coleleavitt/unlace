__int64 __fastcall ida_mcp::tools::microcode::`anonymous namespace'::operand_to_json(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  const char *v28; // r13
  __int64 *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  int *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  const char *v43; // r14
  __int64 *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // rsi
  char *v55; // rdx
  char *v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // edx
  __int64 v60; // rdi
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r9
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r8
  int v69; // [rsp+0h] [rbp-E8h]
  int v70; // [rsp+0h] [rbp-E8h]
  int v71; // [rsp+8h] [rbp-E0h]
  int v72; // [rsp+8h] [rbp-E0h]
  __int64 v73; // [rsp+10h] [rbp-D8h]
  __int64 v74; // [rsp+10h] [rbp-D8h]
  void *v75; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+48h] [rbp-A0h]
  _QWORD v77[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v78; // [rsp+60h] [rbp-88h] BYREF
  __int64 v79; // [rsp+68h] [rbp-80h]
  _QWORD v80[2]; // [rsp+70h] [rbp-78h] BYREF
  char v81[40]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v82; // [rsp+A8h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( *(_BYTE *)a2 > 0xFu )
  {
    std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "unknown", a3, a4, a5, a6, v69, v71, v73);
  }
  else
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "zero", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 1:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "reg", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 2:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "number", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 3:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "string", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 4:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "insn", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 5:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "stkvar", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 6:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "global", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 7:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "block", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 8:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "callinfo", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 9:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "local", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xA:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "addr", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xB:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "helper", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xC:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "case", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xD:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "fpc", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xE:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "pair", a3, a4, a5, a6, v69, v71, v73);
        break;
      case 0xF:
        std::string::basic_string<std::allocator<char>>((__int64 *)&v75, "scattered", a3, a4, a5, a6, v69, v71, v73);
        break;
    }
  }
  v70 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v8 = (_QWORD *)operator new(0x20u);
  v9 = v8 + 2;
  v10 = v8;
  v11 = v76;
  *v8 = v8 + 2;
  if ( v75 == v77 )
  {
    v53 = v11 + 1;
    if ( (unsigned int)(v11 + 1) >= 8 )
    {
      v10[2] = v77[0];
      *(_QWORD *)((char *)v9 + v53 - 8) = *(_QWORD *)((char *)&v77[-1] + v53);
      v54 = (unsigned __int64)(v10 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (char *)v9 - v54;
      v56 = (char *)((char *)v77 - v55);
      v57 = ((_DWORD)v55 + v53) & 0xFFFFFFF8;
      if ( v57 >= 8 )
      {
        v58 = v57 & 0xFFFFFFF8;
        v59 = 0;
        do
        {
          v60 = v59;
          v59 += 8;
          *(_QWORD *)(v54 + v60) = *(_QWORD *)&v56[v60];
        }
        while ( v59 < v58 );
      }
    }
    else if ( (v53 & 4) != 0 )
    {
      *((_DWORD *)v10 + 4) = v77[0];
      *(_DWORD *)((char *)v9 + v53 - 4) = *(_DWORD *)((char *)&v76 + v53 + 4);
    }
    else if ( (_DWORD)v11 != -1 )
    {
      *((_BYTE *)v10 + 16) = v77[0];
      if ( (v53 & 2) != 0 )
        *(_WORD *)((char *)v9 + v53 - 2) = *(_WORD *)((char *)&v76 + v53 + 6);
    }
  }
  else
  {
    *v8 = v75;
    v8[2] = v77[0];
  }
  v10[1] = v11;
  v75 = v77;
  v76 = 0;
  LOBYTE(v77[0]) = 0;
  v12 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v13 = *(_BYTE *)v12;
  v14 = *(_QWORD *)(v12 + 8);
  *(_BYTE *)v12 = 3;
  *(_QWORD *)(v12 + 8) = v10;
  LOBYTE(v70) = v13;
  v72 = v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v75 != v77 )
    operator delete(v75, v77[0] + 1LL);
  v15 = *(int *)(a2 + 4);
  v16 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v16 = 5;
  *(_QWORD *)(v16 + 8) = v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  switch ( *(_BYTE *)a2 )
  {
    case 1:
    case 7:
      v35 = *(int *)(a2 + 8);
      v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v36 = 5;
      *(_QWORD *)(v36 + 8) = v35;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    case 2:
      v50 = *(_QWORD *)(a2 + 8);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 16);
        v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v52 = 5;
        *(_QWORD *)(v52 + 8) = v51;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      break;
    case 3:
      if ( *(_QWORD *)(a2 + 8) )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v43 = *(const char **)(a2 + 8);
        v44 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v44, v43, v45, v46, v47, v48, v70, v72, v74);
        v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v49 = 3;
        *(_QWORD *)(v49 + 8) = v44;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      break;
    case 4:
      v40 = *(int **)(a2 + 8);
      if ( v40 )
      {
        v41 = *v40;
        v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v42 = 5;
        *(_QWORD *)(v42 + 8) = v41;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      break;
    case 5:
      v37 = *(_QWORD *)(a2 + 8);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 8);
        v39 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v39 = 5;
        *(_QWORD *)(v39 + 8) = v38;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      break;
    case 6:
      qsnprintf();
      std::string::basic_string<std::allocator<char>>((__int64 *)&v78, v81, v17, v18, v19, v20, v70, v72, v74);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v21 = (_QWORD *)operator new(0x20u);
      v22 = v21 + 2;
      v23 = v78;
      v24 = v21;
      v25 = v79;
      *v21 = v21 + 2;
      if ( v23 == v80 )
      {
        v61 = v25 + 1;
        if ( (unsigned int)(v25 + 1) >= 8 )
        {
          v21[2] = v80[0];
          *(_QWORD *)((char *)v22 + v61 - 8) = *(_QWORD *)((char *)&v80[-1] + v61);
          v62 = (unsigned __int64)(v21 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v63 = (char *)v22 - v62;
          v64 = (char *)((char *)v80 - v63);
          v65 = ((_DWORD)v63 + v61) & 0xFFFFFFF8;
          if ( v65 >= 8 )
          {
            v66 = v65 & 0xFFFFFFF8;
            v67 = 0;
            do
            {
              v68 = v67;
              v67 += 8;
              *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
            }
            while ( v67 < v66 );
          }
        }
        else if ( (v61 & 4) != 0 )
        {
          *((_DWORD *)v21 + 4) = v80[0];
          *(_DWORD *)((char *)v22 + v61 - 4) = *(_DWORD *)((char *)&v79 + v61 + 4);
        }
        else if ( (_DWORD)v25 != -1 )
        {
          *((_BYTE *)v21 + 16) = v80[0];
          if ( (v61 & 2) != 0 )
            *(_WORD *)((char *)v22 + v61 - 2) = *(_WORD *)((char *)&v79 + v61 + 6);
        }
      }
      else
      {
        *v21 = v23;
        v21[2] = v80[0];
      }
      v21[1] = v25;
      v78 = v80;
      v79 = 0;
      LOBYTE(v80[0]) = 0;
      v26 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v26 = 3;
      *(_QWORD *)(v26 + 8) = v24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
      break;
    case 0xB:
      if ( *(_QWORD *)(a2 + 8) )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v28 = *(const char **)(a2 + 8);
        v29 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v29, v28, v30, v31, v32, v33, v70, v72, v74);
        v34 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v34 = 3;
        *(_QWORD *)(v34 + 8) = v29;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      break;
    default:
      return a1;
  }
  return a1;
}

