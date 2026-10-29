char __fastcall sub_34320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char result; // al
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __m128i v19; // xmm0
  unsigned __int64 v20; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  _OWORD v23[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  result = 1;
  v24 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 176);
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a1 + 104);
    if ( v8 == -1 )
    {
      sub_65BB0(
        *(_QWORD *)(a1 + 8),
        (unsigned int)"parsing cache header: version=%d, shared_cache_base_address=%a, shared_cache_slide=%a\n",
        *(_DWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 160),
        *(_QWORD *)(a1 + 152),
        a6);
      v18 = *(_QWORD *)(a1 + 160);
      v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)(a1 + 168));
      DWORD2(v23[0]) = 1;
      *(_QWORD *)&v23[0] = &off_8C298;
      v23[1] = v19;
      sub_33FC0(a1, (__int64)v23, v18);
    }
    else
    {
      v10 = *(int *)(a1 + 20);
      v11 = *(_QWORD *)(a1 + 8);
      v20 = 0;
      if ( v10 != (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                    v11,
                    v8,
                    &v20,
                    v10,
                    0) )
        return 0;
      v12 = *(int *)(a1 + 20);
      v13 = v12 + *(_QWORD *)(a1 + 104);
      if ( v20 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(a1 + 8);
          v21 = 0;
          if ( v12 != (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, __int64, _QWORD))(*(_QWORD *)v17 + 288LL))(
                        v17,
                        v13,
                        &v21,
                        v12,
                        0) )
            break;
          v14 = *(_QWORD *)(a1 + 8);
          v15 = *(int *)(a1 + 20);
          v22 = 0;
          if ( v15 != (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v14 + 288LL))(
                        v14,
                        v15 + v13,
                        &v22,
                        v15,
                        0) )
            break;
          v16 = *(_QWORD *)(a1 + 8);
          ++v7;
          v23[0] = _mm_unpacklo_epi64((__m128i)v21, (__m128i)(v21 + v22));
          sub_1C950(v16, (__int64)"shared cache range: %a..%a\n");
          rangeset_t_add();
          v12 = *(int *)(a1 + 20);
          v13 += 2 * (int)v12;
          if ( v7 >= v20 )
            return *(_QWORD *)(a1 + 176) != 0;
        }
        return 0;
      }
    }
    return *(_QWORD *)(a1 + 176) != 0;
  }
  return result;
}

