__int64 __fastcall sub_39AE70(__int64 a1, unsigned int a2, __int64 a3, double a4, double a5, __m128i a6, double a7)
{
  __int64 result; // rax

  result = sub_33E140(*(_QWORD *)(a3 + 128), 0x6Au, a3, a2);
  if ( result )
    return 1;
  if ( (a2 & 0xFFFFFFC3) == 0 )
    return sub_39A7C0(a3, 1, (2 * (_BYTE)a2) & 8, a4, a5, a6, a7);
  return result;
}

