unsigned __int64 __fastcall std::vector<std::string>::_M_realloc_append<std::string const&>(__int64 a1, __int64 a2)
{
  char **v2; // r13
  char **v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r15
  char **v12; // rbp
  unsigned __int64 v13; // rax
  _BYTE *v14; // rdi
  _BYTE *v15; // rcx
  size_t v16; // rdx
  __int64 v17; // rax
  char **v18; // rdx
  char **v19; // rax
  char *v20; // rdi
  _QWORD *v21; // rsi
  char *v22; // rcx
  unsigned int v23; // r8d
  _QWORD *v24; // r14
  unsigned __int64 v26; // rdi
  char *v27; // rsi
  char *v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // esi
  __int64 v32; // r9
  __int64 v33; // rax
  _BYTE *v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v2 = *(char ***)a1;
  v36 = __readfsqword(0x28u);
  v3 = *(char ***)(a1 + 8);
  v4 = (__int64)v3 - *(_QWORD *)a1;
  v5 = v4 >> 5;
  if ( v4 >> 5 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v8 = v5 + v6;
  if ( v8 > 0x3FFFFFFFFFFFFFFLL )
    v8 = 0x3FFFFFFFFFFFFFFLL;
  v9 = 4 * v8;
  v10 = operator new(v9 * 8);
  v11 = (__int64 *)(v10 + v4);
  v12 = (char **)v10;
  v13 = *(_QWORD *)(a2 + 8);
  v14 = v11 + 2;
  v15 = *(_BYTE **)a2;
  *v11 = (__int64)(v11 + 2);
  v35 = v13;
  if ( v13 <= 0xF )
  {
    v16 = v13 + 1;
    if ( v13 )
    {
LABEL_8:
      memcpy(v14, v15, v16);
      v17 = v35;
      goto LABEL_9;
    }
LABEL_20:
    *v14 = *v15;
    v11[1] = v35;
    if ( v3 != v2 )
      goto LABEL_10;
    goto LABEL_21;
  }
  v34 = v15;
  v33 = std::string::_M_create();
  *v11 = v33;
  v14 = (_BYTE *)v33;
  v15 = v34;
  v11[2] = v35;
  v16 = v35 + 1;
  if ( !v35 )
    goto LABEL_20;
  v17 = -1;
  if ( v35 != -1 )
    goto LABEL_8;
LABEL_9:
  v11[1] = v17;
  if ( v3 != v2 )
  {
LABEL_10:
    v18 = v2;
    v19 = v12;
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
        v26 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = (char *)v21 - v26;
        v28 = (char *)(v22 - v27);
        v29 = ((_DWORD)v27 + v23) & 0xFFFFFFF8;
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
        goto LABEL_12;
      }
      if ( (v23 & 4) != 0 )
      {
        *(_DWORD *)v21 = *(_DWORD *)v22;
        *(_DWORD *)((char *)v21 + v23 - 4) = *(_DWORD *)&v22[v23 - 4];
        v20 = v18[1];
        goto LABEL_13;
      }
      if ( (_DWORD)v20 != -1 )
      {
        *(_BYTE *)v21 = *v22;
        if ( (v23 & 2) != 0 )
        {
          *(_WORD *)((char *)v21 + v23 - 2) = *(_WORD *)&v22[v23 - 2];
          v20 = v18[1];
          goto LABEL_13;
        }
        goto LABEL_12;
      }
LABEL_13:
      v18 += 4;
      v19[1] = v20;
      v19 += 4;
      if ( v3 == v18 )
        goto LABEL_22;
    }
    *v19 = v22;
    v19[2] = v18[2];
LABEL_12:
    v20 = v18[1];
    goto LABEL_13;
  }
LABEL_21:
  v19 = v12;
LABEL_22:
  v24 = v19 + 4;
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = &v12[v9];
  return v36 - __readfsqword(0x28u);
}

