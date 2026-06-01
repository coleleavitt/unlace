__int64 __fastcall sub_DA90(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 v6; // cx

  v3 = *(_QWORD *)(a2 + 16) + 1LL;
  if ( (a3 & 0x80u) == 0 )
  {
    v4 = a3 + v3;
  }
  else
  {
    LOBYTE(a3) = ~(_BYTE)a3;
    v4 = v3 - (a3 + 1);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v4;
  v5 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v5 + 33) & 0x30) == 0 )
  {
    v6 = *(_WORD *)(a2 + 24) - 18;
    if ( v6 <= 0x30u )
    {
      if ( ((1LL << v6) & 0x1FE0000000DD9LL) != 0 )
      {
LABEL_9:
        *(_BYTE *)(v5 + 1) = 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
        return 1;
      }
      if ( ((1LL << v6) & 0x3C000000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 600) != 1 )
        {
          ++*(_QWORD *)(v5 + 16);
          v5 = *(_QWORD *)(a1 + 248);
        }
        goto LABEL_9;
      }
    }
  }
  *(_BYTE *)(v5 + 1) = 2;
  return 1;
}

