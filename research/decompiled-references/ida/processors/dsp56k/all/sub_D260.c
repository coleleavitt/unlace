__int64 __fastcall sub_D260(__int64 a1, __int64 a2)
{
  unsigned int wide_byte; // eax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  wide_byte = get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = wide_byte;
  if ( *(_DWORD *)(a1 + 600) == 3 )
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (unsigned __int16)*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

