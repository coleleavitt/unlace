__int64 __fastcall sub_127D0(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1072);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  result = 1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  return result;
}

