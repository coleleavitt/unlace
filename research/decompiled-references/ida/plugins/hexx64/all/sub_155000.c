__int64 __fastcall sub_155000(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  unsigned int data_value; // r13d
  int flags; // r15d
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  __int16 v12; // r14
  __int64 _64bit; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-88h]
  unsigned __int64 v19; // [rsp+10h] [rbp-78h]
  __int64 v20; // [rsp+18h] [rbp-70h]

  if ( (unsigned __int8)is_spec_ea() )
    return 0;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  flags = get_flags_ex();
  if ( (flags & 0x600) != 0x400 )
    return 0;
  if ( (flags & 0xF0000000) == 0x50000000 )
    return 0;
  data_value = get_data_value();
  if ( !(_BYTE)data_value )
    return 0;
  v8 = *(int *)(a1 + 4);
  v18 = v19;
  if ( (int)v8 > *(_DWORD *)(a2 + 84) )
  {
    _64bit = get_64bit();
    v8 = *(int *)(a1 + 4);
    v18 = _64bit;
  }
  v9 = *(_QWORD *)(a2 + 96);
  v10 = sub_343460(v9, *(_QWORD *)(a1 + 8), v8);
  if ( v10 == 1 )
  {
    if ( (flags & 0xC000) != 0x4000 )
      goto LABEL_14;
    return 0;
  }
  if ( v10 != 3 )
  {
    if ( v10 )
      goto LABEL_14;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a2 + 84)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) < v19
    || !(unsigned __int8)is_mapped() )
  {
    return 0;
  }
LABEL_14:
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 != *(_DWORD *)(a2 + 80) && v11 != *(unsigned __int8 *)(v9 + 130) )
    goto LABEL_16;
  if ( !(unsigned __int8)is_off() && !(unsigned __int8)is_off() )
  {
    v11 = *(_DWORD *)(a1 + 4);
LABEL_16:
    v12 = *(_WORD *)(a1 + 2);
    sub_120A10(a1, (unsigned __int64 *)a2, v18, v11, a3, 0);
    *(_WORD *)(a1 + 2) = v12;
    return data_value;
  }
  v14 = -1;
  if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
    v14 = v20;
  if ( !(unsigned __int8)is_mapped() )
    return 0;
  *(_BYTE *)a1 = 6;
  v16 = *(_DWORD *)(a1 + 4);
  v17 = (unsigned int)(8 * *(_DWORD *)(a2 + 84));
  if ( (unsigned __int64)(int)v17 <= 0x3F )
    v14 &= ~(-1LL << (8 * *(_BYTE *)(a2 + 84)));
  *(_QWORD *)(a1 + 8) = v14;
  sub_11C950((unsigned __int8 *)a1, a2, v15, v17, *(double *)a4.m128i_i64);
  if ( *(_DWORD *)(a1 + 4) > v16 )
  {
    sub_1273B0(a1, (unsigned __int64 *)a2, a3, v16, a4);
  }
  else if ( *(_DWORD *)(a1 + 4) < v16 )
  {
    sub_1207E0((char *)a1, (unsigned __int64 *)a2, 9, a3, v16, a4);
  }
  return data_value;
}

