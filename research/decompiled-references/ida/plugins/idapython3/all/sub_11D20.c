unsigned __int64 __fastcall sub_11D20(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v3; // rbx
  size_t v5; // r12
  const char *i; // rax
  const char *v7; // r14
  const char *v8; // rbx
  const char *v9; // r14
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // rbx
  char *v13; // rax
  size_t v14; // rax
  size_t v15; // r8
  size_t v16; // r14
  const char *v17; // rbx
  size_t v18; // r14
  const char *v19; // rbx
  char v20; // al
  int v21; // eax
  void *v22; // rdi
  size_t v23; // r14
  __int64 v24; // rax
  size_t v25; // [rsp+8h] [rbp-B0h]
  size_t v26; // [rsp+8h] [rbp-B0h]
  void *v27; // [rsp+20h] [rbp-98h]
  char *s1; // [rsp+40h] [rbp-78h]
  char *v29; // [rsp+60h] [rbp-58h]
  char *v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  plugin_options = (const char *)get_plugin_options();
  if ( !plugin_options )
    return v31 - __readfsqword(0x28u);
  v3 = plugin_options;
  if ( !*plugin_options )
    return v31 - __readfsqword(0x28u);
  v5 = strlen(plugin_options);
  v27 = (void *)qvector_reserve();
  memmove(v27, v3, v5);
  *((_BYTE *)v27 + v5) = 0;
  for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
  {
    v9 = i;
    if ( !i )
      break;
    v10 = strlen(i);
    v11 = v10 + 1;
    v12 = v10;
    s1 = (char *)qvector_reserve();
    memmove(s1, v9, v12);
    s1[v12] = 0;
    v7 = s1;
    v13 = strchr(s1, 61);
    if ( v13 )
    {
      *v13 = 0;
      if ( !v11 )
      {
        v7 = src;
LABEL_8:
        sub_7D60((__int64)"Unknown config directive: \"%s\"", v7);
LABEL_9:
        v7 = s1;
        goto LABEL_10;
      }
      v7 = s1;
      v8 = v13 + 1;
      if ( strcmp(s1, "run_script") )
      {
        if ( strcmp(s1, "run_script_when") )
        {
          if ( strcmp(s1, "IDAPYTHON_IDAUSR_SYSPATH") )
            goto LABEL_8;
          v18 = strlen(v8);
          v30 = (char *)qvector_reserve();
          memmove(v30, v8, v18);
          v30[v18] = 0;
          if ( v18 == -1 )
          {
            v19 = src;
          }
          else
          {
            v19 = v30;
            if ( !strcmp(v30, "YES") )
            {
              v20 = 1;
              goto LABEL_31;
            }
            if ( *v30 == 78 && v30[1] == 79 && !v30[2] )
            {
              v20 = 0;
LABEL_31:
              *(_BYTE *)(a1 + 185) = v20;
LABEL_32:
              if ( !v19 )
                goto LABEL_9;
LABEL_25:
              qfree();
              goto LABEL_9;
            }
          }
          sub_7D60((__int64)"Unknown 'IDAPYTHON_IDAUSR_SYSPATH' directive: '%s'.  Expected 'YES' or 'NO'", v19);
          v19 = v30;
          goto LABEL_32;
        }
        v16 = strlen(v8);
        v29 = (char *)qvector_reserve();
        memmove(v29, v8, v16);
        v29[v16] = 0;
        if ( v16 == -1 )
        {
          v17 = src;
          goto LABEL_23;
        }
        v17 = v29;
        if ( !strcmp(v29, "db_open") )
        {
          v21 = 1;
          goto LABEL_36;
        }
        if ( !strcmp(v29, "ui_ready") )
        {
          v21 = 2;
LABEL_36:
          *(_DWORD *)(a1 + 168) = v21;
        }
        else
        {
          if ( !strcmp(v29, "init") )
          {
            v21 = 3;
            goto LABEL_36;
          }
LABEL_23:
          sub_7D60(
            (__int64)"Unknown 'run_script_when' directive: '%s'. Valid values are: 'db_open', 'ui_ready' and 'init'",
            v17);
          v17 = v29;
        }
        if ( !v17 )
          goto LABEL_9;
        goto LABEL_25;
      }
      v14 = strlen(v8);
      v15 = v14;
      if ( v14 )
      {
        v22 = *(void **)(a1 + 144);
        v23 = v14 + 1;
        if ( *(_QWORD *)(a1 + 160) < v14 + 1 )
        {
          v26 = v14;
          v24 = qvector_reserve();
          *(_QWORD *)(a1 + 144) = v24;
          v15 = v26;
          v22 = (void *)v24;
        }
        *(_QWORD *)(a1 + 152) = v23;
        v25 = v15;
        memmove(v22, v8, v15);
        *(_BYTE *)(*(_QWORD *)(a1 + 144) + v25) = 0;
        v7 = s1;
      }
      else
      {
        *(_QWORD *)(a1 + 152) = 0;
      }
      if ( !*(_DWORD *)(a1 + 168) )
        *(_DWORD *)(a1 + 168) = 1;
    }
LABEL_10:
    if ( v7 )
      qfree();
  }
  if ( v27 )
    qfree();
  return v31 - __readfsqword(0x28u);
}

