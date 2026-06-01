__int64 __fastcall sub_287730(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // r13d
  __int64 v11; // rax
  int v12; // eax
  char tinfo_property; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+Ch] [rbp-D4h]
  _QWORD v23[3]; // [rsp+20h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-A8h]
  __int64 v25; // [rsp+48h] [rbp-98h]
  __int64 v26; // [rsp+50h] [rbp-90h]
  int v27; // [rsp+58h] [rbp-88h]
  __int64 v28; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v29[6]; // [rsp+68h] [rbp-78h]
  int v30; // [rsp+98h] [rbp-48h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-38h]

  v5 = a2;
  v31 = __readfsqword(0x28u);
  v24 = 0;
  v23[1] = 0xFFFFFFFF00000000LL;
  v23[2] = 0xFFFFFFFFLL;
  v6 = *(unsigned int *)(a4 + 8);
  v23[0] = -1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned int)v6 > 0x1F )
    goto LABEL_4;
  v7 = 2852126720LL;
  if ( !_bittest64(&v7, v6) || (unsigned int)(*((_DWORD *)a3 + 2) - 22) <= 9 )
    goto LABEL_4;
  tinfo_property = get_tinfo_property();
  v17 = tinfo_property;
  if ( (tinfo_property & 0xE) != 0 )
  {
    v15 = 1276;
    if ( _bittest64(&v15, tinfo_property & 0xF) )
    {
LABEL_17:
      v18 = j__qalloc_or_throw(64, 2, v15, v16);
      *(_QWORD *)v18 = -1;
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 48) = 0;
      *(_QWORD *)(v18 + 12) = -1;
      *(_DWORD *)(v18 + 56) = 0;
      sub_25AFF0(v18, (__int64)a3, 0.0);
      if ( (unsigned __int8)((v17 & 0xF) - 2) <= 5u && (v17 & 0x30) != 0x20 )
      {
        v28 = 0;
        copy_tinfo_t();
        set_tinfo_property();
        v18 = sub_244E70(v18, (__int64)&v28, v19, v20);
        clear_tinfo_t();
      }
      v29[3] = sub_240F50(a1[9], 0, 0, -1, 0, 2, 0);
      *(_QWORD *)((char *)v29 + 4) = -1;
      a3 = v23;
      v28 = -1;
      LODWORD(v29[0]) = 29;
      v29[2] = v18;
      v29[4] = 0;
      v29[5] = 0;
      v30 = 0;
      sub_25AFF0((__int64)v23, (__int64)&v28, 0.0);
      sub_255630((__int64)&v28, 0.0);
      clear_tinfo_t();
    }
  }
  else if ( (tinfo_property & 0x30) != 0 )
  {
    goto LABEL_17;
  }
LABEL_4:
  sub_283C00(&v28, a1, a2, 0.0);
  v21 = 3;
  v8 = v29[0];
LABEL_5:
  LOBYTE(v9) = sub_259AB0((__int64)a3, a4, 0.0);
  v10 = v9;
  if ( !(_BYTE)v9 )
  {
    if ( --v21 )
    {
      while ( *(_DWORD *)(v5 + 12) == -1 )
      {
        if ( *(_QWORD *)v28 == v8 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
        v5 = v8 + 16;
        if ( *(_DWORD *)(v8 + 24) != 72 )
          break;
        v11 = *(_QWORD *)(v8 + 40);
        if ( *(_DWORD *)(v11 + 8) != 2 )
          break;
        v12 = sub_296CA0(a4, a1[8], *(_QWORD *)(v11 + 24), *(_QWORD *)(v11 + 32));
        if ( v12 < 0 )
          break;
        if ( v12 )
          goto LABEL_5;
      }
    }
  }
  sub_255630((__int64)v23, 0.0);
  clear_tinfo_t();
  return v10;
}

