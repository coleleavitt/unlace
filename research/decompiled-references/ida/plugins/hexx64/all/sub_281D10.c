__int64 __fastcall sub_281D10(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r14d
  int v4; // r13d
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebp
  int v9; // eax

  v4 = sub_255000(*(_DWORD *)(a2 + 8));
  v5 = *(_DWORD *)(a2 + 8);
  v6 = v5 - 1;
  LOBYTE(v6) = v5 == 67 || (unsigned int)(v5 - 1) <= 0x3B;
  v7 = v6;
  if ( !(_BYTE)v6 )
    return v7;
  if ( (get_tinfo_property() & 0xF) == 9 )
  {
    *(_QWORD *)(a2 + 24) = sub_27F1D0(a1, *(_QWORD *)(a2 + 24), v4, a3);
    v9 = *(_DWORD *)(a2 + 8);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 8);
    v7 = 0;
  }
  LOBYTE(v3) = v9 == 58 || (unsigned int)(v9 - 1) <= 0x2C;
  if ( !(_BYTE)v3 || (get_tinfo_property() & 0xF) != 9 )
    return v7;
  *(_QWORD *)(a2 + 32) = sub_27F1D0(a1, *(_QWORD *)(a2 + 32), v4, a3);
  return v3;
}

