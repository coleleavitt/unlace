__int64 __fastcall sub_D2D0(__int64 a1, __int64 a2, char a3)
{
  int wide_byte; // eax
  int v4; // edx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 4;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = a3 & 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
  wide_byte = get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  v4 = wide_byte;
  if ( *(_DWORD *)(a1 + 600) == 3
    && (*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (unsigned __int16)*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL),
        *(_DWORD *)(a1 + 600) == 3) )
  {
    if ( (wide_byte & 0x8000) != 0 )
    {
      v4 = (wide_byte ^ 0xFFFF) + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
    }
  }
  else if ( (wide_byte & 0x800000) != 0 )
  {
    v4 = (wide_byte ^ 0xFFFFFF) + 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v4;
  return 1;
}

