__int64 __fastcall ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_resources_read(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_resources_read(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute(
        __int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  size_t v5; // rdx
  _BYTE *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  void *v14; // rcx
  char *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  char *v21; // r9
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rax
  unsigned int v29; // esi
  unsigned int v30; // esi
  unsigned int v31; // edx
  __int64 v32; // r8
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  char *v35; // r9
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  __int64 v39; // r8
  void *v40; // [rsp+10h] [rbp-B8h] BYREF
  size_t n; // [rsp+18h] [rbp-B0h]
  _QWORD src[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *v43; // [rsp+30h] [rbp-98h] BYREF
  __int64 v44; // [rsp+38h] [rbp-90h]
  _QWORD v45[2]; // [rsp+40h] [rbp-88h] BYREF
  char v46; // [rsp+50h] [rbp-78h]
  void *v47; // [rsp+58h] [rbp-70h] BYREF
  __int64 v48; // [rsp+60h] [rbp-68h]
  _QWORD v49[2]; // [rsp+68h] [rbp-60h] BYREF
  char v50; // [rsp+78h] [rbp-50h]
  void *v51[2]; // [rsp+80h] [rbp-48h] BYREF
  _QWORD v52[2]; // [rsp+90h] [rbp-38h] BYREF
  char v53; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 24);
  v54 = __readfsqword(0x28u);
  v2 = *v1;
  v3 = v1[1];
  if ( !*(_QWORD *)(v2 + 16) )
    ida_mcp::execute_on_main_thread<ida_mcp::mcp::McpServer::handle_resources_read(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1}>(ida_mcp::mcp::McpServer::handle_resources_read(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(void)#1} &&)::SyncRequest::execute();
  (*(void (__fastcall **)(void **, __int64, __int64))(v2 + 24))(&v40, v2, v3);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = n;
  v6 = *(_BYTE **)v4;
  if ( *(_QWORD *)v4 == v4 + 16 )
  {
    if ( v40 != src )
    {
      *(_QWORD *)v4 = v40;
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = src[0];
LABEL_41:
      v40 = src;
      v6 = src;
      goto LABEL_6;
    }
  }
  else if ( v40 != src )
  {
    *(_QWORD *)v4 = v40;
    v7 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)(v4 + 16) = src[0];
    if ( v6 )
    {
      v40 = v6;
      src[0] = v7;
      goto LABEL_6;
    }
    goto LABEL_41;
  }
  if ( (void **)v4 == &v40 )
  {
    v6 = v40;
  }
  else
  {
    if ( n )
    {
      if ( n == 1 )
        *v6 = src[0];
      else
        memcpy(v6, src, n);
      v5 = n;
      v6 = *(_BYTE **)v4;
    }
    *(_QWORD *)(v4 + 8) = v5;
    v6[v5] = 0;
    v6 = v40;
  }
LABEL_6:
  n = 0;
  *v6 = 0;
  if ( *(_BYTE *)(v4 + 64) )
  {
    if ( v46 )
    {
      std::string::operator=(v4 + 32, (unsigned __int8 **)&v43);
    }
    else
    {
      *(_BYTE *)(v4 + 64) = 0;
      std::string::_M_dispose();
    }
  }
  else if ( v46 )
  {
    v9 = v4 + 48;
    v10 = v44;
    *(_QWORD *)(v4 + 32) = v4 + 48;
    if ( v43 == v45 )
    {
      v18 = v10 + 1;
      if ( (unsigned int)(v10 + 1) >= 8 )
      {
        *(_QWORD *)(v4 + 48) = v45[0];
        *(_QWORD *)(v9 + v18 - 8) = *(_QWORD *)((char *)&v45[-1] + v18);
        v19 = (v4 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        v20 = v9 - v19;
        v21 = (char *)v45 - v20;
        v22 = (v20 + v18) & 0xFFFFFFF8;
        if ( v22 >= 8 )
        {
          v23 = v22 & 0xFFFFFFF8;
          v24 = 0;
          do
          {
            v25 = v24;
            v24 += 8;
            *(_QWORD *)(v19 + v25) = *(_QWORD *)&v21[v25];
          }
          while ( v24 < v23 );
        }
      }
      else if ( (v18 & 4) != 0 )
      {
        *(_DWORD *)(v4 + 48) = v45[0];
        *(_DWORD *)(v9 + v18 - 4) = *(_DWORD *)((char *)&v44 + v18 + 4);
      }
      else if ( (_DWORD)v10 != -1 )
      {
        *(_BYTE *)(v4 + 48) = v45[0];
        if ( (v18 & 2) != 0 )
          *(_WORD *)(v9 + v18 - 2) = *(_WORD *)((char *)&v44 + v18 + 6);
      }
    }
    else
    {
      *(_QWORD *)(v4 + 32) = v43;
      *(_QWORD *)(v4 + 48) = v45[0];
    }
    *(_QWORD *)(v4 + 40) = v10;
    v43 = v45;
    v44 = 0;
    LOBYTE(v45[0]) = 0;
    *(_BYTE *)(v4 + 64) = 1;
    if ( *(_BYTE *)(v4 + 104) )
      goto LABEL_10;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v4 + 104) )
  {
LABEL_10:
    if ( v50 )
    {
      std::string::operator=(v4 + 72, (unsigned __int8 **)&v47);
    }
    else
    {
      *(_BYTE *)(v4 + 104) = 0;
      std::string::_M_dispose();
    }
    goto LABEL_12;
  }
LABEL_27:
  if ( v50 )
  {
    v11 = v4 + 88;
    v12 = v48;
    *(_QWORD *)(v4 + 72) = v4 + 88;
    if ( v47 == v49 )
    {
      v17 = v12 + 1;
      if ( (unsigned int)(v12 + 1) >= 8 )
      {
        *(_QWORD *)(v4 + 88) = v49[0];
        *(_QWORD *)(v11 + v17 - 8) = *(_QWORD *)((char *)&v49[-1] + v17);
        v33 = (v4 + 96) & 0xFFFFFFFFFFFFFFF8LL;
        v34 = v11 - v33;
        v35 = (char *)v49 - v34;
        v36 = (v34 + v17) & 0xFFFFFFF8;
        if ( v36 >= 8 )
        {
          v37 = v36 & 0xFFFFFFF8;
          v38 = 0;
          do
          {
            v39 = v38;
            v38 += 8;
            *(_QWORD *)(v33 + v39) = *(_QWORD *)&v35[v39];
          }
          while ( v38 < v37 );
        }
      }
      else if ( (v17 & 4) != 0 )
      {
        *(_DWORD *)(v4 + 88) = v49[0];
        *(_DWORD *)(v11 + v17 - 4) = *(_DWORD *)((char *)&v48 + v17 + 4);
      }
      else if ( (_DWORD)v12 != -1 )
      {
        *(_BYTE *)(v4 + 88) = v49[0];
        if ( (v17 & 2) != 0 )
          *(_WORD *)(v11 + v17 - 2) = *(_WORD *)((char *)&v48 + v17 + 6);
      }
    }
    else
    {
      *(_QWORD *)(v4 + 72) = v47;
      *(_QWORD *)(v4 + 88) = v49[0];
    }
    *(_QWORD *)(v4 + 80) = v12;
    v47 = v49;
    v48 = 0;
    LOBYTE(v49[0]) = 0;
    *(_BYTE *)(v4 + 104) = 1;
    if ( *(_BYTE *)(v4 + 144) )
      goto LABEL_13;
    goto LABEL_31;
  }
LABEL_12:
  if ( *(_BYTE *)(v4 + 144) )
  {
LABEL_13:
    if ( v53 )
    {
      std::string::operator=(v4 + 112, (unsigned __int8 **)v51);
    }
    else
    {
      *(_BYTE *)(v4 + 144) = 0;
      std::string::_M_dispose();
    }
    if ( v53 && v51[0] != v52 )
      operator delete(v51[0], v52[0] + 1LL);
    goto LABEL_18;
  }
LABEL_31:
  if ( v53 )
  {
    v13 = v4 + 128;
    v14 = v51[1];
    *(_QWORD *)(v4 + 112) = v4 + 128;
    v15 = (char *)v51[0];
    if ( v51[0] == v52 )
    {
      v16 = (_DWORD)v14 + 1;
      if ( (unsigned int)((_DWORD)v14 + 1) >= 8 )
      {
        *(_QWORD *)(v4 + 128) = *(_QWORD *)v51[0];
        *(_QWORD *)(v13 + v16 - 8) = *(_QWORD *)&v15[v16 - 8];
        v26 = (v4 + 136) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = v13 - v26;
        v28 = &v15[-v27];
        v29 = (v27 + v16) & 0xFFFFFFF8;
        if ( v29 >= 8 )
        {
          v30 = v29 & 0xFFFFFFF8;
          v31 = 0;
          do
          {
            v32 = v31;
            v31 += 8;
            *(_QWORD *)(v26 + v32) = *(_QWORD *)&v28[v32];
          }
          while ( v31 < v30 );
        }
      }
      else if ( (v16 & 4) != 0 )
      {
        *(_DWORD *)(v4 + 128) = *(_DWORD *)v51[0];
        *(_DWORD *)(v13 + v16 - 4) = *(_DWORD *)&v15[v16 - 4];
      }
      else if ( (_DWORD)v14 != -1 )
      {
        *(_BYTE *)(v4 + 128) = *(_BYTE *)v51[0];
        if ( (v16 & 2) != 0 )
          *(_WORD *)(v13 + v16 - 2) = *(_WORD *)&v15[v16 - 2];
      }
    }
    else
    {
      *(void **)(v4 + 112) = v51[0];
      *(_QWORD *)(v4 + 128) = v52[0];
    }
    *(_QWORD *)(v4 + 120) = v14;
    *(_BYTE *)(v4 + 144) = 1;
    if ( !v50 )
      goto LABEL_19;
    goto LABEL_35;
  }
LABEL_18:
  if ( !v50 )
    goto LABEL_19;
LABEL_35:
  if ( v47 != v49 )
  {
    operator delete(v47, v49[0] + 1LL);
    if ( !v46 )
      goto LABEL_20;
    goto LABEL_37;
  }
LABEL_19:
  if ( !v46 )
    goto LABEL_20;
LABEL_37:
  if ( v43 != v45 )
    operator delete(v43, v45[0] + 1LL);
LABEL_20:
  if ( v40 != src )
    operator delete(v40, src[0] + 1LL);
  return 0;
}

