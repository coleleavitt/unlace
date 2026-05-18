unsigned __int64 __fastcall sub_EA4D0(_QWORD *a1, const char **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  void (*v6)(void); // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( qword_2424C0 )
    qword_2424C0(a1, a2, a3, a4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 48LL))(*a1, &v8);
  if ( v5 )
  {
    v6 = (void (*)(void))qword_2424C8;
    if ( !qword_2424C8 )
      goto LABEL_10;
LABEL_6:
    v6();
LABEL_7:
    if ( !v5 )
      return __readfsqword(0x28u) ^ v9;
LABEL_10:
    sub_E8BB0(v5, "cannot limit WAL size: %s", *a2);
    return __readfsqword(0x28u) ^ v9;
  }
  if ( v8 > a3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, a3);
    v6 = (void (*)(void))qword_2424C8;
    if ( !qword_2424C8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( qword_2424C8 )
    qword_2424C8();
  return __readfsqword(0x28u) ^ v9;
}
