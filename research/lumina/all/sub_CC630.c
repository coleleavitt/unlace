__int64 __fastcall sub_CC630(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    result = xmmword_241510(v3, a2, a3);
  *a2 = 0;
  return result;
}
