__int64 __fastcall sub_8560(__int64 a1, __int64 a2)
{
  void *v2; // rcx

  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 368LL))(a2, 3, 0, 0);
  v2 = &unk_D8B0;
  if ( *(_QWORD *)(a1 + 136) )
    v2 = *(void **)(a1 + 128);
  sub_7570(a2, 0, (__int64)&unk_D30E, v2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}

