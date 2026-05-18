__int64 __fastcall sub_C53E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    result = xmmword_241500(v3);
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 56) = a2;
    if ( v6 )
      return xmmword_241510(v6, a2, v5);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = a2;
  }
  return result;
}
