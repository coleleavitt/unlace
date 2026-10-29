__int64 __fastcall sub_30F60(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // r13
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax

  v2 = *(__int64 **)(a1 + 144);
  v3 = &v2[*(_QWORD *)(a1 + 152)];
  if ( v3 != v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v8 = *v2;
      v9 = *(_QWORD *)(*v2 + 48);
      if ( !v4 )
        break;
      v6 = *(const char **)a2;
      v7 = src;
      if ( v9 )
        goto LABEL_9;
LABEL_4:
      if ( !strcmp(v7, v6) )
        return v8;
      if ( v3 == ++v2 )
        return 0;
    }
    if ( !v9 )
      return v8;
    v6 = src;
LABEL_9:
    v7 = *(const char **)(v8 + 40);
    goto LABEL_4;
  }
  return 0;
}
