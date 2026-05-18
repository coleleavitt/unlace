__int64 __fastcall sub_C20C0(__int64 a1, _QWORD *a2, __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD))
{
  __int64 result; // rax
  double v4[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v4[1] = __readfsqword(0x28u);
  if ( *(int *)a1 > 1 )
  {
    a3 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD))(a1 + 136);
    if ( a3 )
      return a3(a1, a2, a3, 0);
  }
  result = (*(__int64 (__fastcall **)(__int64, double *, _QWORD, _QWORD))(a1 + 120))(a1, v4, a3, 0);
  *a2 = (unsigned int)(int)(86400000.0 * v4[0]);
  return result;
}
