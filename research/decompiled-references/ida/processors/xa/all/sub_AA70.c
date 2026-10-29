unsigned __int64 __fastcall sub_AA70(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int16 v6; // ax
  __int16 v8; // ax
  __int16 *v9; // rsi
  __int64 v10; // r13
  char v11[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  get_segm_name();
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_WORD *)(v5 + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 184) == 12 )
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 136LL))(a2, ".RSECT", 0xFFFF);
    else
      sub_9F80((__int64)a2, 0, (__int64)&byte_D37F, s);
  }
  else
  {
    if ( (v6 & 4) != 0 )
      sub_9F80((__int64)a2, 0xFFFF, (__int64)qword_D390, *(_QWORD *)(v5 + 48), s);
    else
      sub_9F80((__int64)a2, 0xFFFF, (__int64)word_D3A2, s);
    v8 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    if ( (v8 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 136LL))(a2, s, 0xFFFF);
      v8 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    }
    if ( (v8 & 0x80u) != 0 )
    {
      v9 = (__int16 *)&byte_D36F;
      if ( *(_BYTE *)(a3 + 184) == 12 )
        v9 = &word_D366;
      (*(void (__fastcall **)(_QWORD *, __int16 *, __int64))(*a2 + 136LL))(a2, v9, 0xFFFF);
    }
  }
  if ( (getinf() & 0x100) != 0 )
  {
    v10 = a2[2];
    if ( v10 != get_segm_base() )
    {
      btoa64();
      sub_A030((__int64)a2, (__int64)"%s %s", *(const char **)(*(_QWORD *)(a1 + 24) + 32LL), v11);
    }
  }
  return v12 - __readfsqword(0x28u);
}

