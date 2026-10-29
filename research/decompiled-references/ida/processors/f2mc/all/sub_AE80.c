__int64 __fastcall sub_AE80(_QWORD *a1, __int64 a2)
{
  int *v2; // rcx
  int *v3; // rdx

  v2 = &dword_F62C;
  if ( a1[24] )
    v2 = (int *)a1[23];
  v3 = &dword_F62C;
  if ( a1[18] )
    v3 = (int *)a1[17];
  (*(void (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)a2 + 368LL))(a2, 3, v3, v2);
  sub_9F90(a2, 0, (__int64)&unk_F39B);
  sub_9F90(a2, 0, (__int64)&word_F36E);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}

