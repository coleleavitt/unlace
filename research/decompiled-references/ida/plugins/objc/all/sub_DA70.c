unsigned __int64 __fastcall sub_DA70(_DWORD *a1)
{
  const char *plugin_options; // rax
  const char *v3; // rbx
  size_t v4; // rax
  unsigned __int64 v5; // r13
  size_t v6; // rbp
  void *v7; // rdi
  const char *i; // rax
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // rbp
  __int64 v13; // rax
  char v15; // r13
  __int64 v16; // rax
  void *v17; // [rsp+10h] [rbp-98h]
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+38h] [rbp-70h]
  char *v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+58h] [rbp-50h]
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  read_config2();
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_supval();
    netnode_supval();
  }
  plugin_options = (const char *)get_plugin_options();
  v3 = plugin_options;
  if ( !plugin_options )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 2208LL) = a1[3];
    v16 = *(_QWORD *)a1;
    *(_BYTE *)(v16 + 2216) = a1[2];
    *(_BYTE *)(v16 + 2216) &= 1u;
    return v22 - __readfsqword(0x28u);
  }
  v4 = strlen(plugin_options);
  v5 = v4 + 1;
  v6 = v4;
  v17 = (void *)qvector_reserve();
  memmove(v17, v3, v6);
  *((_BYTE *)v17 + v6) = 0;
  v7 = v17;
  if ( v5 <= 1 )
    goto LABEL_20;
  v18 = 0;
  v19 = 0;
  for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
  {
    v9 = i;
    if ( !i )
      break;
    v20 = 0;
    v21 = 0;
    v10 = strlen(i);
    v11 = v10 + 1;
    v12 = v10;
    v20 = (char *)qvector_reserve();
    *(_QWORD *)&v21 = v11;
    memmove(v20, v9, v12);
    v20[v12] = 0;
    if ( !(_QWORD)v21 )
    {
      if ( v20 )
        qfree();
      goto LABEL_8;
    }
    if ( (_QWORD)v21 != 3 )
    {
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
LABEL_8:
      sub_D8D0(&v18);
      continue;
    }
    v15 = sub_D990((__int64)a1, &v20, &v18);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( !v15 )
      goto LABEL_8;
  }
  if ( (unsigned __int64)v19 > 1 )
    sub_EDF0(v18, ":");
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  v7 = v17;
LABEL_20:
  *(_DWORD *)(*(_QWORD *)a1 + 2208LL) = a1[3];
  v13 = *(_QWORD *)a1;
  *(_BYTE *)(v13 + 2216) = a1[2];
  *(_BYTE *)(v13 + 2216) &= 1u;
  if ( v7 )
    qfree();
  return v22 - __readfsqword(0x28u);
}
