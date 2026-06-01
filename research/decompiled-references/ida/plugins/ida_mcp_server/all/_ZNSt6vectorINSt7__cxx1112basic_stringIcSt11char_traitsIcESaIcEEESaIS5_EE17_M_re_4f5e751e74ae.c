void __fastcall std::vector<std::string>::_M_realloc_append<std::string>(__int64 a1, char **a2)
{
  char **v2; // r13
  char **v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rcx
  char *v13; // rdx
  char *v14; // rdi
  char **v15; // r8
  char **v16; // rax
  _QWORD *v17; // rsi
  char **v18; // rdx
  char **v19; // rax
  char *v20; // rdi
  _QWORD *v21; // rsi
  char *v22; // rcx
  unsigned int v23; // r9d
  _QWORD *v24; // r13
  unsigned __int64 v25; // rdi
  char *v26; // rsi
  char *v27; // rcx
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // esi
  __int64 v31; // r10
  unsigned int v32; // ecx
  unsigned __int64 v33; // r9
  char *v34; // rsi
  char *v35; // r10
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // esi
  __int64 v39; // r11
  char **v40; // [rsp+8h] [rbp-40h]

  v2 = *(char ***)(a1 + 8);
  v3 = *(char ***)a1;
  v4 = (__int64)v2 - *(_QWORD *)a1;
  v5 = v4 >> 5;
  if ( v4 >> 5 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v9 = v5 + v6;
  if ( v9 > 0x3FFFFFFFFFFFFFFLL )
    v9 = 0x3FFFFFFFFFFFFFFLL;
  v10 = 4 * v9;
  v11 = operator new(v10 * 8);
  v12 = *a2;
  v13 = (char *)(a2 + 2);
  v14 = a2[1];
  v15 = (char **)v11;
  v16 = (char **)(v11 + v4);
  v17 = v16 + 2;
  *v16 = (char *)(v16 + 2);
  if ( v12 == (char *)(a2 + 2) )
  {
    v32 = (_DWORD)v14 + 1;
    if ( (unsigned int)((_DWORD)v14 + 1) >= 8 )
    {
      v16[2] = a2[2];
      *(_QWORD *)((char *)v17 + v32 - 8) = *(_QWORD *)&v13[v32 - 8];
      v33 = (unsigned __int64)(v16 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v34 = (char *)v17 - v33;
      v35 = (char *)(v13 - v34);
      v36 = ((_DWORD)v34 + v32) & 0xFFFFFFF8;
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
    else if ( (v32 & 4) != 0 )
    {
      *((_DWORD *)v16 + 4) = *((_DWORD *)a2 + 4);
      *(_DWORD *)((char *)v17 + v32 - 4) = *(_DWORD *)&v13[v32 - 4];
    }
    else if ( (_DWORD)v14 != -1 )
    {
      *((_BYTE *)v16 + 16) = *((_BYTE *)a2 + 16);
      if ( (v32 & 2) != 0 )
        *(_WORD *)((char *)v17 + v32 - 2) = *(_WORD *)&v13[v32 - 2];
    }
  }
  else
  {
    *v16 = v12;
    v16[2] = a2[2];
  }
  v16[1] = v14;
  *a2 = v13;
  a2[1] = nullptr;
  *((_BYTE *)a2 + 16) = 0;
  if ( v2 != v3 )
  {
    v18 = v3;
    v19 = v15;
    while ( 1 )
    {
      v21 = v19 + 2;
      *v19 = (char *)(v19 + 2);
      v22 = *v18;
      if ( *v18 != (char *)(v18 + 2) )
        break;
      v20 = v18[1];
      v23 = (_DWORD)v20 + 1;
      if ( (unsigned int)((_DWORD)v20 + 1) >= 8 )
      {
        *v21 = *(_QWORD *)v22;
        *(_QWORD *)((char *)v21 + v23 - 8) = *(_QWORD *)&v22[v23 - 8];
        v25 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v26 = (char *)v21 - v25;
        v27 = (char *)(v22 - v26);
        v28 = ((_DWORD)v26 + v23) & 0xFFFFFFF8;
        if ( v28 >= 8 )
        {
          v29 = v28 & 0xFFFFFFF8;
          v30 = 0;
          do
          {
            v31 = v30;
            v30 += 8;
            *(_QWORD *)(v25 + v31) = *(_QWORD *)&v27[v31];
          }
          while ( v30 < v29 );
        }
        goto LABEL_11;
      }
      if ( (v23 & 4) != 0 )
      {
        *(_DWORD *)v21 = *(_DWORD *)v22;
        *(_DWORD *)((char *)v21 + v23 - 4) = *(_DWORD *)&v22[v23 - 4];
        v20 = v18[1];
        goto LABEL_12;
      }
      if ( (_DWORD)v20 != -1 )
      {
        *(_BYTE *)v21 = *v22;
        if ( (v23 & 2) != 0 )
        {
          *(_WORD *)((char *)v21 + v23 - 2) = *(_WORD *)&v22[v23 - 2];
          v20 = v18[1];
          goto LABEL_12;
        }
        goto LABEL_11;
      }
LABEL_12:
      v18 += 4;
      v19[1] = v20;
      v19 += 4;
      if ( v2 == v18 )
        goto LABEL_20;
    }
    *v19 = v22;
    v19[2] = v18[2];
LABEL_11:
    v20 = v18[1];
    goto LABEL_12;
  }
  v19 = v15;
LABEL_20:
  v24 = v19 + 4;
  if ( v3 )
  {
    v40 = v15;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v15 = v40;
  }
  *(_QWORD *)a1 = v15;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = &v15[v10];
}

