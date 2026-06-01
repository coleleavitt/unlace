__int64 __fastcall sub_292B60(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  char v5; // al
  int tinfo_size; // r12d
  unsigned __int8 v7; // [rsp+Fh] [rbp-39h]
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 51
    || *(_DWORD *)(*(_QWORD *)(v3 + 24) + 8LL) != 48
    || (get_tinfo_property() & 0x2F) != 0xD )
  {
    return 0;
  }
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xB
    && (tinfo_size = get_tinfo_size(), tinfo_size == (unsigned int)get_tinfo_size()) )
  {
    sub_32C540(v8, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (_QWORD *)(*(_QWORD *)(a2 + 32) + 48LL));
    copy_tinfo_t();
    clear_tinfo_t();
    sub_2441C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = v5;
  clear_tinfo_t();
  return v7;
}

