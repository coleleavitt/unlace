void __fastcall sub_26A50(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax

  v3 = a1[1];
  if ( v3 < a2 )
  {
    v4 = *a1;
    if ( a1[2] < a2 )
    {
      v5 = qvector_reserve();
      v3 = a1[1];
      *a1 = v5;
      v4 = v5;
    }
    memset((void *)(v4 + 16 * v3), 0, 16 * (a2 - v3));
    a1[1] = a2;
  }
  else if ( v3 != a2 )
  {
    a1[1] = a2;
  }
}

