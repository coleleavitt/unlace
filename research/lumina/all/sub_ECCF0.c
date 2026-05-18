__int64 __fastcall sub_ECCF0(__int64 *a1, unsigned int a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi

  result = sub_ECB40(a1, a2);
  if ( !(_DWORD)result )
  {
    sub_C95A0(a1[16] + 56LL * (int)a2 - 56, a2, 7LL * (int)a2, a1[16], v5, v6, a3);
    result = 0;
    v7 = *(_QWORD *)(*a1 + 24);
    if ( v7 )
    {
      xmmword_241510(v7, a2, *a1);
      return 0;
    }
  }
  return result;
}
