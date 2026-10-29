__int64 (__fastcall **__fastcall sub_1732A0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx

  result = off_4D8778;
  *a1 = off_4D8778;
  v3 = a1[7];
  if ( v3 )
  {
    v4 = a1[8];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + (v5 << 6);
        if ( *(_QWORD *)(v6 + 40) )
        {
          *(_QWORD *)(v6 + 48) = 0;
          qfree();
        }
        ++v5;
        qfree();
        sub_11C7E0(v6 + 8);
        v3 = a1[7];
      }
      while ( v4 != v5 );
    }
    a1[8] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

