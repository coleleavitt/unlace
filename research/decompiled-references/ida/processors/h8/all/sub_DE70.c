__int64 __fastcall sub_DE70(__int64 a1)
{
  __int64 result; // rax
  char v2; // si
  unsigned __int16 v3; // ax

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 48 && *(_BYTE *)(a1 + 57) == 3 && !*(_BYTE *)(a1 + 88) )
  {
    v2 = 10;
    v3 = *(_WORD *)(a1 + 62);
    if ( v3 <= 0x27u )
      v2 = *((_BYTE *)&qword_181C8 + ((int)*(unsigned __int16 *)(a1 + 62) >> 3));
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v3;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v2;
    *(_BYTE *)(a1 + 519) = 1;
    *(_BYTE *)(a1 + 514) = 1;
    return 1;
  }
  return result;
}

