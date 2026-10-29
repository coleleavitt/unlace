__int64 __fastcall sub_2C4B50(__int64 a1, __int64 a2, char a3, unsigned int *a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i v30; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+20h] [rbp-B8h]
  __int128 v32; // [rsp+28h] [rbp-B0h]
  __int64 v33; // [rsp+40h] [rbp-98h] BYREF
  __int128 v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-78h] BYREF
  __int128 v36; // [rsp+68h] [rbp-70h]
  __int64 v37; // [rsp+80h] [rbp-58h] BYREF
  __int128 v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a5 == 4 )
  {
    v20 = *a4;
    v6 = 1;
    sub_2B61B0(a1, a2, 0);
    v37 = v20;
    netnode_supset();
    return v6;
  }
  v6 = 0;
  v7 = a3 & 0x3F;
  if ( (a3 & 0x3F) == 0 )
  {
    v31 = 0;
    v32 = 0;
    sub_2B61B0(a1, a2, 0);
    if ( netnode_qgetblob() > 0 )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v33 = 0;
      v34 = 0;
      v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)(v31 + v32));
      v36 = 0;
      v35 = 0;
      v30 = v10;
      v6 = sub_2C48E0(v9, &v33, (__int64)&v30, &v35, *(double *)v10.m128i_i64);
      if ( (_BYTE)v6 )
      {
        if ( (_QWORD)v36 != (_QWORD)v34 )
        {
          if ( !under_debugger )
            sub_383060(0xCDCFu, *(double *)v10.m128i_i64);
          BUG();
        }
        v37 = 0;
        v38 = 0;
        sub_2BCC40(&v37, (__int64)&v33, &v35);
        sub_2B61B0(a1, a2, 1);
        netnode_setblob();
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        v11 = v35;
        if ( v35 )
        {
          v12 = v36;
          if ( (_QWORD)v36 )
          {
            v13 = 0;
            do
            {
              v14 = 3 * v13++;
              sub_2B6D30((__int64 *)(16 * v14 + v11));
              v11 = v35;
            }
            while ( v12 != v13 );
          }
          *(_QWORD *)&v36 = 0;
          qfree(v11);
        }
        v15 = v33;
        if ( v33 )
        {
          v16 = v34;
          if ( (_QWORD)v34 )
          {
            do
            {
              v17 = (_QWORD *)(v15 + 80 * v7);
              clear_tinfo_t();
              v18 = v17[5];
              if ( v18 )
              {
                v17[6] = 0;
                qfree(v18);
              }
              v19 = v17[2];
              if ( v19 )
              {
                v17[3] = 0;
                qfree(v19);
              }
              ++v7;
              cleanup_argloc();
              v15 = v33;
            }
            while ( v16 != v7 );
          }
          *(_QWORD *)&v34 = 0;
          qfree(v15);
        }
        goto LABEL_6;
      }
      v21 = v35;
      if ( v35 )
      {
        v22 = v36;
        if ( (_QWORD)v36 )
        {
          v23 = 0;
          do
          {
            v24 = 3 * v23++;
            sub_2B6D30((__int64 *)(16 * v24 + v21));
            v21 = v35;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v36 = 0;
        qfree(v21);
      }
      v25 = v33;
      if ( v33 )
      {
        v26 = v34;
        if ( (_QWORD)v34 )
        {
          do
          {
            v27 = (_QWORD *)(v25 + 80 * v7);
            clear_tinfo_t();
            v28 = v27[5];
            if ( v28 )
            {
              v27[6] = 0;
              qfree(v28);
            }
            v29 = v27[2];
            if ( v29 )
            {
              v27[3] = 0;
              qfree(v29);
            }
            ++v7;
            cleanup_argloc();
            v25 = v33;
          }
          while ( v26 != v7 );
        }
        *(_QWORD *)&v34 = 0;
        qfree(v25);
      }
    }
    v6 = 0;
LABEL_6:
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  return v6;
}

