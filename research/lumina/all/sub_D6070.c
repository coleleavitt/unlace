__int64 __fastcall sub_D6070(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (_BYTE)word_241484 )
  {
    v2 = xmmword_2414F0(2);
    v3 = v2;
    if ( v2 )
      xmmword_241500(v2);
  }
  else
  {
    v3 = 0;
  }
  sub_C2130(a1);
  v5 = qword_2424D0;
  if ( (_DWORD)a2 || !qword_2424D0 )
  {
    *(_QWORD *)(a1 + 16) = qword_2424D0;
    qword_2424D0 = a1;
  }
  else
  {
    v4 = *(_QWORD *)(qword_2424D0 + 16);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(v5 + 16) = a1;
  }
  if ( v3 )
    xmmword_241510(v3, a2, v4);
  return 0;
}
