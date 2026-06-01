__int64 __fastcall sub_7ED0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // dx
  __int64 v4; // rcx

  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = ((_WORD)a3 << 12) & 0x3000 | (a3 >> 2) & 0xFFFu;
  v3 = *(_WORD *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 248);
  if ( v3 <= 0x77u )
  {
    if ( v3 > 0x6Fu )
      goto LABEL_4;
  }
  else if ( v3 == 125 )
  {
    ++*(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(a1 + 248);
LABEL_4:
    *(_BYTE *)(v4 + 1) = 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  *(_BYTE *)(v4 + 1) = 2;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

