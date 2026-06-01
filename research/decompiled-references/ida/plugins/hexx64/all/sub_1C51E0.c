bool __fastcall sub_1C51E0(__int64 a1, __int64 a2, double a3)
{
  int *v3; // rbp
  int *v4; // rbx

  v3 = (int *)a2;
  v4 = (int *)a1;
  if ( *(_DWORD *)a1 == 2 && (unsigned __int8)sub_1C3110(a1, 0, 0, a3) )
  {
    v4 = **(int ***)(a1 + 8);
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)sub_1C2AD0(v4, v3, a3) == 0;
  }
  else if ( *(_DWORD *)a2 != 2 )
  {
    return (unsigned int)sub_1C2AD0(v4, v3, a3) == 0;
  }
  if ( (unsigned __int8)sub_1C3110(a2, 0, 0, a3) )
    v3 = **(int ***)(a2 + 8);
  return (unsigned int)sub_1C2AD0(v4, v3, a3) == 0;
}

