__int64 __fastcall sub_1307A0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, int *a5, __m128i a6, __m128 a7)
{
  int v7; // eax
  __int64 v11; // r15
  int v14; // edx
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // r10
  bool v18; // zf
  int v19; // r8d
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  _DWORD *v39; // rax
  int v40; // [rsp+8h] [rbp-70h]
  int v41; // [rsp+8h] [rbp-70h]
  int v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+8h] [rbp-70h]
  int v46; // [rsp+14h] [rbp-64h]
  __int64 v47; // [rsp+18h] [rbp-60h]
  int v48; // [rsp+20h] [rbp-58h] BYREF
  int v49; // [rsp+24h] [rbp-54h] BYREF
  __int64 v50; // [rsp+28h] [rbp-50h] BYREF
  __int64 v51[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = *a5;
  v51[1] = __readfsqword(0x28u);
  if ( (unsigned int)(v7 - 10) > 1 || *((_BYTE *)a5 + 32) != 4 )
    return 0;
  v11 = *((_QWORD *)a5 + 5);
  v14 = *(_DWORD *)v11;
  if ( v7 == 11 )
  {
    if ( ((v14 - 14) & 0xFFFFFFF7) != 0 )
      return 0;
    v23 = *(_DWORD *)(a3 + 68);
    if ( v23 + a5[17] != a5[9] )
      return 0;
    v16 = 8 * v23;
    v17 = v11 + 32;
    v18 = *(_DWORD *)a3 == 22;
    v50 = v11 + 32;
    if ( !v18 )
      goto LABEL_18;
    v24 = a3 + 48;
    if ( (unsigned __int64)*(int *)(a3 + 52) <= 8 )
    {
      if ( *(_BYTE *)(a3 + 48) == 2 )
        goto LABEL_18;
      goto LABEL_44;
    }
  }
  else
  {
    if ( (unsigned int)(v14 - 23) > 1 )
      return 0;
    v15 = *(_DWORD *)(a3 + 68);
    if ( v15 != a5[17] )
      return 0;
    v16 = 8 * v15;
    v17 = v11 + 32;
    v18 = *(_DWORD *)a3 == 22;
    v50 = v11 + 32;
    if ( !v18 )
    {
LABEL_8:
      v40 = v16;
      if ( !(unsigned __int8)sub_152630(v11, &v48) )
        return 0;
      v19 = v40;
      v20 = v48;
      v21 = v40 - v48;
      if ( *(_DWORD *)v11 == 24 && 8 * a5[9] - v40 < v21 )
        return 0;
      goto LABEL_10;
    }
    v24 = a3 + 48;
    if ( (unsigned __int64)*(int *)(a3 + 52) <= 8 )
    {
      if ( *(_BYTE *)(a3 + 48) == 2 )
        goto LABEL_8;
      goto LABEL_22;
    }
  }
  v30 = *(_BYTE *)(a3 + 48);
  if ( v30 == 4 )
  {
    v38 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v38 != 8 )
      goto LABEL_44;
    v30 = *(_BYTE *)(v38 + 32);
  }
  if ( v30 == 2 )
  {
    if ( v7 != 11 )
      goto LABEL_8;
LABEL_18:
    v42 = v16;
    if ( !(unsigned __int8)sub_1227B0((int *)v11, &v48, &v50, 1) )
      return 0;
    v21 = v48;
    v19 = v42;
    v20 = v48;
LABEL_10:
    if ( v20 > v19 )
      return 0;
    v22 = 1;
    if ( *(_BYTE *)v50 != 4 )
    {
LABEL_12:
      v41 = v21;
      if ( (unsigned __int8)sub_1227B0((int *)a3, &v49, v51, v22) && v49 == v41 )
        return sub_1321C0(a1, a2, v51[0], a4, v50);
      return 0;
    }
    v29 = *(_QWORD *)(v50 + 8);
    if ( *(_DWORD *)v29 == 14 )
    {
      if ( *a5 == 11 )
        return 0;
      if ( *(_BYTE *)(v29 + 48) == 2 )
      {
        v31 = v29 + 32;
        v32 = v29 + 48;
      }
      else
      {
        if ( *(_BYTE *)(v29 + 32) != 2 )
          goto LABEL_12;
        v31 = v29 + 48;
        v32 = v29 + 32;
      }
      v33 = *(_DWORD *)(v32 + 4);
      v34 = *(_QWORD *)(v32 + 8);
      v50 = v31;
      v45 = v21;
      v35 = sub_32ABC0(*(_QWORD *)(v34 + 16), v33, 1);
      v21 = v45;
      v36 = v35 + 1;
      v22 = v35;
      v37 = 1LL << v48;
      if ( (unsigned __int64)v48 >= 0x40 )
        v37 = 0;
      if ( v36 != v37 )
      {
        if ( !v22 )
          return 0;
        goto LABEL_12;
      }
    }
    else
    {
      if ( *(_DWORD *)v29 != 5 )
        goto LABEL_12;
      v50 = v29 + 32;
    }
    v22 = -1;
    goto LABEL_12;
  }
LABEL_44:
  if ( v14 == 22 )
  {
    v28 = v11 + 48;
    goto LABEL_30;
  }
LABEL_22:
  if ( v14 != 23 )
    return 0;
  if ( *(_BYTE *)(v11 + 48) != 4 )
    return 0;
  v25 = *(_QWORD *)(v11 + 56);
  if ( *(_DWORD *)v25 != 13 )
    return 0;
  v26 = (_DWORD *)(v25 + 32);
  if ( (unsigned __int64)*(int *)(v25 + 36) > 8 && *(_BYTE *)(v25 + 32) == 4 )
  {
    v39 = *(_DWORD **)(v25 + 40);
    if ( *v39 == 8 )
      v26 = v39 + 8;
  }
  v47 = v17;
  v46 = v16;
  v43 = v24;
  if ( *(_BYTE *)v26 != 2 )
    return 0;
  v27 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v26 + 1) + 16LL), v26[1], 0);
  v24 = v43;
  v17 = v47;
  if ( v46 != v27 )
    return 0;
  v28 = *(_QWORD *)(v11 + 56) + 48LL;
LABEL_30:
  v44 = v17;
  if ( !(unsigned __int8)sub_12EA80(*(_QWORD *)(a1[30].m128i_i64[0] + 112), a1, a2, v24, a4, v28, a6, a7, 0) )
    return 0;
  return sub_1321C0(a1, a2, a3 + 32, a4, v44);
}

