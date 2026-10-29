__int64 (__fastcall **__fastcall sub_FED0(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax

  v1 = a1[2];
  result = &off_4D850;
  *a1 = &off_4D850;
  if ( v1 )
    return (__int64 (__fastcall **)())Z3_dec_ref(*(_QWORD *)(a1[1] + 8LL));
  return result;
}

