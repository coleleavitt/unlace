char __fastcall sub_14F90(__int64 a1, double a2, double a3)
{
  __int64 v3; // rbx
  int v4; // eax
  const char *v5; // rax

  v3 = getinf();
  LOBYTE(v4) = a1 != v3;
  if ( a1 != v3 && v3 != -1 && a1 != -1 )
  {
    LOBYTE(v4) = sub_141C0(a1, a2, a3);
    if ( !(_BYTE)v4 )
    {
      v4 = rebase_program();
      if ( v4 )
      {
        v5 = (const char *)move_segm_strerror();
        sub_140F0((__int64)"Failed to rebase program: %s\n", v5);
        LOBYTE(v4) = sub_14020(
                       (__int64)"IDA failed to rebase the program.\n"
                                "Most likely it happened because of the debugger\n"
                                "segments created to reflect the real memory state.\n"
                                "\n"
                                "Please stop the debugger and rebase the program manually.\n"
                                "For that, please select the whole program and\n"
                                "use Edit, Segments, Rebase program with delta 0x%08a",
                       a2);
      }
    }
  }
  return v4;
}

