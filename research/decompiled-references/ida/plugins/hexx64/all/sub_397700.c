__int64 __fastcall sub_397700(
        __int64 a1,
        char *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // r12
  __int64 tinfo_property; // rax

  if ( !*a2 )
  {
    set_tinfo();
LABEL_3:
    sub_395A90(a1, 0, a6, v11, v12, v13, a7, a8, a9);
    return 1;
  }
  v15 = *(_QWORD *)(a1 + 32);
  if ( v15 )
    *(_DWORD *)(v15 + 108) |= 8u;
  apply_tinfo();
  if ( a5 && (unsigned __int8)sub_384940(a3, (__int64)a2, v18, v19, v20, v21) )
    set_name();
  v22 = *(_QWORD *)(a1 + 32);
  if ( v22 )
  {
    *(_DWORD *)(v22 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_395A90(a1, 0, a6, v18, v19, v20, a7, a8, a9);
  }
  v23 = *(_QWORD *)(a1 + 24);
  v24 = 1;
  if ( *(_QWORD *)(v23 + 40) == a3 )
  {
    *(_DWORD *)a1 |= 2u;
    if ( a4 )
      sub_2167E0(v23);
    v24 = 0;
  }
  while ( 1 )
  {
    tinfo_property = get_tinfo_property();
    if ( !(_BYTE)tinfo_property )
      break;
    *(_QWORD *)a2 = tinfo_property;
    clear_tinfo_t();
  }
  clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xC || v24 )
    goto LABEL_3;
  return 1;
}

