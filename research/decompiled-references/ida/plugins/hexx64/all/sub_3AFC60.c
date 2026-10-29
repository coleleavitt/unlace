__int64 __fastcall sub_3AFC60(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r14
  _BYTE *v11; // rsi
  unsigned __int64 v12; // r13
  size_t v13; // r15
  __int64 v14; // r14
  size_t v15; // r8
  _BYTE *v16; // rsi
  char v17; // al
  unsigned int v18; // ebx
  unsigned __int64 v20; // r13
  const void *v21; // rbx
  void *v22; // rdi
  size_t v23; // [rsp+0h] [rbp-90h]
  __int64 v24; // [rsp+8h] [rbp-88h] BYREF
  int v25; // [rsp+10h] [rbp-80h]
  void *dest; // [rsp+18h] [rbp-78h] BYREF
  __int128 v27; // [rsp+20h] [rbp-70h]
  __int64 v28; // [rsp+38h] [rbp-58h] BYREF
  __int64 v29; // [rsp+40h] [rbp-50h] BYREF
  char v30; // [rsp+48h] [rbp-48h]
  int v31; // [rsp+4Ch] [rbp-44h]
  unsigned __int64 v32; // [rsp+50h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v30 = 0;
  v27 = 0;
  dest = nullptr;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  copy_tinfo_t();
  if ( *(_QWORD *)(a2 + 32) == -1 )
  {
    v30 = 1;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(a2 + 31) & 0x3F) != 0x2D )
  {
    v8 = v27;
    if ( (_QWORD)v27 )
    {
      v9 = v27 + 1;
      v10 = v27 + 2;
      v11 = dest;
      v8 = v27 - 1;
      if ( *((_QWORD *)&v27 + 1) >= (unsigned __int64)(v27 + 2) )
        goto LABEL_5;
    }
    else
    {
      v11 = dest;
      v10 = 3;
      v9 = 2;
      if ( *((_QWORD *)&v27 + 1) >= 3u )
        goto LABEL_5;
    }
    dest = (void *)qvector_reserve((__int64)&dest, (__int64)v11, v10, 1);
    v11 = dest;
LABEL_5:
    *(_QWORD *)&v27 = v10;
    v11[v9] = 0;
    *(_WORD *)((char *)dest + v8) = 14906;
    v12 = *(_QWORD *)(a2 + 72);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v12 != 1 )
      {
        v14 = v27;
        v15 = v12 - 1;
        if ( (_QWORD)v27 )
        {
          v14 = v27 - 1;
          v15 = v13 + v27 - 1;
          v12 += v27 - 1;
        }
        v16 = dest;
        if ( *((_QWORD *)&v27 + 1) < v12 )
        {
          v23 = v15;
          dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v12, 1);
          v15 = v23;
          v16 = dest;
        }
        *(_QWORD *)&v27 = v12;
        v16[v15] = 0;
        memcpy((char *)dest + v14, *(const void **)(a2 + 64), v13);
      }
    }
    v17 = *(_BYTE *)(a2 + 31) & 0x3F;
    if ( v17 == 13 )
    {
      v28 = *(_QWORD *)(a2 + 48) >> 3;
    }
    else if ( v17 == 29 )
    {
      v28 = *(_QWORD *)(a2 + 16);
    }
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(a2 + 248);
  v28 = *(_QWORD *)(a2 + 288);
  if ( v20 > 1 )
  {
    v21 = *(const void **)(a2 + 240);
    v22 = dest;
    if ( *((_QWORD *)&v27 + 1) < v20 )
    {
      dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v20, 1);
      v22 = dest;
    }
    *(_QWORD *)&v27 = v20;
    memmove(v22, v21, v20 - 1);
    *((char *)dest + v20 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v27 = 0;
  }
LABEL_15:
  sub_3A9370(&v29);
  v25 = 0;
  v24 = 0xFFFFFFFFLL;
  v18 = sub_3AF790(a1, (__int64)dest, (__int64)&v28, 1u, -1, &v24, 0.0, a4, a5, a6);
  clear_tinfo_t();
  if ( dest )
  {
    *(_QWORD *)&v27 = 0;
    qfree((__int64)dest);
  }
  return v18;
}

