__int64 __fastcall sub_12690(__int64 a1, const char *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // r12
  const char *v9; // rdx
  unsigned int v10; // r13d
  const char *v11; // rdi
  const char *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  char *v15; // rdi
  char v16; // al
  unsigned __int64 v17; // r13
  char *v18; // rdx
  const char *v19; // rcx
  char *v20; // rax
  size_t v21; // r8
  char *v23; // rsi
  char *v24; // r9
  void *v25; // rdi
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  char *s1; // [rsp+8h] [rbp-98h]
  const char *s1a; // [rsp+8h] [rbp-98h]
  char *s1c; // [rsp+8h] [rbp-98h]
  char *s1b; // [rsp+8h] [rbp-98h]
  const char *v37; // [rsp+10h] [rbp-90h]
  char *v38; // [rsp+10h] [rbp-90h]
  char *endptr; // [rsp+20h] [rbp-80h] BYREF
  void *dest; // [rsp+28h] [rbp-78h] BYREF
  __int128 v41; // [rsp+30h] [rbp-70h]
  char *v42; // [rsp+48h] [rbp-58h] BYREF
  __int128 v43; // [rsp+50h] [rbp-50h]
  unsigned __int64 v44; // [rsp+60h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v41 = 0;
  dest = nullptr;
  if ( get_ea_name(&dest, a2, 512, 0, a5, a6) <= 0 )
    goto LABEL_25;
  v8 = 0;
  while ( 1 )
  {
    v42 = nullptr;
    v9 = needle;
    v43 = 0;
    if ( (_QWORD)v41 )
      v9 = (const char *)dest;
    v10 = cleanup_name(&v42, a2, v9, 1);
    if ( !(_BYTE)v10 )
      goto LABEL_22;
    if ( (_QWORD)v43 )
    {
      s1a = v42;
      v15 = v42;
      if ( !strcmp(v42, "ac_push_none") || (v27 = strcmp(v15, "ac_pop_none"), v15 = (char *)s1a, !v27) )
      {
LABEL_46:
        if ( v15 )
          goto LABEL_47;
        goto LABEL_48;
      }
      v11 = s1a;
      if ( !strcmp(s1a, "ac_mc_va") )
      {
        if ( s1a )
        {
          *(_QWORD *)&v43 = 0;
          qfree(s1a);
        }
        v14 = -32;
        goto LABEL_49;
      }
    }
    else
    {
      v11 = needle;
    }
    if ( !strcmp(v11, "ac_push_nonev") )
      goto LABEL_18;
    if ( strncmp(v11, "ac_push_13_to_", 0xEu) )
      break;
    v26 = strtol(v11 + 14, nullptr, 10);
    v15 = v42;
    if ( (unsigned int)(v26 - 13) <= 0xD )
    {
      v14 = 4 * (12 - v26);
      if ( !v42 )
        goto LABEL_49;
      goto LABEL_71;
    }
LABEL_59:
    if ( v15 )
      goto LABEL_23;
LABEL_24:
    if ( !v8 )
      goto LABEL_41;
LABEL_25:
    v42 = nullptr;
    v43 = 0;
    v8 = sub_12240(a1, (__int64 *)&v42, (unsigned __int64)a2);
    if ( !v8 )
    {
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v42);
      }
LABEL_41:
      v10 = 0;
      goto LABEL_42;
    }
    if ( (unsigned __int64)v41 <= 1 )
    {
      sub_9000((__int64)"%a: detected millicode thunk %s\n", 0.0, a2);
      v23 = (char *)needle;
      if ( (_QWORD)v43 )
        v23 = v42;
      set_name(a2, v23, 6144);
      goto LABEL_54;
    }
    v16 = is_uname(dest);
    v17 = v43;
    if ( v16 )
    {
      v18 = (char *)needle;
      if ( (_QWORD)v43 )
        v18 = v42;
      v19 = needle;
      if ( (_QWORD)v41 )
        v19 = (const char *)dest;
      v37 = v18;
      s1 = (char *)v19;
      v20 = strstr(v19, v18);
      if ( !v20 || v20 - s1 == -1 )
      {
        sub_9000(
          (__int64)"%a: detected millicode thunk %s but current name is %s, rename for better analysis\n",
          0.0,
          a2,
          v37);
LABEL_54:
        v17 = v43;
      }
    }
    if ( v17 && (v21 = v17 - 1, v17 != 1) )
    {
      v24 = v42;
      v25 = dest;
      if ( *((_QWORD *)&v41 + 1) < v17 )
      {
        v38 = v42;
        dest = (void *)qvector_reserve(&dest, dest, v17, 1);
        v24 = v38;
        v25 = dest;
        v21 = v17 - 1;
      }
      s1c = (char *)v21;
      *(_QWORD *)&v41 = v17;
      memmove(v25, v24, v21);
      s1c[(_QWORD)dest] = 0;
    }
    else
    {
      *(_QWORD *)&v41 = 0;
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
  }
  if ( !strncmp(v11, "ac_pop_13_to_", 0xDu) )
  {
    v28 = strtoull(v11 + 13, &endptr, 10);
    v15 = v42;
    if ( v28 - 13 <= 0xD )
    {
      v29 = *endptr;
      if ( v29 == 0 || v29 == 118 || v29 == 95 )
      {
        v14 = 4 * v28 - 48;
        if ( !v42 )
          goto LABEL_49;
        goto LABEL_71;
      }
    }
    goto LABEL_59;
  }
  if ( !strncmp(v11, "prolog_save", 0xBu) )
  {
    v30 = strtoull(v11 + 11, &endptr, 10);
    if ( v30 - 13 <= 0xD || !v30 )
    {
      if ( !*endptr
        || (s1b = endptr, !strncmp(endptr, "_sub4", 5u))
        || *s1b == 115 && s1b[1] == 112
        || !strncmp(s1b, "sp_sub4", 7u) )
      {
        v15 = v42;
        if ( !v42 )
          goto LABEL_48;
LABEL_47:
        *(_QWORD *)&v43 = 0;
        qfree(v15);
LABEL_48:
        v14 = 0;
        goto LABEL_49;
      }
    }
    goto LABEL_22;
  }
  if ( !strncmp(v11, "epilog_load", 0xBu) )
  {
    v12 = v11 + 11;
LABEL_14:
    v13 = strtoull(v12, &endptr, 10);
    if ( (v13 - 13 <= 0xD || !v13) && (!*endptr || !strncmp(endptr, "_add4", 5u)) )
    {
LABEL_18:
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v42);
      }
      v14 = -1;
      goto LABEL_49;
    }
LABEL_22:
    v15 = v42;
    if ( !v42 )
      goto LABEL_24;
LABEL_23:
    *(_QWORD *)&v43 = 0;
    qfree(v15);
    goto LABEL_24;
  }
  if ( !strncmp(v11, "epilog_restore", 0xEu) )
  {
    v12 = v11 + 14;
    goto LABEL_14;
  }
  if ( !strncmp(v11, "st_r13_to_r", 0xBu) )
  {
    v31 = strtoull(v11 + 11, &endptr, 10);
    v15 = v42;
    if ( v31 - 13 <= 0xD )
      goto LABEL_46;
    goto LABEL_59;
  }
  if ( strncmp(v11, "ld_r13_to_r", 0xBu) || strtoull(v11 + 11, &endptr, 10) - 13 > 0xD )
    goto LABEL_22;
  if ( *endptr )
  {
    if ( !strncmp(endptr, "_ret", 4u) )
    {
      v14 = -1;
      goto LABEL_79;
    }
    goto LABEL_22;
  }
  v14 = 0;
LABEL_79:
  v15 = v42;
  if ( v42 )
  {
LABEL_71:
    *(_QWORD *)&v43 = 0;
    qfree(v15);
  }
LABEL_49:
  if ( a3 )
    *a3 = v14;
LABEL_42:
  if ( dest )
  {
    *(_QWORD *)&v41 = 0;
    qfree(dest);
  }
  return v10;
}
