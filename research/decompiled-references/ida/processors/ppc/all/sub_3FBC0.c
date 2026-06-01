__int64 __fastcall sub_3FBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int16 v6; // ax
  char v8; // r13
  __int64 v9; // rdx
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = sub_3F8C0(a1, a3);
  if ( v5 )
    return add_auto_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v5);
  v6 = *(_WORD *)(a3 + 24);
  if ( v6 > 0x11Bu )
  {
    if ( v6 <= 0x484u )
    {
      if ( v6 <= 0x482u )
      {
        if ( v6 == 347
          && *(_BYTE *)(a3 + 41) == 1
          && *(_WORD *)(a3 + 46) == 1
          && *(_WORD *)(a3 + 126) <= 5u
          && (unsigned __int8)sub_5BBD0(a1, &v13, *(_QWORD *)(a3 + 16), 1) )
        {
          v10 = *(_WORD *)(a3 + 126);
          v11 = -1LL << v10;
          if ( v10 >= 0x40u )
            v11 = 0;
          v12 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
          v13 &= v11;
          set_auto_spd(a2, v12, v13);
          return v14 - __readfsqword(0x28u);
        }
        return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
      }
      goto LABEL_19;
    }
    if ( (unsigned __int16)(v6 - 1182) > 1u )
      return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
LABEL_28:
    v8 = 1;
    goto LABEL_20;
  }
  if ( v6 > 0x119u )
    goto LABEL_28;
  if ( v6 != 88 )
  {
    if ( v6 <= 0x58u )
    {
      if ( (unsigned __int16)(v6 - 4) > 1u )
        return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
LABEL_19:
      v8 = 0;
LABEL_20:
      if ( *(_BYTE *)(a3 + 41) == 1
        && *(_WORD *)(a3 + 46) == 1
        && (unsigned __int8)sub_5BBD0(a1, &v13, *(_QWORD *)(a3 + 16), *(unsigned __int16 *)(a3 + 86)) )
      {
        v9 = *(_QWORD *)(a3 + 128);
        if ( v8 )
          v9 = -*(_QWORD *)(a3 + 128);
        set_auto_spd(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v13 + v9);
        return v14 - __readfsqword(0x28u);
      }
      return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
    }
    if ( v6 != 118 && v6 != 281 )
      return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
  }
  if ( *(_BYTE *)(a3 + 41) != 1 || *(_WORD *)(a3 + 46) != 1 || !(unsigned __int8)sub_5BDA0(a1, &v13, a2, a3, a3 + 80) )
    return del_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26));
  set_auto_spd(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v13);
  return v14 - __readfsqword(0x28u);
}

