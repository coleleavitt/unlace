unsigned __int64 __fastcall sub_BF10(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int16 v9; // dx
  __int64 v10; // r8
  char v11; // al
  char *v12; // rcx
  __int64 v13; // r13
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  char v18; // dl
  char *v19; // r9
  __int64 v20; // r8
  char v21; // al
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[136]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+C8h] [rbp-40h]

  v4 = a2[2];
  v26 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_spec_segm() )
    return v26 - __readfsqword(0x28u);
  get_segm_name();
  get_segm_class();
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 8) == 0 )
  {
    validate_name();
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_WORD *)(v8 + 4);
    if ( (v9 & 4) != 0 )
    {
      v10 = *(_QWORD *)(v8 + 48);
      v11 = *(_BYTE *)(a3 + 184);
      v12 = "bss";
      if ( v11 != 9 )
      {
        v12 = "code";
        if ( v11 == 3 )
          v12 = "data";
      }
      sub_B440((__int64)a2, 0xFFFF, (__int64)byte_114C1, v12, v10, byte_11DF8);
    }
    else if ( (v9 & 2) != 0 )
    {
      v18 = *(_BYTE *)(a3 + 184);
      v19 = "bss";
      if ( v18 != 9 )
      {
        v19 = "code";
        if ( v18 == 3 )
          v19 = "data";
      }
      sub_B440((__int64)a2, 0, (__int64)&word_114CE, byte_11DF8, *(_QWORD *)(v8 + 48), v19);
    }
    else if ( (v9 & 1) != 0 )
    {
      v20 = *(_QWORD *)(v8 + 48);
      v21 = *(_BYTE *)(a3 + 184);
      v22 = ".bss";
      if ( v21 != 9 )
      {
        v22 = ".text";
        if ( v21 == 3 )
          v22 = ".data";
      }
      sub_B440((__int64)a2, 0xFFFF, (__int64)byte_114B1, v22, v20, byte_11DF8);
    }
    else
    {
      sub_B440((__int64)a2, 0xFFFF, (__int64)&byte_114E7, *(_QWORD *)(v8 + 48), byte_11DF8);
    }
    v13 = v4 - get_segm_base();
    if ( (getinf() & 0x100) == 0 || !v13 )
      return v26 - __readfsqword(0x28u);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), 0);
      v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v14 == sub_B240 )
      {
        v15 = a2[4];
        v16 = 2;
        if ( v15 )
          v16 = v15-- + 1;
        v17 = a2[3];
        if ( a2[5] < v16 )
        {
          v23 = qvector_reserve();
          a2[3] = v23;
          v17 = v23;
        }
        a2[4] = v16;
        *(_BYTE *)(v17 + v15) = 32;
        *(_BYTE *)(a2[3] + v15 + 1) = 0;
      }
      else
      {
        v14(a2, 32);
      }
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, v13, 0);
    }
    else
    {
      btoa64();
      v24 = *(_QWORD *)(a1 + 24);
      if ( !*(_QWORD *)(v24 + 160) )
      {
        sub_B2C0((__int64)a2, (__int64)byte_114F9, *(_QWORD *)(v24 + 48), v25);
        goto LABEL_25;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
      sub_B380((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 160LL), v25);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
LABEL_25:
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
    return v26 - __readfsqword(0x28u);
  }
  v7 = (__int64 *)&off_163F0;
  while ( strcmp(byte_11DF8, (const char *)*v7) )
  {
    if ( qword_16408 == ++v7 )
    {
      validate_name();
      sub_B440((__int64)a2, 0xFFFF, (__int64)byte_114B1, ".data", *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), byte_11DF8);
      return v26 - __readfsqword(0x28u);
    }
  }
  sub_B440((__int64)a2, 0xFFFF, (__int64)byte_114A5, byte_11DF8);
  return v26 - __readfsqword(0x28u);
}

