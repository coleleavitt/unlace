__int64 __fastcall sub_63A0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  _BYTE *v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // rax

  v7 = *(unsigned __int8 *)(a2 + 1);
  v9 = *(_QWORD *)(a1 + 616);
  switch ( (char)v7 )
  {
    case 0:
      return 0;
    case 1:
      sub_6040((_QWORD *)a1, a2);
      return 1;
    case 2:
      v12 = *(_QWORD *)(a2 + 16);
      v13 = calc_dataseg();
      v14 = *(_QWORD *)(a2 + 16);
      v15 = 16 * v13 + v12;
      goto LABEL_6;
    case 3:
      sub_5EF0((__int64 *)a1, *(unsigned __int16 *)(a2 + 6), v7, a5, a6, a7);
      return 1;
    case 4:
      sub_5EF0((__int64 *)a1, *(unsigned __int16 *)(a2 + 6), v7, a5, a6, a7);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 194);
      return 1;
    case 5:
      v16 = *(_WORD *)(a1 + 248);
      if ( (unsigned __int16)(v16 - 38) <= 1u || (unsigned __int16)(v16 - 81) <= 1u )
      {
        v17 = (_BYTE *)sub_8140(v9, *(_QWORD *)(a1 + 280), *(_QWORD *)(a2 + 8));
        v18 = v17;
        if ( v17 )
        {
          if ( *v17 )
            goto LABEL_23;
        }
      }
      if ( *(_BYTE *)(a2 + 32) && (*(_QWORD *)(a1 + 720) & 0xF000000LL) == 0x5000000 && !(unsigned __int8)is_invsign() )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 16);
      return 1;
    case 7:
      v14 = *(_QWORD *)(a2 + 16);
      v15 = v14 + 16LL * *(_QWORD *)(a1 + 224);
LABEL_6:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              v15,
              v14) )
        goto LABEL_7;
      return 1;
    case 8:
      v19 = sub_8130(v9);
      if ( v19 && *(_QWORD *)(v19 + 16) > 1u )
      {
        v18 = *(_BYTE **)(v19 + 8);
LABEL_23:
        (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v18, 33);
      }
      else
      {
LABEL_7:
        sub_5FF0(a1, *(_QWORD *)(a2 + 16));
      }
      break;
    default:
      sub_55C0((__int64)"out: %a: bad optype %d", a3, *(_QWORD *)(a1 + 240));
      break;
  }
  return 1;
}

