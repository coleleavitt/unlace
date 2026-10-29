unsigned __int64 __fastcall sub_F430(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a2 & 1) != 0 )
    return sub_F070(a2, a3, 0, a4, 0);
  *(_BYTE *)(a3 + 1) = 5;
  *(_QWORD *)(a3 + 8) = a2 >> 1;
  *(_BYTE *)(a3 + 5) = 0;
  *(_WORD *)(a3 + 32) = 0x4000;
  return 0x4000;
}

