__int64 __fastcall sub_1D360(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v8; // r14
  __int64 v12; // rax
  __int64 outctx; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int128 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  _BYTE *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  const char *v28; // rsi
  bool v29; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // [rsp+10h] [rbp-68h]
  unsigned __int64 v41; // [rsp+20h] [rbp-58h]
  unsigned __int64 v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v8 = a4;
  v12 = *(_QWORD *)(a1 + 33065);
  v44 = __readfsqword(0x28u);
  v39 = a4 + v12;
  if ( (a8 & 4) == 0 )
  {
    a3[1] = a4;
    netnode_supset(*(_QWORD *)(a1 + 33336), (unsigned int)a2, a3, 12, 83);
    a2 = (unsigned int)a2;
    if ( a7 )
    {
      v31 = *(unsigned __int16 *)(a1 + 33083);
      *(_WORD *)(a1 + 33083) = a2;
      a2 = (v31 << 16) | (unsigned int)a2;
    }
    v43 = a2;
    netnode_supset(*(_QWORD *)(a1 + 33328), v8, &v43, 8, 65);
    create_data(v39, 0, 1, -1);
  }
  outctx = create_outctx(-1, 0, 0);
  *(_BYTE *)(a1 + 33385) = 0;
  v15 = outctx;
  if ( a7 )
  {
    *(_BYTE *)(a1 + 33384) = 0;
    if ( !(unsigned int)sub_1B1E0(outctx, a1, (unsigned __int16)a3[2], 511, 12, 0) )
    {
      v27 = 0;
      if ( *(_QWORD *)(v15 + 32) )
        v27 = strlen(*(const char **)(v15 + 24));
      *(_DWORD *)((char *)&loc_1027C + a1) = v27;
      goto LABEL_23;
    }
    *(_DWORD *)((char *)&loc_1027C + a1) = 512;
  }
  else
  {
    *(_BYTE *)(a1 + 33384) = *(_BYTE *)(a1 + 66176);
    *(_QWORD *)&v16 = *(unsigned int *)((char *)&loc_1027C + a1);
    v17 = *(_QWORD *)(v15 + 24);
    v18 = *(_QWORD *)(v15 + 32);
    v19 = v17;
    if ( (unsigned int)v16 <= 0x1FD )
    {
      v20 = (unsigned int)(v16 + 1);
      if ( v18 )
      {
        v20 = v20 + v18 - 1;
        if ( !v20 )
        {
          if ( !v17 )
            goto LABEL_16;
          *(_QWORD *)(v15 + 32) = 0;
          qfree(v17, v17, v14, v18);
          *(_QWORD *)(v15 + 24) = 0;
          *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 32);
          *(_QWORD *)(v15 + 40) = 0;
          *(_QWORD *)&v16 = *(unsigned int *)((char *)&loc_1027C + a1);
LABEL_14:
          v23 = &unk_2D4F8;
          if ( v16 == 0 )
            goto LABEL_17;
          v19 = *(_QWORD *)(v15 + 24);
LABEL_16:
          v23 = (_BYTE *)(v16 + v19);
LABEL_17:
          *v23 = 46;
          if ( !(unsigned int)sub_1B1E0(
                                v15,
                                a1,
                                (unsigned __int16)a3[5],
                                (unsigned int)(510 - *(_DWORD *)((char *)&loc_1027C + a1)),
                                13,
                                0) )
            goto LABEL_24;
          goto LABEL_40;
        }
        v22 = v20 + 1;
        if ( v18 >= v20 + 1 )
        {
          if ( v22 != v18 )
            *(_QWORD *)(v15 + 32) = v22;
          goto LABEL_13;
        }
        v21 = v15 + 24;
      }
      else
      {
        v21 = v15 + 24;
        v22 = v20 + 1;
      }
      if ( *(_QWORD *)(v15 + 40) < v22 )
      {
        v42 = v22;
        v36 = qvector_reserve(v21, *(_QWORD *)(v15 + 24), v22, 1);
        v18 = *(_QWORD *)(v15 + 32);
        v22 = v42;
        *(_QWORD *)(v15 + 24) = v36;
        v17 = v36;
      }
      v41 = v22;
      memset((void *)(v17 + v18), 0, v22 - v18);
      v19 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 32) = v41;
LABEL_13:
      *(_BYTE *)(v19 + v20) = 0;
      *(_QWORD *)&v16 = *(unsigned int *)((char *)&loc_1027C + a1);
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 32);
      goto LABEL_14;
    }
    if ( v18 <= 0x1FF )
    {
      if ( *(_QWORD *)(v15 + 40) <= 0x1FFu )
      {
        v37 = qvector_reserve(v15 + 24, v17, 512, 1);
        v18 = *(_QWORD *)(v15 + 32);
        *(_QWORD *)(v15 + 24) = v37;
        v17 = v37;
      }
      memset((void *)(v17 + v18), 0, 512 - v18);
      *(_QWORD *)(v15 + 32) = 512;
      v19 = *(_QWORD *)(v15 + 24);
    }
    else if ( v18 != 512 )
    {
      *(_QWORD *)(v15 + 32) = 512;
    }
    *(_BYTE *)(v19 + 511) = 0;
    *(_BYTE *)(a1 + 33385) = 0;
  }
LABEL_40:
  sub_1CF50((__int64 *)v15, a4, 0);
  v24 = *(_QWORD *)(v15 + 32);
  if ( v24 <= 0x1FF )
  {
    v34 = *(_QWORD *)(v15 + 24);
    if ( *(_QWORD *)(v15 + 40) <= 0x1FFu )
    {
      v35 = qvector_reserve(v15 + 24, v34, 512, 1);
      v24 = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v15 + 24) = v35;
      v34 = v35;
    }
    memset((void *)(v34 + v24), 0, 512 - v24);
    *(_QWORD *)(v15 + 32) = 512;
  }
  else if ( v24 != 512 )
  {
    *(_QWORD *)(v15 + 32) = 512;
  }
  *(_BYTE *)(*(_QWORD *)(v15 + 24) + 511LL) = 0;
LABEL_23:
  *(_BYTE *)(a1 + 66176) = *(_BYTE *)(a1 + 33384);
LABEL_24:
  v28 = s1;
  if ( *(_QWORD *)(v15 + 32) )
    v28 = *(const char **)(v15 + 24);
  qstrncpy(a5, v28, a6, v24, v25, v26);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  if ( (a8 & 1) != 0 )
  {
    v32 = sub_1EC50(a1, a5);
    set_name(v39, v32, 6144);
    hide_name(v39);
  }
  if ( *(char *)(a1 + 33384) > 0 && (a8 & 2) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 33336);
    LOBYTE(v43) = *(_BYTE *)(a1 + 33384);
    netnode_supset(v33, v39, &v43, 1, 114);
  }
  v29 = *(_BYTE *)(a1 + 33385) == 0;
  *(_BYTE *)(a1 + 33384) = -1;
  if ( v29 || (a8 & 4) != 0 )
    return v44 - __readfsqword(0x28u);
  else
    return sub_7B10(a1, v39, "Strange name");
}

