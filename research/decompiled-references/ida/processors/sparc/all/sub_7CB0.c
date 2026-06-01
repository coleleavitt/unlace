__int64 __fastcall sub_7CB0(__int64 a1, char a2, unsigned int a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v6; // edi
  int v7; // esi
  unsigned __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 28);
  result = a1;
  if ( (a3 & 0x20000000) != 0 )
    v3 |= 0x100u;
  if ( (a3 & 0x80000) == 0 )
    v3 |= 0x200u;
  v6 = (a3 >> 25) & 0xF;
  v7 = (a3 >> 20) & 3;
  if ( a2 )
  {
    *(_BYTE *)(result + 32) = v6;
    *(_DWORD *)(result + 28) = v3 | 0x40;
    *(_BYTE *)(result + 41) = 1;
    *(_BYTE *)(result + 45) = 2;
    *(_WORD *)(result + 46) = v7 + 128;
  }
  else
  {
    *(_BYTE *)(result + 32) = v6;
    *(_DWORD *)(result + 28) = v3 | 0x20;
    *(_BYTE *)(result + 41) = 1;
    *(_BYTE *)(result + 45) = 2;
    if ( v7 )
    {
      if ( v7 == 2 )
        *(_WORD *)(result + 46) = 133;
      else
        *(_WORD *)(result + 24) = 0;
    }
    else
    {
      *(_WORD *)(result + 46) = 132;
    }
  }
  *(_BYTE *)(result + 81) = 7;
  v8 = a3 & 0x7FFFF;
  if ( (a3 & 0x40000) != 0 )
    v8 = a3 | 0xFFFFFFFFFFF80000LL;
  *(_QWORD *)(result + 96) = *(_QWORD *)(result + 8) + 4 * v8;
  return result;
}

