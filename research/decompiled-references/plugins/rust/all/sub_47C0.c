unsigned __int64 __fastcall sub_47C0(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rbp
  void *v8; // rdi
  char *v9; // rcx
  __int64 v10; // rax
  const char *v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  size_t v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rsi
  size_t v20; // rdx
  char *v21; // rax
  char *v22; // r8
  unsigned __int64 v23; // rdx
  char *v24; // rbp
  __int64 v25; // rax
  size_t v26; // r8
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r13
  const char *v35; // rbp
  char v36; // al
  char v37; // al
  char *v38; // [rsp+0h] [rbp-98h]
  size_t v39; // [rsp+8h] [rbp-90h]
  size_t v40; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 212) )
    return v45 - __readfsqword(0x28u);
  read_config2("rust", 1, &off_9B00, 4, 0, 0, 0, a1);
  reg_str_get(a1 + 104, "RustDemanglerPath", 0);
  plugin_options = (const char *)get_plugin_options("rust");
  src = nullptr;
  v4 = plugin_options;
  v42 = 0;
  if ( !plugin_options )
  {
    v43 = 0;
    v44 = 0;
    goto LABEL_19;
  }
  v5 = strlen(plugin_options);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)qvector_reserve(&src, 0, v5 + 1, 1);
  *(_QWORD *)&v42 = v6;
  src = v8;
  memmove(v8, v4, v7);
  *((_BYTE *)src + v7) = 0;
  v9 = (char *)src;
  v10 = v42;
  v44 = 0;
  v43 = 0;
  v11 = (const char *)src;
  if ( !(_QWORD)v42 )
    goto LABEL_19;
  v38 = (char *)src + v42 - 1;
  if ( src >= v38 )
  {
    if ( (_QWORD)v42 == 1 )
      goto LABEL_19;
    v12 = 0;
    v14 = 0;
    goto LABEL_33;
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    v21 = strchr(v11, 58);
    v22 = v38;
    v23 = v14 + 1;
    v24 = v21;
    if ( v21 )
      v22 = v21;
    v26 = v22 - v11;
    if ( v13 < v23 )
    {
      v39 = v26;
      v43 = qvector_reserve(&v43, v12, v23, 24);
      v14 = v44;
      v12 = v43;
      v26 = v39;
    }
    v15 = 3 * v14;
    v16 = v26;
    v17 = v12 + 8 * v15;
    *(_OWORD *)(v17 + 8) = 0;
    *(_QWORD *)v17 = 0;
    *(_QWORD *)&v44 = v44 + 1;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      --v18;
      v16 = v26 + v18;
    }
    v19 = *(_QWORD *)v17;
    v20 = v16 + 1;
    if ( v16 != -1 )
    {
      v40 = v26;
      v25 = qvector_reserve(v17, v19, v20, 1);
      v26 = v40;
      v20 = v16 + 1;
      *(_QWORD *)v17 = v25;
      v19 = v25;
    }
    *(_QWORD *)(v17 + 8) = v20;
    *(_BYTE *)(v19 + v16) = 0;
    memmove((void *)(v18 + *(_QWORD *)v17), v11, v26);
    v12 = v43;
    v14 = v44;
    if ( !v24 )
      break;
    v11 = v24 + 1;
    if ( v24 + 1 >= v38 )
      break;
    v13 = *((_QWORD *)&v44 + 1);
  }
  v10 = v42;
  if ( (unsigned __int64)v42 >= 2 )
  {
    v9 = (char *)src;
LABEL_33:
    if ( v9[v10 - 2] == 58 )
    {
      if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v14 + 1) )
      {
        v43 = qvector_reserve(&v43, v12, v14 + 1, 24);
        v14 = v44;
        v12 = v43;
      }
      v33 = v12 + 24 * v14;
      *(_QWORD *)v33 = 0;
      v12 = v43;
      *(_OWORD *)(v33 + 8) = 0;
      v14 = v44 + 1;
      *(_QWORD *)&v44 = v44 + 1;
    }
  }
  v34 = v12 + 24 * v14;
  if ( v34 != v12 )
  {
    while ( *(_QWORD *)(v12 + 8) )
    {
      v35 = *(const char **)v12;
      if ( **(_BYTE **)v12 == 111 && v35[1] == 110 && !v35[2] )
      {
        v36 = 1;
      }
      else
      {
        if ( strcmp(*(const char **)v12, "off") )
          goto LABEL_46;
        v36 = 0;
      }
      v12 += 24;
      *(_BYTE *)(a1 + 213) = v36;
      if ( v34 == v12 )
        goto LABEL_19;
    }
    v35 = (const char *)&unk_71C5;
LABEL_46:
    sub_3060((__int64)"rust: invalid command line option \"%s\"", v35);
  }
LABEL_19:
  v27 = *(_BYTE *)(a1 + 213);
  *(_BYTE *)(a1 + 212) = 1;
  if ( v27 != -1 )
    goto LABEL_20;
  v37 = sub_4580();
  *(_BYTE *)(a1 + 213) = v37;
  if ( v37 )
  {
    sub_31E0((__int64)"RUST: the input file probably contains Rust code\n");
    v27 = *(_BYTE *)(a1 + 213);
LABEL_20:
    if ( v27 )
      sub_31E0((__int64)"RUST: plugin has been enabled\n");
  }
  v28 = v43;
  if ( v43 )
  {
    v29 = v44;
    if ( (_QWORD)v44 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32);
          v28 = v43;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v28);
  }
  if ( src )
  {
    *(_QWORD *)&v42 = 0;
    qfree(src);
  }
  return v45 - __readfsqword(0x28u);
}
