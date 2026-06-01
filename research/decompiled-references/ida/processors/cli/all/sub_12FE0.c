__int64 __fastcall sub_12FE0(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // rax
  unsigned int v11; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 item_end; // rax
  __int64 result; // rax
  char v18; // dl
  __int64 v19; // rax

  v10 = *(_QWORD *)(a1 + 616);
  *(_DWORD *)(a1 + 144) &= ~0x800u;
  v11 = netnode_altval(*(_QWORD *)(v10 + 144), *(_QWORD *)(a1 + 16), 113);
  if ( v11 )
    sub_10B40((_QWORD *)a1, v11, a3, a4, a5, a6, v12, v13, a9, a10);
  v14 = *(_QWORD *)(a1 + 16);
  if ( !(unsigned int)sub_12E30((_QWORD *)a1, a3, a4, a5, a6, v12, v13, a9, a10) )
  {
    v15 = *(_QWORD *)(a1 + 720);
    if ( (v15 & 0x600) == 0x400 && (v15 & 0xF0000000) == 0xB0000000LL )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, 0);
  }
  item_end = get_item_end(v14);
  result = sub_8F10(a1, item_end, a3, a4, a5);
  if ( !(_BYTE)result )
  {
    v18 = is_loaded(v14);
    v19 = *(_QWORD *)a1;
    if ( v18 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(v19 + 344))(a1, a2);
    else
      return (*(__int64 (__fastcall **)(__int64, void *, __int64))(v19 + 136))(a1, &unk_14DCD, 0xFFFFFFFFLL);
  }
  return result;
}

