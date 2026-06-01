__int64 __fastcall sub_284080(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v6; // r15d
  __int64 v8; // r14
  void *v9; // rsi
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r11
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+Ch] [rbp-CCh]
  char v51; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v52; // [rsp+20h] [rbp-B8h] BYREF
  int v53; // [rsp+28h] [rbp-B0h]
  __int64 v54; // [rsp+2Ch] [rbp-ACh]
  void *src[2]; // [rsp+38h] [rbp-A0h]
  __int128 v56; // [rsp+48h] [rbp-90h]
  __int64 v57; // [rsp+60h] [rbp-78h] BYREF
  int v58; // [rsp+68h] [rbp-70h]
  __int64 v59; // [rsp+6Ch] [rbp-6Ch]
  void *v60; // [rsp+80h] [rbp-58h]
  __m128i v61; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+98h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 73 )
    return 2;
  if ( a1[1] && *(_DWORD *)(a2 + 12) != -1 )
    return 1;
  v8 = *(_QWORD *)(a2 + 24);
  v52 = -1;
  v53 = 70;
  v54 = -1;
  *(_OWORD *)src = 0;
  v56 = 0;
  if ( (unsigned __int8)sub_27B1A0(a1, v8, &v52, &v51) && (a3 || !v51) )
  {
    if ( (_QWORD)v56 )
    {
      v9 = src[1];
      v10 = 0;
      v11 = 0;
      if ( a1[1] )
      {
        v12 = *(_QWORD *)src[1];
LABEL_11:
        v50 = v10;
        v13 = 0;
        v14 = 0;
        while ( 1 )
        {
          v15 = *a1 + 56 * v14;
          v16 = *(_QWORD *)(v15 + 40);
          if ( v16 )
            break;
LABEL_23:
          v14 = ++v13;
          if ( v13 >= (unsigned __int64)a1[1] )
          {
            v10 = v50 + 1;
            v11 = v50 + 1;
            if ( v11 >= (unsigned __int64)v56 )
              goto LABEL_16;
            v12 = *((_QWORD *)src[1] + v10);
            goto LABEL_11;
          }
        }
        v17 = *(_QWORD *)(v15 + 32);
        v18 = 0;
        v19 = 0;
        while ( *(_QWORD *)(v17 + 8 * v19) != v12 )
        {
          v19 = ++v18;
          if ( v18 >= v16 )
            goto LABEL_23;
        }
      }
      else
      {
        do
        {
          v20 = v10 + 1;
          v11 = v20;
          if ( v20 >= (unsigned __int64)v56 )
            break;
          v10 = v20 + 1;
          v11 = v10;
        }
        while ( v10 < (unsigned __int64)v56 );
      }
LABEL_16:
      v6 = 6;
      if ( v11 != (_QWORD)v56 )
        goto LABEL_17;
    }
    if ( (unsigned __int8)sub_281810(*(_QWORD *)(v8 + 64), 0) )
    {
      v9 = src[1];
      v6 = a3 == 0 ? 7 : 5;
      goto LABEL_17;
    }
    if ( !v51 )
    {
      if ( !a3 && a1[1] )
        a1[12] = a2;
      v57 = -1;
      v58 = 70;
      v59 = -1;
      sub_256DF0((__int64)&v57, (__int64)&v52);
      v33 = v56;
      v60 = nullptr;
      v61 = 0;
      if ( (_QWORD)v56 )
      {
        v60 = (void *)qalloc_or_throw();
        v61.m128i_i64[1] = v33;
        memcpy(v60, src[1], 8 * v33);
        v61.m128i_i64[0] = v33;
      }
      v34 = a1[1];
      v35 = *a1;
      if ( a1[2] < (unsigned __int64)(v34 + 1) )
      {
        v46 = qvector_reserve();
        *a1 = v46;
        v35 = v46;
        v34 = a1[1];
      }
      v36 = v35 + 56 * v34;
      *(_QWORD *)v36 = -1;
      *(_DWORD *)(v36 + 8) = 70;
      *(_QWORD *)(v36 + 12) = -1;
      sub_256DF0(v36, (__int64)&v57);
      v37 = _mm_loadu_si128(&v61);
      *(_QWORD *)(v36 + 32) = v60;
      *(__m128i *)(v36 + 40) = v37;
      ++a1[1];
      sub_2513D0((__int64)&v57);
      v40 = a1[4];
      v41 = *(_QWORD *)(v8 + 64);
      v42 = a1[3];
      v43 = v40 + 1;
      if ( a1[5] < (unsigned __int64)(v40 + 1) )
      {
        v45 = qvector_reserve();
        a1[3] = v45;
        v42 = v45;
        v40 = a1[4];
      }
      *(_QWORD *)(v42 + 8 * v40) = v41;
      ++a1[4];
      if ( *(_QWORD *)(v8 + 72) )
      {
        v44 = sub_284690(a1);
        v9 = src[1];
        v6 = v44;
      }
      else
      {
        v47 = sub_23DEC0(*(_QWORD *)(v8 + 64), 0, v43, v38, v39);
        v9 = src[1];
        v6 = 8 * v47;
      }
      goto LABEL_17;
    }
    if ( !*(_QWORD *)(v8 + 72) && !(unsigned __int8)sub_23DEC0(*(_QWORD *)(v8 + 64), 0, v21, v22, v23) )
    {
      v57 = -1;
      v58 = 70;
      v59 = -1;
      sub_256DF0((__int64)&v57, (__int64)&v52);
      v24 = v56;
      v60 = nullptr;
      v61 = 0;
      if ( (_QWORD)v56 )
      {
        v60 = (void *)qalloc_or_throw();
        v61.m128i_i64[1] = v24;
        memcpy(v60, src[1], 8 * v24);
        v61.m128i_i64[0] = v24;
      }
      v25 = a1[1];
      if ( a1[2] < (unsigned __int64)(v25 + 1) )
      {
        *a1 = qvector_reserve();
        v25 = a1[1];
      }
      v26 = *a1 + 56 * v25;
      *(_QWORD *)v26 = -1;
      *(_DWORD *)(v26 + 8) = 70;
      *(_QWORD *)(v26 + 12) = -1;
      sub_256DF0(v26, (__int64)&v57);
      v27 = _mm_loadu_si128(&v61);
      *(_QWORD *)(v26 + 32) = v60;
      *(__m128i *)(v26 + 40) = v27;
      ++a1[1];
      sub_2513D0((__int64)&v57);
      v28 = a1[4];
      v29 = a1[3];
      v57 = 0;
      v30 = a1[5];
      v31 = v28;
      v32 = v28 + 1;
      if ( (unsigned __int64)&v57 < v29 || (unsigned __int64)&v57 >= v29 + 8 * v30 )
      {
        if ( v30 < v32 )
        {
          v49 = qvector_reserve();
          a1[3] = v49;
          v31 = a1[4];
          v29 = v49;
        }
        *(_QWORD *)(v29 + 8 * v31) = 0;
      }
      else
      {
        if ( v30 < v32 )
        {
          v48 = qvector_reserve();
          a1[3] = v48;
          v29 = v48;
          v28 = a1[4];
        }
        *(_QWORD *)(v29 + 8 * v28) = 0;
      }
      ++a1[4];
      v9 = src[1];
      v6 = 4;
      goto LABEL_17;
    }
  }
  v9 = src[1];
  v6 = 3;
LABEL_17:
  if ( v9 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  sub_2513D0((__int64)&v52);
  return v6;
}

