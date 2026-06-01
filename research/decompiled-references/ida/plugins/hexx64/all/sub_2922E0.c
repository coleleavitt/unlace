__int64 __fastcall sub_2922E0(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  char v6; // bp
  int tinfo_size; // eax
  char tinfo_property; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx

  if ( !(unsigned __int8)compare_tinfo() )
  {
    if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
      return 0;
    get_tinfo_property();
    get_tinfo_property();
    if ( (get_tinfo_property() & 0x40) == 0
      || (v10 = *(_QWORD *)(a1 + 16),
          v11 = *(_QWORD *)(a1 + 24),
          v12 = *(_QWORD *)(v10 + 8 * v11 - 8),
          *(_DWORD *)(v12 + 8) != 51)
      || (v13 = *(_QWORD *)(v10 + 8 * v11 - 16), (unsigned int)(*(_DWORD *)(v13 + 8) - 2) <= 0xD)
      && *(_QWORD *)(v13 + 24) == v12
      || (set_tinfo_property(), !(unsigned __int8)compare_tinfo()) )
    {
      clear_tinfo_t();
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( *(_DWORD *)(v4 + 8) == 51 )
  {
    tinfo_property = get_tinfo_property();
    if ( !(unsigned __int8)sub_241090((int)a2 + 48, *(_DWORD *)(v4 + 40), (tinfo_property & 0xF) == 9) )
      return 0;
    v5 = a2[6];
    if ( !(_BYTE)v5 )
      goto LABEL_9;
  }
  else
  {
    v5 = a2[6];
    if ( !(_BYTE)v5 )
      goto LABEL_9;
  }
  if ( (v5 & 0xE) != 0 || (v5 & 0x30) == 0 )
  {
    get_tinfo_property();
    v6 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v6 & 0x3F) != 0x30 )
      goto LABEL_6;
  }
LABEL_9:
  tinfo_size = get_tinfo_size();
  if ( (unsigned int)sub_2862C0(a1, (__int64)a2, tinfo_size, 1u, 0, *(double *)a3.m128_u64) )
    return 0;
LABEL_6:
  sub_255850(a2, a2[3], *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

