__int64 __fastcall sub_39B220(__int64 a1, __m128 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax

  sub_386210(a1, 0);
  v2 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v3 = sub_37F870(*(_QWORD *)(a1 + 88));
    if ( v3 )
    {
      *(_BYTE *)(v3 + 13) = (*(_BYTE *)(v3 + 13) ^ 0x10) & 0xFA | 1;
      sub_39AB00(a1, v3, 1, a2);
      return 1;
    }
  }
  return v2;
}

