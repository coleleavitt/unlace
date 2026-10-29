unsigned __int64 __fastcall sub_7890(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int16 v6; // ax
  __int16 v8; // ax
  __int16 *v9; // rsi
  __int64 v10; // r13
  char v11[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  get_segm_name();
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_WORD *)(v5 + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 184) == 12 )
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 136LL))(a2, ".RSECT", 0xFFFF);
    else
      sub_6FB0((__int64)a2, 0, (__int64)word_CAE2, byte_CF28);
  }
  else
  {
    if ( (v6 & 4) != 0 )
      sub_6FB0((__int64)a2, 0xFFFF, (__int64)byte_CAF3, *(_QWORD *)(v5 + 48), byte_CF28);
    else
      sub_6FB0((__int64)a2, 0xFFFF, (__int64)byte_CB05, byte_CF28);
    v8 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    if ( (v8 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 136LL))(a2, byte_CF28, 0xFFFF);
      v8 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    }
    if ( (v8 & 0x80u) != 0 )
    {
      v9 = word_CAD2;
      if ( *(_BYTE *)(a3 + 184) == 12 )
        v9 = (__int16 *)byte_CAC9;
      (*(void (__fastcall **)(_QWORD *, __int16 *, __int64))(*a2 + 136LL))(a2, v9, 0xFFFF);
    }
  }
  if ( (getinf() & 0x100) != 0 )
  {
    v10 = a2[2];
    if ( v10 != get_segm_base() )
    {
      btoa64();
      sub_7060((__int64)a2, (__int64)"%s %s", *(const char **)(*(_QWORD *)(a1 + 24) + 32LL), v11);
    }
  }
  return v12 - __readfsqword(0x28u);
}

