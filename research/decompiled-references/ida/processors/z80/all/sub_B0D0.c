__int64 __fastcall sub_B0D0(_QWORD *a1, __int64 a2)
{
  void *v2; // rcx
  void *v3; // rdx

  v2 = &unk_11204;
  if ( a1[24] )
    v2 = (void *)a1[23];
  v3 = &unk_11204;
  if ( a1[18] )
    v3 = (void *)a1[17];
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, void *))(*(_QWORD *)a2 + 368LL))(a2, 11, v3, v2);
}

