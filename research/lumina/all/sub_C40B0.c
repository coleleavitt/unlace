__int64 __fastcall sub_C40B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    xmmword_241500();
    v3 = *(_QWORD *)(a1 + 24);
  }
  if ( a2 )
    v4 = *(_QWORD *)(a2 + 16);
  else
    v4 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    xmmword_241510();
  return v4;
}
