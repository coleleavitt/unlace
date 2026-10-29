__int64 __fastcall sub_30400(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

