unsigned __int64 __fastcall sub_CE1C0(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // rbx
  unsigned __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rsi

  if ( a2 )
  {
    v2 = (__int64 *)(a2 + 2);
    result = (unsigned int)*a2;
    if ( (int)result > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *v2;
        ++v5;
        v2 += 3;
        result = sub_CE140(a1, v6);
      }
      while ( *a2 > v5 );
    }
  }
  return result;
}
