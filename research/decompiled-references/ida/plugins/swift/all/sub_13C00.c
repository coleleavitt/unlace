unsigned __int64 __fastcall sub_13C00(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbx
  const char *v7; // r15
  const char *v8; // rbx
  __int64 v9; // r12
  char *v10; // r14
  char *v11; // rax
  const char *v12; // r13
  const char *v13; // rsi
  const char *v14; // rdi
  int v15; // eax
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rsi
  const char *v20; // rdi
  const char *v21; // rax
  __int16 v22; // si
  const char *v23; // r13
  size_t v24; // rax
  size_t v25; // r12
  void *v27; // rdi
  size_t v28; // r15
  _BYTE *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  char *s2; // [rsp+0h] [rbp-88h]
  const char *v33; // [rsp+8h] [rbp-80h]
  char **p_s1; // [rsp+28h] [rbp-60h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v2 = *(const char **)a2;
  v38 = __readfsqword(0x28u);
  v37 = 0;
  s1 = nullptr;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    s1 = (char *)qvector_reserve(&s1, 0, v4 + 1, 1);
    *(_QWORD *)&v37 = v5;
    memmove(s1, v2, v6);
    s1[v6] = 0;
  }
  v7 = *(const char **)(a1 + 504);
  v33 = (const char *)(a1 + 496);
  v8 = (const char *)(a1 + 496);
  if ( !v7 )
    goto LABEL_23;
  v9 = v37;
  v10 = s1;
  v11 = (char *)::s1;
  v8 = (const char *)(a1 + 496);
  if ( (_QWORD)v37 )
    v11 = s1;
  s2 = v11;
  while ( 1 )
  {
    v17 = *((_QWORD *)v7 + 5);
    if ( !v9 )
      break;
    v12 = v7;
    v13 = v10;
    v14 = ::s1;
    if ( v17 )
      goto LABEL_8;
LABEL_9:
    v15 = strcmp(v14, v13);
    v16 = *((const char **)v7 + 2);
    v7 = *((const char **)v7 + 3);
    if ( v15 >= 0 )
    {
      v8 = v12;
      v7 = v16;
    }
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v17 )
  {
LABEL_16:
    v12 = v7;
LABEL_8:
    v14 = *((const char **)v7 + 4);
    v13 = s2;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v7 + 2);
    if ( !v18 )
      break;
    v8 = v7;
    v7 = *((const char **)v7 + 2);
    if ( *(_QWORD *)(v18 + 40) )
      goto LABEL_16;
  }
  v8 = v7;
LABEL_18:
  if ( v33 == v8 )
    goto LABEL_23;
  if ( *((_QWORD *)v8 + 5) )
  {
    v19 = *((const char **)v8 + 4);
    v20 = ::s1;
    if ( v9 )
      goto LABEL_21;
LABEL_22:
    if ( strcmp(v20, v19) < 0 )
    {
LABEL_23:
      p_s1 = &s1;
      v21 = sub_13AB0((_QWORD *)(a1 + 488), v8, (__int64 **)&p_s1);
      v10 = s1;
      v8 = v21;
    }
  }
  else
  {
    v19 = ::s1;
    if ( v9 )
    {
LABEL_21:
      v20 = v10;
      goto LABEL_22;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v10);
  }
  *((_DWORD *)v8 + 14) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)v8 + 15) = *(_DWORD *)(a2 + 12);
  *((_QWORD *)v8 + 8) = *(_QWORD *)(a2 + 16);
  v22 = *(_WORD *)(a2 + 24);
  if ( v22 < 0 )
  {
    s1 = nullptr;
    get_stock_tinfo(&s1, v22 & 0x7FFF);
  }
  else
  {
    s1 = (char *)(unsigned __int8)v22;
  }
  copy_tinfo_t(v8 + 80, &s1);
  clear_tinfo_t();
  v23 = *(const char **)a2;
  if ( !*(_QWORD *)a2 || (v24 = strlen(*(const char **)a2), (v25 = v24) == 0) )
  {
    *((_QWORD *)v8 + 12) = 0;
    goto LABEL_31;
  }
  v27 = *((void **)v8 + 11);
  v28 = v24 + 1;
  if ( *((_QWORD *)v8 + 13) < v24 + 1 )
  {
    v30 = qvector_reserve(v8 + 88, *((_QWORD *)v8 + 11), v24 + 1, 1);
    *((_QWORD *)v8 + 11) = v30;
    v27 = (void *)v30;
  }
  *((_QWORD *)v8 + 12) = v28;
  memmove(v27, v23, v25);
  *(_BYTE *)(*((_QWORD *)v8 + 11) + v25) = 0;
  if ( *((_QWORD *)v8 + 12) && (v29 = *((_BYTE **)v8 + 11), *v29 == 40) && v29[1] == 41 && !v29[2] )
  {
    if ( *((_QWORD *)v8 + 13) <= 0xBu )
    {
      v31 = qvector_reserve(v8 + 88, v29, 12, 1);
      *((_QWORD *)v8 + 11) = v31;
      v29 = (_BYTE *)v31;
    }
    *((_QWORD *)v8 + 12) = 12;
    qmemcpy(v29, "Swift::Void", 11);
    *(_BYTE *)(*((_QWORD *)v8 + 11) + 11LL) = 0;
  }
  else
  {
LABEL_31:
    sub_83B0((__int64)(v8 + 88), ".", "::");
  }
  *((_DWORD *)v8 + 31) = 2;
  *((_BYTE *)v8 + 128) = *(_BYTE *)(a2 + 26);
  return v38 - __readfsqword(0x28u);
}

