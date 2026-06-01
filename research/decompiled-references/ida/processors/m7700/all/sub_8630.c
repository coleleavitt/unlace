__int64 __fastcall sub_8630(_QWORD *a1)
{
  char v2; // dl
  __int64 v3; // rax
  __int64 *v4; // rbp
  const char *v5; // r13
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r15
  void *v10; // rdi
  __int64 v11; // rax

  v2 = choose_ioport_device();
  v3 = a1[18];
  if ( !v2 )
  {
    if ( !v3 )
      goto LABEL_3;
    v5 = (const char *)a1[17];
    if ( !strcmp(v5, "NONE") )
    {
      sub_8560((__int64)"No devices are defined in the configuration file %s", "m7700.cfg");
      return 0;
    }
LABEL_11:
    if ( !v5 )
      return 0;
    v4 = a1 + 16;
    v7 = strlen(v5);
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 + 1;
      v10 = (void *)v5;
      if ( a1[19] < v7 + 1 )
      {
        v11 = qvector_reserve();
        a1[17] = v11;
        v10 = (void *)v11;
      }
      a1[18] = v9;
      memmove(v10, v5, v8);
      *(_BYTE *)(a1[17] + v8) = 0;
      goto LABEL_5;
    }
LABEL_4:
    a1[18] = 0;
LABEL_5:
    netnode_supset();
    sub_79A0(v4, 7);
    return 0;
  }
  if ( v3 )
  {
    v5 = (const char *)a1[17];
    if ( !strcmp(v5, "NONE") )
      return 0;
    goto LABEL_11;
  }
LABEL_3:
  v4 = a1 + 16;
  if ( qword_C098 )
    goto LABEL_4;
  return 0;
}

