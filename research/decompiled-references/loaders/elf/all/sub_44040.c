void __fastcall sub_44040(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r13
  __int64 *v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 i; // r14
  unsigned __int64 v8; // rax
  __int64 range; // rax

  v3 = a3 + 60;
  v4 = a3;
  do
  {
    if ( *v4 > 0 )
    {
      v5 = v4[2];
      if ( v5 )
      {
        v6 = 0;
        for ( i = v4[1] + *(_QWORD *)(a2 + 608); ; i += v8 )
        {
          range = rangeset_t_find_range(a1 + 336, i);
          if ( !range )
            break;
          v8 = *(_QWORD *)(range + 8) - i;
          if ( v8 > v5 )
            v8 = v5;
          v6 += v8;
          v5 -= v8;
          if ( !v5 )
            break;
        }
        v4[2] = v6;
      }
    }
    v4 += 4;
  }
  while ( v4 != v3 );
}
