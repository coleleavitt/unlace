__int64 __fastcall sub_55B30(__int64 a1, __int64 *a2, __m128i *a3, _DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  size_t v11; // r9
  _QWORD *v12; // r12
  void *v13; // rdi
  const void *v14; // r10
  void *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  size_t v19; // [rsp+10h] [rbp-58h]
  const void *v20; // [rsp+18h] [rbp-50h]
  unsigned int v21; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 192) == 1
    && (unsigned __int8)sub_6F820(a1, &v21, *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8LL), 0)
    && v21 < (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3)
    && (v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v21), v4 = *(_BYTE *)(v9 + 48) & 1, (*(_BYTE *)(v9 + 48) & 1) != 0)
    && *(_WORD *)(v9 + 84) == 5397 )
  {
    if ( a2 && a2 != (__int64 *)(v9 + 24) )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( v10 && (v11 = v10 - 1, v10 != 1) )
      {
        v14 = *(const void **)(v9 + 24);
        v15 = (void *)*a2;
        if ( a2[2] < v10 )
        {
          v20 = *(const void **)(v9 + 24);
          v19 = v10 - 1;
          v18 = *(_QWORD *)(v9 + 32);
          v16 = qvector_reserve(a2, *a2, v18, 1);
          v14 = v20;
          v11 = v19;
          *a2 = v16;
          v10 = v18;
          v15 = (void *)v16;
        }
        a2[1] = v10;
        v17 = v10;
        memmove(v15, v14, v11);
        *(_BYTE *)(*a2 + v17 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    if ( a3 )
      *a3 = _mm_loadu_si128((const __m128i *)(v9 + 88));
    if ( a4 )
      *a4 = *(_DWORD *)(v9 + 104);
    v12 = *(_QWORD **)(a1 + 184);
    while ( v12 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      operator delete(v13, 0x18u);
    }
    memset(*(void **)(a1 + 168), 0, 8LL * *(_QWORD *)(a1 + 176));
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 184) = 0;
  }
  else
  {
    return 0;
  }
  return v4;
}
