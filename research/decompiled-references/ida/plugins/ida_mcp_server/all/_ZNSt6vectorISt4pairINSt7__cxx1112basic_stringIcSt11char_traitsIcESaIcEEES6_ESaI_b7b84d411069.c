void __fastcall std::vector<std::pair<std::string,std::string>>::_M_realloc_append<std::pair<std::string,std::string>>(
        __int64 a1,
        char **a2)
{
  char *v2; // r12
  char *v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  char *v10; // rcx
  char **v11; // r13
  char *v12; // rdi
  char **v13; // rax
  char *v14; // rdx
  _QWORD *v15; // rsi
  char **v16; // rcx
  _QWORD *v17; // rsi
  char *v18; // rdx
  char *v19; // rdi
  char *v20; // rbx
  char **v21; // rbp
  char *v22; // rdx
  _QWORD *v23; // rcx
  char *v24; // rdx
  char *v25; // rsi
  char *v26; // rdi
  _QWORD *v27; // rcx
  char *v28; // rdx
  unsigned int v29; // esi
  unsigned int v30; // edi
  unsigned __int64 v31; // rdx
  char *v32; // rcx
  char *v33; // r8
  unsigned int v34; // esi
  unsigned int v35; // esi
  unsigned int v36; // ecx
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  char *v39; // rcx
  char *v40; // rdx
  unsigned int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // ecx
  __int64 v44; // r8
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int64 v47; // r8
  char *v48; // rsi
  char *v49; // r9
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // esi
  __int64 v53; // r10
  unsigned __int64 v54; // r8
  char *v55; // rsi
  char *v56; // r9
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // esi
  __int64 v60; // r10
  unsigned __int64 v61; // [rsp+0h] [rbp-48h]
  __int64 v62; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1] >> 6;
  if ( v4 == 0x1FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6;
  v62 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v8 = v4 + v5;
  if ( v8 > 0x1FFFFFFFFFFFFFFLL )
    v8 = 0x1FFFFFFFFFFFFFFLL;
  v61 = v8 << 6;
  v9 = operator new(v8 << 6);
  v10 = *a2;
  v11 = (char **)v9;
  v12 = a2[1];
  v13 = (char **)(v9 + v62);
  v14 = (char *)(a2 + 2);
  v15 = v13 + 2;
  *v13 = (char *)(v13 + 2);
  if ( v10 == (char *)(a2 + 2) )
  {
    v45 = (_DWORD)v12 + 1;
    if ( (unsigned int)((_DWORD)v12 + 1) >= 8 )
    {
      v13[2] = a2[2];
      *(_QWORD *)((char *)v15 + v45 - 8) = *(_QWORD *)&v14[v45 - 8];
      v47 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v48 = (char *)v15 - v47;
      v49 = (char *)(v14 - v48);
      v50 = ((_DWORD)v48 + v45) & 0xFFFFFFF8;
      if ( v50 >= 8 )
      {
        v51 = v50 & 0xFFFFFFF8;
        v52 = 0;
        do
        {
          v53 = v52;
          v52 += 8;
          *(_QWORD *)(v47 + v53) = *(_QWORD *)&v49[v53];
        }
        while ( v52 < v51 );
      }
    }
    else if ( (v45 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = *((_DWORD *)a2 + 4);
      *(_DWORD *)((char *)v15 + v45 - 4) = *(_DWORD *)&v14[v45 - 4];
    }
    else if ( (_DWORD)v12 != -1 )
    {
      *((_BYTE *)v13 + 16) = *((_BYTE *)a2 + 16);
      if ( (v45 & 2) != 0 )
        *(_WORD *)((char *)v15 + v45 - 2) = *(_WORD *)&v14[v45 - 2];
    }
  }
  else
  {
    *v13 = v10;
    v13[2] = a2[2];
  }
  v16 = (char **)a2[4];
  *a2 = v14;
  v17 = v13 + 6;
  v18 = (char *)(a2 + 6);
  v13[1] = v12;
  v19 = a2[5];
  a2[1] = nullptr;
  *((_BYTE *)a2 + 16) = 0;
  v13[4] = (char *)(v13 + 6);
  if ( v16 == a2 + 6 )
  {
    v46 = (_DWORD)v19 + 1;
    if ( (unsigned int)((_DWORD)v19 + 1) >= 8 )
    {
      v13[6] = a2[6];
      *(_QWORD *)((char *)v17 + v46 - 8) = *(_QWORD *)&v18[v46 - 8];
      v54 = (unsigned __int64)(v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (char *)v17 - v54;
      v56 = (char *)(v18 - v55);
      v57 = ((_DWORD)v55 + v46) & 0xFFFFFFF8;
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
    else if ( (v46 & 4) != 0 )
    {
      *((_DWORD *)v13 + 12) = *((_DWORD *)a2 + 12);
      *(_DWORD *)((char *)v17 + v46 - 4) = *(_DWORD *)&v18[v46 - 4];
    }
    else if ( (_DWORD)v19 != -1 )
    {
      *((_BYTE *)v13 + 48) = *((_BYTE *)a2 + 48);
      if ( (v46 & 2) != 0 )
        *(_WORD *)((char *)v17 + v46 - 2) = *(_WORD *)&v18[v46 - 2];
    }
  }
  else
  {
    v13[4] = (char *)v16;
    v13[6] = a2[6];
  }
  v13[5] = v19;
  a2[4] = v18;
  a2[5] = nullptr;
  *((_BYTE *)a2 + 48) = 0;
  if ( v2 != v3 )
  {
    v20 = v3 + 16;
    v21 = v11;
    while ( 1 )
    {
      v27 = v21 + 2;
      *v21 = (char *)(v21 + 2);
      v28 = *((char **)v20 - 2);
      if ( v20 != v28 )
        break;
      v22 = *((char **)v20 - 1);
      v29 = (_DWORD)v22 + 1;
      if ( (unsigned int)((_DWORD)v22 + 1) >= 8 )
      {
        *v27 = *(_QWORD *)v20;
        *(_QWORD *)((char *)v27 + v29 - 8) = *(_QWORD *)&v20[v29 - 8];
        v31 = (unsigned __int64)(v21 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v32 = (char *)v27 - v31;
        v33 = (char *)(v20 - v32);
        v34 = ((_DWORD)v32 + v29) & 0xFFFFFFF8;
        if ( v34 >= 8 )
        {
          v35 = v34 & 0xFFFFFFF8;
          v36 = 0;
          do
          {
            v37 = v36;
            v36 += 8;
            *(_QWORD *)(v31 + v37) = *(_QWORD *)&v33[v37];
          }
          while ( v36 < v35 );
        }
        goto LABEL_13;
      }
      if ( (v29 & 4) != 0 )
      {
        *(_DWORD *)v27 = *(_DWORD *)v20;
        *(_DWORD *)((char *)v27 + v29 - 4) = *(_DWORD *)&v20[v29 - 4];
        v22 = *((char **)v20 - 1);
      }
      else if ( (_DWORD)v22 != -1 )
      {
        *(_BYTE *)v27 = *v20;
        if ( (v29 & 2) == 0 )
          goto LABEL_13;
        *(_WORD *)((char *)v27 + v29 - 2) = *(_WORD *)&v20[v29 - 2];
        v22 = *((char **)v20 - 1);
      }
LABEL_14:
      v23 = v21 + 6;
      v21[1] = v22;
      *((_QWORD *)v20 - 2) = v20;
      *((_QWORD *)v20 - 1) = 0;
      *v20 = 0;
      v21[4] = (char *)(v21 + 6);
      v24 = *((char **)v20 + 2);
      if ( v24 != v20 + 32 )
      {
        v21[4] = v24;
        v21[6] = *((char **)v20 + 4);
LABEL_16:
        v25 = *((char **)v20 + 3);
        goto LABEL_17;
      }
      v25 = *((char **)v20 + 3);
      v30 = (_DWORD)v25 + 1;
      if ( (unsigned int)((_DWORD)v25 + 1) >= 8 )
      {
        *v23 = *(_QWORD *)v24;
        *(_QWORD *)((char *)v23 + v30 - 8) = *(_QWORD *)&v24[v30 - 8];
        v38 = (unsigned __int64)(v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v39 = (char *)v23 - v38;
        v40 = (char *)(v24 - v39);
        v41 = ((_DWORD)v39 + v30) & 0xFFFFFFF8;
        if ( v41 >= 8 )
        {
          v42 = v41 & 0xFFFFFFF8;
          v43 = 0;
          do
          {
            v44 = v43;
            v43 += 8;
            *(_QWORD *)(v38 + v44) = *(_QWORD *)&v40[v44];
          }
          while ( v43 < v42 );
        }
        goto LABEL_16;
      }
      if ( (v30 & 4) != 0 )
      {
        *(_DWORD *)v23 = *(_DWORD *)v24;
        *(_DWORD *)((char *)v23 + v30 - 4) = *(_DWORD *)&v24[v30 - 4];
        v25 = *((char **)v20 + 3);
      }
      else if ( (_DWORD)v25 != -1 )
      {
        *(_BYTE *)v23 = *v24;
        if ( (v30 & 2) == 0 )
          goto LABEL_16;
        *(_WORD *)((char *)v23 + v30 - 2) = *(_WORD *)&v24[v30 - 2];
        v25 = *((char **)v20 + 3);
      }
LABEL_17:
      v26 = *((char **)v20 - 2);
      v21[5] = v25;
      if ( v20 != v26 )
        operator delete(v26, *(_QWORD *)v20 + 1LL);
      v21 += 8;
      if ( v2 == v20 + 48 )
        goto LABEL_33;
      v20 += 64;
    }
    *v21 = v28;
    v21[2] = *(char **)v20;
LABEL_13:
    v22 = *((char **)v20 - 1);
    goto LABEL_14;
  }
  v21 = v11;
LABEL_33:
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v21 + 8;
  *(_QWORD *)(a1 + 16) = (char *)v11 + v61;
}

