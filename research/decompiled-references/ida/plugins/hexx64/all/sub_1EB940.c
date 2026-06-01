unsigned __int64 __fastcall sub_1EB940(__int64 a1, unsigned __int64 a2)
{
  __m128 v2; // xmm1
  __int64 v3; // rbp
  const __m128i *v4; // rax
  __m128i v5; // xmm0
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r15
  _QWORD *v13; // rsi
  unsigned int *v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int *v19; // rdi
  unsigned int v20; // r11d
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r13
  __int64 v26[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 *v27[4]; // [rsp+28h] [rbp-A8h] BYREF
  _QWORD v28[5]; // [rsp+48h] [rbp-88h] BYREF
  char v29; // [rsp+70h] [rbp-60h]
  __m128i i; // [rsp+78h] [rbp-58h]
  char v31; // [rsp+88h] [rbp-48h]
  unsigned __int64 v32; // [rsp+90h] [rbp-40h]

  v2 = (__m128)a2;
  v3 = *(_QWORD *)(a1 + 48);
  v32 = __readfsqword(0x28u);
  v29 = 0;
  v28[0] = &off_4DEB40;
  v4 = *(const __m128i **)(a1 + 480);
  v28[1] = 0;
  v31 = 0;
  v28[3] = 0;
  v5 = _mm_unpacklo_epi64(_mm_loadl_epi64(v4 + 7), (__m128i)a2);
  v28[2] = a1;
  v28[4] = 0;
  for ( i = v5; v3; v3 = *(_QWORD *)(v3 + 8) )
  {
    if ( *(char *)(v3 + 4) >= 0 )
    {
      v31 = 0;
      sub_11E900((_BYTE *)v3, (__int64)v28);
      sub_127A20((__int64)v26, a1, v3, 1, v7, v8, *(double *)v5.m128i_i64, v2);
      sub_64280((__int64 *)(a2 + 56), v26, *(double *)v5.m128i_i64);
      sub_316CB0((__int64 *)(a2 + 72), v27, v9, v10);
      v11 = *(_DWORD *)(a2 + 16) - 1;
      if ( v11 >= 0 )
      {
        v12 = 8LL * (unsigned int)v11;
        do
        {
          v13 = *(_QWORD **)a2;
          v14 = (unsigned int *)(v12 + *(_QWORD *)(a2 + 8));
          v15 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
          v16 = *v14;
          v17 = *v14;
          if ( v16 >= v15 )
          {
            v18 = 0;
          }
          else
          {
            v18 = 0;
            do
            {
              v19 = (unsigned int *)(v13[3] + 8 * v16);
              v20 = v17;
              v17 = *v19;
              if ( *v19 == v20 )
                break;
              v16 = v17;
              v18 += v19[1];
            }
            while ( v17 < v15 );
          }
          v21 = v14[1] + v18;
          v22 = (_QWORD *)(*v13 + 24 * v16);
          if ( v21 >= v22[1] )
          {
            if ( !under_debugger )
              sub_383060(0xC7A1u, *(double *)v5.m128i_i64);
            BUG();
          }
          v23 = *v22 + (v21 << 6);
          if ( (unsigned __int8)sub_64780((_QWORD *)(v23 + 16), v26)
            || (unsigned __int8)sub_318470((unsigned __int64 **)(v23 + 32), (__int64)v27) )
          {
            memmove(
              (void *)(v12 + *(_QWORD *)(a2 + 8)),
              (const void *)(v12 + *(_QWORD *)(a2 + 8) + 8),
              8LL * *(_QWORD *)(a2 + 16) - 8 - v12);
            --*(_QWORD *)(a2 + 16);
          }
          --v11;
          v12 -= 8;
        }
        while ( v11 != -1 );
      }
      if ( v27[0] )
      {
        v27[1] = nullptr;
        qfree((__int64)v27[0]);
      }
      qfree(v26[0]);
      v31 = 1;
      sub_11E900((_BYTE *)v3, (__int64)v28);
    }
  }
  return v32 - __readfsqword(0x28u);
}

