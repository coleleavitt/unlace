unsigned __int64 __fastcall sub_1B0860(_QWORD *a1, __int64 *a2, __int64 a3, double a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // r13
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // r12d
  __int64 v26; // r11
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r11
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  unsigned __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // [rsp+4h] [rbp-84h]
  unsigned __int64 v44; // [rsp+8h] [rbp-80h]
  unsigned __int64 v45; // [rsp+8h] [rbp-80h]
  unsigned __int64 v46; // [rsp+8h] [rbp-80h]
  unsigned __int64 v47; // [rsp+8h] [rbp-80h]
  unsigned __int64 v48; // [rsp+8h] [rbp-80h]
  __int64 v49; // [rsp+10h] [rbp-78h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  __int64 v51; // [rsp+18h] [rbp-70h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]

  v4 = 2;
  v54 = __readfsqword(0x28u);
  v6 = sub_1AE730(a3, a2, (unsigned __int64)a1, a4);
  v7 = a2[1];
  v53 = v6;
  if ( v7 )
    v4 = v7-- + 1;
  v8 = *a2;
  if ( a2[2] < v4 )
  {
    v41 = qvector_reserve((__int64)a2, v8, v4, 1);
    *a2 = v41;
    v8 = v41;
  }
  a2[1] = v4;
  *(_BYTE *)(v8 + v7) = 123;
  v43 = 0;
  *(_BYTE *)(*a2 + v7 + 1) = 0;
  v9 = 0;
  if ( a1[4] )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)(*a1 + 24 * v9);
      if ( !v10[1] )
        break;
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        if ( (unsigned __int64)(*(_QWORD *)(*v10 + 8 * v26) + 0x7FFFFFFFFFFFFFFFLL) <= 0x7FFFFFFFFFFFFFFELL )
        {
          v30 = a2[1];
          v31 = 2;
          if ( v30 )
            v31 = v30-- + 1;
          v32 = *a2;
          if ( a2[2] < v31 )
          {
            v51 = v30;
            v46 = v31;
            v34 = qvector_reserve((__int64)a2, v32, v31, 1);
            v30 = v51;
            *a2 = v34;
            v32 = v34;
            v31 = v46;
          }
          a2[1] = v31;
          *(_BYTE *)(v32 + v30) = 45;
          *(_BYTE *)(*a2 + v30 + 1) = 0;
        }
        sub_FAAD0(a2);
        v26 = ++v25;
        if ( (unsigned __int64)v25 >= v10[1] )
          break;
        v27 = a2[1];
        v28 = 2;
        if ( v27 )
          v28 = v27-- + 1;
        v29 = *a2;
        if ( a2[2] < v28 )
        {
          v50 = v27;
          v45 = v28;
          v33 = qvector_reserve((__int64)a2, v29, v28, 1);
          v27 = v50;
          v26 = v25;
          *a2 = v33;
          v29 = v33;
          v28 = v45;
        }
        a2[1] = v28;
        *(_BYTE *)(v29 + v27) = 44;
        *(_BYTE *)(*a2 + v27 + 1) = 0;
      }
LABEL_10:
      v16 = a2[1];
      if ( v16 )
      {
        v17 = v16 + 3;
        v18 = v16 + 4;
        v19 = *a2;
        --v16;
        if ( a2[2] < v18 )
          goto LABEL_18;
      }
      else
      {
        v19 = *a2;
        v18 = 5;
        v17 = 4;
        if ( (unsigned __int64)a2[2] < 5 )
        {
LABEL_18:
          v49 = v17;
          v44 = v18;
          v24 = qvector_reserve((__int64)a2, v19, v18, 1);
          v17 = v49;
          v18 = v44;
          *a2 = v24;
          v19 = v24;
        }
      }
      a2[1] = v18;
      *(_BYTE *)(v19 + v17) = 0;
      *(_DWORD *)(*a2 + v16) = 540949792;
      sub_1AF700(a3, a2);
      v9 = ++v43;
      if ( (unsigned __int64)v43 >= a1[4] )
        goto LABEL_36;
      if ( v43 > 0 )
      {
        v20 = a2[1];
        if ( v20 )
        {
          v21 = v20 + 1;
          v22 = v20 + 2;
          v23 = *a2;
          --v20;
          if ( a2[2] >= v22 )
            goto LABEL_16;
        }
        else
        {
          v23 = *a2;
          v22 = 3;
          v21 = 2;
          if ( (unsigned __int64)a2[2] >= 3 )
            goto LABEL_16;
        }
        v48 = v22;
        v36 = qvector_reserve((__int64)a2, v23, v22, 1);
        *a2 = v36;
        v22 = v48;
        v23 = v36;
LABEL_16:
        a2[1] = v22;
        *(_BYTE *)(v23 + v21) = 0;
        *(_WORD *)(*a2 + v20) = 8236;
      }
    }
    v11 = a2[1];
    if ( v11 )
    {
      v12 = v11 + 2;
      v13 = v11 + 3;
      v14 = *a2;
      --v11;
      if ( a2[2] >= v13 )
      {
LABEL_9:
        a2[1] = v13;
        *(_BYTE *)(v14 + v12) = 0;
        v15 = *a2 + v11;
        *(_WORD *)v15 = 25956;
        *(_BYTE *)(v15 + 2) = 102;
        goto LABEL_10;
      }
    }
    else
    {
      v14 = *a2;
      v13 = 4;
      v12 = 3;
      if ( (unsigned __int64)a2[2] >= 4 )
        goto LABEL_9;
    }
    v47 = v13;
    v35 = qvector_reserve((__int64)a2, v14, v13, 1);
    *a2 = v35;
    v13 = v47;
    v14 = v35;
    goto LABEL_9;
  }
LABEL_36:
  v37 = a2[1];
  v38 = 2;
  if ( v37 )
    v38 = v37-- + 1;
  v39 = *a2;
  if ( a2[2] < v38 )
  {
    v42 = qvector_reserve((__int64)a2, v39, v38, 1);
    *a2 = v42;
    v39 = v42;
  }
  a2[1] = v38;
  *(_BYTE *)(v39 + v37) = 125;
  *(_BYTE *)(*a2 + v37 + 1) = 0;
  if ( v53 != -1 )
  {
    if ( ((unsigned __int8)v53 & 7u) > 2 )
      sub_1ADFD0(a4);
    sub_32AAE0(a2, (v53 & 7) + 41);
  }
  return v54 - __readfsqword(0x28u);
}

