__int64 __fastcall sub_FB00(__int64 a1, __int64 a2)
{
  void *v2; // rcx

  v2 = &unk_1D228;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(void **)(a1 + 136);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void *))(*(_QWORD *)a2 + 368LL))(a2, 11, 0, v2);
}

