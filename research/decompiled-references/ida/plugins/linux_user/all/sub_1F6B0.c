__int64 __fastcall sub_1F6B0(__int64 a1, int a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  unsigned int v7; // r15d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  enum __ptrace_request v11; // edi
  int v13; // eax

  v3 = a1 + 1216;
  v4 = *(_QWORD *)(a1 + 1232);
  if ( v4 == a1 + 1216 )
    return 1;
  v7 = 1;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v4 + 32) == a2) == a3 )
      goto LABEL_6;
    v8 = *(_DWORD *)(v4 + 60);
    v9 = *(_DWORD *)(v4 + 44);
    if ( !v8 && !*(_BYTE *)(v4 + 64) && !*(_BYTE *)(v4 + 65) )
      break;
    if ( v9 > 0 )
    {
      v10 = v9 - 1;
      *(_DWORD *)(v4 + 44) = v10;
      if ( v10 )
        goto LABEL_6;
    }
    if ( *(int *)(v4 + 48) > 0 || *(_BYTE *)(v4 + 65) )
      goto LABEL_6;
    if ( *(_BYTE *)(a1 + 1412) )
    {
      if ( *(_BYTE *)(a1 + 1349) || (unsigned int)(v8 - 1) > 1 )
        goto LABEL_6;
    }
    else if ( v8 != 2 || *(_BYTE *)(a1 + 1349) )
    {
      goto LABEL_6;
    }
    v11 = PTRACE_CONT;
    if ( *(_BYTE *)(v4 + 56) )
    {
      *(_BYTE *)(a1 + 1351) = 1;
      v11 = PTRACE_SINGLESTEP;
    }
    if ( !ptrace(v11, *(unsigned int *)(v4 + 40), 0, *(int *)(v4 + 52)) )
      goto LABEL_27;
    if ( *(_DWORD *)(v4 + 60) == 2 )
    {
LABEL_20:
      *(_DWORD *)(v4 + 60) = 3;
      v4 = std::_Rb_tree_increment();
      if ( v4 == v3 )
        return v7;
    }
    else
    {
      if ( (unsigned __int8)sub_10860() != 90 )
      {
        v7 = 0;
        goto LABEL_6;
      }
      sub_1EB80(a1, *(_DWORD *)(v4 + 40), 2);
LABEL_27:
      v13 = *(_DWORD *)(v4 + 60);
      if ( v13 == 2 )
        goto LABEL_20;
      if ( v13 != 1 )
        goto LABEL_34;
      *(_DWORD *)(v4 + 60) = 0;
LABEL_6:
      v4 = std::_Rb_tree_increment();
      if ( v4 == v3 )
        return v7;
    }
  }
  if ( !v9 )
    goto LABEL_6;
  if ( under_debugger )
    goto LABEL_36;
  interr();
LABEL_34:
  if ( under_debugger )
LABEL_36:
    BUG();
  interr();
  return sub_1F860(30178);
}

