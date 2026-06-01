unsigned __int64 __fastcall sub_6F680(_QWORD *a1, const char *a2, unsigned __int64 a3, const char *a4)
{
  const char *v5; // rbx
  const char *v7; // rsi
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r14
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // r14
  char *v15; // r15
  char *v16; // r14
  __int64 v17; // rbp
  char *v18; // rax
  const char ***v19; // rbx
  char *v20; // r13
  char *v21; // r15
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  char *v25; // rsi
  const char **v26; // r12
  const char *v27; // rax
  const char ***v29; // r15
  const char **v30; // r13
  const char *v31; // rax
  char *v32; // rax
  char *v33; // rsi
  unsigned __int64 v34; // r14
  char *v35; // rbp
  char *v36; // rax
  const char *v37; // [rsp+0h] [rbp-98h]
  _QWORD *v38; // [rsp+8h] [rbp-90h]
  unsigned __int64 v40; // [rsp+18h] [rbp-80h]
  char v42; // [rsp+2Fh] [rbp-69h]
  unsigned __int64 v43[2]; // [rsp+30h] [rbp-68h] BYREF
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v45; // [rsp+48h] [rbp-50h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( !a4 )
    return v46 - __readfsqword(0x28u);
  v5 = (const char *)a1;
  v38 = a1 + 9;
  v37 = (const char *)(a1 + 10);
  v7 = (const char *)(a1 + 10);
  v8 = (const char *)a1[11];
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)v8 + 2);
        v10 = *((_QWORD *)v8 + 3);
        if ( *((_QWORD *)v8 + 4) >= a3 )
          break;
        v8 = *((const char **)v8 + 3);
        if ( !v10 )
          goto LABEL_7;
      }
      v7 = v8;
      v8 = *((const char **)v8 + 2);
    }
    while ( v9 );
LABEL_7:
    if ( v37 != v7 && a3 >= *((_QWORD *)v7 + 4) )
    {
      v11 = *((void **)v7 + 5);
      if ( v11 )
      {
        sub_69E70(*((_QWORD *)v7 + 5), v7);
        operator delete(v11, 0xE8u);
      }
      sub_685C0(v38, a3);
    }
  }
  s2 = nullptr;
  v45 = 0;
  if ( a2 )
  {
    v12 = strlen(a2);
    v13 = v12 + 1;
    v14 = v12;
    s2 = (char *)qvector_reserve(&s2, 0, v12 + 1, 1);
    *(_QWORD *)&v45 = v13;
    memmove(s2, a2, v14);
    s2[v14] = 0;
  }
  v42 = 0;
  if ( (unsigned int)sub_69510(dbg, 41, &s2, a3) == 1 )
  {
    if ( (debug & 0x40000) != 0 )
      sub_16DD0((__int64)"DWARF: module %s mapped to %s\n");
    v42 = 1;
  }
  v15 = (char *)a1[15];
  v16 = &v15[8 * a1[16]];
  if ( v15 == v16 )
  {
LABEL_49:
    v30 = (const char **)operator new(0xE8u);
    v34 = v45;
    memset(v30, 0, 0xE8u);
    v30[6] = (const char *)-1LL;
    v30[16] = (const char *)(v30 + 14);
    v30[17] = (const char *)(v30 + 14);
    v30[12] = (const char *)&off_C86B8;
    v30[25] = (const char *)-1LL;
    v30[27] = (const char *)-1LL;
    if ( v34 > 1 )
    {
      v35 = s2;
      v36 = (char *)qvector_reserve(v30, 0, v34, 1);
      *v30 = v36;
      v30[1] = (const char *)v34;
      memmove(v36, v35, v34 - 1);
      (*v30)[v34 - 1] = 0;
    }
    v30[8] = v5;
    v30[6] = (const char *)a3;
    v30[7] = a4;
    *((_BYTE *)v30 + 184) = v42;
    goto LABEL_42;
  }
  v17 = v45;
  v18 = (char *)src;
  v19 = (const char ***)a1[15];
  v40 = a3;
  v20 = s2;
  if ( (_QWORD)v45 )
    v18 = s2;
  v21 = v18;
  while ( 1 )
  {
    v26 = *v19;
    v27 = (*v19)[1];
    if ( v17 )
    {
      v22 = v20;
      v23 = src;
      if ( !v27 )
        goto LABEL_20;
    }
    else if ( !v27 )
    {
      v29 = v19;
      v30 = *v19;
      v5 = (const char *)a1;
      a3 = v40;
      v25 = (char *)(v29 + 1);
      goto LABEL_38;
    }
    v23 = *v26;
    v22 = v21;
LABEL_20:
    v24 = strcmp(v23, v22);
    v25 = (char *)(v19 + 1);
    if ( !v24 )
      break;
    if ( v25 == v16 )
    {
      v5 = (const char *)a1;
      a3 = v40;
      goto LABEL_49;
    }
    ++v19;
  }
  v30 = v26;
  v29 = v19;
  a3 = v40;
  v5 = (const char *)a1;
LABEL_38:
  memmove(v29, v25, v16 - (char *)v29 - 8);
  --*((_QWORD *)v5 + 16);
  if ( !v30 )
    goto LABEL_49;
  if ( v30[6] != (const char *)a3 )
  {
    v31 = v30[9];
    v30[6] = (const char *)a3;
    if ( v31 )
      *((_QWORD *)v31 + 22) = a3;
  }
LABEL_42:
  v32 = *((char **)v5 + 11);
  v33 = (char *)v37;
  v43[0] = a3;
  v43[1] = (unsigned __int64)v30;
  if ( !v32 )
    goto LABEL_28;
  do
  {
    if ( *((_QWORD *)v32 + 4) < a3 )
    {
      v32 = *((char **)v32 + 3);
    }
    else
    {
      v33 = v32;
      v32 = *((char **)v32 + 2);
    }
  }
  while ( v32 );
  if ( v37 == v33 || a3 < *((_QWORD *)v33 + 4) )
LABEL_28:
    sub_6F510(v38, v33, v43);
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: add_module(%s, [%a -> %a))\n");
  if ( s2 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(s2);
  }
  return v46 - __readfsqword(0x28u);
}
