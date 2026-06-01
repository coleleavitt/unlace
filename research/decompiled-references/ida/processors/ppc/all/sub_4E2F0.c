unsigned __int64 __fastcall sub_4E2F0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  size_t v4; // rax
  size_t v5; // rbp
  size_t v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  _BYTE *v10; // r13
  char *v11; // rax
  unsigned __int64 v12; // r14
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // r9
  __int64 v16; // rbx
  char *v17; // rsi
  const char *v18; // r13
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // rbx
  __int64 v22; // rbx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rbx
  char *v25; // r8
  char *v26; // rax
  unsigned __int64 v27; // r13
  size_t v28; // rbx
  void *v29; // rdi
  size_t v30; // r9
  void *v31; // rdi
  char *sa; // [rsp+0h] [rbp-98h]
  char *v35; // [rsp+8h] [rbp-90h]
  _QWORD v36[2]; // [rsp+10h] [rbp-88h] BYREF
  char *v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  v36[1] = a1;
  v36[0] = &off_92C00;
  v37 = nullptr;
  v38 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v37 = (char *)qvector_reserve(&v37, 0, v4 + 1, 1);
    *(_QWORD *)&v38 = v5;
    memmove(v37, a2, v6);
    v37[v6] = 0;
    v7 = v38;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( !v7 )
    {
      v12 = -1;
      v39 = 0;
      v40 = 0;
      goto LABEL_13;
    }
    v9 = v7 - 1;
    v10 = v37;
    if ( v9 < v8 || (v11 = strchr(&v37[v8], 45)) == nullptr )
    {
      v12 = -1;
LABEL_24:
      if ( v8 > v9 )
        v8 = v9;
      v13 = v9 - v8;
      goto LABEL_12;
    }
    v12 = v11 - v10;
    if ( v9 < v11 - v10 )
      goto LABEL_24;
    if ( v8 > v12 )
      v8 = v11 - v10;
    v13 = v12 - v8;
LABEL_12:
    v39 = 0;
    v40 = 0;
    if ( v13 )
    {
      v14 = nullptr;
      v15 = v13 + 1;
      if ( v13 != -1 )
      {
        v39 = qvector_reserve(&v39, 0, v13 + 1, 1);
        v15 = v13 + 1;
        v14 = (void *)v39;
      }
      *(_QWORD *)&v40 = v15;
      memmove(v14, &v10[v8], v13);
      *(_BYTE *)(v39 + v13) = 0;
    }
LABEL_13:
    if ( !(unsigned __int8)sub_4BFD0((__int64)v36, (__int64)&v39) )
      break;
    v8 = v12 + 1;
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39, (const char *)&v39);
    }
    if ( v12 == -1 )
    {
      v31 = v37;
      if ( v37 )
        goto LABEL_59;
      return v41 - __readfsqword(0x28u);
    }
    v7 = v38;
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, (const char *)&v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, (const char *)&v39);
  }
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( !under_debugger )
      interr("unregister_custom_fixup");
    BUG();
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = "32";
  if ( (unsigned __int8)getinf_flag(3, 4) )
    v17 = "64";
  sub_33700((__int64)"Specified '%s'-bit ABI name '%s' is unsupported, fallback to '%s'\n", v17, a2, v16);
  v18 = *(const char **)(a1 + 24);
  *(_BYTE *)(a1 + 48) = 1;
  v37 = nullptr;
  v38 = 0;
  if ( v18 )
  {
    v19 = strlen(v18);
    v20 = v19 + 1;
    v21 = v19;
    v37 = (char *)qvector_reserve(&v37, 0, v19 + 1, 1);
    *(_QWORD *)&v38 = v20;
    memmove(v37, v18, v21);
    v37[v21] = 0;
    v22 = v38;
  }
  else
  {
    v22 = 0;
  }
  v23 = 0;
  while ( 2 )
  {
    if ( !v22 )
    {
      v27 = -1;
      v39 = 0;
      v40 = 0;
      goto LABEL_44;
    }
    v24 = v22 - 1;
    v25 = v37;
    if ( v24 < v23 || (sa = v37, v26 = strchr(&v37[v23], 45), v25 = sa, !v26) )
    {
      v27 = -1;
      goto LABEL_55;
    }
    v27 = v26 - sa;
    if ( v24 < v26 - sa )
    {
LABEL_55:
      if ( v23 > v24 )
        v23 = v24;
      v28 = v24 - v23;
      goto LABEL_43;
    }
    if ( v23 > v27 )
      v23 = v26 - sa;
    v28 = v27 - v23;
LABEL_43:
    v39 = 0;
    v40 = 0;
    if ( v28 )
    {
      v29 = nullptr;
      v30 = v28 + 1;
      if ( v28 != -1 )
      {
        v35 = v25;
        v39 = qvector_reserve(&v39, 0, v28 + 1, 1);
        v25 = v35;
        v29 = (void *)v39;
        v30 = v28 + 1;
      }
      *(_QWORD *)&v40 = v30;
      memmove(v29, &v25[v23], v28);
      *(_BYTE *)(v39 + v28) = 0;
    }
LABEL_44:
    if ( !(unsigned __int8)sub_4BFD0((__int64)v36, (__int64)&v39) )
    {
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39, (const char *)&v39);
      }
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37, (const char *)&v39);
      }
      sub_2A700((__int64)"Could not parse default ABI string '%s'", *(const char **)(a1 + 24));
    }
    v23 = v27 + 1;
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39, (const char *)&v39);
    }
    if ( v27 != -1 )
    {
      v22 = v38;
      continue;
    }
    break;
  }
  v31 = v37;
  if ( v37 )
  {
LABEL_59:
    *(_QWORD *)&v38 = 0;
    qfree(v31, (const char *)&v39);
  }
  return v41 - __readfsqword(0x28u);
}

