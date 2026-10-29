__int64 __fastcall sub_C58C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rdi

  v7 = a1[3];
  if ( v7 )
    xmmword_241500(v7);
  v8 = (void (__fastcall *)(_QWORD))a1[41];
  if ( v8 )
    v8(a1[40]);
  v9 = a1[3];
  a1[42] = a2;
  a1[40] = a3;
  a1[41] = a4;
  if ( v9 )
    xmmword_241510(v9, a2, a3);
  return 0;
}
