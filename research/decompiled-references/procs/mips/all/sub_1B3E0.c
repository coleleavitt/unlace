void __fastcall sub_1B3E0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax

  if ( a1 )
  {
    v3 = a1[1];
    if ( v3 < a2 )
    {
      v4 = *a1;
      if ( a1[2] < a2 )
      {
        v5 = qvector_reserve(a1, v4, a2, 1);
        v3 = a1[1];
        *a1 = v5;
        v4 = v5;
      }
      memset((void *)(v4 + v3), 0, a2 - v3);
      a1[1] = a2;
    }
    else if ( a2 != v3 )
    {
      a1[1] = a2;
    }
  }
}
