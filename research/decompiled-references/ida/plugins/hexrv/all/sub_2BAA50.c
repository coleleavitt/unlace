__int64 (__fastcall **__fastcall sub_2BAA50(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // rbx

  *a1 = &off_4B4BD0;
  a1[8] = 0;
  switch_dbctx();
  sub_13BC80(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4B4B18;
  *a1 = &off_4B4B18;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v3 + v6);
        ++v7;
        v6 += 264;
        *v8 = off_4B3EA0;
        sub_1188E0((__int64)(v8 + 28));
        sub_1188E0((__int64)(v8 + 26));
        sub_1188E0((__int64)(v8 + 24));
        sub_1188E0((__int64)(v8 + 12));
        sub_1188E0((__int64)(v8 + 10));
        sub_1188E0((__int64)(v8 + 8));
        v3 = a1[5];
      }
      while ( v5 != v7 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

