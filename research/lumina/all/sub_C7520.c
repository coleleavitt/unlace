__int64 __fastcall sub_C7520(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  _mm_mfence();
  if ( qword_242248 )
  {
    result = xmmword_241500(qword_242248);
    if ( qword_242248 )
      return xmmword_241510(qword_242248, a2, v3);
  }
  return result;
}
