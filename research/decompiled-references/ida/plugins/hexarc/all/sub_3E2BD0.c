void __fastcall sub_3E2BD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = &off_4B8AA0;
  if ( a1[120] )
  {
    a1[121] = 0;
    qfree();
  }
  if ( a1[117] )
  {
    a1[118] = 0;
    qfree();
  }
  v2 = a1[114];
  if ( v2 )
  {
    v3 = a1[115];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        sub_1166E0(v2 + 32 * v5 + 8);
        v2 = a1[114];
      }
    }
    a1[115] = 0;
    qfree();
  }
  sub_1166E0((__int64)(a1 + 111));
  *a1 = &unk_4B7EE8;
  sub_1D0C60((__int64)a1);
}

