__int64 __fastcall sub_197A10(__int64 a1, char a2, int a3)
{
  __int64 v3; // rdx
  char v4; // si
  int v5; // r12d
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v3 = (unsigned int)(a3 + 1);
  v4 = a2 & 0xBF;
  if ( (unsigned int)v3 > 3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(707);
    BUG();
  }
  v5 = dword_1D0EB0[v3];
  v6 = __open64_2();
  v7 = v6;
  if ( v6 == -1 )
  {
    sub_18FA40(1u);
  }
  else
  {
    if ( !(unsigned int)sub_197810(v6, v4, v5) )
      return v7;
    sub_1979E0(v7);
  }
  return 0xFFFFFFFFLL;
}
