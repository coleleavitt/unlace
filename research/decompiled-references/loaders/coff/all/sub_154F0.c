__int64 __fastcall sub_154F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *v10)(__int64, __int64, unsigned int); // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rcx
  __int64 v12; // rax

  v3 = *(_WORD *)(a3 + 12);
  switch ( v3 )
  {
    case 0u:
      goto LABEL_4;
    case 6u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      if ( v9 == sub_14A20 )
        goto LABEL_6;
      goto LABEL_17;
    case 0xFu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v4 = *((unsigned int *)a1 + 10);
      v5 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 96LL);
      if ( v5 == sub_14A00 )
        goto LABEL_3;
      v5((__int64)a1, a1[4], v4);
      goto LABEL_4;
    case 0x10u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 104LL);
      if ( v9 == sub_14A10 )
        goto LABEL_8;
      goto LABEL_17;
    case 0x11u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      if ( v9 == sub_149F0 )
        put_dword(a1[4], v7);
      else
LABEL_17:
        v9((__int64)a1, v8, v7);
      goto LABEL_4;
    case 0x12u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 96LL);
      v4 = *((_DWORD *)a1 + 10) + ~(unsigned int)a1[4];
      if ( v10 == sub_14A00 )
LABEL_3:
        add_byte(a1[4], v4);
      else
        v10((__int64)a1, a1[4], v4);
      goto LABEL_4;
    case 0x13u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 104LL);
      v12 = a1[4];
      v7 = a1[5] - 2LL - v12;
      if ( v11 != sub_14A10 )
        goto LABEL_18;
LABEL_8:
      add_word(a1[4], v7);
      goto LABEL_4;
    case 0x14u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      v12 = a1[4];
      v7 = a1[5] - 4LL - v12;
      if ( v11 == sub_14A20 )
LABEL_6:
        add_dword(a1[4], v7);
      else
LABEL_18:
        v11((__int64)a1, v12, v7);
LABEL_4:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))*a1)(a1, v3, a3);
      result = 0;
      break;
  }
  return result;
}
