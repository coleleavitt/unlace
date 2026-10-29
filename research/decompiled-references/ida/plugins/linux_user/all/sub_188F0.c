__int64 __fastcall sub_188F0(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rax
  _BYTE v4[128]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v5; // [rsp+80h] [rbp-78h]
  unsigned __int64 v6; // [rsp+D8h] [rbp-20h]

  v1 = 1;
  v6 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a1 + 220) & 0xFFFFFFF) == 5 )
  {
    v3 = ptrace(PTRACE_GETREGS, *(unsigned int *)(a1 + 204), 0, v4);
    v1 = 0;
    if ( !v3 )
    {
      if ( *(_QWORD *)(a1 + 208) == v5 - 1 )
        --v5;
      LOBYTE(v1) = ptrace(PTRACE_SETREGS, *(unsigned int *)(a1 + 204), 0, v4) == 0;
    }
  }
  return v1;
}

