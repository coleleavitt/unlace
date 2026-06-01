__int64 __fastcall sub_DE20(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v15; // rax

  result = getinf();
  if ( a1 != result && result != -1 && a1 != -1 )
  {
    if ( (unsigned int)rebase_program() )
    {
      v15 = (const char *)move_segm_strerror();
      sub_BDA0((__int64)"Failed to rebase program: %s\n", v15);
      return sub_BCD0(
               (__int64)"IDA failed to rebase the program.\n"
                        "Most likely it happened because of the debugger\n"
                        "segments created to reflect the real memory state.\n"
                        "\n"
                        "Please stop the debugger and rebase the program manually.\n"
                        "For that, please select the whole program and\n"
                        "use Edit, Segments, Rebase program with delta 0x%08a",
               a2);
    }
    else
    {
      return callui(1152, a1, callui, v12, v13, v14, a8, a9, a10, a11);
    }
  }
  return result;
}

