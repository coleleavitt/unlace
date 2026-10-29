__int64 __fastcall sub_E7D0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 11 && *(_BYTE *)(a1 + 57) == 7 )
  {
    v2 = *(_DWORD *)(a1 + 44) - 1;
    if ( v2 <= 0xF )
    {
      v3 = 1LL << v2;
      if ( ((1LL << v2) & 0x5014) != 0 )
      {
        v4 = 0;
      }
      else
      {
        v4 = 2;
        if ( (v3 & 0xA028) == 0 )
          return result;
      }
      if ( (v3 & 0x9018) == 0 )
      {
        result = 0;
        if ( (v3 & 0x6024) == 0 )
          return result;
        v4 |= 1u;
      }
      v5 = *(_QWORD *)(a1 + 864);
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v5 + 80) = 25344;
      *(_QWORD *)(v5 + 104) = v7;
      *(_QWORD *)(v5 + 88) = 0;
      *(_QWORD *)(v5 + 96) = v6;
      *(_BYTE *)(v5 + 112) = v4;
      *(_WORD *)(v5 + 113) = 0;
      *(_BYTE *)(v5 + 115) = 0;
      return 1;
    }
  }
  return result;
}
