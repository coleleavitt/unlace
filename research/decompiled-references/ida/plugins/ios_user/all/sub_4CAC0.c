__int64 __fastcall sub_4CAC0(int a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 *a5, _QWORD *a6, unsigned __int64 a7)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // r10
  size_t v16; // r11
  unsigned __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // r9
  __int64 v28; // rax
  const char *v29; // rdx
  unsigned __int64 i; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  void *v35; // rdi
  const void *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-88h]
  _QWORD *v43; // [rsp+0h] [rbp-88h]
  _QWORD *v44; // [rsp+0h] [rbp-88h]
  __int64 v47; // [rsp+18h] [rbp-70h]
  unsigned __int64 v48; // [rsp+18h] [rbp-70h]
  unsigned __int64 v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-68h]
  size_t v51; // [rsp+20h] [rbp-68h]
  unsigned __int64 v52; // [rsp+28h] [rbp-60h]
  const void *v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  __int128 v55; // [rsp+38h] [rbp-50h]
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v10 = a4[1];
  v56 = __readfsqword(0x28u);
  v54 = 0;
  v11 = a7 + 1;
  if ( a7 + 1 >= v10 )
  {
    if ( v10 >= v11 )
      goto LABEL_3;
    v32 = *a4;
    v33 = a4[2];
    if ( (unsigned __int64)&v54 < *a4 || (unsigned __int64)&v54 >= v32 + 8 * v33 )
    {
      if ( v33 >= v11 || (v44 = a6, v41 = qvector_reserve(), a6 = v44, *a4 = v41, v32 = v41, v10 = a4[1], v10 < v11) )
      {
        while ( 1 )
        {
          v34 = v10;
          *(_QWORD *)(v32 + 8 * v10++) = 0;
          if ( a7 == v34 )
            break;
          v32 = *a4;
        }
      }
    }
    else if ( v33 >= v11 || (v43 = a6, v38 = qvector_reserve(), a6 = v43, *a4 = v38, v32 = v38, v10 = a4[1], v10 < v11) )
    {
      while ( 1 )
      {
        v39 = v10;
        *(_QWORD *)(v32 + 8 * v10++) = 0;
        if ( a7 == v39 )
          break;
        v32 = *a4;
      }
    }
  }
  a4[1] = v11;
LABEL_3:
  v12 = a6[1];
  v13 = *a6;
  v54 = 0;
  v55 = 0;
  v12 *= 32;
  v42 = v13 + v12;
  if ( v13 == v13 + v12 )
    return *a4;
  do
  {
    if ( *(_QWORD *)(v13 + 8) > 1u )
    {
      v23 = a5[1];
      v24 = *a5;
      if ( a5[2] < (unsigned __int64)(v23 + 1) )
      {
        v25 = qvector_reserve();
        *a5 = v25;
        v23 = a5[1];
        v24 = v25;
      }
      v14 = v24 + 24 * v23;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      ++a5[1];
      if ( v14 != v13 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 && (v16 = v15 - 1, v15 != 1) )
        {
          v35 = *(void **)v14;
          v36 = *(const void **)v13;
          if ( *(_QWORD *)(v14 + 16) < v15 )
          {
            v53 = *(const void **)v13;
            v51 = v15 - 1;
            v49 = *(_QWORD *)(v13 + 8);
            v37 = qvector_reserve();
            *(_QWORD *)v14 = v37;
            v36 = v53;
            v35 = (void *)v37;
            v16 = v51;
            v15 = v49;
          }
          *(_QWORD *)(v14 + 8) = v15;
          v48 = v15;
          memmove(v35, v36, v16);
          *(_BYTE *)(*(_QWORD *)v14 + v48 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v14 + 8) = 0;
        }
      }
      qstrupr();
      sub_4C920(a1, a2, v14);
      v17 = *(int *)(v13 + 28);
      v18 = *(int *)(v13 + 24);
      v19 = v54;
      v20 = a5[1] - 1;
      v21 = v55;
      if ( v17 > a7 )
        v17 = a7;
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
      {
        v52 = v17;
        v50 = *(int *)(v13 + 24);
        v47 = a5[1] - 1;
        v54 = qvector_reserve();
        v19 = v54;
        v17 = v52;
        v21 = v55;
        v18 = v50;
        v20 = v47;
      }
      v22 = (__int64 *)(v19 + 24 * v21);
      *v22 = v20;
      v22[1] = v18;
      v22[2] = v17;
      *(_QWORD *)&v55 = v55 + 1;
    }
    v13 += 32;
  }
  while ( v42 != v13 );
  v26 = (_QWORD *)v54;
  v27 = (_QWORD *)(v54 + 24 * v55);
  if ( v27 != (_QWORD *)v54 )
  {
    do
    {
      v28 = *a5 + 24LL * *v26;
      v29 = s;
      if ( *(_QWORD *)(v28 + 8) )
        v29 = *(const char **)v28;
      for ( i = v26[1]; v26[2] >= i; ++i )
      {
        *a3 |= 1LL << i;
        *(_QWORD *)(*a4 + 8 * i) = v29;
      }
      v26 += 3;
    }
    while ( v27 != v26 );
    v26 = (_QWORD *)v54;
  }
  v40 = *a4;
  if ( v26 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  return v40;
}

