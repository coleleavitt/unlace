unsigned __int64 __fastcall sub_4E70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  char *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // r13
  _BYTE v8[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+A8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  get_segm_name();
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_WORD *)(v2 + 4);
  if ( (v3 & 2) != 0 )
  {
    sub_43A0((__int64)a2, 0, (__int64)byte_9ACD, &dword_9C3C);
  }
  else
  {
    v5 = &byte_9AF8;
    if ( (v3 & 4) != 0 )
      v5 = *(char **)(v2 + 48);
    sub_43A0((__int64)a2, 0xFFFF, (__int64)&word_9ADE, v5, &dword_9C3C);
    v6 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    if ( (v6 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, int *, __int64))(*a2 + 136LL))(a2, &dword_9C3C, 0xFFFF);
      v6 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    }
    if ( (v6 & 0x80u) != 0 )
      (*(void (__fastcall **)(_QWORD *, __int64 *, __int64))(*a2 + 136LL))(a2, &qword_9AF0, 0xFFFF);
  }
  if ( (getinf() & 0x100) != 0 )
  {
    v7 = a2[2];
    if ( v7 != get_segm_base() )
    {
      btoa64();
      sub_43A0((__int64)a2, 0xFFFF, (__int64)byte_9AF9, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v8);
    }
  }
  return v9 - __readfsqword(0x28u);
}

