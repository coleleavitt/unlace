__int64 __fastcall sub_15DA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int wide_byte; // r12d
  unsigned int v10; // r13d
  void (*v11)(); // rax
  unsigned __int16 v12; // si
  __int64 v13; // r12
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, __int64, unsigned int); // rax
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(__int64, __int64, __int64); // rcx

  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 24);
  if ( v8 == sub_14A60 )
    wide_byte = get_wide_byte(v7);
  else
    wide_byte = v8(a1, v7);
  v10 = wide_byte;
  v11 = *(void (**)())(*(_QWORD *)a1 + 16LL);
  if ( v11 == nullsub_2 )
  {
    v12 = *(_WORD *)(a3 + 12);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v11)(a1, wide_byte);
    v12 = *(_WORD *)(a3 + 12);
    if ( v12 > 0x21u )
    {
LABEL_11:
      (**(void (__fastcall ***)(__int64))a1)(a1);
      return 0;
    }
  }
  switch ( v12 )
  {
    case 0u:
      break;
    case 5u:
      *(_DWORD *)(a2 + 4) = 0;
      v13 = wide_byte & 0xFF000000;
      *(_WORD *)a2 = 4;
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
      v15 = (*(_DWORD *)(a1 + 56) + v10) & 0xFFFFFF;
      goto LABEL_7;
    case 0x10u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      goto LABEL_14;
    case 0x11u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v20 = *(unsigned int *)(a1 + 56);
      v21 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*(_QWORD *)a1 + 96LL);
      if ( v21 == sub_14A00 )
        add_byte(*(_QWORD *)(a1 + 32), v20);
      else
        v21(a1, *(_QWORD *)(a1 + 32), v20);
      break;
    case 0x13u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v19 = *(_QWORD *)(a1 + 56) + wide_byte - *(_QWORD *)(a1 + 48);
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
      goto LABEL_15;
    case 0x15u:
      *(_DWORD *)(a2 + 4) = 0;
      v13 = wide_byte & 0xFF000000;
      *(_WORD *)a2 = 4;
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
      v15 = (v10 + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48)) & 0xFFFFFF;
      goto LABEL_7;
    case 0x20u:
      *(_WORD *)a2 = 1;
LABEL_14:
      v19 = *(_QWORD *)(a1 + 56) + wide_byte;
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
LABEL_15:
      v15 = (unsigned __int16)v19;
      v13 = wide_byte & 0xFFFF0000;
LABEL_7:
      v16 = *(_QWORD *)(a1 + 32);
      v17 = v13 | v15;
      if ( v14 == sub_14A70 )
        goto LABEL_8;
      v14(a1, *(_QWORD *)(a1 + 32), v17);
      break;
    case 0x21u:
      *(_DWORD *)(a2 + 4) |= 4u;
      *(_WORD *)a2 = 6;
      v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL);
      if ( v22 == sub_14A60 )
        v23 = get_wide_byte(*(_QWORD *)(a1 + 32));
      else
        v23 = v22(a1, *(_QWORD *)(a1 + 32));
      v24 = (unsigned __int8)v23;
      LOBYTE(v23) = 0;
      v16 = *(_QWORD *)(a1 + 32);
      v25 = v24 + (*(__int64 *)(a1 + 56) >> 8);
      v26 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 56) = v25;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v26 + 64);
      v17 = v23 | (unsigned int)(unsigned __int8)v25;
      if ( v27 == sub_14A70 )
LABEL_8:
        put_byte(v16, v17);
      else
        v27(a1, v16, v17);
      break;
    default:
      goto LABEL_11;
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  return 1;
}
