__int64 __fastcall sub_10D40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v5; // bl
  unsigned int v6; // eax

  v5 = a3;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4344) + 4LL);
  if ( v6 > 5 )
  {
    if ( v6 != 7 )
    {
LABEL_7:
      LOBYTE(a3) = 0;
      return sub_10AC0(a1, a2, a3, v5, a4);
    }
LABEL_8:
    LOBYTE(a3) = sub_DA70(*(_QWORD *)(a1 + 4352), a2, a3);
    if ( (_BYTE)a3 != 3 )
      return sub_10AC0(a1, a2, a3, v5, a4);
    goto LABEL_7;
  }
  a3 = 2;
  if ( v6 <= 3 )
  {
    if ( v6 != 1 )
    {
      LOBYTE(a3) = v6 == 3;
      return sub_10AC0(a1, a2, a3, v5, a4);
    }
    goto LABEL_8;
  }
  return sub_10AC0(a1, a2, a3, v5, a4);
}

