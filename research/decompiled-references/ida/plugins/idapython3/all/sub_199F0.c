__int64 sub_199F0()
{
  __int64 v0; // rbx
  __int64 (__fastcall *v2)(__int64); // rax

  v0 = qalloc_or_throw();
  sub_11BA0(v0);
  if ( (unsigned __int8)sub_18B20(v0) )
    return v0;
  if ( v0 )
  {
    v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL);
    if ( v2 == sub_11990 )
    {
      sub_11730(v0);
      qfree();
    }
    else
    {
      v2(v0);
    }
  }
  return 0;
}

