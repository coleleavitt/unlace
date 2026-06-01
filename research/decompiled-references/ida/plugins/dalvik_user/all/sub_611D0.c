__int64 __fastcall sub_611D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  sub_5D650(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 8) = 0;
  v6 = qword_7FC80;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( !a3 || a2 < 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v6 + 216))(*(_QWORD *)(a1 + 88), 78, 1, 0);
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v6 + 216))(*(_QWORD *)(a1 + 88), 33, 1, 0);
}

