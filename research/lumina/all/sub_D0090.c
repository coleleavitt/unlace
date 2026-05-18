void __fastcall sub_D0090(__int64 a1, _QWORD *a2)
{
  void (__fastcall *v2)(_QWORD); // rax

  v2 = (void (__fastcall *)(_QWORD))a2[4];
  if ( v2 )
    v2(a2[3]);
  if ( a2 )
    sub_C9250(a1, a2);
}
