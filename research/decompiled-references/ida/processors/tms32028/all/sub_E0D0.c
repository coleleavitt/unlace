__int64 __fastcall sub_E0D0(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_CD30(a1, a2, a3);
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)(a2 + 41) == 4 && !*(_QWORD *)(a2 + 56) )
      *(_BYTE *)(a2 + 44) &= ~8u;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

