__int64 __fastcall sub_228FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r14d
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  const __m128i *v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r12
  int v18; // ecx
  __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // r13
  __m128i *v22; // rax
  int v23; // esi
  const __m128i *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  signed int i; // ebx
  const __m128i *v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  signed int j; // ebx
  const __m128i *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-98h] BYREF
  __int64 v38; // [rsp+18h] [rbp-90h]
  const __m128i *v39; // [rsp+20h] [rbp-88h]
  __int128 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+38h] [rbp-70h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h] BYREF
  __int64 v44; // [rsp+50h] [rbp-58h]
  char v45; // [rsp+58h] [rbp-50h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 1 )
    return 1;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 == -1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned __int8 *)(v3 + 320);
  if ( (_BYTE)v4 )
    return v4;
  if ( *(_QWORD *)(v3 + 144) > v2 || *(_BYTE *)(*(_QWORD *)(a1 + 48) + 148LL) != 2 )
    return 1;
  v6 = *(int *)(v3 + 64);
  v39 = nullptr;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v40 = 0;
  if ( v6 )
  {
    v7 = qvector_reserve();
    v8 = v7;
    v9 = *((_QWORD *)&v40 + 1);
    *((_QWORD *)&v40 + 1) = 0;
    v10 = v39;
    v11 = v40 - 1;
    if ( (__int64)v40 - 1 >= 0 )
    {
      do
      {
        v12 = _mm_loadu_si128(v10);
        v8 += 16;
        ++v10;
        *(__m128i *)(v8 - 16) = v12;
      }
      while ( v11-- != 0 );
    }
    qfree();
    v14 = v40;
    v39 = (const __m128i *)v7;
    *((_QWORD *)&v40 + 1) = v9;
    if ( (unsigned __int64)v40 < v6 )
    {
      *(_OWORD *)(v7 + 16 * v40) = 0;
      v15 = v14 + 1;
      if ( v14 + 1 < v6 )
      {
        do
        {
          v16 = v15++;
          v39[v16] = 0;
        }
        while ( v6 != v15 );
      }
    }
    *(_QWORD *)&v40 = v6;
  }
  v17 = *(_QWORD **)(a1 + 112);
  v18 = *(_DWORD *)(a1 + 200);
  while ( *(_QWORD **)(a1 + 120) != v17 )
  {
    if ( (v17[10] & 1) != 0 )
    {
      v19 = v17[11];
      v20 = v18 & 0x1000;
      v21 = v19 + 40LL * v17[12];
      if ( v19 != v21 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v19 + 24) + 4LL) != -1 || (v45 = 1, !v20) )
          {
            v23 = *(_DWORD *)(v19 + 32);
            if ( *(_BYTE *)(v19 + 36) )
            {
              sub_60750(&v43, v23);
              v22 = (__m128i *)&v39[*(int *)(v19 + 32)];
              if ( (unsigned __int64)(v22->m128i_i64[0] - 1) >= *(_QWORD *)v19 )
                v22->m128i_i64[0] = *(_QWORD *)v19;
            }
            else
            {
              sub_60750(&v41, v23);
              v24 = &v39[*(int *)(v19 + 32)];
              if ( (unsigned __int64)(v24->m128i_i64[1] - 1) >= *(_QWORD *)v19 )
                v24->m128i_i64[1] = *(_QWORD *)v19;
            }
          }
          v19 += 40;
        }
        while ( v21 != v19 );
        v18 = *(_DWORD *)(a1 + 200);
      }
    }
    if ( (*v17 & 2) == 0 )
    {
      v25 = (_QWORD *)v17[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
        v26 = (_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFFCLL);
        v27 = *v26;
        if ( (*v26 & 2) == 0 )
        {
          while ( (_QWORD *)v26[2] == v17 )
          {
            v17 = v26;
            v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
            v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v27 & 2) != 0 )
            {
              v17 = (_QWORD *)v28;
              goto LABEL_32;
            }
            v26 = (_QWORD *)v28;
          }
        }
        v17 = v26;
      }
      else
      {
        do
        {
          v17 = v25;
          v25 = (_QWORD *)v25[1];
        }
        while ( (*(_BYTE *)v25 & 2) == 0 );
      }
    }
LABEL_32:
    ;
  }
  if ( (v18 & 0x1000) != 0 )
    goto LABEL_34;
  if ( (unsigned __int8)sub_60E40(&v41) )
  {
    if ( (*(_BYTE *)(a1 + 201) & 0x10) == 0 )
      goto LABEL_37;
LABEL_34:
    if ( (unsigned __int8)sub_60E40(&v43) )
    {
      if ( v45 )
        v4 = sub_60E40(&v41);
      goto LABEL_37;
    }
    if ( (unsigned __int8)sub_60E40(&v41) )
      goto LABEL_66;
    for ( i = sub_60F20(&v43, 0); ; i = sub_60F20(&v43, i + 1) )
    {
      if ( i == (_DWORD)v44 )
        goto LABEL_37;
      v30 = &v39[i];
      if ( !v30->m128i_i64[0] )
        break;
      if ( v30->m128i_i64[0] >= (unsigned __int64)v30->m128i_i64[1] )
      {
        v31 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
        v37 = 0;
        v38 = 0;
        v32 = v31 - 1;
        if ( v32 != i && !(unsigned __int8)sub_228D80(a1, &v37, i, v32, &v41, 1) )
          goto LABEL_65;
        qfree();
      }
    }
    if ( !under_debugger )
      sub_37EEE0(52915);
LABEL_76:
    BUG();
  }
  if ( (unsigned __int8)sub_60E40(&v43) )
    goto LABEL_66;
  for ( j = sub_60F20(&v41, 0); ; j = sub_60F20(&v41, j + 1) )
  {
    if ( j == (_DWORD)v42 )
      goto LABEL_37;
    v34 = &v39[j];
    v35 = v34->m128i_u64[1];
    if ( !v35 )
    {
      if ( !under_debugger )
        sub_37EEE0(52854);
      goto LABEL_76;
    }
    v36 = v34->m128i_i64[0];
    if ( !v36 || v36 >= v35 )
      break;
LABEL_68:
    ;
  }
  v37 = 0;
  v38 = 0;
  if ( j && !(unsigned __int8)sub_228D80(a1, &v37, 0, j, &v43, 0) )
  {
    qfree();
    goto LABEL_68;
  }
LABEL_65:
  qfree();
LABEL_66:
  v4 = 1;
LABEL_37:
  qfree();
  qfree();
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  return v4;
}

