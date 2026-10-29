__int64 __fastcall sub_A9D0(__int64 *a1, __int64 a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  char v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r13
  char radix; // al
  _BYTE v23[3]; // [rsp+25h] [rbp-33h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 8) == 0 )
    return 0;
  v3 = *(unsigned __int8 *)(a2 + 1);
  switch ( (char)v3 )
  {
    case 0:
      return 0;
    case 1:
      sub_A910(a1, *(unsigned __int16 *)(a2 + 6));
      goto LABEL_10;
    case 2:
      v6 = a1[77];
      if ( (*(_BYTE *)(v6 + 224) & 0x3B) == 0 || (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 4LL) & 0x40) != 0 )
      {
        v7 = *(_QWORD *)(a2 + 16);
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (*(_WORD *)(a1[79] + 4) & 0x400) == 0 ? 40 : 91);
        v7 = *(_QWORD *)(a2 + 16);
        if ( *(_BYTE *)(a2 + 1) == 7 )
        {
LABEL_34:
          v13 = map_code_ea();
          goto LABEL_35;
        }
      }
      v13 = 16 * calc_dataseg() + v7;
LABEL_35:
      v14 = *a1;
      if ( a1[30] == v13 && (v20 = *(_QWORD *)(a1[79] + 184)) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v14 + 56))(a1, v20, 0);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v14 + 120))(
                   a1,
                   a2,
                   v13,
                   *(_QWORD *)(a2 + 16)) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 18);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 104))(a1, *(_QWORD *)(a2 + 16), 16);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 18);
        remember_problem();
      }
      if ( *(_BYTE *)(a2 + 1) == 2 )
      {
        v15 = a1[77];
        if ( (*(_BYTE *)(v15 + 224) & 0x3B) != 0 && (*(_BYTE *)(*(_QWORD *)(v15 + 24) + 4LL) & 0x40) == 0 )
          goto LABEL_41;
      }
      goto LABEL_10;
    case 3:
      v8 = a1[77];
      if ( (*(_BYTE *)(v8 + 224) & 0x3B) == 0 || (*(_BYTE *)(*(_QWORD *)(v8 + 24) + 4LL) & 0x40) != 0 )
      {
        v17 = *(unsigned __int16 *)(a2 + 6);
        if ( (_WORD)v17 == 10 )
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, "m", 33);
        else
          sub_A910(a1, v17);
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (*(_WORD *)(a1[79] + 4) & 0x400) == 0 ? 40 : 91);
        sub_A910(a1, *(unsigned __int16 *)(a2 + 6));
LABEL_41:
        (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (*(_WORD *)(a1[79] + 4) & 0x400) == 0 ? 41 : 93);
      }
      goto LABEL_10;
    case 4:
      if ( (*(_BYTE *)(a1[79] + 4) & 0x10) != 0 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 160);
      if ( (*(_BYTE *)(a1[77] + 224) & 0x20) == 0 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      sub_A910(a1, *(unsigned __int16 *)(a2 + 6));
      if ( (*(_BYTE *)(a1[79] + 4) & 0x10) == 0 )
      {
        if ( (unsigned __int8)is_off() && (unsigned int)get_offset_expression() )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_11204, 0);
        }
        else
        {
          if ( (*((_BYTE *)a1 + 252) & 1) != 0 )
          {
            v18 = 162;
            v19 = 32;
          }
          else
          {
            v18 = 146;
            v19 = 16;
          }
          LOBYTE(v19) = v19 | 0x86;
          if ( (*(_BYTE *)(a1[79] + 5) & 1) != 0 )
            v18 = v19;
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, v18);
        }
      }
      if ( (*(_BYTE *)(a1[77] + 224) & 0x20) == 0 )
        goto LABEL_33;
      goto LABEL_10;
    case 5:
      v9 = a1[77];
      if ( (*(_BYTE *)(v9 + 224) & 0x3B) == 0 )
        goto LABEL_46;
      v10 = *((_WORD *)a1 + 124);
      if ( v10 > 0x91u )
      {
        if ( (unsigned __int16)(v10 - 230) <= 1u )
          goto LABEL_25;
        goto LABEL_44;
      }
      if ( v10 <= 0x5Fu )
      {
        if ( v10 == 65 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 24) + 4LL) & 0x40) != 0 )
          {
            radix = get_radix();
            (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(
              a1,
              *(_QWORD *)(a2 + 8) >> 3,
              (unsigned int)radix);
            goto LABEL_10;
          }
          goto LABEL_46;
        }
        if ( v10 > 0x41u )
        {
          if ( v10 == 82 )
            goto LABEL_46;
        }
        else if ( v10 == 27 || v10 == 48 )
        {
LABEL_25:
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 24) + 4LL) & 0x40) == 0 )
          {
            v11 = 1;
            (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
            v12 = *a1;
LABEL_47:
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v12 + 24))(a1, a2, 0);
            goto LABEL_48;
          }
LABEL_46:
          v12 = *a1;
          v11 = 0;
          goto LABEL_47;
        }
LABEL_44:
        if ( (*(_BYTE *)(a1[79] + 4) & 8) != 0 )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
        goto LABEL_46;
      }
      v16 = 1LL << ((unsigned __int8)v10 - 96);
      if ( (v16 & 0x800080001LL) != 0 )
        goto LABEL_46;
      if ( (v16 & 0x2080000000000LL) == 0 )
        goto LABEL_44;
      v11 = 0;
      v21 = sub_C4A0(v9, *(_QWORD *)(a2 + 8));
      if ( (*(_BYTE *)(*(_QWORD *)(a1[77] + 24) + 4LL) & 0x40) == 0 )
      {
        v11 = 1;
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      }
      v12 = *a1;
      if ( !v21 )
        goto LABEL_47;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 56))(a1, v21, 34);
LABEL_48:
      if ( v11 )
LABEL_33:
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
LABEL_10:
      result = 1;
      break;
    case 7:
      goto LABEL_34;
    case 8:
      result = 0;
      if ( *(_WORD *)(a2 + 6) == 8 )
        return result;
      qstrncpy();
      if ( (*(_BYTE *)(a1[79] + 4) & 0x20) != 0 )
        qstrupr();
      (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v23, 32);
      goto LABEL_10;
    default:
      sub_6800((__int64)"bad optype %x", v3);
      goto LABEL_10;
  }
  return result;
}

