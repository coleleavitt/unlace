__int64 __fastcall sub_127300(__int64 a1, unsigned __int8 *a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  char v7; // si

  result = sub_1257D0(a1, a2, a3, a4);
  if ( a3 != (_DWORD)result )
  {
    v7 = 81;
    if ( a2 )
      v7 = ((a2[6] & 0x20) == 0) + 80;
    return sub_E1710(*(_QWORD *)(a1 + 16), v7, result, a3, 0);
  }
  return result;
}
