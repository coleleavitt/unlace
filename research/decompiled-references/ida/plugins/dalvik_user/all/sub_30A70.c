__int64 __fastcall sub_30A70(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( v1 != -1 && v2 != -1 )
    rangeset_t_add();
  return 1;
}

