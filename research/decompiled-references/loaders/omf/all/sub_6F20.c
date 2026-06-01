__int64 __fastcall sub_6F20(__int64 a1, const void *a2, __int64 a3, _BOOL8 a4)
{
  __int64 v4; // r12
  size_t v6; // rbp
  __m128i si128; // xmm0
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rax
  const void *v16; // r13
  void *v17; // rax
  __int64 v18; // rdi
  void *v19; // rax
  __m128i v20[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v20[0] = si128;
    v19 = (void *)qalloc_or_throw(v18);
    a2 = *(const void **)a1;
    v4 = (__int64)v19;
    memcpy(v19, *(const void **)a1, v6);
    si128 = _mm_load_si128(v20);
  }
  if ( qword_143C0 )
  {
    v20[0] = si128;
    *(_QWORD *)&xmmword_143C8 = 0;
    qfree(qword_143C0);
    si128 = _mm_load_si128(v20);
  }
  qword_143C0 = v4;
  xmmword_143C8 = (__int128)si128;
  if ( (void **)(a1 + 24) != &dest )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 > 1 )
    {
      v16 = *(const void **)(a1 + 24);
      v17 = dest;
      if ( *((_QWORD *)&xmmword_143E0 + 1) < v8 )
      {
        v17 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 32), 1);
        dest = v17;
      }
      a2 = v16;
      *(_QWORD *)&xmmword_143E0 = v8;
      memmove(v17, v16, v8 - 1);
      *((char *)dest + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_143E0 = 0;
    }
  }
  qword_143F0 = *(_QWORD *)(a1 + 48);
  dword_143F8 = *(_DWORD *)(a1 + 56);
  byte_143FC = *(_BYTE *)(a1 + 60);
  qword_14420 = (unsigned __int16)sub_6A10(a1, (__int64)a2, a3, a4);
  if ( dword_145C8 || (*(_BYTE *)(a1 + 58) & 1) != 0 )
  {
    sub_5890(a1, -1, 4);
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_DWORD *)(*(_QWORD *)a1 + v9);
    v11 = v9 + 4;
  }
  else
  {
    sub_5890(a1, -1, 2);
    v15 = *(_QWORD *)(a1 + 48);
    v10 = *(unsigned __int16 *)(*(_QWORD *)a1 + v15);
    v11 = v15 + 2;
  }
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 48) = v11;
  qword_14400 = v11;
  v13 = v12 - v11;
  if ( v11 >= v12 )
    v13 = 0;
  qword_14408 = v13;
  dword_14418 = qword_145E0 + v11 + 3;
  netnode_supdel_all(qword_143B0, 83);
  dword_143AC = 1;
  return v10;
}
