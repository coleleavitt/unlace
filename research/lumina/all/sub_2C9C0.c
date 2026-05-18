__int64 __fastcall sub_2C9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const char *v6; // rcx
  const char *v7; // rax

  v6 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = *(const char **)a3;
  v7 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  sub_16B870(
    (unsigned int)"Unknown keyword %s with value %s in config file.\n",
    (_DWORD)v7,
    (_DWORD)v6,
    (_DWORD)v6,
    a5,
    a6);
  return 0;
}
