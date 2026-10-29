__int64 __fastcall sub_A660(__int64 a1, double a2)
{
  __int64 result; // rax
  const char *v3; // rax

  result = getinf();
  if ( a1 != result && result != -1 && a1 != -1 )
  {
    result = rebase_program();
    if ( (_DWORD)result )
    {
      v3 = (const char *)move_segm_strerror();
      sub_9EE0((__int64)"Failed to rebase program: %s\n", v3);
      return sub_9E10(
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
  return result;
}

