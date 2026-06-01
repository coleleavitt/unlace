_BOOL8 __fastcall sub_B9940(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        int *a4,
        int *a5,
        unsigned __int8 a6,
        double a7,
        char a8)
{
  int v12; // eax
  __int64 v13; // r10
  int *v14; // r15
  char v15; // al
  int *v16; // r8
  int *v17; // rcx
  int *v18; // rdx
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edi
  int v22; // ecx
  int v23; // r9d
  int v24; // ebp
  int v25; // ebx
  int *v26; // rax
  __int64 v27; // rax
  int *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // r13
  char v37; // al
  __int64 v38; // [rsp+8h] [rbp-90h]
  __int64 v39; // [rsp+8h] [rbp-90h]
  int *v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  int *v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+10h] [rbp-88h]
  int *v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  int *v46; // [rsp+10h] [rbp-88h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  int *v48; // [rsp+18h] [rbp-80h]
  int *v49; // [rsp+18h] [rbp-80h]
  int *v50; // [rsp+20h] [rbp-78h]
  int *v51; // [rsp+20h] [rbp-78h]
  unsigned __int8 v52; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int8 v53; // [rsp+2Ch] [rbp-6Ch]
  __int64 v54; // [rsp+38h] [rbp-60h] BYREF
  __int64 v55; // [rsp+40h] [rbp-58h] BYREF
  __int64 v56; // [rsp+48h] [rbp-50h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v12 = *a5;
  v57 = __readfsqword(0x28u);
  if ( (unsigned int)(v12 - 1) <= 1 || v12 == 4 )
  {
    v13 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
    if ( a6 )
    {
LABEL_15:
      v15 = *((_BYTE *)a5 + 64);
      v14 = a4 + 16;
      v16 = a5 + 16;
      v17 = a5;
      v18 = a4;
      goto LABEL_16;
    }
    if ( *a4 == 2 )
    {
      v14 = a4 + 12;
      if ( v12 == 2 )
        goto LABEL_14;
    }
    else
    {
      if ( *((_BYTE *)a4 + 32) == 4 )
      {
        v18 = *((int **)a4 + 5);
        if ( *v18 != 2 )
          return 0;
        v14 = v18 + 12;
        if ( v12 == 2 )
        {
          v15 = *((_BYTE *)a5 + 48);
          v16 = a5 + 12;
          v17 = a5;
          goto LABEL_16;
        }
        goto LABEL_52;
      }
      v14 = a4 + 8;
      if ( v12 == 2 )
      {
LABEL_14:
        v15 = *((_BYTE *)a5 + 48);
        v16 = a5 + 12;
        v17 = a5;
        v18 = a4;
        goto LABEL_16;
      }
    }
LABEL_8:
    v15 = *((_BYTE *)a5 + 32);
    if ( v15 != 4 )
    {
LABEL_9:
      v16 = a5 + 8;
      v17 = a5;
      v18 = a4;
      goto LABEL_16;
    }
    goto LABEL_33;
  }
  if ( !a8 || (unsigned int)(v12 - 8) > 1 )
    return 0;
  v13 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
  if ( a6 )
    goto LABEL_15;
  if ( *a4 != 2 )
  {
    v14 = a4 + 8;
    if ( *((_BYTE *)a4 + 32) != 4 )
      goto LABEL_8;
    v18 = *((int **)a4 + 5);
    if ( *v18 != 2 )
      return 0;
    v14 = v18 + 12;
LABEL_52:
    v15 = *((_BYTE *)a5 + 32);
    v16 = a5 + 8;
    v17 = a5;
    if ( v15 == 4 )
    {
      v17 = *((int **)a5 + 5);
      if ( *v17 != 2 )
        return 0;
      v15 = *((_BYTE *)v17 + 48);
      v16 = v17 + 12;
    }
    goto LABEL_16;
  }
  v15 = *((_BYTE *)a5 + 32);
  v14 = a4 + 12;
  if ( v15 != 4 )
    goto LABEL_9;
LABEL_33:
  v17 = *((int **)a5 + 5);
  if ( *v17 != 2 )
    return 0;
  v15 = *((_BYTE *)v17 + 48);
  v16 = v17 + 12;
  v18 = a4;
LABEL_16:
  if ( v15 == 1 )
  {
    v52 = a6;
    v50 = v17;
    v48 = v18;
    v44 = v16;
    v39 = v13;
    if ( (unsigned __int8)sub_11CCD0(v13, v16[2]) )
      return 0;
    v13 = v39;
    v16 = v44;
    v18 = v48;
    v17 = v50;
    a6 = v52;
  }
  if ( *(_BYTE *)v14 == 1 )
  {
    v53 = a6;
    v51 = v16;
    v49 = v17;
    v46 = v18;
    v41 = v13;
    if ( (unsigned __int8)sub_11CCD0(v13, v14[2]) )
      return 0;
    v13 = v41;
    v18 = v46;
    v17 = v49;
    v16 = v51;
    a6 = v53;
  }
  v19 = *v17;
  if ( *(_BYTE *)v16 != 2 )
  {
    v20 = *v18;
    if ( v20 == v19 )
      goto LABEL_41;
    if ( v20 != 4 )
    {
      v21 = v20 - 8;
      if ( v19 == 4 )
      {
        if ( v21 <= 1 )
          goto LABEL_41;
        v22 = a6;
        if ( v20 == a6 + 1 )
          goto LABEL_41;
      }
      else
      {
        v22 = a6;
        v23 = a6 + 1;
        if ( v21 <= 1 )
        {
          if ( v23 != v19 )
            goto LABEL_24;
LABEL_41:
          if ( a3 )
            goto LABEL_42;
          if ( *(_BYTE *)v16 == 4 )
            goto LABEL_62;
          goto LABEL_71;
        }
        if ( v23 == v20 && (unsigned int)(v19 - 8) <= 1 )
          goto LABEL_41;
      }
LABEL_24:
      v24 = *a4;
      v25 = 2 - v22;
      if ( v24 != 2 - v22 )
      {
        v26 = v16;
        v16 = v14;
        v14 = v26;
      }
      v43 = (__int64)v16;
      v38 = v13;
      v55 = 0;
      v56 = 0;
      if ( (unsigned __int8)sub_122DC0(&v55, (__int64)v14)
        && *(_BYTE *)v56 == 10
        && sub_1255D0(*(unsigned __int8 **)(v56 + 8), v38, v43, 1) )
      {
        v27 = v55 - (v24 == v25);
        *a1 = v27;
        return v27 >= 0;
      }
      return 0;
    }
    if ( (unsigned int)(v19 - 8) <= 1 )
      goto LABEL_41;
    if ( v19 != 4 )
    {
LABEL_57:
      v22 = a6;
      if ( a6 + 1 == v19 )
        goto LABEL_41;
      goto LABEL_24;
    }
    goto LABEL_80;
  }
  if ( v19 == 2 )
  {
    v35 = *v18;
    if ( v35 != 2 )
    {
      if ( v35 == 4 )
        goto LABEL_57;
      if ( (unsigned int)(v35 - 8) > 1 )
      {
LABEL_80:
        v22 = a6;
        goto LABEL_24;
      }
      v22 = a6;
      if ( !a6 )
        goto LABEL_24;
    }
  }
  else
  {
    if ( *v18 != 2 )
    {
      *a1 = 0;
      return 1;
    }
    v22 = a6;
    if ( v19 == 4 )
    {
      if ( a6 != 1 )
        goto LABEL_24;
    }
    else if ( a6 != 1 || (unsigned int)(v19 - 8) > 1 )
    {
      goto LABEL_24;
    }
  }
  if ( a3 )
  {
LABEL_42:
    v45 = v13;
    v40 = v16;
    v29 = (int *)sub_1FBD10(*(_QWORD ***)(a2[4].m128i_i64[0] + 800), (unsigned __int64)v16);
    if ( v29 )
    {
      v30 = v29[4];
      if ( (_DWORD)v30 == *(_DWORD *)(a3 + 16) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v29 + 440LL) < v30 )
          sub_B7BC0(a7);
        v31 = 13 * v30;
        v32 = *(_QWORD *)(*(_QWORD *)v29 + 432LL);
        v54 = *((_QWORD *)v29 + 1);
        v33 = v32 + 8 * v31;
        if ( (unsigned __int8)sub_1C50C0(v33, *(_QWORD *)(v45 + 96), &v54, v40[1], *(int *)(v33 + 88)) )
        {
          v55 = *(_QWORD *)(a3 + 8);
          if ( (unsigned __int8)sub_1C50C0(v33, *(_QWORD *)(v45 + 96), &v55, v14[1], *(int *)(v33 + 88)) )
          {
            v34 = v54 - v55;
            *a1 = v54 - v55;
            return v34 >= 0;
          }
        }
      }
    }
    return 0;
  }
LABEL_71:
  v36 = *(_QWORD *)(v13 + 96);
  v47 = v13;
  v42 = v16;
  v37 = sub_11CC50((unsigned __int8 *)v16, v36);
  v16 = v42;
  v13 = v47;
  if ( v37 != *(_BYTE *)(v36 + 145) )
    return 0;
LABEL_62:
  if ( !(unsigned __int8)sub_12FF70(v13, a1, a2, (__int64)a4, (__int64)v14, (__int64)a5, (__int64)v16) )
    return 0;
  return *a1 >= 0;
}

