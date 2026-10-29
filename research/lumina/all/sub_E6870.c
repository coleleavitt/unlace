void __fastcall sub_E6870(__int64 *a1, __int64 a2, __int64 a3)
{
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) |= 0x1000000u;
    *(_QWORD *)(a2 + 64) = a3;
    *(_QWORD *)(a3 + 112) = a2;
    if ( (*(_BYTE *)(a2 + 4) & 2) != 0 && *(_BYTE *)(a3 + 32) != 0xA6 )
      sub_DBD10((__int64)a1, "DISTINCT is not supported for window functions");
  }
  else
  {
    sub_D7AF0(*a1, (_QWORD *)a3);
  }
}
