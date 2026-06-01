const char *__fastcall sub_41C60(__int64 a1, int a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r12
  const char *v4; // r12
  __int64 v5; // r15
  int v6; // r13d
  const char **v7; // rbx
  int v8; // r14d
  const char **v9; // rbp
  int v10; // ebp

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v2 + 64) < a2 )
  {
    sub_33700((__int64)"Bad register number passed to ppc.get_register_value: %d", a2);
    return nullptr;
  }
  v3 = *(_BYTE **)(*(_QWORD *)(v2 + 56) + 8LL * a2);
  v4 = &v3[*v3 == 37];
  v5 = dbg;
  v6 = *(_DWORD *)(dbg + 64LL);
  if ( v6 > 0 )
  {
    v7 = *(const char ***)(dbg + 56LL);
    v8 = 0;
    v9 = v7;
    while ( strcasecmp(*v9, v4) )
    {
      ++v8;
      v9 += 4;
      if ( v8 == v6 )
      {
        if ( !strcasecmp(v4, "r1") )
        {
          v4 = "sp";
          goto LABEL_6;
        }
        if ( !strcasecmp(v4, "sp") )
        {
          v4 = "r1";
          goto LABEL_6;
        }
        if ( !strcasecmp(v4, "r2") )
        {
          v4 = "rtoc";
          goto LABEL_6;
        }
        goto LABEL_17;
      }
    }
    goto LABEL_6;
  }
  if ( !strcasecmp(v4, "r1") || !strcasecmp(v4, "sp") || !strcasecmp(v4, "r2") )
    return nullptr;
LABEL_17:
  if ( !strcasecmp(v4, "rtoc") )
    v4 = "r2";
  if ( v6 <= 0 )
    return nullptr;
  v7 = *(const char ***)(v5 + 56);
LABEL_6:
  v10 = 0;
  while ( strcasecmp(*v7, v4) )
  {
    ++v10;
    v7 += 4;
    if ( v10 == v6 )
      return nullptr;
  }
  return v4;
}

