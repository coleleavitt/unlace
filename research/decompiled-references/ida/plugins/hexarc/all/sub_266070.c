__int64 __fastcall sub_266070(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 tinfo_size; // rax
  __int64 tinfo_property; // [rsp+0h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 444) != 1 || (get_tinfo_property() & 0xF) != 0xB )
    return 0;
  tinfo_property = get_tinfo_property();
  tinfo_size = get_tinfo_size();
  if ( tinfo_size > 0 )
  {
    *a4 = tinfo_property;
    *a2 = (*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 96)) / tinfo_size;
    *a3 = tinfo_size;
    *(_DWORD *)(a1 + 444) |= 2u;
  }
  clear_tinfo_t();
  return 1;
}

