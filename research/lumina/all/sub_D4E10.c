__int64 __fastcall sub_D4E10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = *a1;
  v4 = *(_QWORD *)(*a1 + 24);
  if ( v4 )
    return xmmword_241510(v4, a2, a3);
  return result;
}
