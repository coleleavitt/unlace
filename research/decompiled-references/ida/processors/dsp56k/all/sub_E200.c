__int64 __fastcall sub_E200(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v6; // eax
  unsigned int wide_byte; // eax

  v3 = *(_QWORD *)(a1 + 248);
  if ( (a3 & 0x40) != 0 )
  {
    *(_BYTE *)(v3 + 1) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (int)(a3 & 0xFFFFFFBF) >> 3;
    v4 = *(_QWORD *)(a1 + 248);
    if ( *(_BYTE *)(v4 + 32) != 6 )
      return 1;
    if ( (a3 & 4) != 0 )
    {
      *(_BYTE *)(v4 + 1) = 5;
      wide_byte = get_wide_byte();
      ++*(_WORD *)(a2 + 26);
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = wide_byte;
      if ( *(_DWORD *)(a1 + 600) == 3 )
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (unsigned __int16)*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
      return 1;
    }
    v6 = get_wide_byte();
    ++*(_WORD *)(a2 + 26);
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v6;
    if ( *(_DWORD *)(a1 + 600) == 3 )
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = (unsigned __int16)*(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
    sub_E190(a1, a2);
    return 1;
  }
  else
  {
    *(_BYTE *)(v3 + 33) |= 2u;
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3 & 0x3F;
    sub_E190(a1, a2);
    return 1;
  }
}

