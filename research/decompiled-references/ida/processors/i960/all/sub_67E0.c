__int64 __fastcall sub_67E0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  _BYTE *v8; // rax

  v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, a3, -1);
  if ( (_BYTE)v5 )
    return 1;
  v6 = v5;
  v8 = (_BYTE *)sub_8370(a1[77], *(_QWORD *)(a2 + 16));
  if ( v8 && *v8 )
  {
    (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v8, 34);
    return 1;
  }
  if ( !a4 )
    return v6;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(a2 + 16), 16);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  remember_problem();
  return v6;
}

