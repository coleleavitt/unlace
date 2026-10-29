__int64 __fastcall sub_5ABF0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  _BYTE *v5; // rax
  unsigned __int8 v6; // bp
  char *v7; // rsi
  char v8; // dl
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  size_t v13; // rax
  size_t v14; // r15
  _BYTE *v15; // r13
  unsigned __int64 v16; // r8
  char *v17; // rsi
  unsigned __int64 v18; // rdx
  char v19; // r12
  char *v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  char v23; // di
  unsigned __int8 v24; // bp
  char v25; // cl
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // bp
  char v30; // di
  bool v31; // zf
  int v32; // ebp
  __int64 result; // rax
  char v34; // al
  __m128i v35; // xmm0
  __int64 v36; // rdx
  char *v37; // rsi
  int v38; // ebp
  char *v39; // rsi
  unsigned __int64 v40; // rax
  unsigned int v41; // [rsp+8h] [rbp-70h]
  unsigned __int64 v42; // [rsp+8h] [rbp-70h]
  unsigned __int64 v43; // [rsp+8h] [rbp-70h]
  char v44; // [rsp+1Fh] [rbp-59h] BYREF
  char *v45; // [rsp+20h] [rbp-58h]
  __int128 v46; // [rsp+28h] [rbp-50h]
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v3 = a2[1];
  v47 = __readfsqword(0x28u);
  if ( v3 < 2 )
  {
    v45 = nullptr;
    v6 = 0;
    v46 = 0;
  }
  else
  {
    v5 = (_BYTE *)*a2;
    v6 = 0;
    do
      v6 += *v5++;
    while ( (_BYTE *)(*a2 + v3 - 1) != v5 );
    v45 = nullptr;
    v46 = 0;
    if ( v3 == -3 )
    {
      v44 = 36;
      goto LABEL_6;
    }
  }
  v45 = (char *)qvector_reserve();
  v7 = v45;
  v9 = v46;
  v44 = 36;
  v10 = v46 + 1;
  if ( &v44 < v45 || &v44 >= &v45[*((_QWORD *)&v46 + 1)] )
  {
    if ( *((_QWORD *)&v46 + 1) >= v10 )
    {
      v8 = 36;
      goto LABEL_11;
    }
LABEL_6:
    v45 = (char *)qvector_reserve();
    v7 = v45;
    v8 = v44;
    v9 = v46;
LABEL_11:
    v7[v9] = v8;
    goto LABEL_12;
  }
  if ( *((_QWORD *)&v46 + 1) < v10 )
  {
    v45 = (char *)qvector_reserve();
    v7 = v45;
    v9 = v46;
  }
  v7[v9] = 36;
LABEL_12:
  v11 = v46 + 1;
  v12 = a2[1];
  *(_QWORD *)&v46 = v46 + 1;
  if ( !v12 )
    goto LABEL_19;
  v13 = v12 - 1;
  v14 = v13;
  if ( !v13 )
    goto LABEL_19;
  v15 = (_BYTE *)*a2;
  v16 = v11 + v13;
  if ( !__CFADD__(v11, v13) )
    goto LABEL_74;
  if ( v11 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_74:
    v39 = v45;
    v40 = v11;
    if ( *((_QWORD *)&v46 + 1) < v16 )
    {
      v43 = v16;
      v45 = (char *)qvector_reserve();
      v39 = v45;
      v16 = v43;
      v40 = v46;
    }
    v42 = v16;
    memset(&v39[v40], 0, v16 - v40);
    *(_QWORD *)&v46 = v42;
    goto LABEL_18;
  }
  if ( v11 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v46 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy(&v45[v11], v15, v14);
  v11 = v46;
LABEL_19:
  v17 = v45;
  v44 = 35;
  v18 = v11 + 1;
  if ( &v44 < v45 || &v44 >= &v45[*((_QWORD *)&v46 + 1)] )
  {
    if ( *((_QWORD *)&v46 + 1) < v18 )
    {
      v45 = (char *)qvector_reserve();
      v17 = v45;
      v11 = v46;
      v34 = v44;
    }
    else
    {
      v34 = 35;
    }
    v17[v11] = v34;
  }
  else
  {
    if ( *((_QWORD *)&v46 + 1) < v18 )
    {
      v45 = (char *)qvector_reserve();
      v11 = v46;
      v17 = v45;
    }
    v17[v11] = 35;
  }
  v19 = (v6 >> 4) + 87;
  if ( (unsigned __int8)(v6 >> 4) <= 9u )
    v19 = (v6 >> 4) + 48;
  v20 = v45;
  v21 = v46 + 1;
  v22 = v46 + 2;
  *(_QWORD *)&v46 = v46 + 1;
  v44 = v19;
  v23 = v19;
  if ( &v44 < v45 || &v44 >= &v45[*((_QWORD *)&v46 + 1)] )
  {
    if ( *((_QWORD *)&v46 + 1) < v22 )
    {
      v45 = (char *)qvector_reserve();
      v21 = v46;
      v20 = v45;
      v23 = v44;
    }
    v20[v21] = v23;
  }
  else
  {
    if ( *((_QWORD *)&v46 + 1) < v22 )
    {
      v45 = (char *)qvector_reserve();
      v21 = v46;
      v20 = v45;
    }
    v20[v21] = v19;
  }
  v24 = v6 & 0xF;
  v25 = v24 + 48;
  if ( v24 > 9u )
    v25 = v24 + 87;
  v26 = v45;
  v27 = v46 + 1;
  v28 = v46 + 2;
  *(_QWORD *)&v46 = v46 + 1;
  v44 = v25;
  v29 = v25;
  v30 = v25;
  if ( &v44 < v45 || &v44 >= &v45[*((_QWORD *)&v46 + 1)] )
  {
    if ( *((_QWORD *)&v46 + 1) < v28 )
    {
      v45 = (char *)qvector_reserve();
      v26 = v45;
      v30 = v44;
      v27 = v46;
    }
    v26[v27] = v30;
  }
  else
  {
    if ( *((_QWORD *)&v46 + 1) < v28 )
    {
      v45 = (char *)qvector_reserve();
      v26 = v45;
      v27 = v46;
    }
    v26[v27] = v29;
  }
  *(_QWORD *)&v46 = v46 + 1;
  while ( 1 )
  {
    v31 = *(_BYTE *)(a1 + 16) == 0;
    v32 = *(_DWORD *)(a1 + 12);
    result = 1;
    *(_DWORD *)(a1 + 12) = 0;
    if ( v31 )
    {
      while ( 1 )
      {
        result = sub_5A320(a1, 0);
        if ( (int)result <= 1 )
          break;
        while ( *(_BYTE *)(a1 + 16) )
          ;
      }
    }
    *(_BYTE *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = v32;
    if ( (_DWORD)result == -2 )
      break;
    if ( (int)result < 0 )
      goto LABEL_51;
    sub_59DE0(a1, 0, (__int64)"GDB: Warning: the previous packet has been discarded!\n");
    *(_QWORD *)(a1 + 32) = 0;
  }
  v35 = _mm_loadl_epi64((const __m128i *)(a1 + 56));
  v36 = v46;
  v37 = v45;
  *(__m128i *)(a1 + 64) = _mm_unpacklo_epi64(v35, v35);
  if ( sub_5A040(a1, v37, v36) <= 0 )
  {
    result = 0xFFFFFFFFLL;
  }
  else if ( *(_BYTE *)(a1 + 248) )
  {
LABEL_50:
    result = 1;
  }
  else
  {
    v38 = *(_DWORD *)(a1 + 12);
    if ( v38 == -1 )
      v38 = *(_DWORD *)(a1 + 8);
    while ( 1 )
    {
      result = sub_5A320(a1, v38);
      if ( (int)result < 0 )
        break;
      if ( (_DWORD)result == 2 )
        goto LABEL_50;
      if ( (_DWORD)result == 3 )
      {
        result = 0;
        break;
      }
      sub_59DE0(a1, 0, (__int64)"GDB: Warning: the previous packet has been discarded!\n");
      *(_QWORD *)(a1 + 32) = 0;
    }
  }
LABEL_51:
  if ( v45 )
  {
    v41 = result;
    *(_QWORD *)&v46 = 0;
    qfree();
    return v41;
  }
  return result;
}

