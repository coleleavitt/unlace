unsigned __int64 __fastcall sub_CD250(double *a1, _WORD *a2)
{
  double v2; // xmm2_8
  unsigned __int64 result; // rax
  int v4; // eax

  v2 = *a1;
  result = sub_C3D50(*a1);
  if ( v2 == (double)(int)result && result != 0x8000000000000000LL && result != 0x7FFFFFFFFFFFFFFFLL )
  {
    *(_QWORD *)a1 = result;
    v4 = (unsigned __int16)*a2;
    LOWORD(v4) = v4 & 0xF240;
    result = v4 | 4u;
    *a2 = result;
  }
  return result;
}
