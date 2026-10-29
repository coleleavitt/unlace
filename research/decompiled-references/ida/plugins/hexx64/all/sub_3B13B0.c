void __fastcall sub_3B13B0(unsigned __int64 **a1, __int64 a2, __m128 a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v5; // rdi

  if ( a1 )
  {
    v4 = a1[4];
    while ( v4 )
    {
      sub_3AB0B0((_QWORD *)v4[3]);
      v5 = v4;
      v4 = (unsigned __int64 *)v4[2];
      a2 = 40;
      operator delete(v5, 0x28u);
    }
    if ( *a1 )
    {
      sub_3B11F0(a1, a2, a3);
      if ( *a1 )
        qfree((__int64)*a1);
    }
    operator delete(a1, 0x48u);
  }
}

