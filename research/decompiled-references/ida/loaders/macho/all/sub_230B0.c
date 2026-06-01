__int64 __fastcall sub_230B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r13
  int v8; // eax
  const __m128i *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-190h]
  __int64 v21; // [rsp+18h] [rbp-188h]
  __int64 v22; // [rsp+20h] [rbp-180h]
  __int128 v23; // [rsp+28h] [rbp-178h]
  __int128 v24; // [rsp+38h] [rbp-168h]
  __int128 v25; // [rsp+48h] [rbp-158h]
  __int128 v26; // [rsp+58h] [rbp-148h]
  __int128 v27; // [rsp+68h] [rbp-138h]
  __int128 v28; // [rsp+78h] [rbp-128h]
  __int128 v29; // [rsp+88h] [rbp-118h]
  __int64 v30; // [rsp+98h] [rbp-108h]
  __int128 v31; // [rsp+A0h] [rbp-100h]
  __int64 v32; // [rsp+B0h] [rbp-F0h]
  __int128 v33; // [rsp+B8h] [rbp-E8h]
  __int64 v34; // [rsp+C8h] [rbp-D8h]
  int v35; // [rsp+D0h] [rbp-D0h]
  __int64 v36; // [rsp+D8h] [rbp-C8h]
  __int64 v37; // [rsp+E0h] [rbp-C0h]
  int v38; // [rsp+E8h] [rbp-B8h]
  __int128 v39; // [rsp+F0h] [rbp-B0h]
  __int64 v40; // [rsp+100h] [rbp-A0h]
  __int128 v41; // [rsp+108h] [rbp-98h]
  __int64 v42; // [rsp+118h] [rbp-88h]
  __int128 v43; // [rsp+120h] [rbp-80h]
  __int64 v44; // [rsp+130h] [rbp-70h]
  __int128 v45; // [rsp+138h] [rbp-68h]
  __int128 v46; // [rsp+148h] [rbp-58h]
  __int128 v47; // [rsp+158h] [rbp-48h]
  __int64 v48; // [rsp+168h] [rbp-38h]
  unsigned __int64 v49; // [rsp+178h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 48);
  v49 = __readfsqword(0x28u);
  v6 = a2 & *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  if ( (!*(_QWORD *)(a1 + 16) || rangeset_t_find_range())
    && (unsigned __int8)is_loaded()
    && !(unsigned __int8)is_spec_ea() )
  {
    if ( (debug & 0x10) != 0 )
      sub_191F0((__int64)"applying slide to 0x%08llX...\n", a2);
    if ( !*(_BYTE *)(a1 + 65) )
    {
      v8 = *(_DWORD *)(a1 + 68) + 1;
      *(_DWORD *)(a1 + 68) = v8;
      if ( v8 == 100000 )
      {
        sub_19440((__int64)"%s (%llX)");
        *(_DWORD *)(a1 + 68) = 0;
      }
    }
    v9 = *(const __m128i **)(a1 + 48);
    v10 = v9->m128i_i64[1];
    v11 = *(_QWORD *)(v10 + 16) & (a3 - *(_QWORD *)(a1 + 56));
    if ( (v9[855].m128i_i8[9] & 8) == 0 )
    {
      if ( *(_BYTE *)(a1 + 64) )
        patch_qword();
      else
        patch_dword();
      v9 = *(const __m128i **)(a1 + 48);
      v10 = v9->m128i_i64[1];
    }
    v12 = _mm_loadl_epi64(v9);
    v13 = (__m128i)(unsigned __int64)v10;
    v14 = *(unsigned __int8 *)(a1 + 64);
    v20 = 0;
    v21 = 0;
    v19 = _mm_unpacklo_epi64(v12, v13);
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v22 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v35 = -1;
    v36 = 0;
    v37 = -1;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v48 = 0;
    v39 = -1;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v46 = 0;
    v47 = 0;
    sub_1DF00((__int64)v9, (__int64)&v19, v6, v11, v14 + 2, 0, 0, 0);
    v15 = v44;
    if ( v44 )
    {
      v16 = v45;
      if ( (_QWORD)v45 )
      {
        v17 = 0;
        do
        {
          v18 = (_QWORD *)(v15 + 24 * v17);
          if ( *v18 )
          {
            v18[1] = 0;
            qfree();
            v15 = v44;
          }
          ++v17;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)&v45 = 0;
      qfree();
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree();
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    if ( *((_QWORD *)&v28 + 1) )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
  }
  return 0;
}

