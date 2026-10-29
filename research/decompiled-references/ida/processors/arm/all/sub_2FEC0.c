__int64 __fastcall sub_2FEC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v4; // cx
  int v6; // eax
  __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( sub_2FB20(a1, (__int64)a2, a3, 1) )
  {
    if ( (unsigned __int8)netnode_charval() )
      return v13 - __readfsqword(0x28u);
    return add_auto_stkpnt();
  }
  v4 = *(_WORD *)(a3 + 24);
  if ( v4 <= 0x18u )
  {
    if ( ((1LL << v4) & 0x1005400) == 0 )
    {
      if ( v4 == 23 && *(_BYTE *)(a3 + 41) == 1 )
      {
        v11 = *(unsigned __int16 *)(a3 + 46);
        if ( (v11 == 13 || v11 == 161)
          && *(_BYTE *)(a3 + 81) == 1
          && (unsigned __int8)sub_82530(a1, &v12, a2, a3, a3 + 80) )
        {
          set_auto_spd();
          return v13 - __readfsqword(0x28u);
        }
      }
      goto LABEL_6;
    }
    if ( *(_BYTE *)(a3 + 41) == 1 )
    {
      v6 = *(unsigned __int16 *)(a3 + 46);
      if ( (v6 == 13 || v6 == 161)
        && *(_BYTE *)(a3 + 81) == 1
        && *(_BYTE *)(a3 + 121) == 5
        && (unsigned __int8)sub_82530(a1, &v12, a2, a3, a3 + 80) )
      {
        v7 = *(_WORD *)(a3 + 24);
        v8 = *(_QWORD *)(a3 + 128);
        if ( v7 == 14 )
        {
          v9 = v12 + v8;
          goto LABEL_20;
        }
        v9 = v12 - v8;
        if ( v7 == 12 )
        {
LABEL_20:
          v12 = v9;
          set_auto_spd();
          return v13 - __readfsqword(0x28u);
        }
        v10 = v8 ^ -(__int64)(v7 == 10);
        if ( (v10 & 0xFFFFFFFFFFFFFFF7LL) == 7 || (v10 & 0xFFFFFFFFFFFFFFDFLL) == 0x1F )
        {
          v9 = v12 & ~v10;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_6:
  if ( *a2 == *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26) )
    return v13 - __readfsqword(0x28u);
  return del_stkpnt();
}
