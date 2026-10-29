__int64 __fastcall sub_77F00(unsigned __int64 *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 i; // r13
  __int64 v11; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *a2 >= a2[1] )
    sub_73F90(a1);
  v2 = unpack_dd();
  v3 = v2;
  if ( a2[1] - *a2 < (unsigned __int64)v2 || v2 < 0 )
    return 0;
  v4 = a1[1];
  v5 = *a1;
  if ( v4 != v3 )
  {
    v16 = 0;
    if ( v3 >= v4 )
    {
      v6 = a1[2];
      if ( (unsigned __int64)&v16 < v5 || (unsigned __int64)&v16 >= v5 + 16 * v6 )
      {
        if ( v6 < v3 )
        {
          v14 = qvector_reserve();
          *a1 = v14;
          v5 = v14;
          v4 = a1[1];
        }
        if ( v4 < v3 )
        {
          v7 = _mm_load_si128(&v16);
          do
          {
            v8 = v4++;
            *(__m128i *)(v5 + 16 * v8) = v7;
            v5 = *a1;
          }
          while ( v3 != v4 );
        }
      }
      else
      {
        if ( v6 < v3 )
        {
          v15 = qvector_reserve();
          *a1 = v15;
          v5 = v15;
          v4 = a1[1];
        }
        if ( v4 < v3 )
        {
          do
          {
            v13 = v4++;
            *(_OWORD *)(v5 + 16 * v13) = 0;
            v5 = *a1;
          }
          while ( v3 != v4 );
        }
      }
    }
    a1[1] = v3;
  }
  v9 = 0;
  for ( i = v5 + 16 * v3; i != v5; v9 = *(_QWORD *)(v5 - 16) + v11 )
  {
    v5 += 16LL;
    *(_QWORD *)(v5 - 16) = v9 + sub_767C0((__int64)a2);
    v11 = sub_767C0((__int64)a2);
    *(_QWORD *)(v5 - 8) = v11;
  }
  return 1;
}

