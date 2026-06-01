__int64 __fastcall sub_E300(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // r13d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  char *v12; // rbx
  __int64 v13; // r14
  void *v14; // rax
  const void *v15; // rsi
  char v16; // al
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  char *v21; // rbx
  __int64 v22; // rdi
  void *v23; // rax
  const void *v24; // rsi
  unsigned __int64 v25; // [rsp+18h] [rbp-240h]
  unsigned __int64 v26; // [rsp+28h] [rbp-230h] BYREF
  __int128 v27; // [rsp+30h] [rbp-228h] BYREF
  __int64 v28; // [rsp+40h] [rbp-218h]
  __int128 v29; // [rsp+48h] [rbp-210h]
  __int64 v30; // [rsp+58h] [rbp-200h]
  __m128i si128; // [rsp+60h] [rbp-1F8h]
  __int128 v32; // [rsp+70h] [rbp-1E8h]
  __int64 v33; // [rsp+80h] [rbp-1D8h]
  __int128 v34; // [rsp+88h] [rbp-1D0h]
  __int128 v35; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-1A8h]
  __int128 v37; // [rsp+B8h] [rbp-1A0h]
  __int64 v38; // [rsp+C8h] [rbp-190h]
  __int128 v39; // [rsp+D0h] [rbp-188h]
  int v40; // [rsp+E0h] [rbp-178h]
  __int64 v41; // [rsp+E8h] [rbp-170h]
  __int128 v42; // [rsp+F0h] [rbp-168h]
  __int64 v43; // [rsp+100h] [rbp-158h]
  __int128 v44; // [rsp+108h] [rbp-150h]
  void *v45; // [rsp+120h] [rbp-138h] BYREF
  __int128 v46; // [rsp+128h] [rbp-130h]
  __int64 v47; // [rsp+138h] [rbp-120h]
  int v48; // [rsp+140h] [rbp-118h]
  __int64 v49; // [rsp+148h] [rbp-110h]
  _BYTE v50[192]; // [rsp+150h] [rbp-108h] BYREF
  char v51; // [rsp+210h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+218h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v3 = (_QWORD *)getseg();
  if ( !v3 )
    return 0;
  v4 = a2 - *v3;
  v5 = *(_QWORD *)(a1 + 368);
  v25 = v4;
  if ( v4 < 2 * v5 || !(unsigned __int8)sub_BB70(a1, (__int64 *)&v26, a2 - v5) )
    return 0;
  v8 = *(_QWORD *)(a1 + 128);
  v45 = 0;
  v46 = 0;
  if ( v8 )
  {
    v23 = (void *)qalloc_or_throw();
    v24 = *(const void **)(a1 + 120);
    *((_QWORD *)&v46 + 1) = v8;
    v45 = v23;
    memcpy(v23, v24, 16 * v8);
    *(_QWORD *)&v46 = v8;
  }
  v9 = *(_QWORD *)(a1 + 160);
  v10 = a1 + 168;
  v47 = 0;
  v11 = 7;
  v48 = -1;
  v49 = v9;
  v12 = v50;
  do
  {
    v13 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    if ( v13 )
    {
      v14 = (void *)qalloc_or_throw();
      v15 = *(const void **)v10;
      *(_QWORD *)v12 = v14;
      *((_QWORD *)v12 + 2) = v13;
      memcpy(v14, v15, 8 * v13);
      *((_QWORD *)v12 + 1) = v13;
    }
    --v11;
    v12 += 24;
    v10 += 24;
  }
  while ( &v51 != v12 );
  v16 = *(_BYTE *)(a1 + 360);
  v36 = 0;
  v38 = a1;
  v51 = v16;
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v35 = 0;
  v37 = 0;
  v39 = -1;
  v42 = 0;
  v44 = 0;
  v6 = sub_CC60(&v35, (__int64)&v45, v26, 0);
  if ( !(_BYTE)v6 )
    goto LABEL_32;
  v17 = *(_QWORD *)(a1 + 368);
  v18 = v40 & 0xA;
  if ( (v40 & 0xA) != 0 )
  {
    v19 = 3 * v17;
    if ( v25 >= v19 )
      goto LABEL_15;
LABEL_32:
    v6 = 0;
    goto LABEL_16;
  }
  v19 = 2 * v17;
LABEL_15:
  v20 = a2 - v19;
  if ( !sub_4ED0(a1 + 120, 6u, v20) )
  {
    v30 = a1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
    v28 = 0;
    v33 = 0;
    v27 = 0;
    v29 = 0;
    v32 = -1;
    v34 = 0;
    if ( (unsigned __int8)sub_DA90((__int64 *)&v27, (__int64)&v45, v20, 0, v18 != 0) )
    {
      sub_DA90((__int64 *)&v27, a1 + 120, v20, 0x30u, v18 != 0);
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      goto LABEL_16;
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    goto LABEL_32;
  }
LABEL_16:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  v21 = &v51;
  do
  {
    v22 = *((_QWORD *)v21 - 3);
    v21 -= 24;
    if ( v22 )
    {
      *((_QWORD *)v21 + 1) = 0;
      qfree();
    }
  }
  while ( v21 != v50 );
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return v6;
}
