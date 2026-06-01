void __fastcall sub_83A00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  const char *v5; // rdx
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  int v8; // r14d
  __int64 v9; // rax
  const char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdi
  char *s2; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 224);
  if ( (v2 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v2 == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 232) + 409LL) || (v3 = *(_DWORD *)(a2 + 240), v3 == -1) )
  {
    sub_7F610();
    v12 = a1 + 48;
    *(_QWORD *)(v12 - 48) = &off_C94F0;
    sub_1B750(v12);
  }
  else if ( (unsigned __int64)(unsigned int)(v3 + 1) >= *(_QWORD *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 136);
    v5 = ".debug_info";
    if ( v2 >= 0 )
      v5 = ".debug_types";
    v6 = *(_QWORD *)(v4 + 312);
    s2 = (char *)v5;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v4 + 304);
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = src;
        v11 = v7 + 72 * v9;
        if ( *(_QWORD *)(v11 + 32) )
          v10 = *(const char **)(v11 + 24);
        if ( !strcmp(v10, s2) )
          break;
        v9 = ++v8;
      }
      while ( v8 < v6 );
    }
  }
}
