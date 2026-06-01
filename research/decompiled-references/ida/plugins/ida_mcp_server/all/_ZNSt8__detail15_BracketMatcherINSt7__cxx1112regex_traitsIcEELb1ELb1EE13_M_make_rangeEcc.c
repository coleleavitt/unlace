unsigned __int64 __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range(
        _QWORD *a1,
        char a2,
        char a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // r13
  size_t v8; // r15
  __int64 v9; // r8
  _QWORD *v10; // rax
  size_t v11; // rcx
  void *v12; // rsi
  void **v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  void *v16; // rdi
  void *v17; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  int v21; // eax
  _DWORD *v22; // rdi
  _DWORD *v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  _DWORD *v26; // r9
  _DWORD *v27; // rdi
  __int64 v28; // r8
  unsigned int v29; // esi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned __int64 v35; // r8
  char *v36; // rdi
  char *v37; // rbx
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // edi
  __int64 v41; // r9
  unsigned __int64 v42; // r8
  char *v43; // rsi
  char *v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // esi
  __int64 v48; // r9
  _BYTE *src; // [rsp+8h] [rbp-110h]
  __int64 v50; // [rsp+10h] [rbp-108h]
  __int64 v51; // [rsp+10h] [rbp-108h]
  __int64 v52; // [rsp+18h] [rbp-100h]
  __int64 v53; // [rsp+18h] [rbp-100h]
  void *v54; // [rsp+30h] [rbp-E8h] BYREF
  size_t v55; // [rsp+38h] [rbp-E0h]
  _QWORD v56[2]; // [rsp+40h] [rbp-D8h] BYREF
  void *v57; // [rsp+50h] [rbp-C8h] BYREF
  void *v58; // [rsp+58h] [rbp-C0h]
  _QWORD v59[2]; // [rsp+60h] [rbp-B8h] BYREF
  void *v60; // [rsp+70h] [rbp-A8h]
  size_t n; // [rsp+78h] [rbp-A0h]
  _QWORD v62[2]; // [rsp+80h] [rbp-98h] BYREF
  void *v63; // [rsp+90h] [rbp-88h]
  size_t v64; // [rsp+98h] [rbp-80h]
  _QWORD v65[2]; // [rsp+A0h] [rbp-78h] BYREF
  void *v66; // [rsp+B0h] [rbp-68h]
  void *v67; // [rsp+B8h] [rbp-60h]
  _QWORD v68[3]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+D8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( a2 > a3 )
    std::__throw_regex_error();
  v60 = v62;
  std::string::_M_construct();
  v4 = a1[13];
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
  if ( !v5 )
    std::__throw_bad_cast();
  v63 = v65;
  v64 = 0;
  if ( n > 0xF )
  {
    v50 = v5;
    v63 = (void *)std::string::_M_create();
    v20 = v63;
    v5 = v50;
    v65[0] = n;
  }
  else
  {
    if ( n == 1 )
    {
      LOBYTE(v65[0]) = v62[0];
      v6 = v65;
      goto LABEL_6;
    }
    if ( !n )
    {
      v6 = v65;
      goto LABEL_6;
    }
    v20 = v65;
  }
  v51 = v5;
  memcpy(v20, v62, n);
  v5 = v51;
  v6 = v63;
LABEL_6:
  v64 = n;
  *((_BYTE *)v6 + n) = 0;
  (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v5 + 24LL))(&v57, v5, v63, (char *)v63 + v64);
  if ( v63 != v65 )
    operator delete(v63, v65[0] + 1LL);
  if ( v60 != v62 )
    operator delete(v60, v62[0] + 1LL);
  v60 = v62;
  std::string::_M_construct();
  v7 = a1[13];
  v8 = n;
  src = v60;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
  if ( !v9 )
    std::__throw_bad_cast();
  v63 = v65;
  v64 = 0;
  if ( v8 > 0xF )
  {
    v52 = v9;
    v63 = (void *)std::string::_M_create();
    v19 = v63;
    v9 = v52;
    v65[0] = v8;
  }
  else
  {
    if ( v8 == 1 )
    {
      LOBYTE(v65[0]) = *src;
      v10 = v65;
      goto LABEL_14;
    }
    if ( !v8 )
    {
      v10 = v65;
      goto LABEL_14;
    }
    v19 = v65;
  }
  v53 = v9;
  memcpy(v19, src, v8);
  v9 = v53;
  v10 = v63;
LABEL_14:
  v64 = v8;
  *((_BYTE *)v10 + v8) = 0;
  (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v9 + 24LL))(&v54, v9, v63, (char *)v63 + v64);
  if ( v63 != v65 )
    operator delete(v63, v65[0] + 1LL);
  if ( v60 != v62 )
    operator delete(v60, v62[0] + 1LL);
  v11 = v55;
  v63 = v65;
  if ( v54 == v56 )
  {
    v21 = v55 + 1;
    v22 = v65;
    v23 = v56;
    if ( (unsigned int)(v55 + 1) >= 8 )
    {
      LODWORD(v33) = 0;
      do
      {
        v34 = (unsigned int)v33;
        v33 = (unsigned int)(v33 + 8);
        *(_QWORD *)((char *)v65 + v34) = *(_QWORD *)((char *)v56 + v34);
      }
      while ( (unsigned int)v33 < (v21 & 0xFFFFFFF8) );
      v22 = (_DWORD *)((char *)v65 + v33);
      v23 = (_DWORD *)((char *)v56 + v33);
    }
    v24 = 0;
    if ( (v21 & 4) != 0 )
    {
      *v22 = *v23;
      v24 = 4;
    }
    if ( (v21 & 2) != 0 )
    {
      *(_WORD *)((char *)v22 + v24) = *(_WORD *)((char *)v23 + v24);
      v24 += 2;
    }
    if ( (v21 & 1) != 0 )
      *((_BYTE *)v22 + v24) = *((_BYTE *)v23 + v24);
  }
  else
  {
    v63 = v54;
    v65[0] = v56[0];
  }
  v64 = v11;
  v54 = v56;
  v12 = v58;
  v55 = 0;
  LOBYTE(v56[0]) = 0;
  v66 = v68;
  if ( v57 == v59 )
  {
    v25 = (_DWORD)v58 + 1;
    v26 = v68;
    v27 = v59;
    if ( (unsigned int)((_DWORD)v58 + 1) >= 8 )
    {
      LODWORD(v31) = 0;
      do
      {
        v32 = (unsigned int)v31;
        v31 = (unsigned int)(v31 + 8);
        *(_QWORD *)((char *)v68 + v32) = *(_QWORD *)((char *)v59 + v32);
      }
      while ( (unsigned int)v31 < (v25 & 0xFFFFFFF8) );
      v26 = (_DWORD *)((char *)v68 + v31);
      v27 = (_DWORD *)((char *)v59 + v31);
    }
    v28 = 0;
    if ( (v25 & 4) != 0 )
    {
      *v26 = *v27;
      v28 = 4;
    }
    if ( (v25 & 2) != 0 )
    {
      *(_WORD *)((char *)v26 + v28) = *(_WORD *)((char *)v27 + v28);
      v28 += 2;
    }
    if ( (v25 & 1) != 0 )
      *((_BYTE *)v26 + v28) = *((_BYTE *)v27 + v28);
  }
  else
  {
    v66 = v57;
    v68[0] = v59[0];
  }
  v67 = v12;
  v13 = (void **)a1[7];
  v57 = v59;
  v58 = nullptr;
  LOBYTE(v59[0]) = 0;
  if ( v13 == (void **)a1[8] )
  {
    std::vector<std::pair<std::string,std::string>>::_M_realloc_append<std::pair<std::string,std::string>>();
    if ( v66 != v68 )
      operator delete(v66, v68[0] + 1LL);
    if ( v63 != v65 )
      operator delete(v63, v65[0] + 1LL);
  }
  else
  {
    v14 = v13 + 2;
    *v13 = v13 + 2;
    if ( v63 == v65 )
    {
      v29 = v11 + 1;
      if ( (unsigned int)(v11 + 1) >= 8 )
      {
        v13[2] = (void *)v65[0];
        *(_QWORD *)((char *)v14 + v29 - 8) = *(_QWORD *)((char *)&v65[-1] + v29);
        v35 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v36 = (char *)v14 - v35;
        v37 = (char *)((char *)v65 - v36);
        v38 = ((_DWORD)v36 + v29) & 0xFFFFFFF8;
        if ( v38 >= 8 )
        {
          v39 = v38 & 0xFFFFFFF8;
          v40 = 0;
          do
          {
            v41 = v40;
            v40 += 8;
            *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
          }
          while ( v40 < v39 );
        }
      }
      else if ( (v29 & 4) != 0 )
      {
        *((_DWORD *)v13 + 4) = v65[0];
        *(_DWORD *)((char *)v14 + v29 - 4) = *(_DWORD *)((char *)&v64 + v29 + 4);
      }
      else if ( (_DWORD)v11 != -1 )
      {
        *((_BYTE *)v13 + 16) = v65[0];
        if ( (v29 & 2) != 0 )
          *(_WORD *)((char *)v14 + v29 - 2) = *(_WORD *)((char *)&v64 + v29 + 6);
      }
    }
    else
    {
      *v13 = v63;
      v13[2] = (void *)v65[0];
    }
    v15 = v13 + 6;
    v13[1] = (void *)v11;
    v16 = v67;
    v13[4] = v13 + 6;
    if ( v66 == v68 )
    {
      v30 = (_DWORD)v16 + 1;
      if ( (unsigned int)((_DWORD)v16 + 1) >= 8 )
      {
        v13[6] = (void *)v68[0];
        *(_QWORD *)((char *)v15 + v30 - 8) = *(_QWORD *)((char *)&v68[-1] + v30);
        v42 = (unsigned __int64)(v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v43 = (char *)v15 - v42;
        v44 = (char *)((char *)v68 - v43);
        v45 = ((_DWORD)v43 + v30) & 0xFFFFFFF8;
        if ( v45 >= 8 )
        {
          v46 = v45 & 0xFFFFFFF8;
          v47 = 0;
          do
          {
            v48 = v47;
            v47 += 8;
            *(_QWORD *)(v42 + v48) = *(_QWORD *)&v44[v48];
          }
          while ( v47 < v46 );
        }
      }
      else if ( (v30 & 4) != 0 )
      {
        *((_DWORD *)v13 + 12) = v68[0];
        *(_DWORD *)((char *)v15 + v30 - 4) = *(_DWORD *)((char *)&v67 + v30 + 4);
      }
      else if ( (_DWORD)v16 != -1 )
      {
        *((_BYTE *)v13 + 48) = v68[0];
        if ( (v30 & 2) != 0 )
          *(_WORD *)((char *)v15 + v30 - 2) = *(_WORD *)((char *)&v67 + v30 + 6);
      }
    }
    else
    {
      v17 = (void *)v68[0];
      v13[4] = v66;
      v13[6] = v17;
    }
    v13[5] = v16;
    a1[7] += 64LL;
  }
  if ( v54 != v56 )
    operator delete(v54, v56[0] + 1LL);
  if ( v57 != v59 )
    operator delete(v57, v59[0] + 1LL);
  return v69 - __readfsqword(0x28u);
}

