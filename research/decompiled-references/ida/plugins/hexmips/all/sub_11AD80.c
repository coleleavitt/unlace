__int64 __fastcall sub_11AD80(__int64 a1, char *a2, __int64 a3, char a4)
{
  char v4; // al

  v4 = *a2;
  if ( *a2 != 8 )
  {
    *(_BYTE *)(a1 + 40) = 1;
    v4 = *a2;
  }
  if ( v4 == 10 || a4 )
    return 0;
  else
    return (unsigned __int8)sub_11AB30((__int64)a2);
}

