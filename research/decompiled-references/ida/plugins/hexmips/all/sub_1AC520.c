unsigned __int64 __fastcall sub_1AC520(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r13
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // r11
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r11
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+4h] [rbp-84h]
  unsigned __int64 v47; // [rsp+8h] [rbp-80h]
  unsigned __int64 v48; // [rsp+8h] [rbp-80h]
  unsigned __int64 v49; // [rsp+8h] [rbp-80h]
  unsigned __int64 v50; // [rsp+8h] [rbp-80h]
  unsigned __int64 v51; // [rsp+8h] [rbp-80h]
  __int64 v52; // [rsp+10h] [rbp-78h]
  __int64 v53; // [rsp+18h] [rbp-70h]
  __int64 v54; // [rsp+18h] [rbp-70h]
  __int64 v56; // [rsp+28h] [rbp-60h]
  unsigned __int64 v57; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v5 = 2;
  v57 = __readfsqword(0x28u);
  v7 = sub_1AA3F0(a3, (__int64)a2, (unsigned __int64)a1);
  v10 = a2[1];
  v56 = v7;
  if ( v10 )
    v5 = v10-- + 1;
  v11 = *a2;
  if ( a2[2] < v5 )
  {
    v4 = (__int64)a2;
    v44 = qvector_reserve();
    *a2 = v44;
    v11 = v44;
  }
  a2[1] = v5;
  *(_BYTE *)(v11 + v10) = 123;
  v46 = 0;
  *(_BYTE *)(*a2 + v10 + 1) = 0;
  v12 = 0;
  if ( a1[4] )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)(*a1 + 24 * v12);
      if ( !v13[1] )
        break;
      v28 = 0;
      v29 = 0;
      while ( 1 )
      {
        if ( (unsigned __int64)(*(_QWORD *)(*v13 + 8 * v29) + 0x7FFFFFFFFFFFFFFFLL) <= 0x7FFFFFFFFFFFFFFELL )
        {
          v33 = a2[1];
          v34 = 2;
          if ( v33 )
            v34 = v33-- + 1;
          v35 = *a2;
          if ( a2[2] < v34 )
          {
            v54 = v33;
            v49 = v34;
            v37 = qvector_reserve();
            v33 = v54;
            *a2 = v37;
            v35 = v37;
            v34 = v49;
          }
          a2[1] = v34;
          *(_BYTE *)(v35 + v33) = 45;
          *(_BYTE *)(*a2 + v33 + 1) = 0;
        }
        sub_F68D0(a2);
        v29 = ++v28;
        if ( (unsigned __int64)v28 >= v13[1] )
          break;
        v30 = a2[1];
        v31 = 2;
        if ( v30 )
          v31 = v30-- + 1;
        v32 = *a2;
        if ( a2[2] < v31 )
        {
          v53 = v30;
          v48 = v31;
          v36 = qvector_reserve();
          v30 = v53;
          v29 = v28;
          *a2 = v36;
          v32 = v36;
          v31 = v48;
        }
        a2[1] = v31;
        *(_BYTE *)(v32 + v30) = 44;
        *(_BYTE *)(*a2 + v30 + 1) = 0;
      }
LABEL_10:
      v19 = a2[1];
      if ( v19 )
      {
        v20 = v19 + 3;
        v21 = v19 + 4;
        v22 = *a2;
        --v19;
        if ( a2[2] < v21 )
          goto LABEL_18;
      }
      else
      {
        v22 = *a2;
        v21 = 5;
        v20 = 4;
        if ( (unsigned __int64)a2[2] < 5 )
        {
LABEL_18:
          v52 = v20;
          v47 = v21;
          v27 = qvector_reserve();
          v20 = v52;
          v21 = v47;
          *a2 = v27;
          v22 = v27;
        }
      }
      a2[1] = v21;
      v4 = a3;
      *(_BYTE *)(v22 + v20) = 0;
      *(_DWORD *)(*a2 + v19) = 540949792;
      sub_1AB3C0(a3, a2, *(unsigned int *)(a1[3] + 4 * v12), v9);
      v12 = ++v46;
      if ( (unsigned __int64)v46 >= a1[4] )
        goto LABEL_36;
      v9 = (unsigned int)v46;
      if ( v46 > 0 )
      {
        v23 = a2[1];
        if ( v23 )
        {
          v24 = v23 + 1;
          v25 = v23 + 2;
          v26 = *a2;
          --v23;
          if ( a2[2] >= v25 )
            goto LABEL_16;
        }
        else
        {
          v26 = *a2;
          v25 = 3;
          v24 = 2;
          if ( (unsigned __int64)a2[2] >= 3 )
            goto LABEL_16;
        }
        v51 = v25;
        v39 = qvector_reserve();
        *a2 = v39;
        v25 = v51;
        v26 = v39;
LABEL_16:
        a2[1] = v25;
        *(_BYTE *)(v26 + v24) = 0;
        *(_WORD *)(*a2 + v23) = 8236;
      }
    }
    v14 = a2[1];
    if ( v14 )
    {
      v15 = v14 + 2;
      v16 = v14 + 3;
      v17 = *a2;
      --v14;
      if ( a2[2] >= v16 )
      {
LABEL_9:
        a2[1] = v16;
        *(_BYTE *)(v17 + v15) = 0;
        v18 = *a2 + v14;
        *(_WORD *)v18 = 25956;
        *(_BYTE *)(v18 + 2) = 102;
        goto LABEL_10;
      }
    }
    else
    {
      v17 = *a2;
      v16 = 4;
      v15 = 3;
      if ( (unsigned __int64)a2[2] >= 4 )
        goto LABEL_9;
    }
    v50 = v16;
    v38 = qvector_reserve();
    *a2 = v38;
    v16 = v50;
    v17 = v38;
    goto LABEL_9;
  }
LABEL_36:
  v40 = a2[1];
  v41 = 2;
  if ( v40 )
    v41 = v40-- + 1;
  v42 = *a2;
  if ( a2[2] < v41 )
  {
    v4 = (__int64)a2;
    v45 = qvector_reserve();
    *a2 = v45;
    v42 = v45;
  }
  a2[1] = v41;
  *(_BYTE *)(v42 + v40) = 125;
  *(_BYTE *)(*a2 + v40 + 1) = 0;
  if ( v56 != -1 )
  {
    if ( ((unsigned __int8)v56 & 7u) > 2 )
      sub_1A9C90(v4, v42, v8, v9);
    sub_325BB0(a2, (unsigned int)(v56 & 7) + 41);
  }
  return v57 - __readfsqword(0x28u);
}

