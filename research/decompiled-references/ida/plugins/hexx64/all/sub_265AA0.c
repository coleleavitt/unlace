__int64 __fastcall sub_265AA0(__int64 a1, __int64 *a2, _QWORD *a3, _BYTE *a4, double a5)
{
  const char *v8; // rsi
  int v9; // r8d
  __int64 v10; // rax
  unsigned int v11; // r15d
  const char *v13; // rsi
  unsigned int v14; // eax
  char *v15; // rax
  unsigned __int64 v16; // rax
  int tinfo_size; // eax
  char *v18; // rbx
  __int64 v19; // r15
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rbx
  size_t v26; // r12
  const void *v27; // r15
  __int64 v28; // rbx
  size_t v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  char *v32; // rax
  char v33; // dl
  char *v34; // rax
  char *v35; // rax
  size_t v36; // rax
  __int64 v37; // rbx
  size_t v38; // r12
  size_t v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  char *s; // [rsp+10h] [rbp-118h]
  __int64 v44; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v45; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v46; // [rsp+50h] [rbp-D8h]
  char v47; // [rsp+5Eh] [rbp-CAh]
  char v48; // [rsp+5Fh] [rbp-C9h]
  char v49[127]; // [rsp+60h] [rbp-C8h] BYREF
  char v50; // [rsp+DFh] [rbp-49h] BYREF
  char v51; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+E8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(get_module_data() + 607) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_29CC80(a3) && *(_QWORD *)a1 <= 1u )
    {
      if ( a2 )
      {
        v26 = 8;
        v27 = &unk_41917B;
        if ( !*(_QWORD *)a1 )
        {
          v26 = 9;
          v27 = &unk_419184;
        }
        v28 = a2[1];
        v29 = v26;
        if ( v28 )
          v29 = --v28 + v26;
        v30 = *a2;
        if ( a2[2] < v29 + 1 )
        {
          v31 = qvector_reserve((__int64)a2, v30, v29 + 1, 1);
          *a2 = v31;
          v30 = v31;
        }
        a2[1] = v29 + 1;
        *(_BYTE *)(v30 + v29) = 0;
        memmove((void *)(v28 + *a2), v27, v26);
      }
      return 1;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA && !*(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v21 = a2[1];
        if ( v21 )
        {
          v22 = v21 + 10;
          v23 = v21 + 11;
          --v21;
        }
        else
        {
          v23 = 12;
          v22 = 11;
        }
        v24 = *a2;
        if ( a2[2] < v23 )
        {
          v41 = qvector_reserve((__int64)a2, v24, v23, 1);
          *a2 = v41;
          v24 = v41;
        }
        a2[1] = v23;
        *(_BYTE *)(v24 + v22) = 0;
        v25 = *a2 + v21;
        *(_QWORD *)v25 = 0x74706C6C756E2001LL;
        *(_DWORD *)(v25 + 7) = 537031284;
      }
      return 1;
    }
  }
  if ( (unsigned __int8)is_enum() )
  {
    v8 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v8 = *(const char **)(a1 + 16);
    sub_32ACB0(&v44, (__int64)v8);
    v9 = *(char *)(a1 + 15);
    v10 = -1;
    if ( (unsigned __int64)(8 * v9) <= 0x3F )
      v10 = (1LL << (8 * (unsigned __int8)v9)) - 1;
    v11 = sub_2612E0(a2, (__int64)&v44, *(unsigned __int8 *)(a1 + 14), *(_QWORD *)a1 & v10, v9, 1);
    clear_tinfo_t();
    return v11;
  }
  v11 = is_stroff();
  if ( (_BYTE)v11 )
  {
    v13 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v13 = *(const char **)(a1 + 16);
    v14 = sub_265810(a2, (__int64)v13, *(_QWORD *)a1, a5);
    v11 = v14;
    if ( a4 )
      *a4 = v14;
    return v11;
  }
  if ( !(unsigned __int8)is_char() )
    return v11;
  if ( !a2 )
    return 1;
  v15 = (char *)tag_on();
  if ( v15 >= &v51 )
  {
    if ( !under_debugger )
      sub_383060(0x206u, a5);
LABEL_91:
    BUG();
  }
  *v15 = 39;
  s = v15 + 1;
  if ( v15 + 1 >= &v51 )
  {
    v50 = 0;
    s = &v50;
  }
  v16 = *(_QWORD *)a1;
  v44 = 0;
  v46 = v16;
  v45 = 0;
  v44 = qvector_reserve((__int64)&v44, 0, 8, 1);
  memset((void *)(v44 + v45), 0, 8 - v45);
  *(_QWORD *)&v45 = 8;
  get_default_encoding_idx();
  get_encoding_name();
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int64)tinfo_size <= 8 )
  {
    if ( tinfo_size )
    {
      v18 = s;
      v19 = tinfo_size - 1;
      while ( 1 )
      {
        v20 = *((_BYTE *)&v46 + v19);
        if ( v20 )
        {
          if ( v20 == 34 )
          {
            if ( v18 >= &v51 )
            {
              if ( !under_debugger )
                sub_383060(0x206u, 0.0);
              goto LABEL_91;
            }
            v34 = v18 + 1;
            *v18 = 34;
            if ( v18 + 1 < &v51 )
            {
LABEL_58:
              v18 = v34;
              goto LABEL_28;
            }
LABEL_57:
            v50 = 0;
            v18 = &v50;
            goto LABEL_28;
          }
          if ( v20 != 39 )
          {
            v47 = *((_BYTE *)&v46 + v19);
            v48 = 0;
            if ( v20 >= 0 || convert_encoding() == 1 )
              str2user();
            else
              qsnprintf();
            v18 += strlen(v18);
            goto LABEL_28;
          }
          if ( v18 >= &v51 )
          {
            if ( !under_debugger )
              sub_383060(0x206u, 0.0);
            goto LABEL_91;
          }
          *v18 = 92;
          if ( v18 + 1 >= &v51 )
            goto LABEL_57;
          v34 = v18 + 2;
          v18[1] = 39;
          if ( v18 + 2 < &v51 )
            goto LABEL_58;
        }
        else
        {
          if ( v18 == s && (_DWORD)v19 )
            goto LABEL_28;
          if ( v18 >= &v51 )
          {
            if ( !under_debugger )
              sub_383060(0x208u, 0.0);
            goto LABEL_91;
          }
          v32 = (char *)&unk_41918E;
          if ( v18 != &v50 )
          {
            do
            {
              v33 = *v32++;
              *v18 = v33;
              if ( !v33 )
                goto LABEL_28;
            }
            while ( ++v18 != &v50 );
          }
        }
        v50 = 0;
        v18 = &v50;
LABEL_28:
        if ( (_DWORD)--v19 == -1 )
          goto LABEL_66;
      }
    }
    v18 = s;
LABEL_66:
    if ( v18 >= &v51 )
    {
      if ( !under_debugger )
        sub_383060(0x206u, 0.0);
      goto LABEL_91;
    }
    *v18 = 39;
    if ( v18 + 1 >= &v51 )
      v50 = 0;
    v35 = (char *)tag_off();
    if ( v35 >= &v51 )
    {
      if ( !under_debugger )
        sub_383060(0x207u, 0.0);
      goto LABEL_91;
    }
    *v35 = 0;
    v36 = strlen(v49);
    v37 = a2[1];
    v38 = v36;
    v39 = v36;
    if ( v37 )
    {
      --v37;
      v39 = v36 + v37;
    }
    v40 = *a2;
    if ( a2[2] < v39 + 1 )
    {
      v42 = qvector_reserve((__int64)a2, v40, v39 + 1, 1);
      *a2 = v42;
      v40 = v42;
    }
    a2[1] = v39 + 1;
    *(_BYTE *)(v40 + v39) = 0;
    memmove((void *)(*a2 + v37), v49, v38);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    return 1;
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  return v11;
}

