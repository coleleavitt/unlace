__int64 __fastcall sub_4B880(__int64 a1, __int64 a2, const void *a3)
{
  _QWORD *v5; // rax
  __m128i si128; // xmm1
  __int64 v7; // rdi
  bool v8; // zf
  unsigned int v9; // ebx
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-408h] BYREF
  char v12; // [rsp+8h] [rbp-400h]
  _BYTE v13[360]; // [rsp+10h] [rbp-3F8h] BYREF
  _DWORD *v14; // [rsp+178h] [rbp-290h] BYREF
  int v15; // [rsp+210h] [rbp-1F8h]
  char v16; // [rsp+319h] [rbp-EFh]
  void *v17; // [rsp+328h] [rbp-E0h]
  __int64 v18; // [rsp+330h] [rbp-D8h]
  __int128 v19; // [rsp+338h] [rbp-D0h]
  __int64 v20; // [rsp+348h] [rbp-C0h]
  __int128 v21; // [rsp+350h] [rbp-B8h]
  const __m128i *v22; // [rsp+360h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+368h] [rbp-A0h]
  __int64 v24; // [rsp+378h] [rbp-90h]
  __int64 v25; // [rsp+380h] [rbp-88h]
  char v26; // [rsp+388h] [rbp-80h]
  __int64 v27; // [rsp+390h] [rbp-78h]
  char v28; // [rsp+398h] [rbp-70h]
  __int128 v29; // [rsp+3A0h] [rbp-68h]
  __int64 v30; // [rsp+3B0h] [rbp-58h]
  __int128 v31; // [rsp+3B8h] [rbp-50h]
  __int16 v32; // [rsp+3C8h] [rbp-40h]
  char v33; // [rsp+3CAh] [rbp-3Eh]
  __int64 v34; // [rsp+3CCh] [rbp-3Ch]
  __int16 v35; // [rsp+3D4h] [rbp-34h]
  unsigned __int64 v36; // [rsp+3D8h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  v11 = off_175A98;
  v5 = &v13[40];
  v12 = 1;
  *(_QWORD *)&v13[24] = 0;
  *(_QWORD *)&v13[32] = 0;
  memset(v13, 255, 24);
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v14 != v5 );
  v14 = (_DWORD *)a2;
  v15 = -1;
  v16 = 0;
  v17 = &unk_95D00;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  if ( a2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_950A0);
    v7 = *(_QWORD *)(a2 + 96);
    *(_DWORD *)a2 = 0x800000;
    *(_WORD *)(a2 + 4) = 0;
    *(__m128i *)(a2 + 8) = si128;
    *(_DWORD *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 64) = -1;
    *(_BYTE *)(a2 + 68) = 0;
    *(_QWORD *)(a2 + 72) = 0;
    *(_DWORD *)(a2 + 80) = 2;
    *(_QWORD *)(a2 + 88) = -1;
    *(_OWORD *)(a2 + 24) = -1;
    if ( v7 )
    {
      *(_QWORD *)(a2 + 104) = 0;
      qfree();
      v8 = (_QWORD)v23 == 3;
      *(_QWORD *)(a2 + 96) = 0;
      *(_OWORD *)(a2 + 104) = 0;
      if ( v8 )
        goto LABEL_7;
    }
    else
    {
      *(_OWORD *)(a2 + 104) = 0;
    }
  }
  sub_47780(&v22, (const __m128i *)((char *)&dword_0 + 3));
LABEL_7:
  v11 = off_175C40;
  v29 = -1;
  v24 = a1;
  v32 = 256;
  v35 = 10;
  v15 = 0;
  v25 = -1;
  v26 = 0;
  v27 = -1;
  v28 = 0;
  v30 = 0;
  v33 = 0;
  v34 = -1;
  v31 = -1;
  *v14 |= 0x40000u;
  qmemcpy(v13, a3, sizeof(v13));
  v11 = off_16C490;
  if ( !(unsigned __int8)match_jpt() || !(unsigned __int8)sub_4B680(&v11) )
    goto LABEL_8;
  if ( !HIBYTE(v35) )
    sub_36300();
  v9 = check_flat_jump_table();
  if ( v9 )
  {
    sub_4B7A0((__int64)&v11);
    if ( v9 == 1 )
    {
      if ( *((_QWORD *)&v29 + 1) != -1 )
        sub_486A0(&v11);
      mark_switch_insns_jpt();
    }
  }
  else
  {
LABEL_8:
    v9 = 0;
  }
  v11 = off_175A98;
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v9;
}
