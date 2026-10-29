__int64 __fastcall sub_69F70(__int64 a1)
{
  unsigned int v1; // r14d
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 i; // rbx
  int v9; // r12d
  int *v10; // rbx
  int *v11; // r12
  int v12; // r15d
  __m128i v13; // xmm1
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // r14
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdi
  bool v23; // dl
  _DWORD *v24; // rax
  __m128i v25; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v26; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-C0h]
  __int64 (__fastcall **v29)(); // [rsp+50h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A0h]
  __int64 v31; // [rsp+60h] [rbp-98h]
  char v32; // [rsp+68h] [rbp-90h]
  __int64 v33; // [rsp+70h] [rbp-88h]
  __int64 v34[2]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v35[2]; // [rsp+88h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+98h] [rbp-60h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v1 = 0;
  v38 = __readfsqword(0x28u);
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DBC58), (__m128i)(unsigned __int64)&v29);
  while ( 1 )
  {
    v32 = 0;
    v33 = a1;
    v29 = off_4DBBF8;
    v3 = *(_DWORD *)(a1 + 64);
    v30 = 0;
    v31 = 0;
    v34[0] = 0;
    v34[1] = 0;
    v35[0] = 0;
    v35[1] = 0;
    v36 = nullptr;
    v37 = 0;
    sub_63E80(v35, 0, v3 - 1, 0.0);
    v5 = v37;
    v6 = v36;
    if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
    {
      v36 = (__int64 *)qvector_reserve((__int64)&v36, (__int64)v36, v37 + 1, 4);
      v6 = v36;
      v5 = v37;
    }
    *((_DWORD *)v6 + v5) = 0;
    v7 = v37 + 1;
    *(_QWORD *)&v37 = v37 + 1;
    for ( i = *(_QWORD *)(v33 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      while ( (*(_BYTE *)(i + 26) & 1) == 0 )
      {
        i = *(_QWORD *)(i + 8);
        if ( !i )
          goto LABEL_11;
      }
      v6 = v36;
      v9 = *(_DWORD *)(i + 72);
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v7 + 1) )
      {
        v36 = (__int64 *)qvector_reserve((__int64)&v36, (__int64)v36, v7 + 1, 4);
        v7 = v37;
        v6 = v36;
      }
      *((_DWORD *)v6 + v7) = v9;
      v7 = v37 + 1;
      *(_QWORD *)&v37 = v37 + 1;
    }
LABEL_11:
    v10 = (int *)v36;
    v11 = (int *)v36 + v7;
    if ( v11 != (int *)v36 )
    {
      do
      {
        v12 = *v10;
        v6 = (__int64 *)sub_670E0((_QWORD *)a1, (__int64)v6, v7, v4);
        sub_6F590((__int64 *)&v29, v6, v12, 0);
        ++v10;
      }
      while ( v11 != v10 );
    }
    if ( (unsigned __int8)sub_64880(v34) && (unsigned __int8)sub_64880(v35) )
    {
      v15 = (__int64)v36;
      goto LABEL_24;
    }
    if ( (unsigned __int8)sub_64780(v35, v34) )
    {
      if ( !under_debugger )
        sub_383060(0xCAD3u, 0.0);
LABEL_48:
      BUG();
    }
    v13 = _mm_load_si128(&v25);
    v27 = 0;
    v28 = 0;
    v14 = *(int *)(v33 + 64);
    v26 = v13;
    if ( v14 )
    {
      v27 = qvector_reserve((__int64)&v27, 0, v14, 4);
      memset((void *)(v27 + 4 * v28), 0, 4 * (v14 - v28));
      v18 = v26.m128i_i64[1];
      *(_QWORD *)&v28 = v14;
      if ( *(int *)(*(_QWORD *)(v26.m128i_i64[1] + 32) + 64LL) > 0 )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          if ( sub_64930((_QWORD *)(v18 + 40), v19) )
          {
            *(_DWORD *)(v27 + 4 * v19) = -1;
            v21 = *(_QWORD *)(v26.m128i_i64[1] + 32);
            if ( (unsigned int)v19 >= *(_DWORD *)(v21 + 64) )
            {
              if ( !under_debugger )
                sub_383060(0xCDEFu, 0.0);
              goto LABEL_48;
            }
            v22 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8LL * (unsigned int)v19);
            if ( *(_QWORD *)(v22 + 48) )
            {
              if ( !under_debugger )
                sub_383060(0xCAD2u, 0.0);
              goto LABEL_48;
            }
            sub_668F0(v22, 0.0);
            ++v20;
          }
          else
          {
            v23 = sub_64930((_QWORD *)(v26.m128i_i64[1] + 56), v19);
            v24 = (_DWORD *)(v27 + 4 * v19);
            if ( v23 )
            {
              *v24 = -1;
              ++v20;
            }
            else
            {
              *v24 = v19 - v20;
            }
          }
          v18 = v26.m128i_i64[1];
          ++v19;
        }
        while ( *(_DWORD *)(*(_QWORD *)(v26.m128i_i64[1] + 32) + 64LL) > (int)v19 );
      }
    }
    v1 = sub_68750(a1, &v26);
    v26.m128i_i64[0] = (__int64)&off_4DBC28;
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    v15 = (__int64)v36;
    if ( !(_BYTE)v1 )
      break;
    v29 = off_4DBBF8;
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree((__int64)v36);
    }
    qfree(v35[0]);
    qfree(v34[0]);
    v29 = off_4DBB18;
    qfree(v30);
  }
  v1 = 1;
LABEL_24:
  v29 = off_4DBBF8;
  if ( v15 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v15);
  }
  qfree(v35[0]);
  qfree(v34[0]);
  v29 = off_4DBB18;
  qfree(v30);
  if ( (_BYTE)v1 )
  {
    v16 = *(_QWORD *)(a1 + 784);
    if ( v16 )
      *(_DWORD *)(v16 + 48) = 63;
    sub_66FA0(a1, 1);
  }
  return v1;
}

