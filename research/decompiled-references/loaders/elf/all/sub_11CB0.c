__int64 __fastcall sub_11CB0(__int64 a1, int *a2, double a3)
{
  __int64 v3; // r12
  int v4; // r13d
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  int v12; // r13d
  __int16 wide_byte; // ax
  __int64 v15; // rdi
  __int16 v16; // r14
  unsigned __int16 wide_word; // ax
  int v18; // edx
  int v19; // ecx
  unsigned __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int16 v25; // r15
  char v26; // al
  int v27; // r9d
  int v28; // r14d
  int v29; // r13d
  char v30; // al
  char v31; // r15
  int v32; // ecx
  __int64 v33; // rdi
  char v34; // al
  unsigned __int16 custom_fixup; // ax
  int v36; // [rsp+Ch] [rbp-4Ch]
  char v37; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 5);
  v4 = *a2;
  v38 = __readfsqword(0x28u);
  v5 = a1;
  v6 = sub_41070(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 1), "set relocation at");
  v7 = v3;
  v8 = v6;
  v9 = sub_41070(*(_QWORD *)(a1 + 8), v3, "set relocation to");
  if ( v8 == -1 )
    return 0;
  v10 = v9;
  if ( v9 == -1 )
    return 0;
  switch ( (char)v4 )
  {
    case 0:
      return 4;
    case 1:
      v27 = 4;
      LODWORD(v21) = 0;
      v28 = 0;
      goto LABEL_34;
    case 2:
    case 3:
      v16 = v9 - 1 - v8;
      if ( (_BYTE)v4 == 2 )
      {
        wide_word = get_wide_word(v8);
        v18 = wide_word;
        v19 = v16 & 0x7F;
        v20 = (unsigned __int64)wide_word >> 12;
        if ( wide_word > 0xDFFFuLL )
        {
          if ( v20 != 15 )
            goto LABEL_45;
          goto LABEL_20;
        }
LABEL_46:
        if ( v20 > 0xB && (wide_word & 0xFFF) == 0 )
          goto LABEL_22;
        goto LABEL_45;
      }
      wide_word = get_wide_word(v8);
      v18 = wide_word;
      v19 = v16 & 0xFFF;
      v20 = (unsigned __int64)wide_word >> 12;
      if ( wide_word <= 0xDFFFuLL )
        goto LABEL_46;
      if ( v20 != 15 || (((_WORD)v10 - 1 - (_WORD)v8) & 0xF80) != 0 )
        goto LABEL_45;
LABEL_20:
      if ( (wide_word & 0xBF8) == 0 )
      {
        v19 *= 8;
LABEL_22:
        sub_42050(a1, v8, v10, v18 | v19, 0, 1, 0, 0, 0);
        return 0;
      }
LABEL_45:
      sub_EAA0((__int64)"%a: currently unsupported combination of selfreloc and command\n", a3);
      return 0;
    case 4:
    case 5:
      LODWORD(v21) = 0;
      if ( (unsigned __int8)segtype(v8) != 2 )
        v21 = get_dword(v8, v7, v22, v23, v24) & 0xFFFF0000LL;
      if ( v10 <= 0xFFFF )
      {
        v34 = segtype(v10);
        v27 = 1;
        v32 = v10 | v21;
        v28 = 2 * (v34 == 10);
      }
      else
      {
        v25 = *(_WORD *)(a1 + 356);
        if ( v25 == 0x8000 )
        {
          custom_fixup = find_custom_fixup("AVR16");
          *(_WORD *)(a1 + 356) = custom_fixup;
          v25 = custom_fixup;
        }
        v26 = segtype(v10);
        v27 = v25;
        v28 = 2 * (v26 == 10);
LABEL_34:
        v32 = v10 | v21;
        if ( v10 > 0x7FFFFF )
        {
          if ( v10 - 0x800000 > 0xFFFF )
          {
            if ( v10 - 8454144 > 0x7EFFFF )
            {
              v31 = 0;
              v29 = (v10 - 0x1000000) | v21;
              v30 = 4;
            }
            else
            {
              v29 = (v10 - 8454144) | v21;
              v31 = 0;
              v30 = 3;
            }
          }
          else
          {
            v29 = (v10 - 0x800000) | v21;
            v31 = 0;
            v30 = 2;
          }
LABEL_37:
          v33 = *(_QWORD *)(a1 + 348);
          v36 = v27;
          v37 = v30;
          netnode_supset(v33, v8, &v37, 1, 358);
          sub_42050(v5, v8, v10, v29, 0, v36, 0, v28, 0);
          if ( v31 )
          {
LABEL_38:
            --v8;
LABEL_6:
            if ( (~((unsigned __int16)get_flags_ex(v8, 4) >> 8) & 6) != 0 )
              auto_mark_range(v8, v8 + 1, 20);
          }
          return 0;
        }
      }
      sub_42050(a1, v8, v10, v32, 0, v27, 0, v28, 0);
      return 0;
    case 6:
    case 12:
    case 19:
    case 24:
      LOWORD(v11) = v9;
      v12 = 8;
      goto LABEL_5;
    case 7:
    case 13:
    case 25:
      v12 = 6;
      v11 = v9 >> 8;
      goto LABEL_5;
    case 8:
    case 14:
      v12 = 7;
      v11 = v9 >> 16;
      goto LABEL_5;
    case 9:
    case 15:
      LOWORD(v11) = v9;
      v12 = 8;
      goto LABEL_13;
    case 10:
    case 16:
      v12 = 6;
      v11 = v9 >> 8;
      goto LABEL_13;
    case 11:
    case 17:
      v12 = 7;
      v11 = v9 >> 16;
LABEL_13:
      v15 = *(_QWORD *)(a1 + 348);
      v37 = 1;
      netnode_supset(v15, v8, &v37, 1, 358);
LABEL_5:
      wide_byte = get_wide_byte(v8);
      sub_42050(v5, v8, v10, (16 * (_WORD)v11) & 0xF00 | v11 & 0xF | wide_byte & 0xF0F0, 0, v12, 0, 0, 0);
      goto LABEL_6;
    case 18:
      ++v8;
      if ( v9 > 0xFFFFFF )
      {
        v29 = v9 - 0x1000000;
        v27 = 1;
        v30 = 4;
        v28 = 0;
        v31 = 2;
        goto LABEL_37;
      }
      sub_42050(a1, v8, v9, v9, 0, 1, 0, 0, 0);
      goto LABEL_38;
    case 20:
    case 21:
    case 22:
    case 23:
      return 3;
    default:
      return 2;
  }
}
