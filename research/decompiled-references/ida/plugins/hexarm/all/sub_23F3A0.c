__int64 (__fastcall **__fastcall sub_23F3A0(_QWORD *a1))()
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1 + 8;
  *(v2 - 8) = off_4DA118;
  sub_2559F0(v2);
  clear_tinfo_t();
  v3 = a1[5];
  result = off_4D63B8;
  *a1 = off_4D63B8;
  if ( v3 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

