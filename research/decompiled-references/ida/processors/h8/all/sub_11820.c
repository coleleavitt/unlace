__int64 __fastcall sub_11820(_QWORD *a1, __int64 a2)
{
  _BYTE *v3; // rsi
  __int64 v4; // rax

  v3 = (_BYTE *)sub_13920(a1[77], a2);
  v4 = *a1;
  if ( v3 && *v3 )
    return (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64))(v4 + 56))(a1, v3, 34);
  (*(void (__fastcall **)(_QWORD *, __int64))(v4 + 64))(a1, 18);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, a2, 16);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  return remember_problem();
}

