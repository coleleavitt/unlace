__int64 __fastcall sub_23DC50(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( dword_4011A4[v1] != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return dword_4011A0[(int)v1];
}

