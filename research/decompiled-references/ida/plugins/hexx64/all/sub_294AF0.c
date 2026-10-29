__int64 __fastcall sub_294AF0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v10; // r14
  int tinfo_size; // eax
  __int64 v12; // r9
  char tinfo_property; // al
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // r12
  int v16; // eax
  __int64 v17; // r9
  int v18; // ebp
  int v19; // eax
  int radix; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  unsigned int v22; // [rsp+14h] [rbp-54h]
  int v23; // [rsp+18h] [rbp-50h]
  __int64 v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v24[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v4 + 8 * v3 - 8);
  LOBYTE(v6) = sub_256450(a2, v5, *(double *)a3.m128_u64);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_383060(0xC5C2u, *(double *)a3.m128_u64);
    BUG();
  }
  v7 = v6;
  v8 = *(int *)(v5 + 8);
  if ( (unsigned int)v8 <= 0x45
    && (*((_BYTE *)&off_4E0320 + 16 * v8 + 11) & 0x20) != 0
    && (unsigned int)get_tinfo_property() == 2
    && ((*(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) & 0x20) == 0
     || !(unsigned __int8)is_stroff() && !(unsigned __int8)is_enum()) )
  {
    if ( *(_DWORD *)(a2 + 8) != 61 )
      sub_27ECD0(*(double *)a3.m128_u64);
    v10 = sub_255A30(*(__int64 **)(a2 + 24));
    if ( v10 >= 0 )
    {
      radix = get_radix();
      tinfo_size = get_tinfo_size();
      v22 = tinfo_size;
      v23 = tinfo_size;
      if ( (unsigned __int64)tinfo_size <= 8
        && !(unsigned __int8)sub_261590(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), tinfo_size, radix) )
      {
        v12 = *(_QWORD *)(v5 + 24);
        if ( a2 == v12 )
          v12 = *(_QWORD *)(v5 + 32);
        v21 = v12;
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
        {
          v14 = (unsigned int)(8 * v23 - 1);
          v15 = _bittest64(&v10, v14);
          if ( (unsigned __int64)(int)v14 >= 0x40 )
            v15 = 0;
          sub_32C430(v24, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v22, 1);
          v16 = sub_2862C0(a1, a2, v22, v15, 0, *(double *)a3.m128_u64);
          v17 = v21;
          v18 = v16;
          if ( v16 )
          {
            if ( *(_DWORD *)(v21 + 8) == 48 )
            {
              v19 = sub_294400(a1, v21, a3);
              v17 = v21;
              if ( v19 )
                goto LABEL_24;
            }
            if ( v18 == 2 || (unsigned __int8)sub_27EA20(*(_QWORD *)(a1 + 72), (_QWORD *)(v17 + 48), v24, a2 + 48, 0) )
            {
              v7 = 0;
LABEL_24:
              clear_tinfo_t();
              return v7;
            }
          }
          copy_tinfo_t();
          if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
            *(_DWORD *)(a1 + 8) |= 8u;
          goto LABEL_24;
        }
      }
    }
  }
  return 0;
}

