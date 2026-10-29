__int64 __fastcall sub_639F0(__int64 a1)
{
  unsigned int v1; // r14d
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // rsi
  int v9; // r12d
  unsigned int *v10; // rbx
  unsigned int *v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rdi
  __int64 v20; // r14
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rdi
  bool v24; // dl
  _DWORD *v25; // rax
  __m128i v26; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-C8h]
  __int128 v29; // [rsp+38h] [rbp-C0h]
  _QWORD v30[3]; // [rsp+50h] [rbp-A8h] BYREF
  char v31; // [rsp+68h] [rbp-90h]
  __int64 v32; // [rsp+70h] [rbp-88h]
  _QWORD v33[2]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v34[2]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-60h]
  __int128 v36; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-40h]

  v1 = 0;
  v37 = __readfsqword(0x28u);
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4A8498), (__m128i)(unsigned __int64)v30);
  while ( 1 )
  {
    v31 = 0;
    v32 = a1;
    v30[0] = off_4A8438;
    v3 = *(_DWORD *)(a1 + 64);
    v30[1] = 0;
    v30[2] = 0;
    v33[0] = 0;
    v33[1] = 0;
    v34[0] = 0;
    v34[1] = 0;
    v35 = 0;
    v36 = 0;
    sub_5D900(v34, 0, v3 - 1);
    v4 = v36;
    v5 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v5 = v35;
      v4 = v36;
    }
    *(_DWORD *)(v5 + 4 * v4) = 0;
    v6 = v36 + 1;
    *(_QWORD *)&v36 = v36 + 1;
    for ( i = *(_QWORD *)(v32 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      while ( (*(_BYTE *)(i + 26) & 1) == 0 )
      {
        i = *(_QWORD *)(i + 8);
        if ( !i )
          goto LABEL_11;
      }
      v8 = v35;
      v9 = *(_DWORD *)(i + 72);
      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v6 + 1) )
      {
        v35 = qvector_reserve();
        v6 = v36;
        v8 = v35;
      }
      *(_DWORD *)(v8 + 4 * v6) = v9;
      v6 = v36 + 1;
      *(_QWORD *)&v36 = v36 + 1;
    }
LABEL_11:
    v10 = (unsigned int *)v35;
    v11 = (unsigned int *)(v35 + 4 * v6);
    if ( v11 != (unsigned int *)v35 )
    {
      do
      {
        v12 = *v10;
        v13 = sub_60B60((_QWORD *)a1);
        sub_69010(v30, v13, v12, 0);
        ++v10;
      }
      while ( v11 != v10 );
    }
    if ( (unsigned __int8)sub_5E300(v33) && (unsigned __int8)sub_5E300(v34) )
    {
      v16 = v35;
      goto LABEL_24;
    }
    if ( (unsigned __int8)sub_5E200(v34, v33) )
    {
      if ( !under_debugger )
        sub_37B760(51923);
LABEL_48:
      BUG();
    }
    v14 = _mm_load_si128(&v26);
    v28 = 0;
    v29 = 0;
    v15 = *(int *)(v32 + 64);
    v27 = v14;
    if ( v15 )
    {
      v28 = qvector_reserve();
      memset((void *)(v28 + 4 * v29), 0, 4 * (v15 - v29));
      v19 = v27.m128i_i64[1];
      *(_QWORD *)&v29 = v15;
      if ( *(int *)(*(_QWORD *)(v27.m128i_i64[1] + 32) + 64LL) > 0 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          if ( sub_5E3B0((_QWORD *)(v19 + 40), v20) )
          {
            *(_DWORD *)(v28 + 4 * v20) = -1;
            v22 = *(_QWORD *)(v27.m128i_i64[1] + 32);
            if ( (unsigned int)v20 >= *(_DWORD *)(v22 + 64) )
            {
              if ( !under_debugger )
                sub_37B760(52719);
              goto LABEL_48;
            }
            v23 = *(_QWORD *)(*(_QWORD *)(v22 + 528) + 8LL * (unsigned int)v20);
            if ( *(_QWORD *)(v23 + 48) )
            {
              if ( !under_debugger )
                sub_37B760(51922);
              goto LABEL_48;
            }
            sub_60370(v23);
            ++v21;
          }
          else
          {
            v24 = sub_5E3B0((_QWORD *)(v27.m128i_i64[1] + 56), v20);
            v25 = (_DWORD *)(v28 + 4 * v20);
            if ( v24 )
            {
              *v25 = -1;
              ++v21;
            }
            else
            {
              *v25 = v20 - v21;
            }
          }
          v19 = v27.m128i_i64[1];
          ++v20;
        }
        while ( *(_DWORD *)(*(_QWORD *)(v27.m128i_i64[1] + 32) + 64LL) > (int)v20 );
      }
    }
    v1 = sub_621D0(a1, &v27);
    v27.m128i_i64[0] = (__int64)&off_4A8468;
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    v16 = v35;
    if ( !(_BYTE)v1 )
      break;
    v30[0] = off_4A8438;
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree();
    }
    qfree();
    qfree();
    v30[0] = off_4A8358;
    qfree();
  }
  v1 = 1;
LABEL_24:
  v30[0] = off_4A8438;
  if ( v16 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  qfree();
  qfree();
  v30[0] = off_4A8358;
  qfree();
  if ( (_BYTE)v1 )
  {
    v17 = *(_QWORD *)(a1 + 784);
    if ( v17 )
      *(_DWORD *)(v17 + 48) = 63;
    sub_60A20(a1, 1u, (__int64)"after remove_empty_and_unreachable_blocks()");
  }
  return v1;
}

