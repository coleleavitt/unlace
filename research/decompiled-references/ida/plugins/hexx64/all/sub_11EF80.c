__int64 __fastcall sub_11EF80(__int64 a1, char *a2, __int64 a3, char a4, double a5)
{
  char v5; // al

  v5 = *a2;
  if ( *a2 != 8 )
  {
    *(_BYTE *)(a1 + 40) = 1;
    v5 = *a2;
  }
  if ( v5 == 10 || a4 )
    return 0;
  else
    return (unsigned __int8)sub_11ED30((__int64)a2, a5);
}

