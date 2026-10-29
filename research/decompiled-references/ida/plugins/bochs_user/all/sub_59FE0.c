__int64 __fastcall sub_59FE0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  const char *v12; // rsi
  __int64 v14; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = s1;
      if ( v6 )
        v7 = *(const char **)(v4 + 32);
      v8 = s1;
      if ( v5 )
        v8 = *(const char **)a2;
      v9 = strcasecmp(v8, v7);
      v10 = *(_QWORD *)(v4 + 24);
      if ( v9 < 0 )
        v10 = *(_QWORD *)(v4 + 16);
      v11 = (v9 >> 31) & 1;
      if ( !v10 )
        break;
      v4 = v10;
    }
    if ( !(_BYTE)v11 )
    {
      v12 = s1;
      if ( !v5 )
        goto LABEL_13;
      goto LABEL_20;
    }
  }
  else
  {
    v4 = a1 + 8;
  }
  if ( v4 != *(_QWORD *)(a1 + 24) )
  {
    v14 = std::_Rb_tree_decrement();
    v12 = s1;
    v6 = *(_QWORD *)(v14 + 40);
    v4 = v14;
    if ( !*(_QWORD *)(a2 + 8) )
    {
LABEL_13:
      if ( !v6 )
        goto LABEL_14;
LABEL_23:
      if ( strcasecmp(*(const char **)(v4 + 32), v12) >= 0 )
        return v4;
      return 0;
    }
LABEL_20:
    v12 = *(const char **)a2;
    if ( !v6 )
    {
LABEL_14:
      if ( strcasecmp(s1, v12) >= 0 )
        return v4;
      return 0;
    }
    goto LABEL_23;
  }
  return 0;
}

