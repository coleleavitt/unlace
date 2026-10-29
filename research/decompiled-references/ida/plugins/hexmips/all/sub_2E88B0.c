__int64 __fastcall sub_2E88B0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // r10
  __int64 v12; // rbx
  unsigned __int64 v13; // r11
  size_t v14; // r8
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r12
  _BYTE *v18; // rdi
  _BYTE *v19; // rdi
  char v20; // bp
  __int64 *v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  _QWORD *v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rbp
  int v36; // ecx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdi
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  const void *v46; // r10
  void *v47; // rax
  unsigned __int64 v48; // [rsp+0h] [rbp-160h]
  unsigned __int8 v49; // [rsp+0h] [rbp-160h]
  unsigned __int64 *v51; // [rsp+10h] [rbp-150h]
  int v52; // [rsp+1Ch] [rbp-144h]
  unsigned __int64 **v53; // [rsp+20h] [rbp-140h]
  __int64 v54; // [rsp+28h] [rbp-138h]
  unsigned __int64 v55; // [rsp+28h] [rbp-138h]
  unsigned __int64 v56; // [rsp+28h] [rbp-138h]
  size_t v57; // [rsp+30h] [rbp-130h]
  _QWORD *v58; // [rsp+38h] [rbp-128h]
  const void *v59; // [rsp+38h] [rbp-128h]
  __int64 *v60; // [rsp+40h] [rbp-120h]
  _QWORD v61[2]; // [rsp+58h] [rbp-108h] BYREF
  char v62; // [rsp+68h] [rbp-F8h]
  __int128 v63; // [rsp+70h] [rbp-F0h]
  __m128i v64; // [rsp+88h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+98h] [rbp-C8h]
  _QWORD v66[2]; // [rsp+A8h] [rbp-B8h] BYREF
  _BYTE v67[72]; // [rsp+B8h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+100h] [rbp-60h] BYREF
  __int128 v69; // [rsp+108h] [rbp-58h]
  __int64 v70; // [rsp+118h] [rbp-48h]
  unsigned __int64 v71; // [rsp+120h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v1 = a1[22];
  v66[0] = a1[1];
  v2 = (__int64 *)v67;
  v66[1] = v1;
  v3 = (__int64 *)v67;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v68 );
  v68 = 0;
  v70 = 0;
  v69 = 0;
  if ( !v1 )
  {
    v20 = 0;
    goto LABEL_40;
  }
  v48 = 0;
  v52 = 0;
  do
  {
    v4 = a1[v48 + 19];
    if ( !v4 )
      goto LABEL_33;
    switch_dbctx();
    v5 = *(_QWORD *)(v4 + 80);
    v6 = *(_QWORD *)(v4 + 64);
    v62 = 108;
    v61[1] = v5;
    v61[0] = &off_4C1A88;
    v63 = 0;
    v7 = sub_2B1B70(v6, v61);
    v53 = (unsigned __int64 **)v7;
    if ( !v7 )
      goto LABEL_33;
    v51 = *(unsigned __int64 **)v7;
    if ( !*(_QWORD *)v7 )
      goto LABEL_32;
    if ( !*(_QWORD *)(v7 + 8) )
    {
      v16 = **(_QWORD **)v7;
      goto LABEL_68;
    }
    v8 = (unsigned __int64 *)v51[1];
    if ( v51 == v8 )
    {
      v16 = *v51;
LABEL_21:
      v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_29;
      v18 = *(_BYTE **)(v17 + 8);
      if ( (*v18 & 2) != 0 )
      {
        v19 = *(_BYTE **)(v17 + 16);
        if ( (*v19 & 2) != 0 )
          goto LABEL_71;
      }
      else
      {
        sub_2AC810((__int64)v18);
        v19 = *(_BYTE **)(v17 + 16);
        if ( (*v19 & 2) != 0 )
          goto LABEL_25;
      }
      sub_2AC810((__int64)v19);
LABEL_25:
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
LABEL_26:
        if ( v16 > 3 )
          qfree();
        v51 = *v53;
LABEL_29:
        *v51 = (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFFCLL | *v51 & 3;
        *(__m128i *)(*v53 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v53, (__m128i)(unsigned __int64)*v53);
        **v53 &= ~1uLL;
        **v53 |= 2u;
        v53[1] = nullptr;
        goto LABEL_30;
      }
LABEL_71:
      if ( *(_QWORD *)(v17 + 32) )
      {
        *(_QWORD *)(v17 + 40) = 0;
        qfree();
      }
      *(_QWORD *)v17 |= 2uLL;
      goto LABEL_26;
    }
    do
    {
      while ( 1 )
      {
        v9 = v3[1];
        v10 = v3[2];
        v11 = v8 + 3;
        if ( v10 < v9 + 1 )
        {
          v28 = qvector_reserve();
          v29 = v3[1];
          v30 = v3[2];
          v54 = v28;
          v3[2] = v10;
          v31 = v8 + 3;
          v32 = v29 - 1;
          v33 = *v3;
          if ( v32 >= 0 )
          {
            v60 = v3;
            v34 = v32;
            v35 = v28;
            do
            {
              v36 = *(_DWORD *)(v33 + 8);
              *(_QWORD *)v35 = off_4C1AB0;
              *(_DWORD *)(v35 + 8) = v36;
              v37 = *(_QWORD *)(v33 + 16);
              v38 = _mm_loadu_si128((const __m128i *)(v33 + 24));
              *(_QWORD *)(v33 + 16) = 0;
              *(_QWORD *)(v35 + 16) = v37;
              *(__m128i *)(v35 + 24) = v38;
              v39 = *(_QWORD *)(v33 + 40);
              *(_QWORD *)(v33 + 32) = 0;
              *(_QWORD *)(v35 + 40) = v39;
              v40 = *(_QWORD *)(v33 + 48);
              *(_QWORD *)v35 = off_4C3378;
              *(_QWORD *)(v35 + 48) = v40;
              v41 = *(_QWORD *)(v33 + 16);
              *(_QWORD *)v33 = off_4C1AB0;
              if ( v41 )
              {
                *(_QWORD *)(v33 + 24) = 0;
                qfree();
              }
              v33 += 56;
              v35 += 56;
            }
            while ( v34-- != 0 );
            v3 = v60;
            v31 = v8 + 3;
          }
          v58 = v31;
          qfree();
          v11 = v58;
          *v3 = v54;
          v3[2] = v30;
          v9 = v3[1];
        }
        v12 = *v3 + 56 * v9;
        *(_DWORD *)(v12 + 8) = -1;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 40) = 0xFFFFFFFEFFFFFFFFLL;
        *(_QWORD *)v12 = off_4C3378;
        *(_QWORD *)(v12 + 48) = -1;
        *(_OWORD *)(v12 + 24) = 0;
        ++v3[1];
        *(_DWORD *)(v12 + 8) = *(_DWORD *)v11;
        if ( (_QWORD *)(v12 + 16) != v11 + 1 )
        {
          v13 = v11[2];
          if ( v13 && (v14 = v13 - 1, v13 != 1) )
          {
            v46 = (const void *)v11[1];
            v47 = *(void **)(v12 + 16);
            if ( *(_QWORD *)(v12 + 32) < v13 )
            {
              v59 = v46;
              v57 = v13 - 1;
              v56 = v13;
              v47 = (void *)qvector_reserve();
              v46 = v59;
              v14 = v57;
              *(_QWORD *)(v12 + 16) = v47;
              v13 = v56;
            }
            *(_QWORD *)(v12 + 24) = v13;
            v55 = v13;
            memmove(v47, v46, v14);
            *(_BYTE *)(*(_QWORD *)(v12 + 16) + v55 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v12 + 24) = 0;
          }
        }
        ++v52;
        if ( (*v8 & 2) != 0 )
          goto LABEL_18;
        v15 = (unsigned __int64 *)v8[2];
        if ( (*(_BYTE *)v15 & 2) != 0 )
          break;
        do
        {
          v8 = v15;
          v15 = (unsigned __int64 *)v15[1];
        }
        while ( (*(_BYTE *)v15 & 2) == 0 );
LABEL_18:
        if ( v51 == v8 )
          goto LABEL_19;
      }
      v43 = (unsigned __int64 *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v44 = *v43;
      if ( (*v43 & 2) == 0 && (unsigned __int64 *)v43[2] == v8 )
      {
        do
        {
          v8 = (unsigned __int64 *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v44 & 2) != 0 )
            goto LABEL_18;
          v45 = v43;
          v43 = v8;
        }
        while ( (unsigned __int64 *)v8[2] == v45 );
      }
      v8 = v43;
    }
    while ( v51 != v43 );
LABEL_19:
    v51 = *v53;
    if ( *v53 )
    {
      v16 = **v53;
      if ( v53[1] )
        goto LABEL_21;
LABEL_68:
      *v51 = v16 & 3 | (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v53 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v53, (__m128i)(unsigned __int64)*v53);
      **v53 &= ~1uLL;
      **v53 |= 2u;
LABEL_30:
      if ( *v53 )
        qfree();
    }
LABEL_32:
    qfree();
LABEL_33:
    ++v48;
    v3 += 3;
  }
  while ( v48 < a1[22] );
  if ( v52 )
  {
    v65 = 0u;
    v64 = 0;
    if ( sub_2AB350 )
    {
      v64.m128i_i64[0] = (__int64)sub_2AB350;
      v65 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C34C8), (__m128i)(unsigned __int64)sub_2A8980);
    }
    sub_2E6F00(v66, &v64, 1);
    sub_62A50((__int64)&v64);
    sub_2C50F0(v66, a1 + 19, 1);
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
LABEL_40:
  v21 = &v68;
  v49 = v20;
  do
  {
    v21 -= 3;
    if ( *v21 )
    {
      v22 = v21[1];
      v23 = 0;
      v24 = 0;
      if ( v22 )
      {
        do
        {
          v25 = (_QWORD *)(v23 + *v21);
          v26 = v25[2];
          *v25 = off_4C1AB0;
          if ( v26 )
          {
            v25[3] = 0;
            qfree();
          }
          ++v24;
          v23 += 56;
        }
        while ( v22 != v24 );
      }
      v21[1] = 0;
      qfree();
    }
  }
  while ( v21 != (__int64 *)v67 );
  return v49;
}

