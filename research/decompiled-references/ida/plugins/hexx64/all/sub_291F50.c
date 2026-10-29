__int64 __fastcall sub_291F50(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  bool v7; // bp
  __int64 v8; // rdi
  char v9; // bp
  int tinfo_size; // r15d
  int v11; // eax

  v3 = a2[3];
  if ( *(_DWORD *)(v3 + 8) != 48 )
    return 0;
  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 8LL) == 52 )
  {
    get_tinfo_property();
    if ( !(unsigned __int8)get_tinfo_property() )
    {
      v4 = 0;
LABEL_7:
      clear_tinfo_t();
      return v4;
    }
    get_tinfo_property();
    if ( !(unsigned __int8)get_tinfo_property()
      || (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 0xB )
    {
      goto LABEL_9;
    }
    v7 = (get_tinfo_property() & 0xF) == 9;
    if ( v7 == ((get_tinfo_property() & 0xF) == 9) )
    {
      v9 = 1;
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( *(_DWORD *)(v8 + 8) != 57
        || a2 == *(__int64 **)(v8 + 24)
        || !*(_BYTE *)(sub_284360(v8, (__int64)a2, nullptr, *(double *)a3.m128_u64) + 60)
        || !(unsigned __int8)sub_28FF70(a1, (__int64)a2, (__int64)a2, *(double *)a3.m128_u64)
        || (getinf() & 0xF) == 6 && (unsigned __int8)getinf_flag() )
      {
        goto LABEL_9;
      }
      v9 = 0;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        goto LABEL_9;
    }
    if ( !(unsigned __int8)compare_tinfo() )
    {
      tinfo_size = get_tinfo_size();
      v11 = get_tinfo_size();
      if ( (tinfo_size | v11) < 0 || tinfo_size != v11 )
        goto LABEL_9;
      if ( v9 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) )
      {
        if ( !(unsigned __int8)sub_245010(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8),
                                 (__int64)a2) )
        {
          copy_tinfo_t();
          sub_255850(a2, a2[3], *(double *)a3.m128_u64);
          sub_255850((__int64 *)a2[3], *(_QWORD *)(a2[3] + 24), *(double *)a3.m128_u64);
          goto LABEL_25;
        }
LABEL_9:
        v4 = 0;
LABEL_10:
        clear_tinfo_t();
        goto LABEL_7;
      }
    }
    sub_255850(a2, a2[3], *(double *)a3.m128_u64);
    sub_255850(a2, a2[3], *(double *)a3.m128_u64);
    sub_255850(a2, a2[3], *(double *)a3.m128_u64);
LABEL_25:
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v4 = 1;
    goto LABEL_10;
  }
  return v4;
}

