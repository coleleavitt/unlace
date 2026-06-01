unsigned __int64 __fastcall sub_36D040(__int64 a1)
{
  int v2; // ebp
  unsigned __int64 v3; // rax
  int *v4; // r12
  int v5; // edx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // r13
  __int64 v11; // r15
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  int v16; // r11d
  int *v17; // r8
  int *v18; // r11
  __int64 v19; // rax
  char v20; // al
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int tinfo_size; // eax
  char v25; // al
  char v26; // al
  unsigned __int64 v27; // [rsp+8h] [rbp-140h]
  __int64 v28; // [rsp+20h] [rbp-128h]
  int *v29; // [rsp+28h] [rbp-120h]
  signed int v30; // [rsp+28h] [rbp-120h]
  int v31; // [rsp+28h] [rbp-120h]
  int v32; // [rsp+28h] [rbp-120h]
  int v33; // [rsp+28h] [rbp-120h]
  int v34; // [rsp+28h] [rbp-120h]
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+28h] [rbp-120h]
  int *v37; // [rsp+30h] [rbp-118h]
  int v38; // [rsp+38h] [rbp-110h]
  signed int v39; // [rsp+3Ch] [rbp-10Ch]
  __int64 v40; // [rsp+48h] [rbp-100h]
  signed __int64 v41; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-E0h]
  _QWORD v45[17]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v46; // [rsp+108h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
    return v46 - __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x100000;
  if ( v2 )
    return v46 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 464);
  v4 = *(int **)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v27 = v3;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = qvector_reserve();
    v28 = *(_QWORD *)(a1 + 144);
    v7 = *(_DWORD *)(a1 + 4) & 0x40;
    *(_DWORD *)(a1 + 4) &= ~0x40u;
    v8 = 0;
    v38 = v7;
    while ( 1 )
    {
      v9 = v4[v8];
      v10 = (_DWORD *)(104 * v9 + *(_QWORD *)(a1 + 432));
      if ( (unsigned __int8)sub_1BF120((__int64)v10, &v42, &v41, v10[22]) )
      {
        if ( *v10 == 1 )
          sub_368CC0(a1, v28, v42, v9, 0);
        v28 = v41;
      }
      v11 = *(_QWORD *)(a1 + 432) + 104 * v9;
      if ( sub_118880(*(_DWORD *)(v11 + 88))
        || *(_DWORD *)(v11 + 88) == 16
        || (*(_BYTE *)(v11 + 24) & 2) != 0
        || (unsigned int)(*(_DWORD *)v11 - 3) > 1
        || (get_tinfo_property() & 0x2F) == 0xD
        || (get_tinfo_property() & 0xF) == 9 )
      {
        goto LABEL_19;
      }
      v16 = *(_DWORD *)(v11 + 88);
      v39 = 16;
      v40 = *(_QWORD *)(a1 + 1504);
      if ( v16 < *(_DWORD *)(v40 + 88) )
      {
        v39 = sub_118890(v16);
        v16 = *(_DWORD *)(v11 + 88);
      }
      if ( v39 > v16 )
        break;
LABEL_41:
      if ( v39 >= v16 || *(_DWORD *)v11 == 1 )
        goto LABEL_43;
      v31 = v16;
      sub_CCEB0((__int64)v45, *(_QWORD *)(a1 + 1496), 0xF0u);
      v43 = 0;
      v44 = 0;
      tinfo_size = get_tinfo_size();
      v25 = sub_CE9A0((__int64)v45, &v43, (_DWORD *)v11, tinfo_size, 0);
      v16 = v31;
      if ( !v25
        || !(_QWORD)v44
        || (sub_CD090((__int64)v45, (__int64)&v43, 240), v26 = sub_CED80((__int64)v45, a1, v9), v16 = v31, !v26) )
      {
        if ( v43 )
        {
          v32 = v16;
          *(_QWORD *)&v44 = 0;
          qfree();
          v16 = v32;
        }
        if ( v45[14] )
        {
          v33 = v16;
          v45[15] = 0;
          qfree();
          v16 = v33;
        }
        if ( v45[11] )
        {
          v34 = v16;
          v45[12] = 0;
          qfree();
          v16 = v34;
        }
        if ( v45[4] )
        {
          v35 = v16;
          v45[5] = 0;
          qfree();
          v16 = v35;
        }
        if ( v45[1] )
        {
          v36 = v16;
          v45[2] = 0;
          qfree();
          v16 = v36;
        }
LABEL_43:
        v30 = v16;
        v21 = sub_1EAE00((_DWORD *)v11, (_QWORD *)v40, v39, 2);
        if ( v30 > v39 && v21 )
        {
          sub_1EFD30(a1, *(_QWORD *)(v11 + 16), v11);
          *(_DWORD *)(v11 + 24) |= 0x400u;
        }
LABEL_19:
        v12 = *(_DWORD **)(a1 + 456);
        v13 = *(_QWORD *)(a1 + 464);
        v14 = &v12[v13];
        if ( v12 != v14 )
        {
          v15 = *(_DWORD **)(a1 + 456);
          while ( (_DWORD)v9 != *v15 )
          {
            if ( v14 == ++v15 )
              goto LABEL_25;
          }
          if ( v14 != v15 )
            sub_364F70();
        }
LABEL_25:
        if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v13 + 1) )
        {
          v22 = qvector_reserve();
          v23 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v22;
          v14 = (_DWORD *)(v22 + 4 * v23);
        }
        *v14 = v9;
        ++*(_QWORD *)(a1 + 464);
        goto LABEL_28;
      }
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree();
      }
      sub_CBF30(v45);
LABEL_28:
      v8 = ++v2;
      if ( v2 >= v27 )
        goto LABEL_5;
    }
    v17 = &v4[v27];
    if ( v4 == v17 )
      goto LABEL_43;
    v18 = v4;
    while ( 1 )
    {
      v19 = *v18;
      if ( (_DWORD)v9 != (_DWORD)v19 )
      {
        v37 = v18;
        v29 = v17;
        v20 = sub_1C0720(
                (int *)(*(_QWORD *)(a1 + 432) + 104 * v19),
                *(int *)(*(_QWORD *)(a1 + 432) + 104 * v19 + 88),
                (int *)v11,
                v39);
        v17 = v29;
        v18 = v37;
        if ( v20 )
          goto LABEL_19;
      }
      if ( v17 == ++v18 )
      {
        v16 = *(_DWORD *)(v11 + 88);
        goto LABEL_41;
      }
    }
  }
  v5 = *(_DWORD *)(a1 + 4) & 0x40;
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  v38 = v5;
LABEL_5:
  if ( v38 )
    *(_DWORD *)(a1 + 4) |= 0x40u;
  if ( v4 )
    qfree();
  return v46 - __readfsqword(0x28u);
}

