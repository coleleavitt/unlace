__int64 __fastcall sub_294DE0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // r15d
  __int64 v9; // rax
  signed int tinfo_size; // eax
  __int64 v12; // rsi
  signed int v13; // ebp
  __int64 v14; // r14
  char v15; // al
  signed int v16; // eax
  int radix; // eax
  int v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+8h] [rbp-80h]
  signed int v20; // [rsp+10h] [rbp-78h]
  int tinfo_property; // [rsp+24h] [rbp-64h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  char v23[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v24[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 8 * v3 - 8);
  LOBYTE(v7) = sub_256450(a2, v6, *(double *)a3.m128_u64);
  if ( !(_BYTE)v7 )
  {
    if ( !under_debugger )
      sub_383060(0xC5C3u, *(double *)a3.m128_u64);
    BUG();
  }
  v8 = v7;
  v9 = *(int *)(v6 + 8);
  if ( (unsigned int)v9 <= 0x45
    && (*((_BYTE *)&off_4E0320 + 16 * v9 + 11) & 0x20) != 0
    && (*(_BYTE *)(a2 + 48) & 0xFu) <= 9 )
  {
    tinfo_size = get_tinfo_size();
    v12 = *(_QWORD *)(a1 + 72);
    v13 = tinfo_size;
    v20 = *(unsigned __int8 *)(v12 + 130);
    if ( v20 < tinfo_size )
    {
      v14 = *(_QWORD *)(v6 + 24);
      if ( v14 == a2 )
        v14 = *(_QWORD *)(v6 + 32);
      v18 = tinfo_size;
      sub_242920(&v22, v12, v14 + 48, a2 + 48, 1);
      tinfo_property = get_tinfo_property();
      v19 = sub_32ABC0(**(_QWORD **)(a2 + 24), v18, tinfo_property == 1);
      if ( v19 == sub_32ABC0(**(_QWORD **)(a2 + 24), v20, tinfo_property == 1) )
      {
        v15 = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL);
        if ( ((v15 & 2) == 0 || v19 >= 0 || tinfo_property != 1)
          && ((v15 & 0x20) == 0 || !(unsigned __int8)is_stroff() && !(unsigned __int8)is_enum()) )
        {
          v16 = get_tinfo_size();
          if ( v16 != -1 && v13 <= v16 )
          {
            if ( *(_DWORD *)(v14 + 8) == 48 && (unsigned int)sub_294400(a1, v14, a3) )
              goto LABEL_26;
            sub_32C430((__int64 *)v23, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v20, tinfo_property);
            sub_242920(v24, *(_QWORD *)(a1 + 72), v14 + 48, (__int64)v23, 1);
            if ( tinfo_property == (unsigned int)get_tinfo_property() )
            {
              if ( tinfo_property != 1
                || (radix = get_radix(),
                    !(unsigned __int8)sub_261590(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), v20, radix)) )
              {
                copy_tinfo_t();
                if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
                  *(_DWORD *)(a1 + 8) |= 8u;
                clear_tinfo_t();
                clear_tinfo_t();
                goto LABEL_26;
              }
            }
            clear_tinfo_t();
            clear_tinfo_t();
          }
        }
      }
      v8 = 0;
LABEL_26:
      clear_tinfo_t();
      return v8;
    }
  }
  return 0;
}

