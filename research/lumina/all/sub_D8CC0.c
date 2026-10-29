unsigned __int64 __fastcall sub_D8CC0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (int)a2 >= 0 )
  {
    a2 = *(_QWORD *)(a1 + 32) + 32LL * (int)a2;
    *(_WORD *)(*(_QWORD *)(a2 + 24) + 114LL) |= 8u;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 114LL) |= 8u;
    *(_DWORD *)(a1 + 44) &= ~0x10u;
  }
  result = *(unsigned int *)(a1 + 72);
  if ( !(_DWORD)result )
    return sub_D8C60(a1, a2);
  return result;
}
