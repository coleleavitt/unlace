unsigned __int64 __fastcall sub_E800(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  char *v10; // r15
  __int64 v11; // r9
  void *v12; // rax
  const void *v13; // rsi
  char v14; // al
  __int64 v15; // rax
  char *v16; // r12
  __int64 v17; // rdi
  void *v18; // rax
  const void *v19; // rsi
  __int64 v20; // [rsp+10h] [rbp-258h]
  char v21; // [rsp+10h] [rbp-258h]
  __int64 n; // [rsp+18h] [rbp-250h]
  unsigned __int64 v23; // [rsp+20h] [rbp-248h]
  unsigned __int64 v24; // [rsp+38h] [rbp-230h] BYREF
  __int128 v25; // [rsp+40h] [rbp-228h] BYREF
  __int64 v26; // [rsp+50h] [rbp-218h]
  __int128 v27; // [rsp+58h] [rbp-210h]
  __int64 v28; // [rsp+68h] [rbp-200h]
  __m128i si128; // [rsp+70h] [rbp-1F8h]
  __int128 v30; // [rsp+80h] [rbp-1E8h]
  __int64 v31; // [rsp+90h] [rbp-1D8h]
  __int128 v32; // [rsp+98h] [rbp-1D0h]
  __int128 v33; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-1A8h]
  __int128 v35; // [rsp+C8h] [rbp-1A0h]
  __int64 v36; // [rsp+D8h] [rbp-190h]
  __int128 v37; // [rsp+E0h] [rbp-188h]
  int v38; // [rsp+F0h] [rbp-178h]
  __int64 v39; // [rsp+F8h] [rbp-170h]
  __int128 v40; // [rsp+100h] [rbp-168h]
  __int64 v41; // [rsp+110h] [rbp-158h]
  __int128 v42; // [rsp+118h] [rbp-150h]
  void *v43; // [rsp+130h] [rbp-138h] BYREF
  __int128 v44; // [rsp+138h] [rbp-130h]
  __int64 v45; // [rsp+148h] [rbp-120h]
  int v46; // [rsp+150h] [rbp-118h]
  __int64 v47; // [rsp+158h] [rbp-110h]
  _BYTE v48[192]; // [rsp+160h] [rbp-108h] BYREF
  char v49; // [rsp+220h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+228h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !sub_4ED0(a1 + 120, 6u, a2) && (!*(_QWORD *)(a1 + 128) || !rangeset_t_find_range()) )
  {
    v4 = getseg();
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 368);
      v23 = *(_QWORD *)(v4 + 8) - a2;
      if ( v23 >= 2 * v5 )
      {
        if ( (unsigned __int8)sub_BB70(a1, (__int64 *)&v24, a2 + v5) )
        {
          v6 = *(_QWORD *)(a1 + 128);
          v43 = 0;
          v44 = 0;
          if ( v6 )
          {
            v18 = (void *)qalloc_or_throw();
            v19 = *(const void **)(a1 + 120);
            *((_QWORD *)&v44 + 1) = v6;
            v43 = v18;
            memcpy(v18, v19, 16 * v6);
            *(_QWORD *)&v44 = v6;
          }
          v7 = *(_QWORD *)(a1 + 160);
          v8 = a1 + 168;
          v45 = 0;
          v9 = 7;
          v46 = -1;
          v47 = v7;
          v10 = v48;
          do
          {
            v11 = *(_QWORD *)(v8 + 8);
            *(_QWORD *)v10 = 0;
            *(_OWORD *)(v10 + 8) = 0;
            if ( v11 )
            {
              v20 = v11;
              n = 8 * v11;
              v12 = (void *)qalloc_or_throw();
              v13 = *(const void **)v8;
              *(_QWORD *)v10 = v12;
              *((_QWORD *)v10 + 2) = v20;
              memcpy(v12, v13, n);
              *((_QWORD *)v10 + 1) = v20;
            }
            --v9;
            v10 += 24;
            v8 += 24;
          }
          while ( &v49 != v10 );
          v14 = *(_BYTE *)(a1 + 360);
          v34 = 0;
          v36 = a1;
          v49 = v14;
          v38 = 0;
          v39 = 0;
          v41 = 0;
          v33 = 0;
          v35 = 0;
          v37 = -1;
          v40 = 0;
          v42 = 0;
          if ( (unsigned __int8)sub_CC60(&v33, (__int64)&v43, v24, 0)
            || (v15 = *(_QWORD *)(a1 + 368), v23 >= 3 * v15)
            && (unsigned __int8)sub_BB70(a1, (__int64 *)&v24, a2 + v15)
            && (unsigned __int8)sub_CC60(&v33, (__int64)&v43, v24, 0) )
          {
            v28 = a1;
            v26 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
            v31 = 0;
            v21 = (v38 & 0xA) != 0;
            v25 = 0;
            v27 = 0;
            v30 = -1;
            v32 = 0;
            if ( (unsigned __int8)sub_DA90((__int64 *)&v25, (__int64)&v43, a2, 0, v21) )
              sub_DA90((__int64 *)&v25, a1 + 120, a2, 0x30u, v21);
            if ( v31 )
            {
              *(_QWORD *)&v32 = 0;
              qfree();
            }
            if ( v26 )
            {
              *(_QWORD *)&v27 = 0;
              qfree();
            }
          }
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree();
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree();
          }
          v16 = &v49;
          do
          {
            v17 = *((_QWORD *)v16 - 3);
            v16 -= 24;
            if ( v17 )
            {
              *((_QWORD *)v16 + 1) = 0;
              qfree();
            }
          }
          while ( v16 != v48 );
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree();
          }
        }
      }
    }
  }
  return v50 - __readfsqword(0x28u);
}
