__int64 __fastcall sub_2BEA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 96);
  if ( (_WORD)v2 != 1
    || !HIWORD(v2)
    || (*(_BYTE *)(a2 + 28) & 8) == 0
    || *(_WORD *)(a2 + 24) != 122
    || *(_BYTE *)(a2 + 81) != 1
    || *(_WORD *)(a2 + 86) != 4
    || (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x5000000000400LL )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a2 + 56);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 32LL) + 24LL) != 8 )
    v4 = (int)v4;
  if ( v4 != -24 )
    return 0;
  sub_226A0((__int64 *)(a1 + 48), *(_QWORD *)(a2 + 16));
  return 1;
}

