__int64 __fastcall sub_12780(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // edx

  v3 = *(_QWORD *)(a1 + 1072);
  if ( a3 != 1 || !v3 )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  result = 1;
  if ( !v5 )
    return 0xFFFFFFFFLL;
  return result;
}

