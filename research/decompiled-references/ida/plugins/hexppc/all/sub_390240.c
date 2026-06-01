__int64 __fastcall sub_390240(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 module_data; // rax
  const __m128i *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  int v12; // edx
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  _DWORD v20[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  module_data = get_module_data();
  v7 = *(const __m128i **)(a2 + 40);
  v8 = module_data;
  if ( dword_4DB920 == (*(unsigned int (__fastcall **)(const __m128i *))(v7->m128i_i64[0] + 112))(v7) )
  {
    v9 = (*(__int64 (__fastcall **)(const __m128i *))(v7->m128i_i64[0] + 128))(v7);
    v10 = sub_380930(v9);
    if ( v10 )
    {
      if ( a1[2].m128i_i64[1] )
        qfree();
      a1[2].m128i_i64[1] = v10;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v12 = *(__int16 *)(a2 + 28);
    v13 = *(__int16 *)(a2 + 30);
    v20[0] = 0;
    v14 = _mm_loadl_epi64(v7 + 1);
    v22 = -1;
    v20[1] = v12;
    v15 = *(_QWORD *)(v8 + 1008);
    v20[2] = v13;
    v16 = *(__int64 **)(v15 + 40);
    v17 = *(_QWORD *)(v15 + 48);
    v21 = _mm_unpacklo_epi64(v14, v14);
    v18 = &v16[v17];
    if ( v16 == v18 )
    {
LABEL_11:
      v19 = 0;
    }
    else
    {
      while ( 1 )
      {
        v19 = *v16;
        if ( *v16 )
        {
          if ( a3 == *(_QWORD *)(v19 + 8) || a3 == *(_QWORD *)(v19 + 16) )
            break;
        }
        if ( v18 == ++v16 )
          goto LABEL_11;
      }
    }
    return sub_38F640(a1, v8, v19, (__int64)v20, 1, (a4 & 1) == 0);
  }
}

