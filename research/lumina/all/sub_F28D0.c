__int64 __fastcall sub_F28D0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        double a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v10; // r12
  __int64 *v12; // rbp
  int v13; // r15d
  int v14; // r14d
  int v15; // r12d
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // r14
  unsigned int v19; // r13d
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // edx
  __int64 v27; // rax
  char v29; // al
  unsigned __int8 v30; // al
  int v31; // r13d
  int v32; // esi
  int v33; // r14d
  int v34; // eax
  int v35; // edx
  _DWORD *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rdx
  unsigned __int64 v39; // r13
  __int64 v40; // r15
  int v41; // eax
  int v42; // esi
  __int64 v43; // rdi
  unsigned int v44; // edx
  int v45; // esi
  __int16 v46; // r10
  __int16 v47; // ax
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // [rsp+4h] [rbp-84h]
  unsigned int v54; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+20h] [rbp-68h]
  unsigned int v57; // [rsp+28h] [rbp-60h]
  int v59; // [rsp+30h] [rbp-58h]
  int v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+40h] [rbp-48h]
  unsigned int v62; // [rsp+4Ch] [rbp-3Ch]

  v10 = a1;
  v12 = *(__int64 **)(a1 + 16);
  if ( !v12 )
    v12 = sub_E2050((__int64 *)a1);
  v51 = *(_DWORD *)(a1 + 52) - 1;
  v13 = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v13;
  if ( a9 == -1 )
    sub_E1710((__int64)v12, 48, *(unsigned __int8 *)(a5 + 44), v13, 0);
  v14 = *(_DWORD *)(a5 + 40);
  if ( v14 > 0 )
  {
    v15 = 0;
    do
    {
      v16 = a6[v15];
      v17 = (__int16)v16;
      if ( (*(_BYTE *)(*(_QWORD *)a5 + 48LL) & 0x20) != 0 && (v16 & 0x8000u) == 0 )
        v17 = sub_CF5E0(*(_QWORD *)a5, v16);
      ++v15;
      sub_E1710((__int64)v12, 50, a8 + 1 + v17, v13, 0);
    }
    while ( *(_DWORD *)(a5 + 40) > v15 );
    v10 = a1;
    v14 = *(_DWORD *)(a5 + 40);
  }
  if ( !a10 )
  {
    if ( a4 )
    {
      v54 = sub_CF000(v10, v14);
      sub_E1710((__int64)v12, 112, v51, *(_DWORD *)(a4 + 88), a2);
      sub_F2600(v10, a4, a7);
      if ( v14 <= 0 )
      {
        if ( *(_QWORD *)a5 != a3 || a9 != 1 )
        {
LABEL_22:
          v22 = sub_E3A30(*(_QWORD *)v10, a4);
          v23 = sub_E1710((__int64)v12, 96, v54, v14, 0);
          sub_DCC50((__int64)v12, v23, v22, (unsigned int)v14, v24, v25);
          sub_E1770(v12, 28, v51, v13, v54, v14);
          if ( v14 == 1 )
          {
            sub_CF060(v10, v54);
          }
          else if ( *(_DWORD *)(v10 + 40) < v14 )
          {
            *(_DWORD *)(v10 + 40) = v14;
            *(_DWORD *)(v10 + 44) = v54;
          }
          goto LABEL_25;
        }
      }
      else
      {
        v59 = v14;
        v61 = (unsigned int)(v14 - 1);
        v62 = a8 + 1;
        v18 = a6;
        v19 = v54;
        do
        {
          v20 = (__int16)*v18;
          if ( (*(_BYTE *)(*(_QWORD *)a5 + 48LL) & 0x20) != 0 && (*v18 & 0x8000u) == 0 )
            v20 = sub_CF5E0(*(_QWORD *)a5, v20);
          ++v18;
          sub_E1710((__int64)v12, 80, a8 + 1 + v20, v19++, 0);
        }
        while ( &a6[v61 + 1] != v18 );
        v21 = *(_QWORD *)a5;
        v14 = v59;
        if ( *(_QWORD *)a5 != a3 || a9 != 1 )
          goto LABEL_22;
        v39 = 0;
        v60 = v13;
        v40 = a3;
        v57 = v59 + *((_DWORD *)v12 + 36) + 1;
        while ( 1 )
        {
          v41 = a6[v39 / 2];
          v42 = (__int16)v41;
          if ( (*(_BYTE *)(v21 + 48) & 0x20) != 0 && (v41 & 0x8000u) == 0 )
            v42 = sub_CF5E0(v21, v41);
          v43 = *(_QWORD *)(a4 + 24);
          v44 = v62 + v42;
          v45 = *(__int16 *)(*(_QWORD *)(a4 + 8) + v39);
          v46 = *(_WORD *)(*(_QWORD *)(a4 + 8) + v39);
          if ( (*(_BYTE *)(v43 + 48) & 0x20) != 0 && (v45 & 0x8000u) == 0 )
          {
            v56 = v44;
            v47 = sub_CF5E0(v43, v45);
            v44 = v56;
            v45 = v47;
          }
          v48 = a8;
          if ( v46 != *(_WORD *)(v40 + 52) )
            v48 = v62 + v45;
          sub_E1710((__int64)v12, 52, v44, v57, v48);
          v49 = *((int *)v12 + 36);
          if ( (int)v49 > 0 )
            *(_WORD *)(v12[17] + 24 * v49 - 22) = 16;
          v39 += 2LL;
          if ( v39 == 2 * v61 + 2 )
            break;
          v21 = *(_QWORD *)a5;
        }
        v14 = v59;
        v13 = v60;
      }
      sub_E1710((__int64)v12, 8, 0, v13, 0);
      goto LABEL_22;
    }
    v29 = *(_BYTE *)(v10 + 31);
    if ( v29 )
    {
      v30 = v29 - 1;
      *(_BYTE *)(v10 + 31) = v30;
      v31 = *(_DWORD *)(v10 + 4LL * v30 + 216);
    }
    else
    {
      v31 = *(_DWORD *)(v10 + 56) + 1;
      *(_DWORD *)(v10 + 56) = v31;
    }
    v32 = (__int16)*a6;
    if ( (*(_BYTE *)(*(_QWORD *)a5 + 48LL) & 0x20) != 0 && (*a6 & 0x8000u) == 0 )
      v32 = sub_CF5E0(*(_QWORD *)a5, v32);
    sub_E1710((__int64)v12, 81, v32 + a8 + 1, v31, 0);
    v33 = sub_E1710((__int64)v12, 12, v31, 0, 0);
    if ( *(_QWORD *)a5 == a3 && a9 == 1 )
    {
      sub_E1710((__int64)v12, 53, a8, v13, v31);
      v50 = *((int *)v12 + 36);
      if ( (int)v50 > 0 )
        *(_WORD *)(v12[17] + 24 * v50 - 22) = 144;
    }
    sub_F2630(v10, v51, a2, a3, 112, a7);
    sub_E1710((__int64)v12, 30, v51, 0, v31);
    sub_E1710((__int64)v12, 8, 0, v13, 0);
    v34 = *((_DWORD *)v12 + 36);
    v35 = v34 - 2;
    if ( v34 - 2 < 0 )
      v35 = v34 - 1;
    v36 = &unk_241F50;
    if ( !*(_BYTE *)(*v12 + 103) )
      v36 = (_DWORD *)(v12[17] + 24LL * v35);
    v36[2] = v34;
    v37 = *((_DWORD *)v12 + 36);
    if ( v33 < 0 )
      v33 = v37 - 1;
    v38 = &unk_241F50;
    if ( !*(_BYTE *)(*v12 + 103) )
      v38 = (_DWORD *)(v12[17] + 24LL * v33);
    v38[2] = v37;
    if ( v31 )
      sub_CEFE0(v10, v31);
  }
LABEL_25:
  v26 = *(unsigned __int8 *)(a5 + 44);
  if ( !(_BYTE)v26 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 50LL) & 8) != 0 )
    {
      if ( a9 != 1 )
        goto LABEL_30;
      v27 = *(_QWORD *)(v10 + 160);
      if ( !v27 )
        v27 = v10;
      goto LABEL_29;
    }
    v27 = *(_QWORD *)(v10 + 160);
    if ( v27 )
    {
      if ( a9 == 1 )
      {
LABEL_29:
        *(_BYTE *)(v27 + 33) = 1;
        v26 = *(unsigned __int8 *)(a5 + 44);
      }
    }
    else
    {
      if ( !*(_BYTE *)(v10 + 32) )
      {
        sub_E2080((__int64 *)v10, 0x313u, 2u, 0, -1, 4u);
        goto LABEL_31;
      }
      v27 = v10;
      if ( a9 == 1 )
        goto LABEL_29;
    }
  }
LABEL_30:
  sub_E1710((__int64)v12, 158, v26, a9, 0);
LABEL_31:
  sub_E0BB0((__int64)v12, v13);
  return sub_E1710((__int64)v12, 122, v51, 0, 0);
}
