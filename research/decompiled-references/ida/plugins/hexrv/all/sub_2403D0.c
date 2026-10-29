__int64 __fastcall sub_2403D0(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( dword_405304[v1] != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return dword_405300[(int)v1];
}

