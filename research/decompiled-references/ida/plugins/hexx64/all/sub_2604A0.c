__int64 __fastcall sub_2604A0(__int64 a1, _QWORD *a2, __int64 a3, char a4, double a5)
{
  const char *v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rax
  size_t v11; // r9
  __int64 v12; // rsi
  size_t v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char *v17; // r15
  const char *v18; // rax
  char v19; // dl
  signed int v20; // ecx
  _DWORD *v21; // rdi
  const char *v22; // rax
  char v23; // dl
  int v24; // eax
  size_t v25; // rax
  __int64 v26; // rbp
  size_t v27; // r12
  size_t v28; // r14
  __int64 v29; // rsi
  size_t v31; // r10
  bool v32; // zf
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // rax
  char *v37; // rdx
  char v38; // cl
  size_t v40; // [rsp+10h] [rbp-488h]
  unsigned __int64 v41; // [rsp+10h] [rbp-488h]
  size_t v42; // [rsp+18h] [rbp-480h]
  size_t v43; // [rsp+20h] [rbp-478h]
  size_t v44; // [rsp+28h] [rbp-470h]
  const char *v45; // [rsp+30h] [rbp-468h] BYREF
  __int128 v46; // [rsp+38h] [rbp-460h]
  char s[1023]; // [rsp+50h] [rbp-448h] BYREF
  char v48; // [rsp+44Fh] [rbp-49h] BYREF
  char v49; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+458h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(0xC3C5u, a5);
    goto LABEL_74;
  }
  *(_QWORD *)a1 = 0;
  v8 = s1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a3 + 40) )
    v8 = *(const char **)(a3 + 32);
  sub_32B7F0((__int64 *)a1, a3 + 80, v8);
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2[54]) >> 3);
  if ( (int)v9 >= 0 && (unsigned __int64)(int)v9 < a2[55] )
  {
    v46 = 0;
    v45 = nullptr;
    tag_addr();
    v36 = s;
    v37 = nullptr;
    while ( 1 )
    {
      v38 = *v37++;
      *v36 = v38;
      if ( !v38 )
        break;
      if ( ++v36 == &v48 )
      {
        v48 = 0;
        break;
      }
    }
  }
  *(_BYTE *)tag_on() = 0;
  v10 = strlen(s);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)a1;
  v13 = v10;
  v14 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    --v11;
    v31 = v13 + v11;
    v15 = v13 + v11 + 1;
    if ( v14 >= v15 )
      goto LABEL_41;
  }
  else
  {
    v15 = v13 + 1;
    if ( v14 >= v13 + 1 )
    {
      *(_QWORD *)(a1 + 8) = v15;
      *(_BYTE *)(v12 + v13) = 0;
      goto LABEL_9;
    }
    v31 = v13;
  }
  v44 = v13;
  v43 = v31;
  v42 = v11;
  v41 = v15;
  v34 = qvector_reserve(a1, v12, v15, 1);
  v13 = v44;
  v31 = v43;
  *(_QWORD *)a1 = v34;
  v12 = v34;
  v11 = v42;
  v15 = v41;
LABEL_41:
  *(_QWORD *)(a1 + 8) = v15;
  *(_BYTE *)(v12 + v31) = 0;
  if ( v11 )
  {
    v40 = v13;
    memmove((void *)(*(_QWORD *)a1 + v13), *(const void **)a1, v11);
    v13 = v40;
  }
LABEL_9:
  memmove(*(void **)a1, s, v13);
  v16 = &s[(int)qsnprintf()];
  if ( v16 >= &v49 )
  {
    if ( !under_debugger )
      sub_383060(0x206u, 0.0);
    goto LABEL_74;
  }
  *v16 = 32;
  if ( v16 + 1 >= &v49 )
    v48 = 0;
  v17 = (char *)tag_on();
  if ( v17 >= &v49 )
  {
    if ( !under_debugger )
      sub_383060(0x208u, 0.0);
    goto LABEL_74;
  }
  v18 = "// ";
  if ( v17 == &v48 )
  {
LABEL_43:
    v32 = *(_DWORD *)a3 == 1;
    v48 = 0;
    v17 = &v48;
    if ( v32 )
    {
LABEL_44:
      sub_1CFD50(a2, *(_QWORD *)(a3 + 8), 0.0);
      v33 = &v17[(int)qsnprintf()];
      if ( v33 < &v49 )
      {
        *v33 = 32;
        if ( v33 + 1 >= &v49 )
          v48 = 0;
        qsnprintf();
        v24 = *(_DWORD *)(a3 + 24);
        if ( (v24 & 0x100) != 0 )
          goto LABEL_48;
LABEL_28:
        if ( (v24 & 0x400) != 0 )
          goto LABEL_49;
LABEL_29:
        if ( (v24 & 0x2000) != 0 )
          goto LABEL_50;
LABEL_30:
        if ( (v24 & 0x10000) != 0 )
          goto LABEL_51;
        goto LABEL_31;
      }
      if ( !under_debugger )
        sub_383060(0x206u, 0.0);
LABEL_74:
      BUG();
    }
  }
  else
  {
    while ( 1 )
    {
      v19 = *v18++;
      *v17 = v19;
      if ( !v19 )
        break;
      if ( ++v17 == &v48 )
        goto LABEL_43;
    }
    if ( *(_DWORD *)a3 == 1 )
      goto LABEL_44;
  }
  v20 = *(_DWORD *)(a3 + 88);
  v21 = (_DWORD *)a2[188];
  v46 = 0;
  v45 = nullptr;
  sub_1C8140(v21, (__int64 *)&v45, a3, v20);
  if ( v17 >= &v49 )
  {
    if ( !under_debugger )
      sub_383060(0x208u, 0.0);
    goto LABEL_74;
  }
  v22 = s1;
  if ( (_QWORD)v46 )
    v22 = v45;
  if ( v17 == &v48 )
  {
LABEL_54:
    v48 = 0;
  }
  else
  {
    while ( 1 )
    {
      v23 = *v22++;
      *v17 = v23;
      if ( !v23 )
        break;
      if ( ++v17 == &v48 )
        goto LABEL_54;
    }
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree((__int64)v45);
  }
  v24 = *(_DWORD *)(a3 + 24);
  if ( (v24 & 0x100) == 0 )
    goto LABEL_28;
LABEL_48:
  qsnprintf();
  v24 = *(_DWORD *)(a3 + 24);
  if ( (v24 & 0x400) == 0 )
    goto LABEL_29;
LABEL_49:
  qsnprintf();
  v24 = *(_DWORD *)(a3 + 24);
  if ( (v24 & 0x2000) == 0 )
    goto LABEL_30;
LABEL_50:
  qsnprintf();
  v24 = *(_DWORD *)(a3 + 24);
  if ( (v24 & 0x10000) != 0 )
  {
LABEL_51:
    qsnprintf();
    v24 = *(_DWORD *)(a3 + 24);
    if ( (v24 & 0x400000) == 0 )
      goto LABEL_32;
    goto LABEL_52;
  }
LABEL_31:
  if ( (v24 & 0x400000) == 0 )
    goto LABEL_32;
LABEL_52:
  qsnprintf();
  v24 = *(_DWORD *)(a3 + 24);
LABEL_32:
  if ( (v24 & 0x8000000) != 0 )
    qsnprintf();
  tag_off();
  v25 = strlen(s);
  v26 = *(_QWORD *)(a1 + 8);
  v27 = v25;
  v28 = v25;
  if ( v26 )
  {
    --v26;
    v28 = v25 + v26;
  }
  v29 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v28 + 1 )
  {
    v35 = qvector_reserve(a1, v29, v28 + 1, 1);
    *(_QWORD *)a1 = v35;
    v29 = v35;
  }
  *(_QWORD *)(a1 + 8) = v28 + 1;
  *(_BYTE *)(v29 + v28) = 0;
  memmove((void *)(v26 + *(_QWORD *)a1), s, v27);
  if ( a4 && *(_QWORD *)(a1 + 8) > 1u )
    tag_remove();
  return a1;
}

