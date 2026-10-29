__int64 __fastcall sub_4E20(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rax

  v2 = *(_BYTE *)(a2 + 1);
  switch ( v2 )
  {
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 7:
      v4 = sub_4880(a1 + 28, *(_QWORD *)(a2 + 16));
      sub_4DB0((__int64)a1, a2, v4);
      return 1;
    case 0:
      return 0;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_4EA0(10377);
}

