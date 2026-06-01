void __fastcall sub_1FF50(_QWORD *a1)
{
  unsigned __int64 v1; // r14
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+8h] [rbp-50h]
  __int64 i; // [rsp+10h] [rbp-48h]

  v1 = a1[9];
  v2 = (__int64 *)(a1[5] + 8LL);
  v3 = a1[7];
  v4 = a1[2];
  v7 = a1[6];
  v8 = a1[4];
  for ( i = a1[5]; (unsigned __int64)v2 < v1; ++v2 )
  {
    v5 = *v2;
    v6 = *v2 + 504;
    do
    {
      v5 += 72;
      free_debug_event();
    }
    while ( v6 != v5 );
  }
  if ( i == v1 )
  {
    while ( v7 != v4 )
    {
      v4 += 72;
      free_debug_event();
    }
  }
  else
  {
    while ( v8 != v4 )
    {
      v4 += 72;
      free_debug_event();
    }
    while ( v7 != v3 )
    {
      v3 += 72;
      free_debug_event();
    }
  }
  sub_1FEE0((__int64)a1);
}

