__int64 __fastcall sub_258150(
        int a1,
        void (__fastcall ***a2)(_QWORD, _QWORD, void *, const char *),
        int a3,
        __int64 a4,
        char a5)
{
  int v5; // eax
  void *v6; // rdx
  __int64 v7; // r12
  const char *v8; // rbp

  v5 = a3 - 1;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    if ( !under_debugger )
      sub_37B760(51225);
    BUG();
  }
  if ( a3 != 3 || (v6 = &unk_3F0034, v7 = 4, !a5) )
  {
    v7 = v5;
    v6 = *(&off_4AC7E0 + v5);
    v8 = s1;
    if ( !*(_QWORD *)(a4 + 8) )
      goto LABEL_5;
    goto LABEL_6;
  }
  v8 = s1;
  if ( *(_QWORD *)(a4 + 8) )
LABEL_6:
    v8 = *(const char **)a4;
LABEL_5:
  (**a2)(a2, 0, v6, v8);
  return dword_401C80[v7] + a1 + (unsigned int)tag_strlen();
}

