__int64 __fastcall sub_5AE0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // ecx

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      goto LABEL_6;
    case 2:
      a3 = (*(double (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      goto LABEL_3;
    case 3:
      if ( !*(_BYTE *)(a2 + 32)
        && ((unsigned __int8)is_off()
         || (unsigned __int8)is_stkvar()
         || (unsigned __int8)is_enum()
         || (unsigned __int8)is_stroff()) )
      {
        goto LABEL_11;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      if ( *(_BYTE *)(a2 + 32) == 1 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      if ( *(_BYTE *)(a2 + 32) == 2 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      goto LABEL_6;
    case 4:
LABEL_11:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v5 = 64;
      if ( (*((_DWORD *)a1 + 63) & 0x10) == 0 )
        v5 = (*((_DWORD *)a1 + 63) & 8) == 0 ? 16 : 32;
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(
        a1,
        a2,
        v5 | ((*((_DWORD *)a1 + 63) & 4) == 0 ? 128 : 132));
      sub_5810((__int64)a1, a2);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      goto LABEL_6;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(
        a1,
        a2,
        4 * (unsigned int)(*((_WORD *)a1 + 124) == 14 || (unsigned __int16)(*((_WORD *)a1 + 124) - 16) <= 1u));
      sub_5810((__int64)a1, a2);
      goto LABEL_6;
    case 6:
    case 7:
LABEL_3:
      v3 = sub_5740((__int64)(a1 + 28), a2, a3);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v3, -1) )
        sub_56B0(a1, *(_QWORD *)(a2 + 16));
      sub_5810((__int64)a1, a2);
      goto LABEL_6;
    case 8:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      sub_5910(a1, *(unsigned __int16 *)(a2 + 6), 8);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
LABEL_6:
      result = 1;
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
      result = sub_5DC0(10099);
      break;
  }
  return result;
}

