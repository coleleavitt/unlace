__int64 __fastcall sub_1D540(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // ecx

  result = a1;
  v3 = a2 & 0x1000000;
  *(_WORD *)(a1 + 24) = (a2 & 0x100000) == 0 ? 32 : 30;
  v4 = a2 & 0x800000;
  if ( (a2 & 0x200000) != 0 )
  {
    v5 = *(_DWORD *)(result + 28);
    if ( v3 )
    {
      v6 = v5 | 0x30;
      v7 = v5 | 0x20;
      if ( !v4 )
        v7 = v6;
      *(_DWORD *)(result + 28) = v7;
      return result;
    }
    v9 = v5 | 4;
    v8 = v5 | 0x14;
    if ( v4 )
      v8 = v9;
LABEL_10:
    LOBYTE(v8) = v8 | 0x80;
    *(_DWORD *)(result + 28) = v8;
    return result;
  }
  if ( !v4 )
    *(_DWORD *)(result + 28) |= 0x10u;
  if ( !v3 )
  {
    v8 = *(_DWORD *)(result + 28);
    goto LABEL_10;
  }
  return result;
}

