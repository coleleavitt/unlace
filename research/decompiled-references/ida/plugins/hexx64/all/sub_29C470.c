unsigned __int64 __fastcall sub_29C470(__int64 a1, __int64 a2, unsigned __int8 a3, double a4)
{
  __int64 *v4; // r13
  __int64 v5; // r15
  int v7; // eax
  char v8; // bp
  int v9; // edx
  int v10; // eax
  __int64 tinfo_property; // rax
  char v13; // r14
  char v14; // bp
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v4 = (__int64 *)(a1 + 16);
  v5 = *(_QWORD *)(a2 + 1504);
  v17 = __readfsqword(0x28u);
  sub_29B3C0(a1, a2, (_QWORD *)(a1 + 16), a4);
  v7 = *(_DWORD *)(a1 + 4) | sub_29C0C0(a1, *(_QWORD *)(v5 + 96), a4);
  *(_DWORD *)(a1 + 4) = v7;
  if ( (a3 & 0x40) != 0 )
  {
    tinfo_property = get_tinfo_property();
    v13 = tinfo_property;
    v16 = tinfo_property;
    clear_tinfo_t();
    if ( (v13 & 0x40) != 0 )
      sub_32C700(v5, (_DWORD)v4, 0);
    v7 = *(_DWORD *)(a1 + 4);
  }
  if ( (((unsigned __int8)v7 | a3) & 0x10) != 0 && (get_tinfo_property() & 0xF) == 0xA )
  {
    v16 = get_tinfo_property();
    v14 = get_tinfo_property() & 0xF;
    clear_tinfo_t();
    if ( v14 == 10 )
    {
      sub_32C270(&v15, v5, *(_DWORD *)(v5 + 84));
      sub_32C540(&v16, v5, &v15);
      copy_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
  }
  v15 = 0;
  v15 = get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v16 = 0;
    v16 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32C540(&v16, v5, &v15);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v16 = 0;
  v16 = get_tinfo_property();
  v8 = get_tinfo_property();
  clear_tinfo_t();
  v9 = 1;
  if ( (v8 & 0x3F) != 1 )
    v9 = sub_32E340(v4);
  v10 = v9 + 1;
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v10 = v9;
  *(_DWORD *)(a1 + 28) = v10;
  clear_tinfo_t();
  return v17 - __readfsqword(0x28u);
}

