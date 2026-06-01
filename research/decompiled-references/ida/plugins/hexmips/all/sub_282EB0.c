__int64 __fastcall sub_282EB0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // eax
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rax
  int v14; // eax
  char tinfo_property; // al
  char v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  int v20; // [rsp+0h] [rbp-E0h]
  int v21; // [rsp+8h] [rbp-D8h]
  int v22; // [rsp+Ch] [rbp-D4h]
  __int64 *v24; // [rsp+10h] [rbp-D0h]
  __int64 v25; // [rsp+18h] [rbp-C8h]
  __int64 v26; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-B8h]
  __int64 v28; // [rsp+30h] [rbp-B0h]
  __int128 v29; // [rsp+38h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-98h]
  __int64 v31; // [rsp+50h] [rbp-90h]
  int v32; // [rsp+58h] [rbp-88h]
  __int64 v33; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v34[6]; // [rsp+68h] [rbp-78h]
  int v35; // [rsp+98h] [rbp-48h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-38h]

  v5 = a2;
  v25 = a4;
  v36 = __readfsqword(0x28u);
  v29 = 0;
  v27 = 0xFFFFFFFF00000000LL;
  v28 = 0xFFFFFFFFLL;
  v6 = *(unsigned int *)(a4 + 8);
  v26 = -1;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( (unsigned int)v6 > 0x1F )
    goto LABEL_4;
  v7 = 2852126720LL;
  if ( !_bittest64(&v7, v6) || (unsigned int)(*((_DWORD *)a3 + 2) - 22) <= 9 )
    goto LABEL_4;
  tinfo_property = get_tinfo_property();
  v17 = tinfo_property;
  if ( (tinfo_property & 0xE) != 0 )
  {
    v19 = 1276;
    if ( _bittest64(&v19, tinfo_property & 0xF) )
    {
LABEL_18:
      v18 = j__qalloc_or_throw();
      *(_QWORD *)v18 = -1;
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 48) = 0;
      *(_QWORD *)(v18 + 12) = -1;
      *(_DWORD *)(v18 + 56) = 0;
      sub_256770(v18, (__int64)a3);
      if ( (unsigned __int8)((v17 & 0xF) - 2) <= 5u && (v17 & 0x30) != 0x20 )
      {
        v33 = 0;
        copy_tinfo_t();
        set_tinfo_property();
        v18 = sub_2405F0(v18);
        clear_tinfo_t();
      }
      v34[3] = sub_23C6D0(a1[9], 0, 0, -1, 0, 2u, 0);
      *(_QWORD *)((char *)v34 + 4) = -1;
      a3 = &v26;
      v33 = -1;
      LODWORD(v34[0]) = 29;
      v34[2] = v18;
      v34[4] = 0;
      v34[5] = 0;
      v35 = 0;
      v24 = &v26;
      sub_256770((__int64)&v26, (__int64)&v33);
      sub_250DB0((__int64)&v33);
      clear_tinfo_t();
      goto LABEL_5;
    }
  }
  else if ( (tinfo_property & 0x30) != 0 )
  {
    goto LABEL_18;
  }
LABEL_4:
  v24 = &v26;
LABEL_5:
  sub_27F380(&v33, a1, a2);
  v22 = 3;
  v8 = v34[0];
LABEL_6:
  LOBYTE(v9) = sub_255230((__int64)a3, v25);
  v12 = v9;
  if ( !(_BYTE)v9 )
  {
    if ( v22 - 1 )
    {
      while ( *(_DWORD *)(v5 + 12) == -1 )
      {
        if ( *(_QWORD *)v33 == v8 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
        v5 = v8 + 16;
        if ( *(_DWORD *)(v8 + 24) != 72 )
          break;
        v13 = *(_QWORD *)(v8 + 40);
        if ( *(_DWORD *)(v13 + 8) != 2 )
          break;
        v14 = sub_292420(
                v25,
                a1[8],
                *(_QWORD *)(v13 + 24),
                *(_QWORD *)(v13 + 32),
                v10,
                v11,
                v20,
                v21,
                (_DWORD)v24,
                v25,
                v26,
                v27,
                v28,
                v29,
                DWORD2(v29),
                v30,
                v31,
                v32,
                v33);
        if ( v14 < 0 )
          break;
        if ( v14 )
          goto LABEL_6;
      }
    }
  }
  sub_250DB0((__int64)v24);
  clear_tinfo_t();
  return v12;
}

