__int64 __fastcall sub_1F7A0(__int64 a1, int *a2)
{
  unsigned __int16 *v3; // rsi
  int v4; // r9d
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // r10d

  v3 = *(unsigned __int16 **)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v3 + 1;
  v6 = *v3;
  *(_DWORD *)(a1 + 16) = v4 - 1;
  v7 = 0;
  if ( (unsigned int)(v6 - 56320) > 0x3FF )
  {
    v7 = 1;
    if ( (unsigned int)(v6 - 55296) <= 0x3FF )
    {
      v7 = 0;
      if ( v4 != 1 )
      {
        v8 = v3[1];
        if ( (unsigned int)(v8 - 56320) <= 0x3FF )
        {
          v7 = 1;
          *(_QWORD *)(a1 + 8) = v3 + 2;
          *(_DWORD *)(a1 + 16) = v4 - 2;
          v6 = v8 & 0x3FF | (((v6 << 10) & 0xFFC00) + 0x10000);
        }
      }
    }
  }
  *a2 = v6;
  return v7;
}

