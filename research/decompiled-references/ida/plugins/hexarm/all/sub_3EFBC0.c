__int64 __fastcall sub_3EFBC0(__int64 a1, __int64 a2, double a3)
{
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    return *(unsigned __int8 *)(a2 + 5);
  if ( *(_QWORD *)(a2 + 8) || *(char *)(a2 + 34) <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8DBu, a3);
    BUG();
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 6) - 61 > 0x1F )
    sub_3EAD30(a3);
  return 7;
}

