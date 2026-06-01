__int64 __fastcall sub_E9E0(__int64 a1, __int16 a2, unsigned __int8 *a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax

  result = *a3;
  a3[1] = 1;
  a3[5] = 1;
  *((_WORD *)a3 + 3) = a2;
  *a5 = result;
  return result;
}

