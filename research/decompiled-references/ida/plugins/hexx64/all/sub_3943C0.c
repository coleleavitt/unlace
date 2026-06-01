__int64 __fastcall sub_3943C0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        double a5,
        double a6,
        __m128i a7,
        double a8)
{
  __int64 module_data; // rax
  const __m128i *v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v18; // edx
  int v19; // eax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // rdx
  _DWORD v27[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  module_data = get_module_data();
  v12 = *(const __m128i **)(a2 + 40);
  v13 = module_data;
  if ( dword_4EE9E0 == (*(unsigned int (__fastcall **)(const __m128i *))(v12->m128i_i64[0] + 112))(v12) )
  {
    v14 = (*(__int64 (__fastcall **)(const __m128i *))(v12->m128i_i64[0] + 128))(v12);
    v15 = sub_384AB0(v14);
    if ( v15 )
    {
      v16 = a1[2].m128i_i64[1];
      if ( v16 )
        qfree(v16);
      a1[2].m128i_i64[1] = v15;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v18 = *(__int16 *)(a2 + 28);
    v19 = *(__int16 *)(a2 + 30);
    v27[0] = 0;
    v20 = _mm_loadl_epi64(v12 + 1);
    v29 = -1;
    v27[1] = v18;
    v21 = *(_QWORD *)(v13 + 1008);
    v27[2] = v19;
    v22 = _mm_unpacklo_epi64(v20, v20);
    v23 = *(__int64 **)(v21 + 40);
    v24 = *(_QWORD *)(v21 + 48);
    v28 = v22;
    v25 = &v23[v24];
    if ( v23 == v25 )
    {
LABEL_11:
      v26 = 0;
    }
    else
    {
      while ( 1 )
      {
        v26 = *v23;
        if ( *v23 )
        {
          if ( a3 == *(_QWORD *)(v26 + 8) || a3 == *(_QWORD *)(v26 + 16) )
            break;
        }
        if ( v25 == ++v23 )
          goto LABEL_11;
      }
    }
    return sub_3937C0(a1, v13, v26, (__int64)v27, 1, (a4 & 1) == 0, *(double *)v22.m128i_i64, a6, a7, a8);
  }
}

