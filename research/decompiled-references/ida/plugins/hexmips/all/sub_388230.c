__int64 __fastcall sub_388230(__int64 a1)
{
  __int64 v2; // rsi

  if ( *(_DWORD *)a1 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 61 && (unsigned __int8)get_tinfo_details() )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v2 + 8) != 61 )
      sub_37FAE0(0.0);
    sub_2511B0(*(__int64 **)(v2 + 24));
  }
  return 0xFFFFFFFFLL;
}

