__int64 __fastcall sub_255050(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // r13
  __int64 v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rdi
  _QWORD *k; // rbp
  __int64 v15; // r12
  _QWORD *m; // rbp
  __int64 v17; // r12
  _QWORD *i; // rbp
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // r12
  _QWORD *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 *v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 j; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 70);
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 'F':
    case 'N':
    case 'O':
      goto LABEL_5;
    case 'G':
      v6 = *(_QWORD **)(a1 + 24);
      if ( !v6 )
        goto LABEL_5;
      for ( i = (_QWORD *)*v6; v6 != i; --v6[2] )
      {
        v19 = (__int64)i;
        i = (_QWORD *)*i;
        **(_QWORD **)(v19 + 8) = i;
        i[1] = *(_QWORD *)(v19 + 8);
        sub_255050(v19 + 16);
        qfree(v19);
      }
      goto LABEL_23;
    case 'H':
      v20 = *(_QWORD *)(a1 + 24);
      if ( v20 )
        goto LABEL_29;
      goto LABEL_5;
    case 'I':
      v21 = *(_QWORD *)(a1 + 24);
      if ( !v21 )
        goto LABEL_5;
      v22 = *(_QWORD *)(v21 + 64);
      if ( v22 )
      {
        sub_255050(*(_QWORD *)(v21 + 64));
        j__qfree(v22);
      }
      v23 = *(_QWORD *)(v21 + 72);
      if ( v23 )
      {
        sub_255050(*(_QWORD *)(v21 + 72));
        j__qfree(v23);
      }
      goto LABEL_47;
    case 'J':
      v21 = *(_QWORD *)(a1 + 24);
      if ( !v21 )
        goto LABEL_5;
      sub_255630(v21 + 136);
      clear_tinfo_t();
      sub_255630(v21 + 72);
      clear_tinfo_t();
      v24 = *(_QWORD *)(v21 + 64);
      if ( v24 )
      {
        sub_255050(*(_QWORD *)(v21 + 64));
        j__qfree(v24);
      }
      goto LABEL_47;
    case 'K':
      v21 = *(_QWORD *)(a1 + 24);
      if ( !v21 )
        goto LABEL_5;
      v25 = *(_QWORD *)(v21 + 64);
      if ( v25 )
      {
        sub_255050(*(_QWORD *)(v21 + 64));
        j__qfree(v25);
      }
      goto LABEL_47;
    case 'L':
      v21 = *(_QWORD *)(a1 + 24);
      if ( !v21 )
        goto LABEL_5;
      v26 = *(_QWORD *)(v21 + 64);
      if ( v26 )
      {
        sub_255050(*(_QWORD *)(v21 + 64));
        j__qfree(v26);
      }
LABEL_47:
      sub_255630(v21);
      clear_tinfo_t();
      result = j__qfree(v21);
      goto LABEL_5;
    case 'M':
      v27 = *(_QWORD **)(a1 + 24);
      if ( v27 )
      {
        v28 = v27[14];
        if ( v28 )
        {
          v29 = v27[15];
          if ( v29 )
          {
            v30 = 0;
            v31 = 0;
            do
            {
              v32 = v28 + v30;
              v33 = *(_QWORD *)(v28 + v30 + 32);
              if ( v33 )
              {
                *(_QWORD *)(v32 + 40) = 0;
                qfree(v33);
              }
              ++v31;
              v30 += 56;
              sub_255050(v32);
              v28 = v27[14];
            }
            while ( v29 != v31 );
          }
          v27[15] = 0;
          qfree(v28);
        }
        v34 = v27[10];
        if ( v34 )
        {
          v27[11] = 0;
          qfree(v34);
        }
        sub_255630((__int64)v27);
        clear_tinfo_t();
        result = j__qfree((__int64)v27);
      }
      goto LABEL_5;
    case 'P':
      v20 = *(_QWORD *)(a1 + 24);
      if ( v20 )
      {
LABEL_29:
        sub_255630(*(_QWORD *)(a1 + 24));
        clear_tinfo_t();
        result = j__qfree(v20);
      }
      goto LABEL_5;
    case 'Q':
      v5 = *(_QWORD *)(a1 + 24);
      if ( !v5 )
        goto LABEL_5;
      goto LABEL_4;
    case 'R':
      v35 = *(__int64 **)(a1 + 24);
      if ( v35 )
      {
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
        }
        result = qfree((__int64)v35);
      }
      goto LABEL_5;
    case 'S':
      v6 = *(_QWORD **)(a1 + 24);
      if ( v6 )
      {
        v7 = v6[3];
        if ( v7 )
        {
          v39 = v6[4];
          if ( v39 )
          {
            for ( j = 0; j != v39; ++j )
            {
              v8 = (_QWORD *)(v7 + 48 * j);
              v9 = v8[3];
              if ( v9 )
              {
                v37 = v8[4];
                if ( v37 )
                {
                  v10 = 0;
                  v11 = 0;
                  do
                  {
                    v12 = v9 + v10;
                    v13 = *(_QWORD *)(v9 + v10 + 64);
                    if ( v13 )
                    {
                      *(_QWORD *)(v12 + 72) = 0;
                      qfree(v13);
                    }
                    ++v11;
                    v10 += 88;
                    sub_255630(v12);
                    clear_tinfo_t();
                    v9 = v8[3];
                  }
                  while ( v37 != v11 );
                }
                v8[4] = 0;
                qfree(v9);
              }
              for ( k = (_QWORD *)*v8; v8 != k; --v8[2] )
              {
                v15 = (__int64)k;
                k = (_QWORD *)*k;
                **(_QWORD **)(v15 + 8) = k;
                k[1] = *(_QWORD *)(v15 + 8);
                sub_255050(v15 + 16);
                qfree(v15);
              }
              v7 = v6[3];
            }
          }
          v6[4] = 0;
          qfree(v7);
        }
        for ( m = (_QWORD *)*v6; v6 != m; --v6[2] )
        {
          v17 = (__int64)m;
          m = (_QWORD *)*m;
          **(_QWORD **)(v17 + 8) = m;
          m[1] = *(_QWORD *)(v17 + 8);
          sub_255050(v17 + 16);
          qfree(v17);
        }
LABEL_23:
        result = qfree((__int64)v6);
      }
      goto LABEL_5;
    case 'T':
      v4 = *(_QWORD *)(a1 + 24);
      if ( !v4 )
        goto LABEL_5;
      sub_255630(*(_QWORD *)(a1 + 24));
      clear_tinfo_t();
      v5 = v4;
LABEL_4:
      result = j__qfree(v5);
LABEL_5:
      *(_DWORD *)(a1 + 8) = 70;
      *(_QWORD *)(a1 + 24) = 0;
      return result;
    default:
      if ( !under_debugger )
        sub_383060(0xC390u, a2);
      BUG();
  }
}

