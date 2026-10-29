bool __fastcall sub_11170(__int64 a1)
{
  unsigned __int8 (*v1)(void); // rax
  int v2; // eax
  char v3; // dl
  unsigned int v4; // ebp

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v1 == (char *)sub_FCA0 )
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( (v2 & 0x3F) == 0 )
      return 0;
    v3 = (v2 & 3) != 0;
    *(_BYTE *)(a1 + 3545) = (v2 & 0x1C) != 0;
    *(_BYTE *)(a1 + 3544) = v3;
    *(_BYTE *)(a1 + 3546) = (v2 & 0x20) != 0;
  }
  else
  {
    if ( !v1() )
      return 0;
    v3 = *(_BYTE *)(a1 + 3544);
  }
  if ( v3 && ptrace(PTRACE_GETREGS, *(unsigned int *)(a1 + 100), 0, a1 + 104) )
    return 0;
  if ( *(_BYTE *)(a1 + 3545) || *(_BYTE *)(a1 + 3546) )
  {
    if ( !ptrace(PTRACE_GETFPREGS, *(unsigned int *)(a1 + 100), 0, a1 + 320) )
    {
      if ( *(_BYTE *)(a1 + 3546) )
      {
        v4 = *(_DWORD *)(a1 + 100);
        if ( sub_FED0(v4) )
          return ptrace(PTRACE_GETREGSET, v4, 514, a1 + 3528) == 0;
        return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

