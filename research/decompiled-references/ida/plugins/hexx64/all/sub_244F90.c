__int64 __fastcall sub_244F90(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( dword_42B8C0[v1] != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return dword_42B8C0[(int)v1 + 1];
}

