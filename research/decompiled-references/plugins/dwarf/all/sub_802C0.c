__int64 (__fastcall **__fastcall sub_802C0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = off_C9420;
  v2 = *(_BYTE *)(a1 + 72) == 0;
  *(_QWORD *)a1 = off_C9420;
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 )
      result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v5);
  }
  return result;
}
