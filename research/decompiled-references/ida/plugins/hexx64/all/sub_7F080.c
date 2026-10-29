__int64 __fastcall sub_7F080(_QWORD *a1, _QWORD *a2, __m128 a3)
{
  int v3; // eax

  if ( *a2 >= a2[1] || (*(_DWORD *)a1 = unpack_dd(), *a2 >= a2[1]) )
    sub_7A510(*(double *)a3.m128_u64);
  *((_DWORD *)a1 + 1) = unpack_dd();
  v3 = *(_DWORD *)a1 & 0xF;
  if ( v3 == 2 )
    return sub_7E480(a1 + 1, a2, a3);
  if ( (*(_DWORD *)a1 & 0xFu) > 2 && v3 != 8 )
  {
    *(_DWORD *)a1 = 0;
    if ( !under_debugger )
      sub_383060(0xCBB3u, *(double *)a3.m128_u64);
    BUG();
  }
  return 1;
}

