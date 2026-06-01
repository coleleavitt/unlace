__int64 __fastcall sub_47C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = get_sreg();
  if ( result != -1 )
  {
    *(_QWORD *)(a2 + 16) += result;
    result = get_sreg();
    *(_BYTE *)(a2 + 5) = result == 0;
  }
  *(_BYTE *)(a2 + 32) |= 0x40u;
  return result;
}

