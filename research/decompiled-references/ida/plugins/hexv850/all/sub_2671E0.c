__int64 __fastcall sub_2671E0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // ecx

  get_tinfo_property();
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) != 0xA )
    goto LABEL_10;
  if ( (get_tinfo_property() & 0xF) == 0xA )
    goto LABEL_10;
  v1 = *(_DWORD *)(a1 + 24) - 1;
  if ( v1 < 0 )
    goto LABEL_10;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v1;
  while ( 1 )
  {
    v4 = v2;
    v2 = *(_QWORD *)v3;
    v5 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
    if ( (unsigned int)(v5 - 51) > 1 )
      break;
    --v1;
    v3 -= 8;
    if ( v1 == -1 )
      goto LABEL_10;
  }
  if ( v5 != 57 || *(_QWORD *)(v2 + 24) != v4 || !(unsigned __int8)compare_tinfo() )
LABEL_10:
    v2 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  return v2;
}

