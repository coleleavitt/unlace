char __fastcall sub_1EB0D0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, char a5)
{
  char result; // al
  char v7; // [rsp+Fh] [rbp-19h]

  result = sub_1EAAC0(a1, a2, a3, a4, a5);
  if ( result )
  {
    v7 = result;
    sub_1EACB0(a1);
    return v7;
  }
  else if ( (a5 & 2) == 0 )
  {
    sub_1E8320();
  }
  return result;
}

