__int64 __fastcall sub_68EC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  unsigned __int16 v6; // r14
  __int64 v7; // r13
  unsigned __int32 v8; // r15d
  bool v9; // cc
  signed __int32 v10; // eax
  __int64 v12; // rdx
  _OWORD *v13; // rsi
  unsigned int v14; // eax
  _OWORD *v15; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h]
  _OWORD v20[4]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v22; // [rsp+C8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 32);
  v22 = __readfsqword(0x28u);
  v4 = sub_97BF0(v3);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 256);
  v8 = debug & 0x40000;
  if ( (debug & 0x40000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _OWORD *))(v7 + 528))(v4, v20);
    if ( (debug & 0x40000) != 0 )
    {
      sub_986B0(*(_QWORD *)(a1 + 32));
      sub_16DD0((__int64)"DWARF: get_item_kind(); name=%s, ea=%a, tag=%s");
      v9 = v6 <= 0x2Eu;
      if ( v6 != 46 )
        goto LABEL_4;
    }
    else
    {
      v9 = v6 <= 0x2Eu;
      if ( v6 != 46 )
      {
LABEL_4:
        if ( v9 )
        {
          if ( v6 != 5 )
          {
            if ( v6 == 11 )
            {
              v8 = 3;
              v10 = debug & 0x40000;
              goto LABEL_8;
            }
            goto LABEL_34;
          }
        }
        else if ( v6 != 52 )
        {
LABEL_34:
          v8 = 0;
          v10 = debug & 0x40000;
LABEL_8:
          if ( v10 )
            sub_16DD0((__int64)" -> %s\n");
          return v8;
        }
        v5 = *(_QWORD *)(a1 + 32);
LABEL_19:
        v16 = 0;
        sub_945B0(v5, &v16, 2);
        sub_89A30(v17, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 256LL), &v16);
        v12 = *(_QWORD *)(a2 + 8);
        v13 = v20;
        memset(v20, 0, sizeof(v20));
        v21 = 0;
        if ( (unsigned __int8)sub_851D0(v17, v20, v12) )
        {
          memset(v18, 0, sizeof(v18));
          v19 = 0;
          if ( !(unsigned __int8)sub_847F0(v20, v7, v18) && (debug & 0x40000) != 0 )
            sub_16DD0((__int64)"DWARF: Only considering first loc for determining source_item_t kind.\n");
          v13 = v18;
          v14 = sub_854B0(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 32) + 16LL) + 168LL), v18);
          if ( v14 > 3 )
          {
            v8 = 5;
            if ( v14 == 4 )
              goto LABEL_28;
          }
          else
          {
            v8 = 6;
            if ( v14 )
            {
LABEL_28:
              sub_85110(v17, v13);
              sub_84A10(&v16);
              v10 = debug & 0x40000;
              goto LABEL_8;
            }
          }
          v15 = nullptr;
          v13 = &v15;
          (*(void (__fastcall **)(_QWORD, _OWORD **))(v7 + 552))((unsigned __int8)v19, &v15);
          if ( (debug & 0x40000) != 0 )
          {
            v13 = v15;
            sub_16DD0((__int64)"DWARF: Unsupported operation: %s (%d)\n");
          }
        }
        v8 = 0;
        goto LABEL_28;
      }
    }
    v8 = 2;
    v10 = debug & 0x40000;
    goto LABEL_8;
  }
  if ( v4 == 46 )
    return 2;
  if ( v4 > 0x2Eu )
  {
    if ( v4 != 52 )
      return v8;
    goto LABEL_19;
  }
  if ( v4 == 5 )
    goto LABEL_19;
  if ( v4 == 11 )
    return 3;
  return v8;
}

