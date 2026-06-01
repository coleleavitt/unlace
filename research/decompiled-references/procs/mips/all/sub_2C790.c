__int64 __fastcall sub_2C790(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int16 v6; // ax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 spd; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v5 = sub_2C600(a1, a3);
  if ( !v5 )
  {
    v6 = *(_WORD *)(a3 + 24);
    if ( (v6 == 195 || v6 == 473) && *(_BYTE *)(a3 + 41) == 1 && *(_WORD *)(a3 + 46) == 29 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 0x10) != 0 && *(_BYTE *)(a3 + 81) == 1 && *(_WORD *)(a3 + 86) == 30 )
      {
        spd = get_spd(a2, *(_QWORD *)(a3 + 16));
        v9 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
        v8 = -(*(_QWORD *)(a2 + 56) + spd + *(unsigned __int16 *)(a2 + 40));
        return add_auto_stkpnt(a2, v9, v8);
      }
      if ( (unsigned __int8)sub_48E80(a1, &v11, *(_QWORD *)(a3 + 16), *(unsigned __int16 *)(a3 + 86)) )
        set_auto_spd(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v11);
    }
    return v12 - __readfsqword(0x28u);
  }
  v8 = v5;
  v9 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
  return add_auto_stkpnt(a2, v9, v8);
}
