__int64 __fastcall sub_19F90(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  double v9; // xmm0_8
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // eax
  char v18; // al
  __int64 v19; // rdi
  char v20; // dl
  int v21; // eax
  char v22; // al
  int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-88h] BYREF
  __int16 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int128 v29; // [rsp+38h] [rbp-60h]
  __int128 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+60h] [rbp-38h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( a2 != 75 )
    return 0;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v7 + 244) )
  {
    *(_BYTE *)(v7 + 244) = 1;
    v22 = sub_CBD0(v7);
    v23 = *(_DWORD *)(v7 + 240);
    if ( (v23 & 2) != 0 )
    {
      v24 = v23 | 1;
      if ( !v22 )
        v24 = *(_DWORD *)(v7 + 240) & 0xFFFFFFFE;
      *(_DWORD *)(v7 + 240) = v24;
    }
  }
  v9 = 0.0;
  v25 = 0;
  v27 = 256;
  v28 = 0;
  v31 = 0;
  v32 = 1;
  v26[1] = "Swift::Void";
  v29 = 0;
  v30 = 0;
  v26[0] = get_idati();
  if ( (unsigned __int8)create_tinfo(&v25, 13, 61, v26) && (unsigned __int8)get_tinfo_details(v25, 13, &v28) )
  {
    if ( (_QWORD)v29 )
    {
      v10 = v28;
      if ( !v28 )
        goto LABEL_16;
      v11 = v29;
      goto LABEL_9;
    }
    v26[0] = 1;
    copy_tinfo_t(&v25, v26);
    clear_tinfo_t();
    save_tinfo(&v25, 0, 0, "Swift::Void", 5);
  }
  v10 = v28;
  if ( v28 )
  {
    v11 = v29;
    if ( !(_QWORD)v29 )
    {
LABEL_15:
      *(_QWORD *)&v29 = 0;
      v9 = qfree(v10);
      goto LABEL_16;
    }
LABEL_9:
    v12 = 0;
    do
    {
      v13 = (_QWORD *)(v10 + 144 * v12);
      clear_tinfo_t();
      v14 = v13[5];
      if ( v14 )
      {
        v13[6] = 0;
        qfree(v14);
      }
      v15 = v13[2];
      if ( v15 )
      {
        v13[3] = 0;
        qfree(v15);
      }
      ++v12;
      v10 = v28;
    }
    while ( v12 != v11 );
    goto LABEL_15;
  }
LABEL_16:
  clear_tinfo_t();
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 245LL) = 1;
  if ( (unsigned __int8)getinf_flag(3, 4) && (!*(_DWORD *)(get_ph() + 4) || *(_DWORD *)(get_ph() + 4) == 13) )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_DWORD *)(v16 + 240);
    if ( (v17 & 0x1C) != 0 || (v17 & 0x60) != 0 && (v17 & 1) != 0 && *(_QWORD *)(v16 + 136) )
    {
      v18 = sub_198E0(v16, 0, v9, a4, a5, a6);
      v19 = *(_QWORD *)(a1 + 16);
      v20 = v18;
      v21 = *(_DWORD *)(v19 + 240);
      if ( v20 )
      {
        if ( (v21 & 8) != 0 )
        {
          sub_18250(v19);
          v19 = *(_QWORD *)(a1 + 16);
          v21 = *(_DWORD *)(v19 + 240);
        }
        if ( (v21 & 0x10) != 0 )
        {
          sub_18570(v19);
          v19 = *(_QWORD *)(a1 + 16);
          v21 = *(_DWORD *)(v19 + 240);
        }
      }
      if ( (v21 & 0x60) != 0 && (v21 & 1) != 0 && *(_QWORD *)(v19 + 136) )
        sub_15EB0(v19);
    }
  }
  return 0;
}

