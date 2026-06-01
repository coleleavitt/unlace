__int64 __fastcall sub_2820D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r13d
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebp
  int v8; // eax

  v3 = sub_2553C0(*(_DWORD *)(a2 + 8));
  v4 = *(_DWORD *)(a2 + 8);
  v5 = v4 - 1;
  LOBYTE(v5) = v4 == 67 || (unsigned int)(v4 - 1) <= 0x3B;
  v6 = v5;
  if ( !(_BYTE)v5 )
    return v6;
  if ( (get_tinfo_property() & 0xF) == 9 )
  {
    *(_QWORD *)(a2 + 24) = sub_27F590(a1, *(_QWORD *)(a2 + 24), v3);
    v8 = *(_DWORD *)(a2 + 8);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 8);
    v6 = 0;
  }
  LOBYTE(v2) = v8 == 58 || (unsigned int)(v8 - 1) <= 0x2C;
  if ( !(_BYTE)v2 || (get_tinfo_property() & 0xF) != 9 )
    return v6;
  *(_QWORD *)(a2 + 32) = sub_27F590(a1, *(_QWORD *)(a2 + 32), v3);
  return v2;
}

