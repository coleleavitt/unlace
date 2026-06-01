__int64 __fastcall sub_2901E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // rax
  signed int tinfo_size; // eax
  __int64 v11; // rsi
  signed int v12; // ebp
  __int64 v13; // r14
  char v14; // al
  signed int v15; // eax
  int radix; // eax
  unsigned int v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+8h] [rbp-80h]
  unsigned int v19; // [rsp+10h] [rbp-78h]
  unsigned int tinfo_property; // [rsp+24h] [rbp-64h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  char v22[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v23[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 8 * v2 - 8);
  LOBYTE(v6) = sub_251850(a2, v5);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_37DDE0(50627);
    BUG();
  }
  v7 = v6;
  v8 = *(int *)(v5 + 8);
  if ( (unsigned int)v8 <= 0x45
    && (*((_BYTE *)&off_4B2D60 + 16 * v8 + 11) & 0x20) != 0
    && (*(_BYTE *)(a2 + 48) & 0xFu) <= 9 )
  {
    tinfo_size = get_tinfo_size();
    v11 = *(_QWORD *)(a1 + 72);
    v12 = tinfo_size;
    v19 = *(unsigned __int8 *)(v11 + 130);
    if ( (int)v19 < tinfo_size )
    {
      v13 = *(_QWORD *)(v5 + 24);
      if ( v13 == a2 )
        v13 = *(_QWORD *)(v5 + 32);
      v17 = tinfo_size;
      sub_23DD20(&v21, v11, v13 + 48, a2 + 48, 1);
      tinfo_property = get_tinfo_property();
      v18 = sub_325910(**(_QWORD **)(a2 + 24), v17, tinfo_property == 1);
      if ( v18 == sub_325910(**(_QWORD **)(a2 + 24), v19, tinfo_property == 1) )
      {
        v14 = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL);
        if ( ((v14 & 2) == 0 || v18 >= 0 || tinfo_property != 1)
          && ((v14 & 0x20) == 0 || !(unsigned __int8)is_stroff() && !(unsigned __int8)is_enum()) )
        {
          v15 = get_tinfo_size();
          if ( v15 != -1 && v12 <= v15 )
          {
            if ( *(_DWORD *)(v13 + 8) == 48 && (unsigned int)sub_28F800(a1, v13) )
              goto LABEL_26;
            sub_327180(v22, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v19, tinfo_property);
            sub_23DD20(v23, *(_QWORD *)(a1 + 72), v13 + 48, (__int64)v22, 1);
            if ( tinfo_property == (unsigned int)get_tinfo_property() )
            {
              if ( tinfo_property != 1
                || (radix = get_radix(),
                    !(unsigned __int8)sub_25C990(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), v19, radix)) )
              {
                copy_tinfo_t();
                if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
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
      v7 = 0;
LABEL_26:
      clear_tinfo_t();
      return v7;
    }
  }
  return 0;
}

