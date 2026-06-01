__int64 __fastcall sub_6850(__int64 a1, char a2)
{
  int v2; // esi
  __int64 result; // rax
  __int16 v4; // ax

  v2 = a2 & 0x1F;
  result = 0;
  if ( v2 <= 27 )
  {
    v4 = 27;
    if ( v2 != 16 )
    {
      v4 = v2 - 1;
      if ( v2 < 17 )
        v4 = v2;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 6LL) = v4;
    return 1;
  }
  return result;
}

