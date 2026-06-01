__int64 __fastcall sub_25E720(__int64 a1, __int64 *a2, __int64 a3, _BYTE *a4)
{
  const char *v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // r15d
  const char *v12; // rsi
  unsigned int v13; // eax
  char *v14; // rax
  int tinfo_size; // eax
  char *v16; // rbx
  __int64 v17; // r15
  char v18; // al
  __int64 v19; // rbx
  __int64 v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rbx
  size_t v24; // r12
  const void *v25; // r15
  __int64 v26; // rbx
  size_t v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  char *v30; // rax
  char v31; // dl
  char *v32; // rax
  char *v33; // rax
  size_t v34; // rax
  __int64 v35; // rbx
  size_t v36; // r12
  size_t v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  char *s; // [rsp+10h] [rbp-118h]
  void *v42; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v43; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v44; // [rsp+50h] [rbp-D8h]
  char v45; // [rsp+5Eh] [rbp-CAh]
  char v46; // [rsp+5Fh] [rbp-C9h]
  char v47[127]; // [rsp+60h] [rbp-C8h] BYREF
  char v48; // [rsp+DFh] [rbp-49h] BYREF
  char v49; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+E8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(get_module_data() + 607) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_295900(a3) && *(_QWORD *)a1 <= 1u )
    {
      if ( a2 )
      {
        v24 = 8;
        v25 = &unk_3F0190;
        if ( !*(_QWORD *)a1 )
        {
          v24 = 9;
          v25 = &unk_3F0199;
        }
        v26 = a2[1];
        v27 = v24;
        if ( v26 )
          v27 = --v26 + v24;
        v28 = *a2;
        if ( a2[2] < v27 + 1 )
        {
          v29 = qvector_reserve();
          *a2 = v29;
          v28 = v29;
        }
        a2[1] = v27 + 1;
        *(_BYTE *)(v28 + v27) = 0;
        memmove((void *)(v26 + *a2), v25, v24);
      }
      return 1;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA && !*(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v19 = a2[1];
        if ( v19 )
        {
          v20 = v19 + 10;
          v21 = v19 + 11;
          --v19;
        }
        else
        {
          v21 = 12;
          v20 = 11;
        }
        v22 = *a2;
        if ( a2[2] < v21 )
        {
          v39 = qvector_reserve();
          *a2 = v39;
          v22 = v39;
        }
        a2[1] = v21;
        *(_BYTE *)(v22 + v20) = 0;
        v23 = *a2 + v19;
        *(_QWORD *)v23 = 0x74706C6C756E2001LL;
        *(_DWORD *)(v23 + 7) = 537031284;
      }
      return 1;
    }
  }
  if ( (unsigned __int8)is_enum() )
  {
    v7 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v7 = *(const char **)(a1 + 16);
    sub_323780(&v42, v7);
    v8 = *(char *)(a1 + 15);
    v9 = -1;
    if ( (unsigned __int64)(int)(8 * v8) <= 0x3F )
      v9 = (1LL << (8 * (unsigned __int8)v8)) - 1;
    v10 = sub_259F60(a2, (__int64)&v42, *(unsigned __int8 *)(a1 + 14), *(_QWORD *)a1 & v9, v8, 1);
    clear_tinfo_t();
    return v10;
  }
  v10 = is_stroff();
  if ( (_BYTE)v10 )
  {
    v12 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v12 = *(const char **)(a1 + 16);
    v13 = sub_25E490(a2, (__int64)v12, *(_QWORD *)a1);
    v10 = v13;
    if ( a4 )
      *a4 = v13;
    return v10;
  }
  if ( !(unsigned __int8)is_char() )
    return v10;
  if ( !a2 )
    return 1;
  v14 = (char *)tag_on();
  if ( v14 >= &v49 )
  {
    if ( !under_debugger )
      sub_37B760(518);
LABEL_91:
    BUG();
  }
  *v14 = 39;
  s = v14 + 1;
  if ( v14 + 1 >= &v49 )
  {
    v48 = 0;
    s = &v48;
  }
  v44 = *(_QWORD *)a1;
  v43 = 0;
  v42 = (void *)qvector_reserve();
  memset(v42, 0, 8u);
  *(_QWORD *)&v43 = 8;
  get_default_encoding_idx();
  get_encoding_name();
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int64)tinfo_size <= 8 )
  {
    if ( tinfo_size )
    {
      v16 = s;
      v17 = tinfo_size - 1;
      while ( 1 )
      {
        v18 = *((_BYTE *)&v44 + v17);
        if ( v18 )
        {
          if ( v18 == 34 )
          {
            if ( v16 >= &v49 )
            {
              if ( !under_debugger )
                sub_37B760(518);
              goto LABEL_91;
            }
            v32 = v16 + 1;
            *v16 = 34;
            if ( v16 + 1 < &v49 )
            {
LABEL_58:
              v16 = v32;
              goto LABEL_28;
            }
LABEL_57:
            v48 = 0;
            v16 = &v48;
            goto LABEL_28;
          }
          if ( v18 != 39 )
          {
            v45 = *((_BYTE *)&v44 + v17);
            v46 = 0;
            if ( v18 >= 0 || convert_encoding() == 1 )
              str2user();
            else
              qsnprintf();
            v16 += strlen(v16);
            goto LABEL_28;
          }
          if ( v16 >= &v49 )
          {
            if ( !under_debugger )
              sub_37B760(518);
            goto LABEL_91;
          }
          *v16 = 92;
          if ( v16 + 1 >= &v49 )
            goto LABEL_57;
          v32 = v16 + 2;
          v16[1] = 39;
          if ( v16 + 2 < &v49 )
            goto LABEL_58;
        }
        else
        {
          if ( v16 == s && (_DWORD)v17 )
            goto LABEL_28;
          if ( v16 >= &v49 )
          {
            if ( !under_debugger )
              sub_37B760(520);
            goto LABEL_91;
          }
          v30 = (char *)&unk_3F01A3;
          if ( v16 != &v48 )
          {
            do
            {
              v31 = *v30++;
              *v16 = v31;
              if ( !v31 )
                goto LABEL_28;
            }
            while ( ++v16 != &v48 );
          }
        }
        v48 = 0;
        v16 = &v48;
LABEL_28:
        if ( (_DWORD)--v17 == -1 )
          goto LABEL_66;
      }
    }
    v16 = s;
LABEL_66:
    if ( v16 >= &v49 )
    {
      if ( !under_debugger )
        sub_37B760(518);
      goto LABEL_91;
    }
    *v16 = 39;
    if ( v16 + 1 >= &v49 )
      v48 = 0;
    v33 = (char *)tag_off();
    if ( v33 >= &v49 )
    {
      if ( !under_debugger )
        sub_37B760(519);
      goto LABEL_91;
    }
    *v33 = 0;
    v34 = strlen(v47);
    v35 = a2[1];
    v36 = v34;
    v37 = v34;
    if ( v35 )
    {
      --v35;
      v37 = v34 + v35;
    }
    v38 = *a2;
    if ( a2[2] < v37 + 1 )
    {
      v40 = qvector_reserve();
      *a2 = v40;
      v38 = v40;
    }
    a2[1] = v37 + 1;
    *(_BYTE *)(v38 + v37) = 0;
    memmove((void *)(*a2 + v35), v47, v36);
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
    return 1;
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v10;
}

