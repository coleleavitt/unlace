__int64 __fastcall sub_3A8360(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  _BYTE *v7; // rsi
  unsigned __int64 v8; // r13
  size_t v9; // r15
  __int64 v10; // r14
  size_t v11; // r8
  _BYTE *v12; // rsi
  char v13; // al
  unsigned int v14; // ebx
  unsigned __int64 v16; // r13
  const void *v17; // rbx
  void *v18; // rdi
  size_t v19; // [rsp+0h] [rbp-90h]
  __int64 v20; // [rsp+8h] [rbp-88h] BYREF
  int v21; // [rsp+10h] [rbp-80h]
  void *dest; // [rsp+18h] [rbp-78h]
  __int128 v23; // [rsp+20h] [rbp-70h]
  __int64 v24; // [rsp+38h] [rbp-58h] BYREF
  __int64 v25; // [rsp+40h] [rbp-50h] BYREF
  char v26; // [rsp+48h] [rbp-48h]
  int v27; // [rsp+4Ch] [rbp-44h]
  unsigned __int64 v28; // [rsp+50h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v26 = 0;
  v23 = 0;
  dest = nullptr;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  copy_tinfo_t();
  if ( *(_QWORD *)(a2 + 32) == -1 )
  {
    v26 = 1;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(a2 + 31) & 0x3F) != 0x2D )
  {
    v4 = v23;
    if ( (_QWORD)v23 )
    {
      v5 = v23 + 1;
      v6 = v23 + 2;
      v7 = dest;
      v4 = v23 - 1;
      if ( *((_QWORD *)&v23 + 1) >= (unsigned __int64)(v23 + 2) )
        goto LABEL_5;
    }
    else
    {
      v7 = dest;
      v6 = 3;
      v5 = 2;
      if ( *((_QWORD *)&v23 + 1) >= 3u )
        goto LABEL_5;
    }
    dest = (void *)qvector_reserve();
    v7 = dest;
LABEL_5:
    *(_QWORD *)&v23 = v6;
    v7[v5] = 0;
    *(_WORD *)((char *)dest + v4) = 14906;
    v8 = *(_QWORD *)(a2 + 72);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v8 != 1 )
      {
        v10 = v23;
        v11 = v8 - 1;
        if ( (_QWORD)v23 )
        {
          v10 = v23 - 1;
          v11 = v9 + v23 - 1;
          v8 += v23 - 1;
        }
        v12 = dest;
        if ( *((_QWORD *)&v23 + 1) < v8 )
        {
          v19 = v11;
          dest = (void *)qvector_reserve();
          v11 = v19;
          v12 = dest;
        }
        *(_QWORD *)&v23 = v8;
        v12[v11] = 0;
        memcpy((char *)dest + v10, *(const void **)(a2 + 64), v9);
      }
    }
    v13 = *(_BYTE *)(a2 + 31) & 0x3F;
    if ( v13 == 13 )
    {
      v24 = *(_QWORD *)(a2 + 48) >> 3;
    }
    else if ( v13 == 29 )
    {
      v24 = *(_QWORD *)(a2 + 16);
    }
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(a2 + 248);
  v24 = *(_QWORD *)(a2 + 288);
  if ( v16 > 1 )
  {
    v17 = *(const void **)(a2 + 240);
    v18 = dest;
    if ( *((_QWORD *)&v23 + 1) < v16 )
    {
      dest = (void *)qvector_reserve();
      v18 = dest;
    }
    *(_QWORD *)&v23 = v16;
    memmove(v18, v17, v16 - 1);
    *((char *)dest + v16 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v23 = 0;
  }
LABEL_15:
  sub_3A1A70(&v25);
  v21 = 0;
  v20 = 0xFFFFFFFFLL;
  v14 = sub_3A7E90(a1, (__int64)dest, (__int64)&v24, 1u, -1, &v20);
  clear_tinfo_t();
  if ( dest )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v14;
}

