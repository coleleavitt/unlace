__int64 __fastcall sub_DCA0(__int64 a1, __int64 a2, int a3)
{
  char v3; // al
  int v5; // edx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int16 v10; // cx

  v3 = a3;
  v5 = (a3 >> 1) & 0x1E0;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v5 | v3 & 0x1F;
  if ( (v5 & 0x100) != 0 )
    v8 = v6 - ((v7 ^ 0x1FF) + 1);
  else
    v8 = v7 + v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v8;
  v9 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v9 + 33) & 0x30) == 0 )
  {
    v10 = *(_WORD *)(a2 + 24) - 18;
    if ( v10 <= 0x30u )
    {
      if ( ((1LL << v10) & 0x1FE0000000DD9LL) != 0 )
      {
LABEL_9:
        *(_BYTE *)(v9 + 1) = 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
        return 1;
      }
      if ( ((1LL << v10) & 0x3C000000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 600) != 1 )
        {
          ++*(_QWORD *)(v9 + 16);
          v9 = *(_QWORD *)(a1 + 248);
        }
        goto LABEL_9;
      }
    }
  }
  *(_BYTE *)(v9 + 1) = 2;
  return 1;
}

