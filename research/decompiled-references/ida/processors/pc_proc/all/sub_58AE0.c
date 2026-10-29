unsigned __int64 __fastcall sub_58AE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int16 word; // ax
  __int16 v8; // r15
  __int64 v9; // rax
  void (__fastcall *v10)(__int64); // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // [rsp+0h] [rbp-78h]
  unsigned __int64 *v17; // [rsp+8h] [rbp-70h]
  unsigned __int64 v18; // [rsp+10h] [rbp-68h]
  unsigned __int64 v19; // [rsp+18h] [rbp-60h] BYREF
  char v20; // [rsp+27h] [rbp-51h]
  unsigned __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v19 = a2;
  v23 = __readfsqword(0x28u);
  if ( (unsigned __int64)(a3 - a2) <= 0x13 || (unsigned __int8)get_fixups() )
    return v23 - __readfsqword(0x28u);
  v17 = &v21;
  v21 = 0;
  sub_529A0(a2, 8, &v21);
  sub_54240(a1, &v19);
  v5 = v19 + 8;
  v18 = v19 + 776;
  while ( 1 )
  {
    v6 = v5 - 8;
    if ( (get_flags_ex() & 0x1000) != 0
      || (unsigned __int8)netnode_charval()
      || a3 + 8 - v5 <= 0xB
      || (unsigned __int8)get_fixups() )
    {
LABEL_18:
      v5 = v6;
      goto LABEL_19;
    }
    word = get_word();
    v19 = v5 - 4;
    v8 = word;
    if ( word == 3 )
    {
      v22 = sub_52C60(a1, v5 - 4, 0, 0, 0);
      v14 = v22;
      if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDLL )
        break;
      v19 = v5;
      if ( (unsigned __int8)get_fixups() || !(unsigned __int8)sub_589A0(a1, v14) )
        goto LABEL_19;
      v10 = (void (__fastcall *)(__int64))sub_54360;
      goto LABEL_16;
    }
    if ( (unsigned __int8)get_fixups() )
      break;
    if ( v8 )
    {
      if ( v8 != 5 )
        break;
      v19 = v5;
      v9 = sub_52C60(a1, v5, 0, 1u, 1);
      v22 = v9;
      if ( v9 == -1 )
        goto LABEL_19;
      if ( v9 )
      {
        if ( !(unsigned __int8)sub_56F90(a1, v9, 1, 0) )
          goto LABEL_19;
        v22 = sub_3A330(v5);
        v15 = v22;
        if ( v22 != -1
          && !(unsigned __int8)netnode_charval()
          && !(unsigned __int8)sub_586A0(a1, v15)
          && (get_flags_ex() & 0x600) == 0 )
        {
          sub_52CE0(a1, &v22, 0);
        }
      }
      goto LABEL_15;
    }
    if ( (unsigned int)get_dword() )
      break;
    v19 = v5;
    v22 = sub_52C60(a1, v5, 0, 0, 0);
    if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDLL || !(unsigned __int8)sub_52B00(v22, 0) )
      goto LABEL_19;
LABEL_15:
    v10 = (void (__fastcall *)(__int64))sub_542D0;
LABEL_16:
    v20 = 1;
    netnode_supset();
    sub_529A0(v5 - 8, 12, v17);
    v6 = v5 + 4;
    v10(a1);
    if ( !(unsigned __int8)callui(27, v5 - 8, &callui, v11, v12, v13, v16, v17, v18, v5 + 4) )
    {
      v5 += 12LL;
      if ( v5 != v18 )
        continue;
    }
    goto LABEL_18;
  }
  v5 -= 4LL;
LABEL_19:
  if ( v5 < v21 )
    auto_mark_range();
  return v23 - __readfsqword(0x28u);
}

