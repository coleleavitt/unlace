__int64 __fastcall sub_4DE20(__int64 *a1, int *a2, char a3, double a4)
{
  int *v4; // r8
  __int64 *v5; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  const char *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r12
  unsigned __int64 v20; // rbp
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r12
  unsigned __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  int *v34; // [rsp+8h] [rbp-50h]
  int *v35; // [rsp+8h] [rbp-50h]
  int *v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  if ( *((_BYTE *)a2 + 4) )
  {
    v28 = a1[1];
    if ( v28 )
    {
      v31 = v28 + 10;
      v30 = v28 + 11;
      v29 = *a1;
      --v28;
      if ( a1[2] >= v30 )
        goto LABEL_35;
    }
    else
    {
      v29 = *a1;
      v30 = 12;
      v31 = 11;
      if ( (unsigned __int64)a1[2] >= 0xC )
      {
LABEL_35:
        a1[1] = v30;
        *(_BYTE *)(v29 + v31) = 0;
        qmemcpy((void *)(*a1 + v28), "__noreturn ", 11);
        goto LABEL_2;
      }
    }
    v35 = v4;
    v32 = qvector_reserve(a1, v29, v30, 1);
    v4 = v35;
    *a1 = v32;
    v29 = v32;
    goto LABEL_35;
  }
LABEL_2:
  if ( !a3 )
    goto LABEL_3;
  v24 = a1[1];
  if ( v24 )
  {
    v27 = v24 + 1;
    v26 = a1[1];
    v25 = *a1;
    --v24;
    if ( a1[2] >= v27 )
      goto LABEL_32;
LABEL_39:
    v36 = v4;
    v33 = qvector_reserve(a1, v25, v27, 1);
    v4 = v36;
    *a1 = v33;
    v25 = v33;
    goto LABEL_32;
  }
  v25 = *a1;
  v26 = 1;
  v27 = 2;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_39;
LABEL_32:
  a1[1] = v27;
  *(_BYTE *)(v25 + v24) = 33;
  *(_BYTE *)(*a1 + v26) = 0;
LABEL_3:
  v34 = v4;
  sub_10400(a1, (__int64)"%s(", off_8C340[*v4]);
  if ( *((_QWORD *)v34 + 2) )
  {
    v7 = 0;
    v8 = *((_QWORD *)v34 + 1);
    v9 = 0;
    while ( 1 )
    {
      switch ( *(_DWORD *)v8 )
      {
        case 0:
          sub_10400(a1, (__int64)"%d", *(unsigned __int8 *)(v8 + 8));
          break;
        case 1:
          sub_10400(a1, (__int64)"%d", *(_DWORD *)(v8 + 8));
          break;
        case 2:
          sub_10400(a1, (__int64)"%x", *(_DWORD *)(v8 + 8));
          break;
        case 3:
        case 4:
          sub_10400(a1, (__int64)"%llx", *(_QWORD *)(v8 + 8));
          break;
        case 5:
          sub_10400(a1, (__int64)"%a", a4);
          break;
        case 6:
          v15 = *(_QWORD *)(v8 + 8);
          v16 = s1;
          if ( *(_QWORD *)(v15 + 8) )
            v16 = *(const char **)v15;
          sub_10400(a1, (__int64)"\"%s\"", v16);
          break;
        case 7:
          if ( *(_BYTE *)(v8 + 32) )
            sub_10400(a1, (__int64)"caught_obj(%a, %llx, %d)", a4, *(_QWORD *)(v8 + 40), *(_QWORD *)(v8 + 16));
          else
            sub_10400(a1, (__int64)"caught_obj(%a)", a4);
          break;
        default:
          break;
      }
      ++v7;
      v9 += 56;
      if ( v7 >= *((_QWORD *)v34 + 2) )
        break;
      v10 = a1[1];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = v10 + 2;
        --v10;
      }
      else
      {
        v12 = 3;
        v11 = 2;
      }
      v13 = *a1;
      v14 = *((_QWORD *)v34 + 1);
      if ( a1[2] < v12 )
      {
        v38 = v11;
        v37 = v12;
        v22 = qvector_reserve(a1, v13, v12, 1);
        v11 = v38;
        v12 = v37;
        *a1 = v22;
        v13 = v22;
      }
      a1[1] = v12;
      v8 = v9 + v14;
      *(_BYTE *)(v13 + v11) = 0;
      *(_WORD *)(*a1 + v10) = 8236;
    }
    v5 = a1;
  }
  v17 = v5[1];
  if ( v17 )
  {
    v20 = v17 + 1;
    v19 = v5[1];
    v18 = *v5;
    --v17;
    if ( v5[2] >= v20 )
      goto LABEL_26;
LABEL_28:
    v23 = qvector_reserve(v5, v18, v20, 1);
    *v5 = v23;
    v18 = v23;
    goto LABEL_26;
  }
  v18 = *v5;
  v19 = 1;
  v20 = 2;
  if ( (unsigned __int64)v5[2] < 2 )
    goto LABEL_28;
LABEL_26:
  v5[1] = v20;
  *(_BYTE *)(v18 + v17) = 41;
  result = *v5;
  *(_BYTE *)(*v5 + v19) = 0;
  return result;
}

