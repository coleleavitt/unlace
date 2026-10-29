unsigned __int64 __fastcall sub_44A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  __int16 v4; // ax
  char *v6; // rdx
  __int16 v7; // ax
  _BYTE v8[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+A8h] [rbp-30h]

  v2 = a2[2];
  v9 = __readfsqword(0x28u);
  get_segm_name();
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_WORD *)(v3 + 4);
  if ( (v4 & 2) != 0 )
  {
    sub_3D70((__int64)a2, 0, (__int64)&dword_55D4, byte_5700);
  }
  else
  {
    v6 = &byte_55FF;
    if ( (v4 & 4) != 0 )
      v6 = *(char **)(v3 + 48);
    sub_3D70((__int64)a2, 0xFFFF, (__int64)byte_55E5, v6, byte_5700);
    v7 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    if ( (v7 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 136LL))(a2, byte_5700, 0xFFFF);
      v7 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
    }
    if ( (v7 & 0x80u) != 0 )
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 136LL))(a2, &byte_55F7, 0xFFFF);
  }
  if ( (getinf() & 0x100) != 0 && v2 != get_segm_base() )
  {
    btoa64();
    sub_3D70((__int64)a2, 0xFFFF, (__int64)&qword_5600, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v8);
  }
  return v9 - __readfsqword(0x28u);
}

