__int64 __fastcall sub_3B930(_QWORD *a1, __int64 *a2, __int64 a3, char a4, __int64 a5, int *a6, __int64 a7)
{
  __int64 v7; // r10
  unsigned __int8 v9; // di

  v7 = a5;
  if ( a3 == a1[539] )
    return sub_3B360((__int64)a1, a2, a4, a5, a6, a7);
  if ( a3 == a1[687] )
    return sub_3B290(a2, a3, a4, a5, (__int64)a6, a7, 66, 1u);
  if ( a3 == a1[684] )
  {
    if ( a4 == 67 )
    {
      v9 = 1;
    }
    else
    {
      if ( a4 != 65 || a5 != 0xFFFFFFFFLL )
        goto LABEL_4;
      v9 = 4;
      v7 = -1;
    }
    return sub_3B290(a2, a3, a4, v7, (__int64)a6, a7, a4, v9);
  }
LABEL_4:
  if ( a1[706] == a3 )
    return sub_3B290(a2, a3, a4, a5, (__int64)a6, a7, 65, 4u);
  else
    return 0;
}
