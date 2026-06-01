__int64 __fastcall sub_9D20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rcx

  result = a2;
  v5 = a3 >> 27;
  *(_BYTE *)(a2 + 45) = 2;
  *(_BYTE *)(a2 + 41) = 7;
  v6 = (a3 >> 7) & 0xFFFFF;
  if ( (a3 & 0x4000000) != 0 )
    v6 = (a3 >> 7) | 0xFFF00000;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 8) + (int)(4 * v6) + 4LL);
  *(_BYTE *)(a2 + 42) = 0;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v5 == 5 )
  {
    *(_WORD *)(a2 + 24) = 15;
    *(_DWORD *)(a2 + 28) = a3 & 0x7F;
  }
  else if ( v5 == 6 )
  {
    *(_WORD *)(a2 + 24) = 16;
    *(_DWORD *)(a2 + 28) = a3 & 0x7F;
  }
  else
  {
    if ( v5 == 4 )
      *(_WORD *)(a2 + 24) = 14;
    *(_DWORD *)(a2 + 28) = a3 & 0x7F;
  }
  return result;
}

