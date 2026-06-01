__int64 __fastcall sub_247F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx

  v4 = *(_WORD *)(a4 + 24);
  if ( v4 == 50 )
    goto LABEL_7;
  if ( v4 > 0x32u )
  {
    v5 = 0;
    if ( v4 != 123 )
      return v5;
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    return 1;
  }
  if ( v4 > 0x12u )
  {
    v5 = 0;
    if ( (unsigned __int16)(v4 - 48) > 1u )
      return v5;
    goto LABEL_6;
  }
  if ( v4 > 0xFu )
  {
LABEL_7:
    *(_QWORD *)(a2 + 8) = a4 + 80;
    *(_QWORD *)(a2 + 16) = a4 + 40;
    return 1;
  }
  v5 = 0;
  if ( (unsigned __int16)(v4 - 11) <= 4u )
  {
LABEL_6:
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    *(_BYTE *)(a2 + 24) = sub_24740(*(_WORD *)(a4 + 24));
    return 1;
  }
  return v5;
}
