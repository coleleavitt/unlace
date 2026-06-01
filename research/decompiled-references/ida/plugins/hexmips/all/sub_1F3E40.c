unsigned __int64 __fastcall sub_1F3E40(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 *v2; // r12
  __int64 v3; // rbx
  __int64 *v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rdi

  result = *(_QWORD *)(a1 + 64);
  v2 = *(__int64 **)(a1 + 56);
  v3 = 96 * result;
  v4 = &v2[12 * result];
  if ( v2 != v4 )
  {
    v5 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
    if ( v5 )
    {
      _BitScanReverse64(&v6, v5);
      sub_1F3340(*(_QWORD *)(a1 + 56), (__int64)v4, 2LL * (int)v6);
      if ( v3 > 1536 )
      {
        v7 = v2 + 192;
        sub_1EE870(v2, v2 + 192);
        do
        {
          v8 = (__int64)v7;
          v7 += 12;
          result = sub_1EE440(v8);
        }
        while ( v4 != v7 );
        return result;
      }
    }
    else
    {
      sub_1F3340(*(_QWORD *)(a1 + 56), (__int64)v4, -2);
    }
    return sub_1EE870(v2, v4);
  }
  return result;
}

