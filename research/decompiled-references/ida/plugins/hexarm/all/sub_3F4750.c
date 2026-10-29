__int64 __fastcall sub_3F4750(__int64 a1, double a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // edx
  __int64 result; // rax
  char v7; // al
  const char *v8; // rax
  bool v9; // zf
  int v10; // edx

  v3 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v3 + 146) )
  {
    v4 = 8;
    v5 = 4;
  }
  else if ( *(_BYTE *)(v3 + 144) )
  {
    v4 = 8;
    v5 = 8;
  }
  else
  {
    v4 = 4;
    v5 = 4;
  }
  *(_DWORD *)(a1 + 80) = v4;
  result = 0;
  *(_DWORD *)(a1 + 84) = v5;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 24LL) == v5 )
  {
    *(_DWORD *)(a1 + 88) = 2 * v4;
    *(_DWORD *)(a1 + 92) = 4 * v4;
    v7 = 0;
    if ( *(_DWORD *)(v3 + 152) == 18 )
    {
      v7 = sub_32AA90(v3);
      v5 = *(_DWORD *)(a1 + 84);
      v4 = *(_DWORD *)(a1 + 80);
    }
    *(_BYTE *)(a1 + 744) = v7;
    v8 = "HEXARM";
    if ( v4 == 8 )
      v8 = "HEXARM64";
    *(_QWORD *)(a1 + 24) = v8;
    v9 = v5 == 8;
    v10 = 128;
    if ( v9 )
      v10 = 256;
    *(_DWORD *)(a1 + 48) = v10 | *(_DWORD *)(a1 + 48) & 0xFFFFFE7F;
    sub_3F3D50(a1, a2);
    return 1;
  }
  return result;
}

