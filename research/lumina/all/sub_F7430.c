__int64 *__fastcall sub_F7430(__int64 *a1)
{
  const char *v1; // rbp
  __int64 v3; // rdi
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  if ( !a1 )
    return nullptr;
  v1 = (const char *)a1[31];
  if ( !v1 )
    return nullptr;
  v3 = *(_QWORD *)(*a1 + 24);
  if ( v3 )
    xmmword_241500(v3);
  v4 = v1;
  v6 = sub_F6F60(a1, v1);
  v7 = *(_QWORD *)(*a1 + 24);
  if ( v7 )
    xmmword_241510(v7, v4, v5);
  return v6;
}
