char **__fastcall sub_5ECD0(char **a1, unsigned int a2, __int64 a3)
{
  char *v4; // rax

  *a1 = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 > 0xD )
  {
    v4 = (char *)sub_1987B0(a1, 0, 2, 1);
    *a1 = v4;
    a1[1] = (_BYTE *)(&dword_0 + 2);
    *v4 = 63;
    (*a1)[1] = 0;
    return a1;
  }
  else
  {
    if ( !a3 )
      sub_18FCA0(0);
    sub_299F0(a1);
    return a1;
  }
}
