__int64 __fastcall sub_25F4D0(
        int a1,
        void (__fastcall ***a2)(_QWORD, _QWORD, void *, const char *),
        int a3,
        __int64 a4,
        char a5,
        double a6)
{
  int v6; // eax
  void *v7; // rdx
  __int64 v8; // r12
  const char *v9; // rbp

  v6 = a3 - 1;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    if ( !under_debugger )
      sub_383060(0xC819u, a6);
    BUG();
  }
  if ( a3 != 3 || (v7 = &unk_41901F, v8 = 4, !a5) )
  {
    v8 = v6;
    v7 = *(&off_4DFFE0 + v6);
    v9 = s1;
    if ( !*(_QWORD *)(a4 + 8) )
      goto LABEL_5;
    goto LABEL_6;
  }
  v9 = s1;
  if ( *(_QWORD *)(a4 + 8) )
LABEL_6:
    v9 = *(const char **)a4;
LABEL_5:
  (**a2)(a2, 0, v7, v9);
  return dword_42C3A0[v8] + a1 + (unsigned int)tag_strlen();
}

