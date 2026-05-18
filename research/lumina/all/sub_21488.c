void __fastcall sub_21488(unsigned __int8 **a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 > 1 )
  {
    v2 = (__int64)*a1;
    if ( byte_1BEF00[**a1] < 0 )
    {
      v3 = 1;
      while ( v1 - 1 > (unsigned int)v3 )
      {
        v4 = *(unsigned __int8 *)(v2 + v3++);
        if ( byte_1BEF00[v4] < 0 )
          return;
      }
      *((_DWORD *)a1 + 2) = v1 - 2;
      *a1 = (unsigned __int8 *)(v2 + 1);
    }
  }
}
