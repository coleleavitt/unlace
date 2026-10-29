void __fastcall sub_CA0B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rbp

  if ( a1 )
  {
    v2 = *(a1 - 1);
    if ( (int)v2 > 1 )
    {
      v3 = a1;
      v4 = (__int64)&a1[(unsigned int)(v2 - 2) + 1];
      do
      {
        if ( *v3 )
          sub_C91C0(*v3, a2);
        ++v3;
      }
      while ( v3 != (__int64 *)v4 );
    }
    sub_C91C0((__int64)(a1 - 1), a2);
  }
}
