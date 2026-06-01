__int64 __fastcall sub_256660(__int64 a1, double a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 > 0x3F )
  {
LABEL_5:
    if ( v2 == 65 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(v3 + 432) + 104LL * *(int *)(a1 + 32);
      return sub_1C27D0(v4, v3, *(_DWORD *)(v4 + 88), a2);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    while ( v2 <= 0x3C )
    {
      if ( v2 - 58 > 1 )
        return 1;
      a1 = *(_QWORD *)(a1 + 24);
      v2 = *(_DWORD *)(a1 + 8);
      if ( v2 > 0x3F )
        goto LABEL_5;
    }
    return 0;
  }
}

