__int64 __fastcall sub_2B0F0(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 v3; // rax

  v2 = *(_WORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 8) + ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 8LL : 6LL);
  if ( v2 != 203 )
  {
    if ( (v2 & 0xFFF7) == 0x63 && *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) && v3 == *(_QWORD *)(a2 + 96) )
      goto LABEL_6;
    return 0;
  }
  if ( v3 != *(_QWORD *)(a2 + 56) )
    return 0;
LABEL_6:
  sub_29840(a1, a2);
  return 1;
}

