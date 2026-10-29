unsigned __int64 __fastcall sub_7DD0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v6; // r13
  __int64 v7; // rdx
  __int16 v8; // ax
  char v10; // al
  char *v11; // rcx
  char v12; // al
  char *v13; // r9
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  char v18; // al
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-D8h]
  _BYTE v23[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp-30h]

  v4 = a2[2];
  v24 = __readfsqword(0x28u);
  v22 = 0;
  v6 = v4 - get_segm_base();
  get_segm_name();
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_WORD *)(v7 + 4);
  if ( (v8 & 4) != 0 )
  {
    sub_65A0((__int64)a2, 0xFFFF, (__int64)&word_D2B6, &byte_D688);
  }
  else if ( (v8 & 0x20) != 0 )
  {
    v10 = *(_BYTE *)(a3 + 184);
    v11 = "bss";
    if ( v10 != 9 )
    {
      v11 = "code";
      if ( v10 == 3 )
        v11 = "data";
    }
    sub_65A0((__int64)a2, 0xFFFF, (__int64)byte_D2C3, v11, *(_QWORD *)(v7 + 48), &byte_D688, 0);
  }
  else if ( (v8 & 0x200) != 0 )
  {
    v12 = *(_BYTE *)(a3 + 184);
    v13 = "bss";
    if ( v12 != 9 )
    {
      v13 = "code";
      if ( v12 == 3 )
        v13 = "data";
    }
    sub_65A0((__int64)a2, 0, (__int64)qword_D2D0, &byte_D688, *(_QWORD *)(v7 + 48), v13, 0);
  }
  else if ( (v8 & 2) != 0 )
  {
    v18 = *(_BYTE *)(a3 + 184);
    v19 = ".bss";
    if ( v18 != 9 )
    {
      v19 = ".text";
      if ( v18 == 3 )
        v19 = ".data";
    }
    sub_65A0((__int64)a2, 0xFFFF, (__int64)byte_D2E9, v19, *(_QWORD *)(v7 + 48), &byte_D688, 0);
  }
  else
  {
    sub_65A0((__int64)a2, 0xFFFF, (__int64)byte_D2F9, *(_QWORD *)(v7 + 48), &byte_D688);
  }
  if ( (getinf() & 0x100) != 0 && v6 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), 0);
      v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v14 == sub_63A0 )
      {
        v15 = a2[4];
        v16 = 2;
        if ( v15 )
          v16 = v15-- + 1;
        v17 = a2[3];
        if ( a2[5] < v16 )
        {
          v20 = qvector_reserve();
          a2[3] = v20;
          v17 = v20;
        }
        a2[4] = v16;
        *(_BYTE *)(v17 + v15) = 32;
        *(_BYTE *)(a2[3] + v15 + 1) = 0;
      }
      else
      {
        v14(a2, 32);
      }
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, v6, 0);
    }
    else
    {
      btoa64();
      v21 = *(_QWORD *)(a1 + 24);
      if ( !*(_QWORD *)(v21 + 160) )
      {
        sub_6420((__int64)a2, (__int64)byte_D30B, *(_QWORD *)(v21 + 48), v23);
        goto LABEL_27;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
      sub_64E0((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 160LL), v23);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
LABEL_27:
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
  }
  if ( v22 )
    qfree();
  return v24 - __readfsqword(0x28u);
}

