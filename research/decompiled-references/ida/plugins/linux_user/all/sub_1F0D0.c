__int64 __fastcall sub_1F0D0(__int64 a1)
{
  _DWORD *v2; // r13
  char v3; // bp
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  int v6; // edi
  char *v7; // rax
  __int64 result; // rax
  int v9; // edi
  char *v10; // rax

  v2 = (_DWORD *)(a1 + 1216);
  v3 = 1;
  sub_1ED60(a1, 0, 1);
  v4 = *(_DWORD **)(a1 + 1232);
  if ( v4 == (_DWORD *)(a1 + 1216) )
    goto LABEL_16;
  do
  {
    v5 = v4[10];
    if ( v4[15] == 1 )
    {
      if ( ptrace(PTRACE_KILL, v5, 0, 9) )
      {
        v9 = *__errno_location();
        if ( v9 != 3 )
        {
          v10 = strerror(v9);
          sub_143D0(a1, (__int64)"PTRACE_KILL %d: %s\n", v4[10], v10);
          goto LABEL_7;
        }
      }
    }
    else if ( v5 != -1 )
    {
      if ( sub_100E0(v5, 9u) )
      {
        v6 = *__errno_location();
        if ( v6 != 3 )
        {
          v7 = strerror(v6);
          sub_143D0(a1, (__int64)"SIGKILL %d: %s\n", v4[10], v7);
LABEL_7:
          v3 = 0;
          goto LABEL_8;
        }
      }
    }
    if ( !v3 )
      goto LABEL_7;
    v4[15] = 0;
    v4[11] = 0;
LABEL_8:
    v4 = (_DWORD *)std::_Rb_tree_increment();
  }
  while ( v4 != v2 );
  if ( v3 )
  {
LABEL_16:
    *(_BYTE *)(a1 + 1348) = 0;
    result = 1;
    *(_DWORD *)(a1 + 1340) = -1;
    goto LABEL_11;
  }
  result = 0xFFFFFFFFLL;
LABEL_11:
  *(_BYTE *)(a1 + 1349) = 1;
  *(_BYTE *)(a1 + 1412) = 1;
  return result;
}

