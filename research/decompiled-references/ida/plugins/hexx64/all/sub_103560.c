__int64 __fastcall sub_103560(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rsi
  int v9; // r13d
  _DWORD *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  char *v23; // rdi
  char v24; // r13
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // r12
  __int64 v28; // rsi
  __m128i *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbp
  __int64 v32; // rdi
  _BYTE *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbp
  __int64 v36; // r12
  int v37; // r14d
  __int64 v38; // r13
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // [rsp+18h] [rbp-70h]
  __int64 v48; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-58h] BYREF
  __int128 v50; // [rsp+38h] [rbp-50h]
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  v51 = __readfsqword(0x28u);
  if ( *(char *)(v6 + 4) < 0 && *(char *)(a1 + 160) >= 0 )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    v10 = *(_DWORD **)(a2 + 8);
    if ( *v10 != 2 || (*(_BYTE *)(a1 + 160) & 0x20) == 0 )
    {
LABEL_5:
      if ( *(_DWORD *)(a2 + 4) != -1 )
      {
        v9 = sub_207610(a2, (int **)v6);
        if ( (unsigned __int8)sub_32F330(a2, &v49) )
          sub_1029D0((__int64 *)a1, v49, v9, a4);
      }
      return 0;
    }
    v11 = sub_11E7F0((__int64)(v10 + 8), (__int64)(v10 + 12));
    v12 = *(_QWORD *)(a1 + 8);
    if ( v11 == -1 )
    {
      v45 = sub_18D270((_QWORD *)v12, 0);
      sub_1029D0(
        (__int64 *)a1,
        (v45 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1440LL))
      & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL),
        v46,
        0);
      sub_1029D0(
        (__int64 *)a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL),
        0);
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 576);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1496) + 24LL) + 16LL) & (v11 - *(_QWORD *)(v12 + 1440));
      v15 = *(_QWORD *)(v12 + 568);
      if ( v11 >= v15 && v13 && v13 + v15 - 1 >= v11 )
      {
        sub_1029D0((__int64 *)a1, v14, *(_QWORD *)(v12 + 136) - v14, 0);
      }
      else
      {
        v39 = *(_QWORD *)(v12 + 640);
        v40 = *(_QWORD *)(v12 + 632);
        if ( v39 && v11 >= v40 && v39 + v40 - 1 >= v11 )
        {
          sub_1029D0((__int64 *)a1, v14, *(int *)(v12 + 120) - v14, 0);
        }
        else
        {
          v41 = *(_QWORD *)(v12 + 672);
          v42 = *(_QWORD *)(v12 + 664);
          if ( v41 && v11 >= v42 && v41 + v42 - 1 >= v11 )
            sub_1029D0((__int64 *)a1, v14, *(_QWORD *)(v12 + 128) - v14, 0);
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 != 8 )
    goto LABEL_5;
  v16 = *(_QWORD *)(a2 + 8);
  v19 = sub_32FB00(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), *(_DWORD *)(v16 + 284));
  if ( v19 == -1 )
    goto LABEL_29;
  v20 = *(_QWORD *)(a2 + 8);
  v18 = *(unsigned int *)(v20 + 284);
  if ( (unsigned int)v18 > 0x26 )
    goto LABEL_45;
  v21 = 1LL << v18;
  if ( ((1LL << v18) & 0x80000001CLL) != 0 )
  {
    v35 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v35 == 10 )
    {
      if ( (unsigned __int8)sub_11FD80((char *)(v35 + 160), &v48, 0) )
      {
        v36 = v48 * v19;
        v37 = 1;
        v38 = v36;
      }
      else
      {
        v37 = 2;
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
        v36 = v38;
      }
      v48 = v36;
      if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v35 + 8), &v49) )
        sub_1029D0((__int64 *)a1, v49, v38, v37);
    }
    return 0;
  }
  v17 = 0x5000000140LL;
  if ( (v21 & 0x5000000140LL) != 0 )
  {
    v33 = *(_BYTE **)(v16 + 24);
    if ( *v33 == 10 )
    {
      v34 = sub_32F220(v33 + 80, v19);
      if ( v34 >= 0 )
      {
        if ( (unsigned __int8)sub_32F330(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL), &v49) )
          sub_1029D0((__int64 *)a1, v49, v34, 1);
        if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v16 + 24) + 80LL, &v49) )
        {
          sub_1029D0((__int64 *)a1, v49, v34, 0);
          return 0;
        }
      }
    }
    goto LABEL_29;
  }
  v17 = 0x400000020LL;
  if ( (v21 & 0x400000020LL) == 0 )
  {
LABEL_45:
    sub_11E5D0(v20, (__int64 *)(a1 + 120), *(_QWORD **)(a1 + 8));
    goto LABEL_29;
  }
  v22 = *(_QWORD *)(v16 + 24);
  v23 = (char *)(v22 + 160);
  if ( *(_BYTE *)(v22 + 80) != 10 )
  {
    if ( *(_BYTE *)v22 == 10 )
    {
      v24 = 0;
      goto LABEL_24;
    }
LABEL_29:
    if ( (*(_BYTE *)(a1 + 160) & 0x20) != 0 )
    {
      v28 = *(_QWORD *)(a2 + 8);
      v49 = 0;
      v50 = 0;
      sub_101E10(&v49, v28 + 216, v17, v18);
      sub_3180C0((__int64 *)&v49, a1 + 48, v29, v30);
      v31 = (_QWORD *)v49;
      if ( 16LL * (_QWORD)v50 )
      {
        do
        {
          sub_1029D0(
            (__int64 *)a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL)
          & (*v31 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1440LL)),
            v31[1],
            0);
          v32 = v49;
          v31 += 2;
        }
        while ( v31 != (_QWORD *)(v49 + 16 * v50) );
      }
      else
      {
        v32 = v49;
      }
      if ( v32 )
      {
        *(_QWORD *)&v50 = 0;
        qfree(v32);
      }
    }
    return 0;
  }
  if ( (unsigned __int8)sub_11FD80(v23, &v48, 0) )
  {
    v43 = v48 * v19;
    v44 = v43;
  }
  else
  {
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    v43 = v44;
  }
  v48 = v43;
  v47 = v44;
  v24 = sub_32F330(*(_QWORD *)(v22 + 88), &v49);
  if ( v24 )
  {
    sub_1029D0((__int64 *)a1, v49, v47, 0);
    v22 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v22 != 10 )
      return 0;
  }
  else
  {
    v22 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v22 != 10 )
      goto LABEL_29;
  }
  v23 = (char *)(v22 + 160);
LABEL_24:
  if ( (unsigned __int8)sub_11FD80(v23, &v48, 0) )
  {
    v25 = v48 * v19;
    v26 = 1;
    v27 = v25;
  }
  else
  {
    v26 = 2;
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    v25 = v27;
  }
  v48 = v25;
  if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v22 + 8), &v49) )
    sub_1029D0((__int64 *)a1, v49, v27, v26);
  if ( !v24 )
    goto LABEL_29;
  return 0;
}

