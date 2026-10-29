__int64 __fastcall sub_28A2A0(_QWORD *a1, __int64 a2, __m128 a3)
{
  __m128i *v3; // rbp
  __int64 v4; // r15
  __int32 v5; // eax
  unsigned int v6; // r12d
  int v8; // eax
  __int64 v9; // r14
  __int32 v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int32 v13; // [rsp+4h] [rbp-54h]
  int tinfo_size; // [rsp+8h] [rbp-50h]

  if ( *(int *)(a1[8] + 56LL) <= 4 )
    return 0;
  v3 = *(__m128i **)(a2 + 24);
  v4 = a2;
  v5 = v3->m128i_i32[2];
  if ( v5 == 48 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(v3[1].m128i_i64[1] + 8);
    v3 = (__m128i *)v3[1].m128i_i64[1];
    if ( v8 != 35 )
      return 0;
LABEL_7:
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
      v9 = v3[1].m128i_i64[1];
    else
      v9 = v3[2].m128i_i64[0];
    if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFFB) == 0x30 )
      return 0;
    v6 = sub_2567C0(v9);
    if ( (_BYTE)v6 )
      return 0;
    v10 = *(_DWORD *)(v4 + 12);
    v13 = v3->m128i_i32[3];
    if ( v13 == -1 )
    {
      *(_DWORD *)(v4 + 12) = -1;
      v13 = v10;
    }
    else
    {
      if ( v10 != -1 )
        return 0;
      v3->m128i_i32[3] = -1;
    }
    if ( v13 == -2 )
      return 0;
    get_tinfo_property();
    if ( !(unsigned int)verify_tinfo() )
    {
      if ( v4 == a2 )
      {
LABEL_22:
        v11 = v3[1].m128i_i64[1];
        v3->m128i_i32[2] = 58;
        if ( v11 != v9 )
        {
          a3 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(v3 + 2), (__m128i)(unsigned __int64)v11);
          *(__m128 *)((char *)v3 + 24) = a3;
        }
        v12 = v3[3].m128i_i64[0];
        v3[3].m128i_i64[0] = *(_QWORD *)(v4 + 48);
        *(_QWORD *)(v4 + 48) = v12;
        v3->m128i_i64[0] = *(_QWORD *)v4;
        v3->m128i_i32[3] = v13;
        sub_255850((__int64 *)v4, (__int64)v3, *(double *)a3.m128_u64);
        sub_2441C0(v4, *(_QWORD *)(a1[9] + 112LL), 0, *(double *)a3.m128_u64);
        v6 = 1;
        goto LABEL_25;
      }
      if ( !(unsigned __int8)sub_245010(*(_QWORD *)(a1[2] + 8LL * a1[3] - 8), a2) )
      {
        tinfo_size = get_tinfo_size();
        if ( tinfo_size <= (int)get_tinfo_property()
          && (get_tinfo_property() & 0xF) != 0xB
          && (get_tinfo_property() & 0xF) != 0xB )
        {
          *(_DWORD *)(a2 + 8) = 48;
          goto LABEL_22;
        }
      }
    }
LABEL_25:
    clear_tinfo_t();
    return v6;
  }
  if ( v5 == 35 )
    goto LABEL_7;
  return 0;
}

