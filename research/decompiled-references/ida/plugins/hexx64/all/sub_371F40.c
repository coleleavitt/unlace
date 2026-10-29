unsigned __int64 __fastcall sub_371F40(__int64 a1, double a2, __m128 a3)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // edx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD *v12; // r13
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // r11d
  int *v20; // r8
  int *v21; // r11
  __int64 v22; // rax
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int tinfo_size; // eax
  char v28; // al
  char v29; // al
  unsigned __int64 v30; // [rsp+8h] [rbp-140h]
  __int64 v31; // [rsp+20h] [rbp-128h]
  int *v32; // [rsp+28h] [rbp-120h]
  int v33; // [rsp+28h] [rbp-120h]
  int v34; // [rsp+28h] [rbp-120h]
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+28h] [rbp-120h]
  int v37; // [rsp+28h] [rbp-120h]
  int v38; // [rsp+28h] [rbp-120h]
  int v39; // [rsp+28h] [rbp-120h]
  int *v40; // [rsp+30h] [rbp-118h]
  int v41; // [rsp+38h] [rbp-110h]
  int v42; // [rsp+3Ch] [rbp-10Ch]
  __int64 v43; // [rsp+40h] [rbp-108h]
  __int64 v44; // [rsp+48h] [rbp-100h]
  signed __int64 v45; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-E0h]
  __int64 v49; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-C0h]
  __int64 v51; // [rsp+90h] [rbp-B8h]
  __int64 v52; // [rsp+A0h] [rbp-A8h]
  __int64 v53; // [rsp+A8h] [rbp-A0h]
  __int64 v54; // [rsp+D8h] [rbp-70h]
  __int64 v55; // [rsp+E0h] [rbp-68h]
  __int64 v56; // [rsp+F0h] [rbp-58h]
  __int64 v57; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+108h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
    return v58 - __readfsqword(0x28u);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x100000;
  if ( v4 )
    return v58 - __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 464);
  v6 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v30 = v5;
  if ( v5 )
  {
    v43 = a1 + 456;
    *(_QWORD *)(a1 + 456) = qvector_reserve(a1 + 456, 0, v5, 4);
    v31 = *(_QWORD *)(a1 + 144);
    v9 = *(_DWORD *)(a1 + 4) & 0x40;
    *(_DWORD *)(a1 + 4) &= ~0x40u;
    v10 = 0;
    v41 = v9;
    while ( 1 )
    {
      v11 = *(int *)(v6 + 4 * v10);
      v12 = (_DWORD *)(104 * v11 + *(_QWORD *)(a1 + 432));
      if ( (unsigned __int8)sub_1C34E0((__int64)v12, &v46, &v45, v12[22], 0.0) )
      {
        if ( *v12 == 1 )
          sub_36DBC0(a1, v31, v46, v11, 0, 0.0, a3);
        v31 = v45;
      }
      v13 = *(_QWORD *)(a1 + 432) + 104 * v11;
      if ( sub_11CA80(*(_DWORD *)(v13 + 88))
        || *(_DWORD *)(v13 + 88) == 16
        || (*(_BYTE *)(v13 + 24) & 2) != 0
        || (unsigned int)(*(_DWORD *)v13 - 3) > 1
        || (get_tinfo_property() & 0x2F) == 0xD
        || (get_tinfo_property() & 0xF) == 9 )
      {
        goto LABEL_19;
      }
      v19 = *(_DWORD *)(v13 + 88);
      v42 = 16;
      v44 = *(_QWORD *)(a1 + 1504);
      if ( v19 < *(_DWORD *)(v44 + 88) )
      {
        v42 = sub_11CA90(v19, 0.0);
        v19 = *(_DWORD *)(v13 + 88);
      }
      if ( v42 > v19 )
        break;
LABEL_41:
      if ( v42 >= v19 || *(_DWORD *)v13 == 1 )
        goto LABEL_43;
      v34 = v19;
      sub_D10B0((__int64)&v49, *(_QWORD *)(a1 + 1496), 0xF0u);
      v47 = 0;
      v48 = 0;
      tinfo_size = get_tinfo_size();
      v28 = sub_D2BA0((__int64)&v49, (__int64)&v47, (_DWORD *)v13, tinfo_size, 0);
      v19 = v34;
      if ( !v28
        || !(_QWORD)v48
        || (sub_D1290((__int64)&v49, (__int64)&v47, 240, 0.0),
            v29 = sub_D2F80((__int64)&v49, a1, v11, 0.0),
            v19 = v34,
            !v29) )
      {
        if ( v47 )
        {
          v35 = v19;
          *(_QWORD *)&v48 = 0;
          qfree(v47);
          v19 = v35;
        }
        if ( v56 )
        {
          v36 = v19;
          v57 = 0;
          qfree(v56);
          v19 = v36;
        }
        if ( v54 )
        {
          v37 = v19;
          v55 = 0;
          qfree(v54);
          v19 = v37;
        }
        if ( v52 )
        {
          v38 = v19;
          v53 = 0;
          qfree(v52);
          v19 = v38;
        }
        if ( v50 )
        {
          v39 = v19;
          v51 = 0;
          qfree(v50);
          v19 = v39;
        }
LABEL_43:
        v33 = v19;
        v24 = sub_1EF680((_DWORD *)v13, (_QWORD *)v44, v42, 2, 0.0);
        if ( v33 > v42 && v24 )
        {
          sub_1F45B0(a1, *(_QWORD *)(v13 + 16), v13);
          *(_DWORD *)(v13 + 24) |= 0x400u;
        }
LABEL_19:
        v14 = *(_QWORD *)(a1 + 456);
        v15 = *(_QWORD *)(a1 + 464);
        v16 = (_DWORD *)(v14 + 4 * v15);
        if ( (_DWORD *)v14 != v16 )
        {
          v17 = *(_DWORD **)(a1 + 456);
          while ( (_DWORD)v11 != *v17 )
          {
            if ( v16 == ++v17 )
              goto LABEL_25;
          }
          if ( v16 != v17 )
            sub_369E70(0.0);
        }
LABEL_25:
        v18 = v15 + 1;
        if ( *(_QWORD *)(a1 + 472) < v18 )
        {
          v25 = qvector_reserve(v43, v14, v18, 4);
          v26 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v25;
          v16 = (_DWORD *)(v25 + 4 * v26);
        }
        *v16 = v11;
        ++*(_QWORD *)(a1 + 464);
        goto LABEL_28;
      }
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      sub_D0130(&v49);
LABEL_28:
      v10 = ++v4;
      if ( v4 >= v30 )
        goto LABEL_5;
    }
    v20 = (int *)(v6 + 4 * v30);
    if ( (int *)v6 == v20 )
      goto LABEL_43;
    v21 = (int *)v6;
    while ( 1 )
    {
      v22 = *v21;
      if ( (_DWORD)v11 != (_DWORD)v22 )
      {
        v40 = v21;
        v32 = v20;
        v23 = sub_1C4AE0(
                (int *)(*(_QWORD *)(a1 + 432) + 104 * v22),
                *(int *)(*(_QWORD *)(a1 + 432) + 104 * v22 + 88),
                (int *)v13,
                v42,
                0.0);
        v20 = v32;
        v21 = v40;
        if ( v23 )
          goto LABEL_19;
      }
      if ( v20 == ++v21 )
      {
        v19 = *(_DWORD *)(v13 + 88);
        goto LABEL_41;
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 4) & 0x40;
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  v41 = v7;
LABEL_5:
  if ( v41 )
    *(_DWORD *)(a1 + 4) |= 0x40u;
  if ( v6 )
    qfree(v6);
  return v58 - __readfsqword(0x28u);
}

