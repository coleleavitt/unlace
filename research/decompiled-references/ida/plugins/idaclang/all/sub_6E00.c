unsigned __int64 __fastcall sub_6E00(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  void *v7; // rdi
  const char *i; // rax
  int v9; // edx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  netnode_check(&v11, "$ idaclang", 0, 0);
  if ( (unsigned __int8)netnode_exist(&v11) )
  {
    netnode_qsupstr(v11, a1 + 8, 0, 112);
    netnode_qsupstr(v11, a1 + 40, 3, 112);
    netnode_supval(v11, 1, a1 + 32, 4, 112);
    netnode_supval(v11, 4, a1 + 36, 4, 112);
  }
  else if ( *(_QWORD *)(a1 + 16) <= 1u )
  {
    sub_6A00(a1, (__int64)"$ idaclang");
  }
  plugin_options = (const char *)get_plugin_options("idaclang");
  v13 = nullptr;
  v3 = plugin_options;
  v14 = 0;
  if ( plugin_options )
  {
    v4 = strlen(plugin_options);
    v5 = v4 + 1;
    v6 = v4;
    v13 = (void *)qvector_reserve(&v13, 0, v4 + 1, 1);
    *(_QWORD *)&v14 = v5;
    memmove(v13, v3, v6);
    *((_BYTE *)v13 + v6) = 0;
    v7 = v13;
    if ( (unsigned __int64)v14 > 1 )
    {
      v12 = 0;
      for ( i = (const char *)qstrtok(v13, ":", &v12); i; i = (const char *)qstrtok(0, ":", &v12) )
      {
        v9 = *(unsigned __int8 *)i;
        if ( v9 != 116 || i[1] )
        {
          if ( v9 != 100 || i[1] )
            *(_DWORD *)(a1 + 36) = strtol(i, nullptr, 16);
          else
            *(_DWORD *)(a1 + 32) |= 2u;
        }
        else
        {
          *(_DWORD *)(a1 + 32) |= 1u;
        }
      }
      v7 = v13;
    }
    if ( v7 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v7);
    }
  }
  return v15 - __readfsqword(0x28u);
}

