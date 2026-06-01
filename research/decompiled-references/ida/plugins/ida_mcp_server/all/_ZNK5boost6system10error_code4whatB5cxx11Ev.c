__int64 *__fastcall boost::system::error_code::what[abi:cxx11](__int64 *a1, unsigned int *a2)
{
  __int64 v3; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const char *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD **v26; // rsi
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  void (__fastcall ****v29)(_QWORD); // rdi
  void (*v30)(void); // rax
  int v31; // ecx
  _DWORD *v32; // rdi
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  _DWORD *v37; // r8
  _DWORD *v38; // rsi
  int v39; // ecx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  int v43; // [rsp+0h] [rbp-128h]
  int v44; // [rsp+0h] [rbp-128h]
  int v45; // [rsp+8h] [rbp-120h]
  int v46; // [rsp+8h] [rbp-120h]
  void *v47; // [rsp+10h] [rbp-118h] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-110h]
  _QWORD v49[2]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD *v50; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-F0h]
  _QWORD v52[2]; // [rsp+40h] [rbp-E8h] BYREF
  char buf[136]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v54; // [rsp+F8h] [rbp-30h]

  v3 = *((_QWORD *)a2 + 2);
  v54 = __readfsqword(0x28u);
  if ( v3 == 1 )
  {
    v26 = *((_QWORD ***)a2 + 1);
    v27 = *a2;
    v28 = (__int64 (__fastcall *)(__int64, __int64))(*v26)[4];
    if ( v28 == boost::system::detail::std_category::message[abi:cxx11] )
      (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*v26[1] + 32LL))(a1, v26[1], v27);
    else
      ((void (__fastcall *)(__int64 *, _QWORD **, __int64))v28)(a1, v26, v27);
  }
  else
  {
    v5 = *a2;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 32LL))(a1, *((_QWORD *)a2 + 1), v5);
    }
    else
    {
      v21 = strerror_r(v5, buf, 0x80u);
      std::string::basic_string<std::allocator<char>>(a1, v21, v22, v23, v24, v25, v43, v45, (__int64)v47);
    }
  }
  std::string::append();
  v10 = *((_QWORD *)a2 + 2);
  if ( v10 == 1 )
  {
    std::string::basic_string<std::allocator<char>>((__int64 *)&v47, "std:", v6, v7, v8, v9, v43, v45, (__int64)v47);
    v29 = *((void (__fastcall *****)(_QWORD))a2 + 1);
    v30 = (void (*)(void))(*v29)[2];
    if ( (char *)v30 == (char *)boost::system::detail::std_category::name )
      (**v29[1])(v29[1]);
    else
      v30();
    std::string::append();
    __snprintf_chk();
    std::string::append();
    v12 = v48;
  }
  else
  {
    v11 = "system";
    if ( v10 )
      v11 = (const char *)(***((__int64 (__fastcall ****)(_QWORD, const char *))a2 + 1))(*((_QWORD *)a2 + 1), "system");
    std::string::basic_string<std::allocator<char>>((__int64 *)&v50, v11, v6, v7, v8, v9, v43, v45, (__int64)v47);
    __snprintf_chk();
    std::string::append();
    v12 = v51;
    v47 = v49;
    if ( v50 == v52 )
    {
      v31 = v51 + 1;
      v32 = v49;
      v33 = v52;
      if ( (unsigned int)(v51 + 1) >= 8 )
      {
        LODWORD(v35) = 0;
        do
        {
          v36 = (unsigned int)v35;
          v35 = (unsigned int)(v35 + 8);
          *(_QWORD *)((char *)v49 + v36) = *(_QWORD *)((char *)v52 + v36);
        }
        while ( (unsigned int)v35 < (v31 & 0xFFFFFFF8) );
        v32 = (_DWORD *)((char *)v49 + v35);
        v33 = (_DWORD *)((char *)v52 + v35);
      }
      v34 = 0;
      if ( (v31 & 4) != 0 )
      {
        *v32 = *v33;
        v34 = 4;
      }
      if ( (v31 & 2) != 0 )
      {
        *(_WORD *)((char *)v32 + v34) = *(_WORD *)((char *)v33 + v34);
        v34 += 2;
      }
      if ( (v31 & 1) != 0 )
        *((_BYTE *)v32 + v34) = *((_BYTE *)v33 + v34);
    }
    else
    {
      v47 = v50;
      v49[0] = v52[0];
    }
    v48 = v12;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - a1[1] < v12 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v47 != v49 )
    operator delete(v47, v49[0] + 1LL);
  if ( *((_QWORD *)a2 + 2) > 3u )
  {
    std::string::append();
    v17 = *((_QWORD *)a2 + 2);
    if ( v17 > 3 && (v18 = v17 & 0xFFFFFFFFFFFFFFFELL, v16 = *(unsigned int *)(v18 + 16), *(_DWORD *)(v18 + 16)) )
    {
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&v50,
        *(const char **)v18,
        v13,
        v14,
        v15,
        v16,
        v44,
        *(_DWORD *)(v18 + 16),
        (__int64)v47);
      __snprintf_chk();
      std::string::append();
      if ( *(_DWORD *)(v18 + 20) )
      {
        __snprintf_chk();
        std::string::append();
      }
      if ( **(_BYTE **)(v18 + 8) )
      {
        std::string::append();
        std::string::append();
        std::string::push_back();
      }
      v47 = v49;
      if ( v50 == v52 )
      {
        v19 = v51;
        v37 = v49;
        v38 = v52;
        v39 = v51 + 1;
        if ( (unsigned int)(v51 + 1) >= 8 )
        {
          LODWORD(v41) = 0;
          do
          {
            v42 = (unsigned int)v41;
            v41 = (unsigned int)(v41 + 8);
            *(_QWORD *)((char *)v49 + v42) = *(_QWORD *)((char *)v52 + v42);
          }
          while ( (unsigned int)v41 < (v39 & 0xFFFFFFF8) );
          v37 = (_DWORD *)((char *)v49 + v41);
          v38 = (_DWORD *)((char *)v52 + v41);
        }
        v40 = 0;
        if ( (v39 & 4) != 0 )
        {
          *v37 = *v38;
          v40 = 4;
        }
        if ( (v39 & 2) != 0 )
        {
          *(_WORD *)((char *)v37 + v40) = *(_WORD *)((char *)v38 + v40);
          v40 += 2;
        }
        if ( (v39 & 1) != 0 )
          *((_BYTE *)v37 + v40) = *((_BYTE *)v38 + v40);
      }
      else
      {
        v47 = v50;
        v49[0] = v52[0];
        v19 = v51;
      }
      v48 = v19;
      v50 = v52;
      v51 = 0;
      LOBYTE(v52[0]) = 0;
      std::string::_M_dispose();
    }
    else
    {
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)&v47,
        "(unknown source location)",
        v13,
        v14,
        v15,
        v16,
        v44,
        v46,
        (__int64)v47);
    }
    std::string::append();
    std::string::_M_dispose();
  }
  std::string::append();
  return a1;
}

