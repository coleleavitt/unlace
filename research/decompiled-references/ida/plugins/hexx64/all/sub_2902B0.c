__int64 __fastcall sub_2902B0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r12
  int tinfo_size; // eax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // r13
  __int64 v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 21 )
    return 0;
  v6 = sub_254EB0(v4, v11, 0);
  if ( !v6 )
    return 0;
  tinfo_size = get_tinfo_size();
  switch ( tinfo_size )
  {
    case 2:
      v8 = 0xFFFF;
      break;
    case 4:
      v8 = 0xFFFFFFFFLL;
      break;
    case 1:
      v8 = 255;
      break;
    default:
      return 0;
  }
  if ( (v8 & v11[0]) != v8 )
    return 0;
  v9 = *(__int64 **)(a2 + 24);
  v10 = v9[4];
  if ( v10 == v6 )
    v10 = v9[3];
  if ( v10 )
  {
    sub_255630(v10, *(double *)a3.m128_u64);
    clear_tinfo_t();
    j__qfree(v10);
    v9 = *(__int64 **)(a2 + 24);
  }
  sub_255850(v9, v6, *(double *)a3.m128_u64);
  if ( a2 )
    sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

