unsigned __int64 __fastcall sub_1029E0(_QWORD *a1)
{
  unsigned __int64 result; // rax

  result = a1[3];
  if ( result )
  {
    result = *(_BYTE *)(a1[1] + result - 1) & 0xDF;
    if ( (_BYTE)result != 91 )
      return sub_102750(a1, 44);
  }
  return result;
}
