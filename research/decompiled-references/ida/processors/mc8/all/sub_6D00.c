__int64 __fastcall sub_6D00(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v4; // rax

  if ( a3 > 7 )
    return 0;
  v4 = (_QWORD *)sub_92A0(a1[77]);
  if ( !v4 || v4[1] <= 1u )
    return 0;
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *v4, 34);
  return 1;
}

