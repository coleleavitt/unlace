unsigned __int64 __fastcall sub_82D80(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  char *v7; // r13
  char *v8; // rdx
  void *v9; // rdi
  __int64 v10; // rdx
  __m128 v11; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  const char *v15; // rbp
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r15
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  dest = nullptr;
  v5 = (_QWORD *)qvector_reserve(&dest, 0, 9, 1);
  v6 = *a2;
  dest = v5;
  *(_QWORD *)&v20 = 9;
  *v5 = v6;
  v7 = (char *)dest;
  v8 = &byte_CB3E1;
  *((_BYTE *)dest + 8) = 0;
  if ( (_QWORD)v20 )
    v8 = v7;
  if ( *v8 == 47 )
  {
    v13 = strtol(v7 + 1, nullptr, 10);
    v7 = (char *)dest;
    if ( v13 > 0 )
    {
      v14 = a3[1];
      if ( v14 )
      {
        if ( v13 < (unsigned __int64)(v14 - 1) )
        {
          v15 = (const char *)(*a3 + v13);
          v16 = strlen(v15);
          v17 = v16;
          if ( v16 )
          {
            v18 = v16 + 1;
            if ( *((_QWORD *)&v20 + 1) < v16 + 1 )
            {
              dest = (void *)qvector_reserve(&dest, v7, v16 + 1, 1);
              v7 = (char *)dest;
            }
            *(_QWORD *)&v20 = v18;
            memmove(v7, v15, v17);
            *((_BYTE *)dest + v17) = 0;
            v7 = (char *)dest;
          }
        }
      }
    }
  }
  v9 = *(void **)a1;
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v7;
  v11 = _mm_loadh_ps((const double *)&v20 + 1);
  dest = v9;
  *((_QWORD *)&v20 + 1) = v10;
  *(__m128 *)(a1 + 8) = v11;
  if ( v9 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v9);
  }
  return v21 - __readfsqword(0x28u);
}

