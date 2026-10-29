unsigned __int64 __fastcall sub_16D80(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  int v3; // eax
  _BYTE v5[4]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v1 = a1 + 1216;
  v6 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1232);
  if ( v2 != a1 + 1216 )
  {
    do
    {
      while ( !*(_BYTE *)(v2 + 64) )
      {
LABEL_6:
        v2 = std::_Rb_tree_increment();
        if ( v2 == v1 )
          return v6 - __readfsqword(0x28u);
      }
      if ( !*(_BYTE *)(a1 + 1350) )
      {
        if ( *(_DWORD *)(v2 + 60) != 1 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        ptrace(PTRACE_CONT, *(unsigned int *)(v2 + 40), 0, 0);
        v3 = sub_25CB0(a1, v5, *(unsigned int *)(v2 + 40), 0xFFFFFFFFLL);
        if ( *(_DWORD *)(v2 + 40) != v3 )
          sub_B0B0((__int64)"%d: failed to clean up pending SIGSTOP\n", v3);
        goto LABEL_6;
      }
      *(_BYTE *)(v2 + 64) = 0;
      v2 = std::_Rb_tree_increment();
    }
    while ( v2 != v1 );
  }
  return v6 - __readfsqword(0x28u);
}

