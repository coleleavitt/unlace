__int64 __fastcall sub_11C20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 4344) + 4LL);
  if ( v3 > 5 )
  {
    if ( v3 != 7 )
    {
LABEL_7:
      LOBYTE(a3) = 0;
      return sub_10AC0(a1, 0x53u, a3, 255, 255);
    }
LABEL_8:
    LOBYTE(a3) = sub_DA70(*(_QWORD *)(a1 + 4352), a2, a3);
    if ( (_BYTE)a3 != 3 )
      return sub_10AC0(a1, 0x53u, a3, 255, 255);
    goto LABEL_7;
  }
  a3 = 2;
  if ( v3 <= 3 )
  {
    if ( v3 != 1 )
    {
      LOBYTE(a3) = v3 == 3;
      return sub_10AC0(a1, 0x53u, a3, 255, 255);
    }
    goto LABEL_8;
  }
  return sub_10AC0(a1, 0x53u, a3, 255, 255);
}

