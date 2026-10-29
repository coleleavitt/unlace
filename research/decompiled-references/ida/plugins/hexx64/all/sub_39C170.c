__int64 __fastcall sub_39C170(__int64 *a1, __int64 a2, double a3)
{
  __m128i *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // r12
  __int64 *v12; // rcx
  __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 **v18; // rdx
  unsigned __int64 *v19; // r14
  __m128i *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdx
  _QWORD *v25; // r15
  __int64 *v26; // rcx
  __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v32[9]; // [rsp+10h] [rbp-48h] BYREF

  v32[1] = (__int64 *)__readfsqword(0x28u);
  a1[17] = a2;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 'F':
    case 'G':
      return 0;
    case 'H':
    case 'I':
    case 'P':
    case 'T':
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24), 0, a3);
      goto LABEL_3;
    case 'J':
      v15 = a1 + 8;
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24) + 72LL, 0, a3);
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24) + 136LL, 0, a3);
      goto LABEL_14;
    case 'K':
    case 'L':
      v15 = a1 + 8;
LABEL_14:
      sub_255A80(v15, *(_QWORD *)(a2 + 24), 0, a3);
      v31 = *(_QWORD *)a2;
      if ( v31 != -1 )
        goto LABEL_5;
      return 0;
    case 'R':
      v18 = *(unsigned __int64 ***)(a2 + 24);
      v19 = *v18;
      if ( !(8LL * (_QWORD)v18[1]) )
        goto LABEL_3;
      break;
    default:
      goto LABEL_3;
  }
  do
  {
    v31 = *v19;
    if ( v31 != -1 )
    {
      v20 = (__m128i *)a1[16];
      v32[0] = (__int64 *)&v31;
      v21 = sub_39BD80(v20, &v31, v32);
      v22 = a1[17];
      v23 = *(_QWORD *)(v21 + 32);
      v24 = *(_QWORD *)(v21 + 40);
      v25 = (_QWORD *)(v21 + 24);
      v26 = (__int64 *)(v23 + 8 * v24);
      if ( (__int64 *)v23 == v26 )
        goto LABEL_27;
      v27 = *(__int64 **)(v21 + 32);
      while ( v22 != *v27 )
      {
        if ( v26 == ++v27 )
          goto LABEL_27;
      }
      if ( v26 == v27 )
      {
LABEL_27:
        v28 = v24 + 1;
        if ( v25[3] < v28 )
        {
          v29 = qvector_reserve((__int64)(v25 + 1), v23, v28, 8);
          v30 = v25[2];
          v25[1] = v29;
          v26 = (__int64 *)(v29 + 8 * v30);
        }
        *v26 = v22;
        ++v25[2];
      }
      v18 = *(unsigned __int64 ***)(a2 + 24);
    }
    ++v19;
  }
  while ( v19 != &(*v18)[(_QWORD)v18[1]] );
LABEL_3:
  v31 = *(_QWORD *)a2;
  if ( v31 != -1 )
  {
LABEL_5:
    v6 = (__m128i *)a1[16];
    v32[0] = (__int64 *)&v31;
    v7 = sub_39BD80(v6, &v31, v32);
    v8 = a1[17];
    v9 = *(_QWORD *)(v7 + 32);
    v10 = *(_QWORD *)(v7 + 40);
    v11 = (_QWORD *)(v7 + 24);
    v12 = (__int64 *)(v9 + 8 * v10);
    if ( (__int64 *)v9 == v12 )
      goto LABEL_10;
    v13 = *(__int64 **)(v7 + 32);
    while ( v8 != *v13 )
    {
      if ( v12 == ++v13 )
        goto LABEL_10;
    }
    if ( v13 == v12 )
    {
LABEL_10:
      v14 = v10 + 1;
      if ( v11[3] < v14 )
      {
        v16 = qvector_reserve((__int64)(v11 + 1), v9, v14, 8);
        v17 = v11[2];
        v11[1] = v16;
        v12 = (__int64 *)(v16 + 8 * v17);
      }
      *v12 = v8;
      ++v11[2];
    }
  }
  return 0;
}

