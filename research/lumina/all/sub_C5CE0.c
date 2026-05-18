void __fastcall sub_C5CE0(__int64 a1)
{
  int v1; // r13d
  int i; // ebp
  unsigned __int8 *v3; // rbx
  unsigned __int8 v4; // al
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 > 1 )
  {
    for ( i = 2; i <= v1; i += v5 + 1 )
    {
      v3 = (unsigned __int8 *)(a1 + 16LL * i);
      v4 = *v3;
      if ( *v3 )
      {
        if ( v4 == 7 )
        {
          sub_C5CE0(a1 + 16LL * i);
          v4 = *v3;
        }
        v5 = 1;
        if ( v4 > 5u )
          v5 = *((_DWORD *)v3 + 1) + 1;
      }
      else
      {
        v3[1] |= 4u;
        v5 = 1;
      }
    }
  }
}
