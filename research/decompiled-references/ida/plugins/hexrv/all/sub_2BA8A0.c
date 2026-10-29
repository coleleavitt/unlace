__int64 (__fastcall **__fastcall sub_2BA8A0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax

  *a1 = &off_4B4690;
  a1[8] = 0;
  switch_dbctx();
  sub_13BC80(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4B45D8;
  *a1 = &off_4B45D8;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(48 * i + v3);
        v8 = v7[2];
        *v7 = off_4B3DB0;
        if ( v8 )
        {
          v7[3] = 0;
          qfree();
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

