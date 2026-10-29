__int64 __fastcall sub_39EFF0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  result = 0;
  if ( v1 != -1 )
  {
    (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    rangeset_t_add();
    return 1;
  }
  return result;
}

