unsigned __int64 __fastcall sub_B4B0(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdi
  size_t v12; // rax
  const char *v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  size_t v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rsi
  size_t v22; // rdx
  char *v23; // rax
  unsigned __int64 v24; // r8
  char *v25; // rbp
  __int64 v26; // rax
  size_t v27; // r8
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r12
  const char *v31; // rbp
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  size_t v35; // r8
  int v36; // eax
  unsigned int v37; // esi
  int v38; // ebp
  __int64 i; // rbp
  _QWORD *v40; // rax
  char *v41; // rdi
  size_t v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  const char *v48; // rsi
  unsigned __int64 v49; // [rsp+0h] [rbp-E8h]
  size_t v50; // [rsp+0h] [rbp-E8h]
  size_t v51; // [rsp+8h] [rbp-E0h]
  size_t v52; // [rsp+8h] [rbp-E0h]
  size_t v53; // [rsp+10h] [rbp-D8h]
  char *src; // [rsp+50h] [rbp-98h]
  size_t v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+70h] [rbp-78h]
  __int64 v57; // [rsp+78h] [rbp-70h]
  const char *s1; // [rsp+90h] [rbp-58h]
  size_t s1_8; // [rsp+98h] [rbp-50h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 562) )
    return v60 - __readfsqword(0x28u);
  read_config2();
  plugin_options = (const char *)get_plugin_options();
  v4 = plugin_options;
  if ( plugin_options )
  {
    v5 = strlen(plugin_options);
    v6 = v5 + 1;
    v7 = v5;
    src = (char *)qvector_reserve();
    v55 = v6;
    memmove(src, v4, v7);
    src[v7] = 0;
    v11 = src;
    v12 = v6;
    v57 = 0;
    v56 = 0;
    v13 = src;
    if ( v6 )
    {
      v14 = (unsigned __int64)&src[v6 - 1];
      v15 = 0;
      v49 = v14;
      if ( (unsigned __int64)src >= v14 )
      {
        if ( v6 == 1 )
        {
LABEL_48:
          *(_BYTE *)(a1 + 562) = 1;
          if ( v15 )
          {
            if ( v57 )
            {
              for ( i = 0; i != v57; ++i )
              {
                v40 = (_QWORD *)(v15 + 24 * i);
                if ( *v40 )
                {
                  v40[1] = 0;
                  qfree();
                }
                v15 = v56;
              }
            }
            qfree();
          }
          v11 = src;
          goto LABEL_56;
        }
        v16 = 0;
      }
      else
      {
        v16 = 0;
        do
        {
          v23 = strchr(v13, 58);
          v24 = v49;
          v25 = v23;
          if ( v23 )
            v24 = (unsigned __int64)v23;
          v27 = v24 - (_QWORD)v13;
          if ( v16 != -1 )
          {
            v51 = v27;
            v56 = qvector_reserve();
            v16 = v57;
            v15 = v56;
            v27 = v51;
          }
          v17 = 3 * v16;
          v18 = v27;
          v19 = v15 + 8 * v17;
          *(_OWORD *)(v19 + 8) = 0;
          *(_QWORD *)v19 = 0;
          ++v57;
          v20 = *(_QWORD *)(v19 + 8);
          if ( v20 )
          {
            --v20;
            v18 = v27 + v20;
          }
          v21 = *(_QWORD *)v19;
          v22 = v18 + 1;
          if ( v18 != -1 )
          {
            v53 = v27;
            v26 = qvector_reserve();
            v27 = v53;
            v22 = v18 + 1;
            *(_QWORD *)v19 = v26;
            v21 = v26;
          }
          *(_QWORD *)(v19 + 8) = v22;
          *(_BYTE *)(v21 + v18) = 0;
          memmove((void *)(v20 + *(_QWORD *)v19), v13, v27);
          v15 = v56;
          v16 = v57;
          if ( !v25 )
            break;
          v13 = v25 + 1;
        }
        while ( (unsigned __int64)(v25 + 1) < v49 );
        v12 = v55;
        if ( v55 == 1 )
        {
LABEL_23:
          v29 = v15 + 24 * v16;
          if ( v29 != v15 )
          {
            do
            {
              v30 = *(_QWORD *)(v15 + 8);
              if ( !v30 )
              {
                v31 = ::s1;
LABEL_59:
                sub_6830((__int64)"golang: invalid command line option \"%s\"", (__int64)v31, v8, v14, v9, v10, v49);
              }
              v31 = *(const char **)v15;
              if ( !strcmp(*(const char **)v15, "force") )
              {
                getinf_buf();
                getinf_flag();
                if ( (unsigned __int8)getinf_flag() )
                {
                  netnode_check();
                  if ( (unsigned int)netnode_altval() > 0x74 )
                    get_ph();
                }
                set_compiler();
              }
              else if ( !strcmp(v31, "off") )
              {
                *(_BYTE *)(a1 + 558) = 0;
              }
              else if ( !strcmp(v31, "no_rtypes") )
              {
                *(_BYTE *)(a1 + 559) = 0;
              }
              else if ( !strcmp(v31, "rname_len2") )
              {
                *(_DWORD *)(a1 + 572) = 2;
              }
              else if ( !strcmp(v31, "rname_len1") )
              {
                *(_DWORD *)(a1 + 572) = 1;
              }
              else if ( !strcmp(v31, "import_lnnums") )
              {
                *(_BYTE *)(a1 + 560) = 1;
              }
              else if ( !strcmp(v31, "no_func_end_from_pcval_tabs") )
              {
                *(_BYTE *)(a1 + 561) = 0;
              }
              else
              {
                v49 = v30 - 1;
                v32 = strstr(v31, "force_regabi");
                if ( !v32 || v32 - v31 == -1 )
                  goto LABEL_59;
                v33 = 12;
                s1 = nullptr;
                if ( v49 <= 0xC )
                  v33 = v30 - 1;
                v34 = v33;
                v35 = v49 - v33;
                if ( v49 == v33 )
                  goto LABEL_37;
                v41 = nullptr;
                v42 = v35 + 1;
                if ( v35 != -1 )
                {
                  v50 = v35 + 1;
                  v52 = v35;
                  s1 = (const char *)qvector_reserve();
                  v35 = v52;
                  v41 = (char *)s1;
                  v42 = v50;
                }
                s1_8 = v42;
                v49 = v35;
                memmove(v41, &v31[v34], v35);
                s1[v49] = 0;
                if ( !s1_8 || (v43 = strcmp(s1, "=on"), s1_8 == 1) || !v43 )
                {
LABEL_37:
                  v36 = 117;
                  v37 = 200;
                }
                else
                {
                  if ( strcmp(s1, "=off") )
                  {
                    v48 = ::s1;
                    if ( *(_QWORD *)(v15 + 8) )
                      v48 = *(const char **)v15;
                    sub_6830(
                      (__int64)"golang: command line option \"%s\" invalid, use: \"force_regabi[=on|=off]\"",
                      (__int64)v48,
                      v44,
                      v45,
                      v46,
                      v47,
                      v49);
                  }
                  v36 = 103;
                  v37 = 117;
                }
                *(_DWORD *)(a1 + 404) = v36;
                sub_B160(a1, v37);
                if ( !byte_284D0 )
                {
                  v38 = *(_DWORD *)(a1 + 404);
                  netnode_check();
                  netnode_supset();
                  netnode_check();
                  netnode_supset();
                  if ( !v38 )
                    byte_284D0 = 1;
                  *(_BYTE *)(a1 + 556) = 1;
                  if ( (unsigned __int8)getinf_flag() )
                  {
                    netnode_check();
                    if ( (unsigned int)netnode_altval() > 0x74 )
                      get_ph();
                  }
                  setinf();
                }
                if ( s1 )
                  qfree();
              }
              v15 += 24;
            }
            while ( v29 != v15 );
            v15 = v56;
          }
          goto LABEL_48;
        }
        v11 = src;
      }
      if ( v11[v12 - 2] == 58 )
      {
        v8 = v16 + 1;
        if ( v16 != -1 )
        {
          v56 = qvector_reserve();
          v16 = v57;
          v15 = v56;
        }
        v28 = v15 + 24 * v16;
        *(_QWORD *)v28 = 0;
        v15 = v56;
        *(_OWORD *)(v28 + 8) = 0;
        v16 = ++v57;
      }
      goto LABEL_23;
    }
    *(_BYTE *)(a1 + 562) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 562) = 1;
    v11 = nullptr;
  }
LABEL_56:
  if ( v11 )
    qfree();
  return v60 - __readfsqword(0x28u);
}
