__int64 __fastcall sub_CFCE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int16 v4; // cx
  __int64 v5; // rsi
  __int16 v6; // cx
  __int64 v7; // rdx

  if ( *(_BYTE *)a2 == 0xA7 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( *(_DWORD *)(v3 + 64) == *(_DWORD *)(a2 + 44) )
    {
      v4 = *(_WORD *)(a2 + 48);
      if ( v4 >= 0 )
      {
        v5 = *(_QWORD *)(a2 + 64);
        if ( (*(_BYTE *)(v5 + 48) & 0x60) != 0 && (*(_BYTE *)(*(_QWORD *)(v5 + 8) + 16LL * v4 + 14) & 0x60) != 0 )
        {
          v6 = *(_WORD *)(v5 + 54);
          v7 = -1;
          if ( v6 <= 63 )
            v7 = (1LL << v6) - 1;
        }
        else
        {
          if ( v4 > 63 )
            LOBYTE(v4) = 63;
          v7 = 1LL << v4;
        }
        *(_QWORD *)(v3 + 80) |= v7;
      }
    }
  }
  return 0;
}
