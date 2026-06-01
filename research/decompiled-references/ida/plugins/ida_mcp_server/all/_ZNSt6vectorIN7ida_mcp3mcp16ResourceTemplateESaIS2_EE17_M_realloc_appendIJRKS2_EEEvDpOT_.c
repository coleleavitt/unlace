__int64 __fastcall std::vector<ida_mcp::mcp::ResourceTemplate>::_M_realloc_append<ida_mcp::mcp::ResourceTemplate const&>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rbp
  char *v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // r15
  char *v11; // r14
  char *v12; // r13
  char *v13; // rbx
  char *v14; // rdi
  char *v15; // rdi
  _QWORD *v16; // rdi
  char *v17; // rsi
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  char *v20; // rsi
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  char *v23; // rsi
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  char *v26; // rsi
  __int64 v27; // r8
  char *v28; // rdi
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned __int64 v32; // rsi
  char *v33; // rdi
  char *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // edi
  __int64 v38; // r10
  unsigned __int64 v39; // rsi
  char *v40; // rdi
  __int64 v41; // r9
  unsigned int v42; // r8d
  unsigned int v43; // r8d
  unsigned int v44; // edi
  __int64 v45; // r10
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  unsigned __int64 v48; // r8
  char *v49; // rdi
  char *v50; // rsi
  unsigned int v51; // r9d
  unsigned int v52; // r9d
  unsigned int v53; // edi
  __int64 v54; // r10
  unsigned __int64 v55; // rsi
  char *v56; // rdi
  char *v57; // r9
  unsigned int v58; // r8d
  unsigned int v59; // r8d
  unsigned int v60; // edi
  __int64 v61; // r10
  char *v62; // [rsp+0h] [rbp-58h]
  unsigned __int64 v64; // [rsp+10h] [rbp-48h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1];
  v5 = 0x8E38E38E38E38E39LL * (v4 >> 4);
  if ( v5 == 0xE38E38E38E38E3LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0x8E38E38E38E38E39LL * ((v2 - v3) >> 4);
  v7 = v5 + v6;
  if ( v7 > 0xE38E38E38E38E3LL )
    v7 = 0xE38E38E38E38E3LL;
  v64 = 144 * v7;
  v8 = operator new(144 * v7);
  v9 = v8 + v4;
  v62 = (char *)v8;
  *(_QWORD *)v9 = v9 + 16;
  std::string::_M_construct<true>();
  *(_QWORD *)(v9 + 32) = v9 + 48;
  std::string::_M_construct<true>();
  *(_BYTE *)(v9 + 96) = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    *(_QWORD *)(v9 + 64) = v9 + 80;
    std::string::_M_construct<true>();
    *(_BYTE *)(v9 + 96) = 1;
  }
  *(_BYTE *)(v9 + 136) = 0;
  if ( *(_BYTE *)(a2 + 136) )
  {
    *(_QWORD *)(v9 + 104) = v9 + 120;
    std::string::_M_construct<true>();
    *(_BYTE *)(v9 + 136) = 1;
  }
  v10 = v62;
  if ( v2 != v3 )
  {
    v10 = v62;
    v11 = v3 + 16;
    v12 = v3 + 48;
    v13 = v3 + 80;
    while ( 1 )
    {
      v16 = v10 + 16;
      *(_QWORD *)v10 = v10 + 16;
      v17 = *((char **)v11 - 2);
      if ( v17 != v11 )
        break;
      v18 = *((_QWORD *)v11 - 1);
      v30 = v18 + 1;
      if ( (unsigned int)(v18 + 1) >= 8 )
      {
        *v16 = *(_QWORD *)v11;
        *(_QWORD *)((char *)v16 + v30 - 8) = *(_QWORD *)&v11[v30 - 8];
        v39 = (unsigned __int64)(v10 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v40 = (char *)v16 - v39;
        v41 = v11 - v40;
        v42 = ((_DWORD)v40 + v30) & 0xFFFFFFF8;
        if ( v42 >= 8 )
        {
          v43 = v42 & 0xFFFFFFF8;
          v44 = 0;
          do
          {
            v45 = v44;
            v44 += 8;
            *(_QWORD *)(v39 + v45) = *(_QWORD *)(v41 + v45);
          }
          while ( v44 < v43 );
        }
        goto LABEL_22;
      }
      if ( (v30 & 4) != 0 )
      {
        *(_DWORD *)v16 = *(_DWORD *)v11;
        *(_DWORD *)((char *)v16 + v30 - 4) = *(_DWORD *)&v11[v30 - 4];
        v18 = *((_QWORD *)v11 - 1);
      }
      else if ( (_DWORD)v18 != -1 )
      {
        *(_BYTE *)v16 = *v11;
        if ( (v30 & 2) == 0 )
          goto LABEL_22;
        *(_WORD *)((char *)v16 + v30 - 2) = *(_WORD *)&v11[v30 - 2];
        v18 = *((_QWORD *)v11 - 1);
      }
LABEL_23:
      v19 = v10 + 48;
      *((_QWORD *)v10 + 1) = v18;
      *((_QWORD *)v11 - 2) = v11;
      *((_QWORD *)v11 - 1) = 0;
      *v11 = 0;
      *((_QWORD *)v10 + 4) = v10 + 48;
      v20 = *((char **)v11 + 2);
      if ( v20 != v12 )
      {
        *((_QWORD *)v10 + 4) = v20;
        *((_QWORD *)v10 + 6) = *((_QWORD *)v11 + 4);
LABEL_25:
        v21 = *((_QWORD *)v11 + 3);
        goto LABEL_26;
      }
      v21 = *((_QWORD *)v11 + 3);
      v29 = v21 + 1;
      if ( (unsigned int)(v21 + 1) >= 8 )
      {
        *v19 = *(_QWORD *)v12;
        *(_QWORD *)((char *)v19 + v29 - 8) = *(_QWORD *)&v12[v29 - 8];
        v32 = (unsigned __int64)(v10 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = (char *)v19 - v32;
        v34 = (char *)(v12 - v33);
        v35 = ((_DWORD)v33 + v29) & 0xFFFFFFF8;
        if ( v35 >= 8 )
        {
          v36 = v35 & 0xFFFFFFF8;
          v37 = 0;
          do
          {
            v38 = v37;
            v37 += 8;
            *(_QWORD *)(v32 + v38) = *(_QWORD *)&v34[v38];
          }
          while ( v37 < v36 );
        }
        goto LABEL_25;
      }
      if ( (v29 & 4) != 0 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v12;
        *(_DWORD *)((char *)v19 + v29 - 4) = *(_DWORD *)&v12[v29 - 4];
        v21 = *((_QWORD *)v11 + 3);
      }
      else if ( (_DWORD)v21 != -1 )
      {
        *(_BYTE *)v19 = *v12;
        if ( (v29 & 2) == 0 )
          goto LABEL_25;
        *(_WORD *)((char *)v19 + v29 - 2) = *(_WORD *)&v12[v29 - 2];
        v21 = *((_QWORD *)v11 + 3);
      }
LABEL_26:
      *((_QWORD *)v10 + 5) = v21;
      *((_QWORD *)v11 + 2) = v12;
      *((_QWORD *)v11 + 3) = 0;
      v11[32] = 0;
      v10[96] = 0;
      if ( !v11[80] )
      {
        v10[136] = 0;
        if ( v11[120] )
          goto LABEL_31;
        goto LABEL_13;
      }
      v22 = v10 + 80;
      *((_QWORD *)v10 + 8) = v10 + 80;
      v23 = *((char **)v11 + 6);
      if ( v23 != v13 )
      {
        *((_QWORD *)v10 + 8) = v23;
        *((_QWORD *)v10 + 10) = *((_QWORD *)v11 + 8);
LABEL_29:
        v24 = *((_QWORD *)v11 + 7);
        goto LABEL_30;
      }
      v24 = *((_QWORD *)v11 + 7);
      v47 = v24 + 1;
      if ( (unsigned int)(v24 + 1) >= 8 )
      {
        *v22 = *(_QWORD *)v13;
        *(_QWORD *)((char *)v22 + v47 - 8) = *(_QWORD *)&v13[v47 - 8];
        v55 = (unsigned __int64)(v10 + 88) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = (char *)v22 - v55;
        v57 = (char *)(v13 - v56);
        v58 = ((_DWORD)v56 + v47) & 0xFFFFFFF8;
        if ( v58 >= 8 )
        {
          v59 = v58 & 0xFFFFFFF8;
          v60 = 0;
          do
          {
            v61 = v60;
            v60 += 8;
            *(_QWORD *)(v55 + v61) = *(_QWORD *)&v57[v61];
          }
          while ( v60 < v59 );
        }
        goto LABEL_29;
      }
      if ( (v47 & 4) != 0 )
      {
        *(_DWORD *)v22 = *(_DWORD *)v13;
        *(_DWORD *)((char *)v22 + v47 - 4) = *(_DWORD *)&v13[v47 - 4];
        v24 = *((_QWORD *)v11 + 7);
      }
      else if ( (_DWORD)v24 != -1 )
      {
        *(_BYTE *)v22 = *v13;
        if ( (v47 & 2) == 0 )
          goto LABEL_29;
        *(_WORD *)((char *)v22 + v47 - 2) = *(_WORD *)&v13[v47 - 2];
        v24 = *((_QWORD *)v11 + 7);
      }
LABEL_30:
      *((_QWORD *)v11 + 6) = v13;
      *((_QWORD *)v11 + 7) = 0;
      *((_QWORD *)v10 + 9) = v24;
      v11[64] = 0;
      v10[96] = 1;
      v10[136] = 0;
      if ( v11[120] )
      {
LABEL_31:
        v25 = v10 + 120;
        *((_QWORD *)v10 + 13) = v10 + 120;
        v26 = *((char **)v11 + 11);
        if ( v26 != v11 + 104 )
        {
          *((_QWORD *)v10 + 13) = v26;
          *((_QWORD *)v10 + 15) = *((_QWORD *)v11 + 13);
          goto LABEL_33;
        }
        v27 = *((_QWORD *)v11 + 12);
        v46 = v27 + 1;
        if ( (unsigned int)(v27 + 1) >= 8 )
        {
          *v25 = *(_QWORD *)v26;
          *(_QWORD *)((char *)v25 + v46 - 8) = *(_QWORD *)&v26[v46 - 8];
          v48 = (unsigned __int64)(v10 + 128) & 0xFFFFFFFFFFFFFFF8LL;
          v49 = (char *)v25 - v48;
          v50 = (char *)(v26 - v49);
          v51 = ((_DWORD)v49 + v46) & 0xFFFFFFF8;
          if ( v51 >= 8 )
          {
            v52 = v51 & 0xFFFFFFF8;
            v53 = 0;
            do
            {
              v54 = v53;
              v53 += 8;
              *(_QWORD *)(v48 + v54) = *(_QWORD *)&v50[v54];
            }
            while ( v53 < v52 );
          }
        }
        else
        {
          if ( (v46 & 4) != 0 )
          {
            *(_DWORD *)v25 = *(_DWORD *)v26;
            *(_DWORD *)((char *)v25 + v46 - 4) = *(_DWORD *)&v26[v46 - 4];
            v27 = *((_QWORD *)v11 + 12);
LABEL_34:
            *((_QWORD *)v10 + 14) = v27;
            v10[136] = 1;
            if ( !v11[80] )
              goto LABEL_14;
            goto LABEL_35;
          }
          if ( (_DWORD)v27 == -1 )
            goto LABEL_34;
          *(_BYTE *)v25 = *v26;
          if ( (v46 & 2) != 0 )
          {
            *(_WORD *)((char *)v25 + v46 - 2) = *(_WORD *)&v26[v46 - 2];
            v27 = *((_QWORD *)v11 + 12);
            goto LABEL_34;
          }
        }
LABEL_33:
        v27 = *((_QWORD *)v11 + 12);
        goto LABEL_34;
      }
LABEL_13:
      if ( !v11[80] )
        goto LABEL_14;
LABEL_35:
      v28 = *((char **)v11 + 6);
      if ( v28 != v13 )
        operator delete(v28, *((_QWORD *)v11 + 8) + 1LL);
LABEL_14:
      v14 = *((char **)v11 + 2);
      if ( v12 != v14 )
        operator delete(v14, *((_QWORD *)v11 + 4) + 1LL);
      v15 = *((char **)v11 - 2);
      if ( v11 != v15 )
        operator delete(v15, *(_QWORD *)v11 + 1LL);
      v10 += 144;
      v12 += 144;
      v13 += 144;
      if ( v2 == v11 + 128 )
        goto LABEL_47;
      v11 += 144;
    }
    *(_QWORD *)v10 = v17;
    *((_QWORD *)v10 + 2) = *(_QWORD *)v11;
LABEL_22:
    v18 = *((_QWORD *)v11 - 1);
    goto LABEL_23;
  }
LABEL_47:
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v62;
  *(_QWORD *)(a1 + 8) = v10 + 144;
  *(_QWORD *)(a1 + 16) = &v62[v64];
  return a1;
}

