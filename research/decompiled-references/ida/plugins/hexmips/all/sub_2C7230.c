__int64 __fastcall sub_2C7230(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + v4);
        ++v5;
        v4 += 264;
        *v6 = off_4C1BA0;
        sub_118BA0((__int64)(v6 + 28));
        sub_118BA0((__int64)(v6 + 26));
        sub_118BA0((__int64)(v6 + 24));
        sub_118BA0((__int64)(v6 + 12));
        sub_118BA0((__int64)(v6 + 10));
        sub_118BA0((__int64)(v6 + 8));
        v2 = *a1;
      }
      while ( v3 != v5 );
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

