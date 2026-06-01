__int64 __fastcall sub_2BD7D0(__int64 a1, __int64 a2, char a3, unsigned int *a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __m128i v25; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-B8h]
  __int128 v27; // [rsp+28h] [rbp-B0h]
  __int64 v28; // [rsp+40h] [rbp-98h] BYREF
  __int128 v29; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+60h] [rbp-78h] BYREF
  __int128 v31; // [rsp+68h] [rbp-70h]
  __int64 v32; // [rsp+80h] [rbp-58h] BYREF
  __int128 v33; // [rsp+88h] [rbp-50h]
  unsigned __int64 v34; // [rsp+98h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a5 == 4 )
  {
    v17 = *a4;
    v6 = 1;
    sub_2AEE30(a1, a2, 0);
    v32 = v17;
    netnode_supset();
    return v6;
  }
  v6 = 0;
  v7 = a3 & 0x3F;
  if ( (a3 & 0x3F) == 0 )
  {
    v26 = 0;
    v27 = 0;
    sub_2AEE30(a1, a2, 0);
    if ( netnode_qgetblob() > 0 )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v30 = 0;
      v25 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(v26 + (unsigned __int64)v27));
      v6 = sub_2BD560(v9, &v28, (__int64)&v25, &v30);
      if ( (_BYTE)v6 )
      {
        if ( (_QWORD)v31 != (_QWORD)v29 )
        {
          if ( !under_debugger )
            sub_37B760(52687);
          BUG();
        }
        v32 = 0;
        v33 = 0;
        sub_2B58C0(&v32, (__int64)&v28, &v30);
        sub_2AEE30(a1, a2, 1);
        netnode_setblob();
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree();
        }
        v10 = v30;
        if ( v30 )
        {
          v11 = v31;
          if ( (_QWORD)v31 )
          {
            v12 = 0;
            do
            {
              v13 = 3 * v12++;
              sub_2AF9B0((_QWORD *)(16 * v13 + v10));
              v10 = v30;
            }
            while ( v11 != v12 );
          }
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        v14 = v28;
        if ( v28 )
        {
          v15 = v29;
          if ( (_QWORD)v29 )
          {
            do
            {
              v16 = (_QWORD *)(v14 + 80 * v7);
              clear_tinfo_t();
              if ( v16[5] )
              {
                v16[6] = 0;
                qfree();
              }
              if ( v16[2] )
              {
                v16[3] = 0;
                qfree();
              }
              ++v7;
              cleanup_argloc();
              v14 = v28;
            }
            while ( v15 != v7 );
          }
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        goto LABEL_6;
      }
      v18 = v30;
      if ( v30 )
      {
        v19 = v31;
        if ( (_QWORD)v31 )
        {
          v20 = 0;
          do
          {
            v21 = 3 * v20++;
            sub_2AF9B0((_QWORD *)(16 * v21 + v18));
            v18 = v30;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      v22 = v28;
      if ( v28 )
      {
        v23 = v29;
        if ( (_QWORD)v29 )
        {
          do
          {
            v24 = (_QWORD *)(v22 + 80 * v7);
            clear_tinfo_t();
            if ( v24[5] )
            {
              v24[6] = 0;
              qfree();
            }
            if ( v24[2] )
            {
              v24[3] = 0;
              qfree();
            }
            ++v7;
            cleanup_argloc();
            v22 = v28;
          }
          while ( v23 != v7 );
        }
        *(_QWORD *)&v29 = 0;
        qfree();
      }
    }
    v6 = 0;
LABEL_6:
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
  }
  return v6;
}

