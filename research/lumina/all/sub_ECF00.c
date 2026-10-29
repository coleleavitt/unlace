__int64 __fastcall sub_ECF00(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi

  result = sub_ECB40(a1, a2);
  if ( !(_DWORD)result )
  {
    sub_C96D0(a1[16] + 56LL * (int)a2 - 56, a3, a1[16], 7LL * (int)a2, v6, v7);
    result = 0;
    v8 = *(_QWORD *)(*a1 + 24);
    if ( v8 )
    {
      xmmword_241510(v8, a3, *a1);
      return 0;
    }
  }
  return result;
}
