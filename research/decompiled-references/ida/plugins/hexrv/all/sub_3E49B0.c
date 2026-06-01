__int64 __fastcall sub_3E49B0(_DWORD *a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edx

  result = (unsigned int)a2;
  if ( a2 >= a1[88] )
  {
    v3 = a1[20];
    if ( a2 <= v3 + a1[119] - 1 )
      return -v3 & (unsigned int)a2;
  }
  v4 = a1[173];
  if ( v4 && a2 >= a1[120] )
  {
    v5 = v4 + a1[151] - 1;
    v6 = a2 & -v4;
    if ( a2 <= v5 )
      return v6;
  }
  return result;
}

