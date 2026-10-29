__int64 __fastcall sub_10E20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_12E90(a1[77]);
  v3 = *a1;
  if ( v2 && *(_QWORD *)(v2 + 16) > 1u )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(v3 + 56))(a1, *(_QWORD *)(v2 + 8), 34);
  (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 64))(a1, 18);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, a2, 16);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  return remember_problem();
}

