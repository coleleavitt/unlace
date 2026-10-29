__int64 __fastcall sub_128A40(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r12
  char v15; // al
  unsigned int v16; // r14d
  _QWORD *v17; // rdx
  unsigned __int8 *v18; // rbp
  unsigned __int8 *i; // r12
  unsigned __int8 *v21; // rbp
  unsigned __int8 *v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  _QWORD *v26; // r15
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // r13
  char v32; // al
  unsigned __int64 *v33; // rdi
  char v34; // al
  __int64 v35; // [rsp+0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v37; // [rsp+10h] [rbp-58h] BYREF
  __int128 v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 56);
  v10 = *a2;
  v39 = __readfsqword(0x28u);
  if ( v9 == -1 )
  {
LABEL_4:
    if ( (v10 & 0xFB) == 1 || (unsigned __int8)v10 <= 0xFu && (v12 = 33344, _bittest64(&v12, v10)) )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v38 = 0;
      v35 = 0;
      v36 = 0;
      v37 = nullptr;
      sub_127FE0(v13, &v35, (__int64)a2, 0, a5, a6, 0.0, a8);
      v14 = *(_QWORD **)(a1 + 64);
      if ( (unsigned __int8)sub_64780(&v35, v14) || (v16 = 0, (unsigned __int8)sub_318470(&v37, (__int64)(v14 + 2))) )
      {
        v15 = *(_BYTE *)(a1 + 72);
        if ( a4 == v15 || !*(_QWORD *)(a1 + 48) )
          *(_QWORD *)(a1 + 48) = a2;
        v16 = a4 == v15;
      }
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree((__int64)v37);
      }
      qfree(v35);
      return v16;
    }
    return 0;
  }
  if ( (_BYTE)v10 != 8 )
  {
    if ( v9 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) )
      return 0;
    goto LABEL_4;
  }
  v17 = *((_QWORD **)a2 + 1);
  v21 = (unsigned __int8 *)v17[3];
  v22 = &v21[80 * v17[4]];
  if ( v22 == v21 )
  {
LABEL_15:
    v18 = (unsigned __int8 *)v17[6];
    for ( i = &v18[16 * v17[7]]; i != v18; v18 += 16 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == *(_QWORD *)(a1 + 56) )
      {
        v28 = *v18;
        if ( (_BYTE)v28 == 4 )
        {
          v16 = sub_11E9B0((__int64)v18, a1, 0, 1, a7);
          if ( v16 )
            return v16;
        }
        else if ( (v28 & 0xFB) == 1 || (unsigned __int8)v28 <= 0xFu && (v29 = 33344, _bittest64(&v29, v28)) )
        {
          v30 = *(_QWORD *)(a1 + 16);
          v38 = 0;
          v35 = 0;
          v36 = 0;
          v37 = nullptr;
          sub_127FE0(v30, &v35, (__int64)v18, 0, a5, a6, a7, a8);
          v31 = *(_QWORD **)(a1 + 64);
          v32 = sub_64780(&v35, v31);
          v33 = v37;
          if ( v32 || (v34 = sub_318470(&v37, (__int64)(v31 + 2)), v33 = v37, v34) )
          {
            if ( *(_BYTE *)(a1 + 72) )
            {
              *(_QWORD *)(a1 + 48) = v18;
              if ( v33 )
              {
                *(_QWORD *)&v38 = 0;
                qfree((__int64)v33);
              }
              goto LABEL_58;
            }
            if ( !*(_QWORD *)(a1 + 48) )
              *(_QWORD *)(a1 + 48) = v18;
          }
          if ( v33 )
          {
            *(_QWORD *)&v38 = 0;
            qfree((__int64)v33);
          }
          qfree(v35);
        }
      }
    }
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)v21 + 2) != v9 )
      goto LABEL_21;
    v23 = *v21;
    if ( (_BYTE)v23 != 4 )
      break;
    v16 = sub_11E9B0((__int64)v21, a1, 0, 0, a7);
    if ( v16 )
      return v16;
LABEL_21:
    v21 += 80;
    if ( v22 == v21 )
    {
      v17 = *((_QWORD **)a2 + 1);
      goto LABEL_15;
    }
    v9 = *(_QWORD *)(a1 + 56);
  }
  if ( (v23 & 0xFB) != 1 )
  {
    if ( (unsigned __int8)v23 > 0xFu )
      goto LABEL_21;
    v24 = 33344;
    if ( !_bittest64(&v24, v23) )
      goto LABEL_21;
  }
  v25 = *(_QWORD *)(a1 + 16);
  a8 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v37 = nullptr;
  sub_127FE0(v25, &v35, (__int64)v21, 0, a5, a6, a7, (__m128)0LL);
  v26 = *(_QWORD **)(a1 + 64);
  if ( !(unsigned __int8)sub_64780(&v35, v26) && !(unsigned __int8)sub_318470(&v37, (__int64)(v26 + 2)) )
  {
    v27 = v37;
    if ( !v37 )
      goto LABEL_33;
LABEL_32:
    *(_QWORD *)&v38 = 0;
    qfree((__int64)v27);
    goto LABEL_33;
  }
  v27 = v37;
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( !*(_QWORD *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 48) = v21;
      if ( !v27 )
        goto LABEL_33;
      goto LABEL_32;
    }
    if ( v37 )
      goto LABEL_32;
LABEL_33:
    qfree(v35);
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 48) = v21;
  if ( v27 )
  {
    *(_QWORD *)&v38 = 0;
    qfree((__int64)v27);
  }
LABEL_58:
  qfree(v35);
  return 1;
}

