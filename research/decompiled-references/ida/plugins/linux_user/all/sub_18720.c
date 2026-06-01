__int64 __fastcall sub_18720(_DWORD *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned int v8; // ecx

  v6 = 4099;
  if ( a1[231] == a3 )
    goto LABEL_10;
  if ( a1[232] == a3 )
  {
    v6 = 4100;
LABEL_10:
    LOBYTE(v8) = ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, a2, a4, v6) == 0;
    return v8;
  }
  if ( a1[233] != a3 && a1[234] != a3 && a1[235] != a3 && a1[236] != a3 )
    return 0;
  *a4 = 0;
  return 1;
}

