__int64 __fastcall sub_8510(__int64 a1, __int64 a2)
{
  char *v2; // rcx
  char *v3; // rcx

  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 368LL))(a2, 7, 0, 0);
  v2 = &byte_D9A4;
  if ( *(_QWORD *)(a1 + 136) )
    v2 = *(char **)(a1 + 128);
  sub_79C0(a2, 0, (__int64)&dword_D4C4, v2);
  v3 = &byte_D9A4;
  if ( *(_QWORD *)(a1 + 136) )
    v3 = *(char **)(a1 + 128);
  sub_79C0(a2, 0, (__int64)byte_D4D9, v3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}

