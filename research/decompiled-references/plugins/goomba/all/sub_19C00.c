void *__fastcall sub_19C00(__int64 a1)
{
  __int64 v2; // r12
  int v3; // eax
  __int64 v4; // r14
  char *v5; // r15
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  const char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  char *v19; // rax
  char v20; // dl
  const char *v21; // [rsp+8h] [rbp-40h]

  v2 = a1 + 32;
  v3 = qsnprintf(&unk_4E5E0, 1024, "0x%llx", *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 48);
  v5 = (char *)&unk_4E5E0 + v3;
  if ( a1 + 32 == v4 )
    return &unk_4E5E0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v4 + 48);
      if ( !v8 )
        goto LABEL_5;
      v9 = v5;
      v10 = (char *)(byte_4E9E0 - v5);
      v5 += (int)qsnprintf(v5, byte_4E9E0 - v5, " + 0x%llx*", v8);
      v12 = *(_DWORD *)(a1 + 16);
      if ( *(_DWORD *)(v4 + 36) >= v12 )
        break;
      hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v9, v10, v11);
      v21 = (const char *)hexdsp(278, v4 + 32);
      v15 = sub_19B50(a1 + 72, v4 + 32, v14);
      v16 = "ZEXT";
      if ( a1 + 80 != v15 )
        v16 = "SEXT";
      v5 += (int)qsnprintf(v5, byte_4E9E0 - v5, "%s(%s)", v16, v21);
      v4 = std::_Rb_tree_increment(v4);
      if ( v2 == v4 )
        return &unk_4E5E0;
    }
    if ( *(_DWORD *)(v4 + 36) <= v12 )
      break;
    v6 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v9, v10, v11);
    v7 = (const char *)v6(278, v4 + 32);
    v5 += (int)qsnprintf(v5, byte_4E9E0 - v5, "TRUNC(%s)", v7);
LABEL_5:
    v4 = std::_Rb_tree_increment(v4);
    if ( v2 == v4 )
      return &unk_4E5E0;
  }
  if ( v5 < byte_4E9E0 )
  {
    v18 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v9, v10, v11);
    v19 = (char *)v18(278, v4 + 32);
    if ( v5 == &byte_4E9DF )
    {
LABEL_16:
      byte_4E9DF = 0;
      v5 = &byte_4E9DF;
    }
    else
    {
      while ( 1 )
      {
        v20 = *v19++;
        *v5 = v20;
        if ( !v20 )
          break;
        if ( ++v5 == &byte_4E9DF )
          goto LABEL_16;
      }
    }
    goto LABEL_5;
  }
  if ( under_debugger )
    BUG();
  interr(520);
  return (void *)sub_19DF0();
}
