__int64 __fastcall sub_BE390(_QWORD **a1)
{
  _QWORD *v2; // rdi
  int v3; // ebp
  __int64 v4; // r12
  unsigned int *v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rdi
  _QWORD *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // r12
  _QWORD *v13; // rbp
  _QWORD *v14; // rdx
  _QWORD *v15; // r12
  _QWORD *i; // rbp
  _QWORD *v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // r13
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 *v29; // r12
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  __int64 *v33; // r12
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-30h]
  unsigned __int64 v38; // [rsp+8h] [rbp-30h]
  unsigned __int64 v39; // [rsp+8h] [rbp-30h]
  unsigned __int64 v40; // [rsp+8h] [rbp-30h]
  unsigned __int64 v41; // [rsp+8h] [rbp-30h]
  unsigned __int64 v42; // [rsp+8h] [rbp-30h]

  if ( a1[27] )
  {
    sub_B6C60(a1[27]);
    j__qfree();
  }
  v2 = a1[41];
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 50) - 1;
    if ( v3 >= 0 )
    {
      v4 = 2LL * (unsigned int)v3;
      while ( 1 )
      {
        --v3;
        v5 = (unsigned int *)&a1[24][v4];
        v4 -= 2;
        sub_133AF0(v2, *v5, *((_QWORD *)v5 + 1));
        if ( v3 == -1 )
          break;
        v2 = a1[41];
      }
    }
  }
  v6 = a1[49];
  *((_OWORD *)a1 + 20) = 0;
  if ( v6 )
  {
    a1[50] = nullptr;
    qfree();
  }
  if ( a1[46] )
  {
    a1[47] = nullptr;
    qfree();
  }
  v7 = a1[44];
  if ( v7 )
  {
    v8 = *v7;
    if ( !a1[45] )
    {
      *v7 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
      *(__m128i *)(a1[44] + 1) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[44],
                                   (__m128i)(unsigned __int64)a1[44]);
      *a1[44] &= ~1uLL;
      *a1[44] |= 2uLL;
      goto LABEL_15;
    }
    v20 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_67:
      *v7 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL | v8 & 3;
      *(__m128i *)(a1[44] + 1) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[44],
                                   (__m128i)(unsigned __int64)a1[44]);
      *a1[44] &= ~1uLL;
      *a1[44] |= 2uLL;
      a1[45] = nullptr;
LABEL_15:
      if ( a1[44] )
        qfree();
      goto LABEL_17;
    }
    v21 = *(_QWORD *)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v24 = *(_QWORD *)(v20 + 16);
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_63;
      goto LABEL_56;
    }
    v22 = *(_QWORD **)(v21 + 8);
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
LABEL_94:
        sub_1188E0(v21 + 96);
        sub_1188E0(v21 + 80);
        sub_1188E0(v21 + 64);
        *(_QWORD *)v21 |= 2uLL;
LABEL_53:
        if ( v21 )
          qfree();
        v24 = *(_QWORD *)(v20 + 16);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
LABEL_62:
          if ( (*(_BYTE *)v20 & 2) != 0 )
          {
LABEL_64:
            if ( v8 > 3 )
              qfree();
            v7 = a1[44];
            v8 = *v7;
            goto LABEL_67;
          }
LABEL_63:
          sub_1188E0(v20 + 96);
          sub_1188E0(v20 + 80);
          sub_1188E0(v20 + 64);
          *(_QWORD *)v20 |= 2uLL;
          goto LABEL_64;
        }
LABEL_56:
        v25 = *(_QWORD **)(v24 + 8);
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
          v26 = *(_QWORD **)(v24 + 16);
          if ( (*(_BYTE *)v26 & 2) != 0 )
          {
LABEL_101:
            sub_1188E0(v24 + 96);
            sub_1188E0(v24 + 80);
            sub_1188E0(v24 + 64);
            *(_QWORD *)v24 |= 2uLL;
LABEL_60:
            if ( v24 )
              qfree();
            goto LABEL_62;
          }
        }
        else
        {
          sub_B5260(v25);
          v26 = *(_QWORD **)(v24 + 16);
          if ( (*(_BYTE *)v26 & 2) != 0 )
            goto LABEL_59;
        }
        sub_B5260(v26);
LABEL_59:
        if ( (*(_BYTE *)v24 & 2) != 0 )
          goto LABEL_60;
        goto LABEL_101;
      }
    }
    else
    {
      sub_B5260(v22);
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_52;
    }
    sub_B5260(v23);
LABEL_52:
    if ( (*(_BYTE *)v21 & 2) != 0 )
      goto LABEL_53;
    goto LABEL_94;
  }
LABEL_17:
  qfree();
  if ( a1[37] )
  {
    a1[38] = nullptr;
    qfree();
  }
  v9 = a1[34];
  if ( v9 )
  {
    v10 = a1[35];
    if ( v10 )
    {
      v11 = 0;
      v12 = nullptr;
      do
      {
        v13 = &v9[v11];
        v12 = (_QWORD *)((char *)v12 + 1);
        v11 += 11;
        sub_1188E0(v13 + 9);
        sub_1188E0(v13 + 7);
        sub_1188E0(v13 + 5);
        v9 = a1[34];
      }
      while ( v10 != v12 );
    }
    a1[35] = nullptr;
    qfree();
  }
  if ( a1[31] )
  {
    a1[32] = nullptr;
    qfree();
  }
  qfree();
  if ( a1[24] )
  {
    a1[25] = nullptr;
    qfree();
  }
  sub_BE320((__int64)(a1 + 14));
  if ( a1[11] )
  {
    a1[12] = nullptr;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = nullptr;
    qfree();
  }
  v14 = a1[5];
  if ( v14 )
  {
    v15 = a1[6];
    if ( v15 )
    {
      for ( i = nullptr; i != v15; i = (_QWORD *)((char *)i + 1) )
      {
        v17 = &v14[3 * (_QWORD)i];
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
          v14 = a1[5];
        }
      }
    }
    a1[6] = nullptr;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = nullptr;
    qfree();
  }
  result = (__int64)*a1;
  if ( *a1 )
  {
    v19 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      result = (__int64)*a1;
      **a1 |= 2uLL;
      goto LABEL_44;
    }
    v27 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    v28 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v28 & 2) != 0 )
    {
LABEL_88:
      *(_QWORD *)result = v19 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      **a1 &= ~1uLL;
      result = (__int64)*a1;
      **a1 |= 2uLL;
      a1[1] = nullptr;
LABEL_44:
      if ( *a1 )
        return qfree();
      return result;
    }
    v29 = (__int64 *)v27[1];
    v30 = *v29;
    if ( (*v29 & 2) != 0 )
    {
      v33 = (__int64 *)v27[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_84;
      goto LABEL_77;
    }
    v31 = (__int64 *)v29[1];
    if ( (*(_BYTE *)v31 & 2) != 0 )
    {
      v32 = (__int64 *)v29[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
LABEL_96:
        *v29 = v30 | 2;
LABEL_74:
        if ( v29 )
        {
          v39 = v19;
          qfree();
          v19 = v39;
        }
        v33 = (__int64 *)v27[2];
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
LABEL_83:
          v28 = *v27;
          if ( (*v27 & 2) != 0 )
          {
LABEL_85:
            if ( v19 > 3 )
              qfree();
            result = (__int64)*a1;
            v19 = **a1;
            goto LABEL_88;
          }
LABEL_84:
          *v27 = v28 | 2;
          goto LABEL_85;
        }
LABEL_77:
        v34 = (__int64 *)v33[1];
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v35 = (__int64 *)v33[2];
          if ( (*(_BYTE *)v35 & 2) != 0 )
          {
            v36 = *v33;
LABEL_99:
            *v33 = v36 | 2;
LABEL_81:
            if ( v33 )
            {
              v42 = v19;
              qfree();
              v19 = v42;
            }
            goto LABEL_83;
          }
        }
        else
        {
          v40 = v19;
          sub_B3E90(v34);
          v35 = (__int64 *)v33[2];
          v19 = v40;
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_80;
        }
        v41 = v19;
        sub_B3E90(v35);
        v19 = v41;
LABEL_80:
        v36 = *v33;
        if ( (*v33 & 2) != 0 )
          goto LABEL_81;
        goto LABEL_99;
      }
    }
    else
    {
      v37 = v19;
      sub_B3E90(v31);
      v32 = (__int64 *)v29[2];
      v19 = v37;
      if ( (*(_BYTE *)v32 & 2) != 0 )
        goto LABEL_73;
    }
    v38 = v19;
    sub_B3E90(v32);
    v19 = v38;
LABEL_73:
    v30 = *v29;
    if ( (*v29 & 2) != 0 )
      goto LABEL_74;
    goto LABEL_96;
  }
  return result;
}

