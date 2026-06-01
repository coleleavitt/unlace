char __fastcall sub_1E85D0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, char a5)
{
  char result; // al
  char v7; // [rsp+Fh] [rbp-19h]

  result = sub_1E7FC0(a1, a2, a3, a4, a5);
  if ( result )
  {
    v7 = result;
    sub_1E81B0(a1);
    return v7;
  }
  else if ( (a5 & 2) == 0 )
  {
    sub_1E5820();
  }
  return result;
}

