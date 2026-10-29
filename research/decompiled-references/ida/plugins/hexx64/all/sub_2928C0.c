__int64 __fastcall sub_2928C0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // r13
  int tinfo_size; // eax
  int tinfo_property; // r13d
  unsigned int v9; // r15d
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 48);
  if ( (v3 & 0xE) == 0 && (v3 & 0x30) != 0 )
  {
    v10 = 0;
    if ( !(unsigned __int8)sub_284900((_QWORD *)a1, (int)&v10, a2, *(double *)a3.m128_u64) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( (unsigned int)(*(_DWORD *)(v6 + 8) - 35) > 2 )
        goto LABEL_8;
      tinfo_size = get_tinfo_size();
      if ( !(unsigned int)sub_2862C0(a1, v6, tinfo_size, 1u, 1, *(double *)a3.m128_u64) )
        goto LABEL_8;
      copy_tinfo_t();
    }
    tinfo_property = get_tinfo_property();
    if ( tinfo_property )
    {
      v9 = get_tinfo_size();
      if ( v9 != (unsigned int)get_tinfo_size() )
        tinfo_property = 2;
      sub_32C430(v11, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v9, tinfo_property);
      copy_tinfo_t();
      clear_tinfo_t();
      *(_DWORD *)(a2 + 56) |= 0x20u;
      if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
        *(_DWORD *)(a1 + 8) |= 8u;
      v4 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0;
LABEL_9:
    clear_tinfo_t();
    return v4;
  }
  return 0;
}

