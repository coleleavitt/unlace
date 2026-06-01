unsigned __int64 __fastcall sub_2987F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  int v6; // eax
  char v7; // bp
  int v8; // edx
  int v9; // eax
  __int64 tinfo_property; // rax
  char v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  char v16; // bp
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = a1 + 16;
  v4 = *(_QWORD *)(a2 + 1504);
  v19 = __readfsqword(0x28u);
  sub_297740(a1, a2, (_QWORD *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 4) | sub_298440(a1, *(_QWORD *)(v4 + 96));
  *(_DWORD *)(a1 + 4) = v6;
  if ( (a3 & 0x40) != 0 )
  {
    tinfo_property = get_tinfo_property();
    v12 = tinfo_property;
    v18 = tinfo_property;
    clear_tinfo_t();
    if ( (v12 & 0x40) != 0 )
      sub_3283D0(v4, v3, 0, v13, v14, v15);
    v6 = *(_DWORD *)(a1 + 4);
  }
  if ( (((unsigned __int8)v6 | a3) & 0x10) != 0 && (get_tinfo_property() & 0xF) == 0xA )
  {
    v18 = get_tinfo_property();
    v16 = get_tinfo_property() & 0xF;
    clear_tinfo_t();
    if ( v16 == 10 )
    {
      sub_327F40(&v17, v4, *(unsigned int *)(v4 + 84));
      sub_328210(&v18, v4, &v17);
      copy_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
  }
  v17 = 0;
  v17 = get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v18 = 0;
    v18 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    sub_328210(&v18, v4, &v17);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v18 = 0;
  v18 = get_tinfo_property();
  v7 = get_tinfo_property();
  clear_tinfo_t();
  v8 = 1;
  if ( (v7 & 0x3F) != 1 )
    v8 = sub_32A000(v3, 2);
  v9 = v8 + 1;
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v9 = v8;
  *(_DWORD *)(a1 + 28) = v9;
  clear_tinfo_t();
  return v19 - __readfsqword(0x28u);
}

