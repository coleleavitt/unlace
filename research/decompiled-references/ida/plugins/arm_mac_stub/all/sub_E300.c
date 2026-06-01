__int64 __fastcall sub_E300(char *a1, double a2, double a3)
{
  __int64 v3; // rbx
  bool v4; // al
  const char *v6; // rax
  char v7; // dl
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = getinf();
  if ( !v3 )
  {
    netnode_check();
    v7 = netnode_exist();
    v4 = 1;
    if ( !v7 )
      goto LABEL_3;
    v3 = netnode_altval();
  }
  v4 = v3 != -1;
LABEL_3:
  if ( !v4
    || a1 + 1 == nullptr
    || (char *)v3 == a1
    || (unsigned __int8)sub_CBC0(a1, a2, a3)
    || !(unsigned int)rebase_program() )
  {
    return v8 - __readfsqword(0x28u);
  }
  v6 = (const char *)move_segm_strerror();
  sub_CAF0((__int64)"Failed to rebase program: %s\n", v6);
  return sub_CA20(
           (__int64)"IDA failed to rebase the program.\n"
                    "Most likely it happened because of the debugger\n"
                    "segments created to reflect the real memory state.\n"
                    "\n"
                    "Please stop the debugger and rebase the program manually.\n"
                    "For that, please select the whole program and\n"
                    "use Edit, Segments, Rebase program with delta 0x%08a",
           a2);
}

