__int64 __fastcall sub_15730(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  int wide_byte; // eax
  unsigned __int16 v10; // si
  int v11; // ebp
  bool v12; // cc
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int16 v15; // ax
  __int16 v16; // r12
  __int64 v17; // rbp
  void (*v18)(); // rax
  __int64 v19; // rbp
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax
  unsigned __int16 v21; // si
  unsigned __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rax
  __int64 v24; // rdi
  int v26; // eax

  v5 = *a1;
  v7 = a1[4];
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(v5 + 24);
  if ( v8 == sub_14A60 )
  {
    wide_byte = get_wide_byte(v7);
    v10 = *(_WORD *)(a3 + 12);
    v11 = wide_byte;
    v12 = v10 <= 0x10u;
    if ( v10 != 16 )
      goto LABEL_3;
LABEL_20:
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 1;
    v22 = a1[7];
    v24 = a1[4];
    v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 104LL);
    if ( v23 == sub_14A10 )
    {
      add_word(v24, v22);
      return 1;
    }
    goto LABEL_13;
  }
  v26 = v8((__int64)a1, v7);
  v10 = *(_WORD *)(a3 + 12);
  v11 = v26;
  v12 = v10 <= 0x10u;
  if ( v10 == 16 )
    goto LABEL_20;
LABEL_3:
  if ( v12 )
  {
    if ( !v10 )
      return 1;
    if ( v10 == 15 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v24 = a1[4];
      v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 64LL);
      v22 = (unsigned __int16)v11 & 0xFF00 | (unsigned __int64)(unsigned __int8)(v11 + *((_BYTE *)a1 + 56));
      if ( v23 != sub_14A70 )
      {
LABEL_13:
        v23((__int64)a1, v24, v22);
        return 1;
      }
LABEL_18:
      put_byte(v24, v22);
      return 1;
    }
  }
  else
  {
    if ( v10 == 17 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v22 = a1[7];
      v24 = a1[4];
      v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      if ( v23 == sub_14A20 )
      {
        add_dword(v24, v22);
        return 1;
      }
      goto LABEL_13;
    }
    if ( v10 == 95 )
    {
      v13 = a1[4];
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 24LL);
      if ( v14 == sub_14A60 )
        v15 = get_wide_byte(v13 + 1);
      else
        v15 = v14((__int64)a1, v13 + 1);
      v16 = v11;
      v17 = v15 | (v11 << 16) & 0x3F0000u;
      v18 = *(void (**)())(*a1 + 16LL);
      if ( v18 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *, __int64))v18)(a1, v17);
      v19 = a1[7] + v17;
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 64LL);
      v21 = v16 | BYTE2(v19) & 0x3F;
      if ( v20 == sub_14A70 )
        put_byte(a1[4], v21);
      else
        v20((__int64)a1, a1[4], v21);
      v22 = (unsigned __int16)v19;
      v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 64LL);
      v24 = a1[4] + 1LL;
      if ( v23 != sub_14A70 )
        goto LABEL_13;
      goto LABEL_18;
    }
  }
  (*(void (__fastcall **)(_QWORD *))*a1)(a1);
  return 0;
}
