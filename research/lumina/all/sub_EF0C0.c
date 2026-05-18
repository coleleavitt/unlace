unsigned __int64 __fastcall sub_EF0C0(double a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  const char *v8; // rbp
  unsigned int v9; // eax

  v8 = (const char *)sub_D9DB0(*(_QWORD *)(a4 + 8), 1u, a1, a4, a5, a6, a7);
  v9 = sub_CD0F0(*(char ***)a4);
  return sub_E8BB0(v9, "%s", v8);
}
