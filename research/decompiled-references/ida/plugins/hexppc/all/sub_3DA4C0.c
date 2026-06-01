unsigned __int64 __fastcall sub_3DA4C0(__int64 a1, __m128i a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  int v11; // edx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  int v19; // ebx
  bool v20; // zf
  __int64 v21; // rdi
  int v22; // eax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  unsigned __int64 v34; // rbp
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+18h] [rbp-D0h]
  _QWORD v40[3]; // [rsp+30h] [rbp-B8h] BYREF
  __m128 v41; // [rsp+48h] [rbp-A0h]
  _QWORD v42[5]; // [rsp+58h] [rbp-90h] BYREF
  char v43; // [rsp+80h] [rbp-68h]
  __int64 v44; // [rsp+88h] [rbp-60h]
  __int64 v45; // [rsp+90h] [rbp-58h]
  __int64 v46; // [rsp+98h] [rbp-50h]
  __int64 v47; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v40[0] = &off_4D5F78;
  v40[1] = 0;
  v40[2] = 0;
  v41 = 0u;
  memset(&v42[1], 0, 32);
  v3 = *(_QWORD *)(a1 + 64);
  v43 = 0;
  v42[0] = off_4D5FA8;
  v44 = 0;
  v45 = 0;
  v46 = a1;
  v47 = -1;
  sub_3D7000(a1 + 88, *(_QWORD *)(v46 + 8), *(unsigned int *)(v46 + 56), v3);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = *(_QWORD *)(a1 + 112);
        }
      }
    }
    *(_QWORD *)(a1 + 120) = 0;
    qfree();
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(int *)(v8 + 64);
  v11 = *(_DWORD *)(v8 + 64);
  if ( v10 != v9 )
  {
    v38 = 0;
    a2.m128i_i64[0] = 0;
    v39 = 0;
    if ( v10 < v9 )
    {
      v34 = v10;
      do
      {
        v35 = (_QWORD *)(*(_QWORD *)(a1 + 112) + 24 * v34);
        if ( *v35 )
        {
          v35[1] = 0;
          qfree();
        }
        ++v34;
      }
      while ( v34 < v9 );
      v8 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v10;
      v11 = *(_DWORD *)(v8 + 64);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 112);
      v13 = *(_QWORD *)(a1 + 128);
      if ( (unsigned __int64)&v38 < v12 || (unsigned __int64)&v38 >= v12 + 24 * v13 )
      {
        if ( v13 < v10 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve();
          v9 = *(_QWORD *)(a1 + 120);
        }
        if ( v9 < v10 )
        {
          a2.m128i_i64[0] = 0;
          v14 = 24 * v9;
          do
          {
            ++v9;
            v15 = v14 + *(_QWORD *)(a1 + 112);
            v14 += 24;
            *(_QWORD *)v15 = 0;
            *(_OWORD *)(v15 + 8) = 0;
          }
          while ( v10 != v9 );
        }
      }
      else
      {
        if ( v13 < v10 )
        {
          *(_QWORD *)(a1 + 112) = qvector_reserve();
          v9 = *(_QWORD *)(a1 + 120);
        }
        if ( v9 < v10 )
        {
          a2.m128i_i64[0] = 0;
          v36 = 24 * v9;
          do
          {
            ++v9;
            v37 = v36 + *(_QWORD *)(a1 + 112);
            v36 += 24;
            *(_QWORD *)v37 = 0;
            *(_OWORD *)(v37 + 8) = 0;
          }
          while ( v10 != v9 );
        }
      }
      v8 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 120) = v10;
      v11 = *(_DWORD *)(v8 + 64);
    }
  }
  v16 = 0;
  if ( v11 )
  {
    do
    {
      LODWORD(v47) = v16;
      if ( (unsigned int)v16 >= *(_DWORD *)(v8 + 64) )
      {
        if ( !under_debugger )
          sub_37EEE0(0xCDEFu, *(double *)a2.m128i_i64);
        BUG();
      }
      v17 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v16);
      v18 = *(_QWORD *)(v17 + 48);
      if ( v18 )
      {
        v19 = 0;
        do
        {
          v21 = *(_QWORD *)(a1 + 112);
          v22 = v19++;
          HIDWORD(v47) = v22;
          v23 = (__int64 *)(24 * v16 + v21);
          v24 = v23[1];
          v25 = *v23;
          if ( v23[2] < (unsigned __int64)(v24 + 1) )
          {
            v25 = qvector_reserve();
            *v23 = v25;
            v24 = v23[1];
          }
          *(_QWORD *)(v25 + 8 * v24) = v18;
          a2 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
          ++v23[1];
          v20 = *(_BYTE *)(v18 + 64) == 0;
          v41 = (__m128)a2;
          if ( v20 && *(_DWORD *)(v18 + 68) != -1 )
            sub_3D9E80((__int64)v40, v18 + 64, 1);
          sub_11AEC0((_BYTE *)v18, (__int64)v42);
          if ( *(_QWORD *)(v17 + 56) == v18 )
            break;
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( v18 );
        v8 = *(_QWORD *)(a1 + 64);
      }
      ++v16;
    }
    while ( (unsigned int)v16 < *(_DWORD *)(v8 + 64) );
  }
  v26 = *(unsigned __int64 **)(a1 + 160);
  if ( v26 )
  {
    v27 = *v26;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      *v26 = *v26 & 3 | (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 160) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160));
      **(_QWORD **)(a1 + 160) &= ~1uLL;
      **(_QWORD **)(a1 + 160) |= 2uLL;
      goto LABEL_33;
    }
    v30 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
    v31 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v31 & 2) != 0 )
    {
LABEL_43:
      *v26 = v27 & 3 | (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 160) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 160));
      **(_QWORD **)(a1 + 160) &= ~1uLL;
      **(_QWORD **)(a1 + 160) |= 2uLL;
      *(_QWORD *)(a1 + 168) = 0;
LABEL_33:
      if ( *(_QWORD *)(a1 + 160) )
        qfree();
      goto LABEL_35;
    }
    v32 = (__int64 *)v30[1];
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = (__int64 *)v30[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_58;
    }
    else
    {
      sub_3CB580(v32);
      v33 = (__int64 *)v30[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_39;
    }
    sub_3CB580(v33);
LABEL_39:
    v31 = *v30;
    if ( (*v30 & 2) != 0 )
    {
LABEL_40:
      if ( v27 > 3 )
        qfree();
      v26 = *(unsigned __int64 **)(a1 + 160);
      v27 = *v26;
      goto LABEL_43;
    }
LABEL_58:
    *v30 = v31 | 2;
    goto LABEL_40;
  }
LABEL_35:
  v28 = v44;
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)(a1 + 160) = v28;
  *(_QWORD *)(a1 + 168) = v45;
  return v48 - __readfsqword(0x28u);
}

