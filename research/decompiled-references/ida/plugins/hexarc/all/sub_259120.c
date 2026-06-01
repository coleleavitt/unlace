__int64 __fastcall sub_259120(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  const char *v7; // rdx
  __int64 v8; // rsi
  size_t v9; // rax
  size_t v10; // r9
  __int64 v11; // rsi
  size_t v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rax
  char *v16; // r15
  const char *v17; // rax
  char v18; // dl
  signed int v19; // ecx
  _DWORD *v20; // rdi
  const char *v21; // rax
  char v22; // dl
  int v23; // eax
  size_t v24; // rax
  __int64 v25; // rbp
  size_t v26; // r12
  size_t v27; // r14
  _BYTE *v28; // rsi
  size_t v30; // r10
  bool v31; // zf
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char *v35; // rax
  char *v36; // rdx
  char v37; // cl
  size_t v39; // [rsp+10h] [rbp-488h]
  unsigned __int64 v40; // [rsp+10h] [rbp-488h]
  size_t v41; // [rsp+18h] [rbp-480h]
  size_t v42; // [rsp+20h] [rbp-478h]
  size_t v43; // [rsp+28h] [rbp-470h]
  const char *v44; // [rsp+30h] [rbp-468h] BYREF
  __int128 v45; // [rsp+38h] [rbp-460h]
  char s[1023]; // [rsp+50h] [rbp-448h] BYREF
  char v47; // [rsp+44Fh] [rbp-49h] BYREF
  char v48; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+458h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_37B760(50117);
    goto LABEL_74;
  }
  *(_QWORD *)a1 = 0;
  v7 = s1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a3 + 40) )
    v7 = *(const char **)(a3 + 32);
  sub_3242C0(a1, a3 + 80, v7, 64);
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2[54]) >> 3);
  if ( (int)v8 >= 0 && (unsigned __int64)(int)v8 < a2[55] )
  {
    v45 = 0;
    v44 = nullptr;
    tag_addr();
    v35 = s;
    v36 = nullptr;
    while ( 1 )
    {
      v37 = *v36++;
      *v35 = v37;
      if ( !v37 )
        break;
      if ( ++v35 == &v47 )
      {
        v47 = 0;
        break;
      }
    }
  }
  *(_BYTE *)tag_on() = 0;
  v9 = strlen(s);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)a1;
  v12 = v9;
  v13 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    --v10;
    v30 = v12 + v10;
    v14 = v12 + v10 + 1;
    if ( v13 >= v14 )
      goto LABEL_41;
  }
  else
  {
    v14 = v12 + 1;
    if ( v13 >= v12 + 1 )
    {
      *(_QWORD *)(a1 + 8) = v14;
      *(_BYTE *)(v11 + v12) = 0;
      goto LABEL_9;
    }
    v30 = v12;
  }
  v43 = v12;
  v42 = v30;
  v41 = v10;
  v40 = v14;
  v33 = qvector_reserve();
  v12 = v43;
  v30 = v42;
  *(_QWORD *)a1 = v33;
  v11 = v33;
  v10 = v41;
  v14 = v40;
LABEL_41:
  *(_QWORD *)(a1 + 8) = v14;
  *(_BYTE *)(v11 + v30) = 0;
  if ( v10 )
  {
    v39 = v12;
    memmove((void *)(*(_QWORD *)a1 + v12), *(const void **)a1, v10);
    v12 = v39;
  }
LABEL_9:
  memmove(*(void **)a1, s, v12);
  v15 = &s[(int)qsnprintf()];
  if ( v15 >= &v48 )
  {
    if ( !under_debugger )
      sub_37B760(518);
    goto LABEL_74;
  }
  *v15 = 32;
  if ( v15 + 1 >= &v48 )
    v47 = 0;
  v16 = (char *)tag_on();
  if ( v16 >= &v48 )
  {
    if ( !under_debugger )
      sub_37B760(520);
    goto LABEL_74;
  }
  v17 = "// ";
  if ( v16 == &v47 )
  {
LABEL_43:
    v31 = *(_DWORD *)a3 == 1;
    v47 = 0;
    v16 = &v47;
    if ( v31 )
    {
LABEL_44:
      sub_1C8E30(a2, *(_QWORD *)(a3 + 8));
      v32 = &v16[(int)qsnprintf()];
      if ( v32 < &v48 )
      {
        *v32 = 32;
        if ( v32 + 1 >= &v48 )
          v47 = 0;
        qsnprintf();
        v23 = *(_DWORD *)(a3 + 24);
        if ( (v23 & 0x100) != 0 )
          goto LABEL_48;
LABEL_28:
        if ( (v23 & 0x400) != 0 )
          goto LABEL_49;
LABEL_29:
        if ( (v23 & 0x2000) != 0 )
          goto LABEL_50;
LABEL_30:
        if ( (v23 & 0x10000) != 0 )
          goto LABEL_51;
        goto LABEL_31;
      }
      if ( !under_debugger )
        sub_37B760(518);
LABEL_74:
      BUG();
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = *v17++;
      *v16 = v18;
      if ( !v18 )
        break;
      if ( ++v16 == &v47 )
        goto LABEL_43;
    }
    if ( *(_DWORD *)a3 == 1 )
      goto LABEL_44;
  }
  v19 = *(_DWORD *)(a3 + 88);
  v20 = (_DWORD *)a2[188];
  v45 = 0;
  v44 = nullptr;
  sub_1C17C0(v20, (__int64 *)&v44, a3, v19);
  if ( v16 >= &v48 )
  {
    if ( !under_debugger )
      sub_37B760(520);
    goto LABEL_74;
  }
  v21 = s1;
  if ( (_QWORD)v45 )
    v21 = v44;
  if ( v16 == &v47 )
  {
LABEL_54:
    v47 = 0;
  }
  else
  {
    while ( 1 )
    {
      v22 = *v21++;
      *v16 = v22;
      if ( !v22 )
        break;
      if ( ++v16 == &v47 )
        goto LABEL_54;
    }
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  v23 = *(_DWORD *)(a3 + 24);
  if ( (v23 & 0x100) == 0 )
    goto LABEL_28;
LABEL_48:
  qsnprintf();
  v23 = *(_DWORD *)(a3 + 24);
  if ( (v23 & 0x400) == 0 )
    goto LABEL_29;
LABEL_49:
  qsnprintf();
  v23 = *(_DWORD *)(a3 + 24);
  if ( (v23 & 0x2000) == 0 )
    goto LABEL_30;
LABEL_50:
  qsnprintf();
  v23 = *(_DWORD *)(a3 + 24);
  if ( (v23 & 0x10000) != 0 )
  {
LABEL_51:
    qsnprintf();
    v23 = *(_DWORD *)(a3 + 24);
    if ( (v23 & 0x400000) == 0 )
      goto LABEL_32;
    goto LABEL_52;
  }
LABEL_31:
  if ( (v23 & 0x400000) == 0 )
    goto LABEL_32;
LABEL_52:
  qsnprintf();
  v23 = *(_DWORD *)(a3 + 24);
LABEL_32:
  if ( (v23 & 0x8000000) != 0 )
    qsnprintf();
  tag_off();
  v24 = strlen(s);
  v25 = *(_QWORD *)(a1 + 8);
  v26 = v24;
  v27 = v24;
  if ( v25 )
  {
    --v25;
    v27 = v24 + v25;
  }
  v28 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v27 + 1 )
  {
    v34 = qvector_reserve();
    *(_QWORD *)a1 = v34;
    v28 = (_BYTE *)v34;
  }
  *(_QWORD *)(a1 + 8) = v27 + 1;
  v28[v27] = 0;
  memmove((void *)(v25 + *(_QWORD *)a1), s, v26);
  if ( a4 && *(_QWORD *)(a1 + 8) > 1u )
    tag_remove();
  return a1;
}

