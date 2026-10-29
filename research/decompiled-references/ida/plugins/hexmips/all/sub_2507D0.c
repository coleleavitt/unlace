__int64 __fastcall sub_2507D0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // r13
  __int64 v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r15
  _QWORD *k; // rbp
  _QWORD *v11; // r12
  _QWORD *m; // rbp
  _QWORD *v13; // r12
  _QWORD *v14; // r13
  _QWORD *i; // rbp
  _QWORD *v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rbp
  _QWORD *v24; // rbp
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 j; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 70);
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 'F':
    case 'N':
    case 'O':
      break;
    case 'G':
      v14 = *(_QWORD **)(a1 + 24);
      if ( !v14 )
        break;
      for ( i = (_QWORD *)*v14; v14 != i; --v14[2] )
      {
        v16 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v16[1] = i;
        i[1] = v16[1];
        sub_2507D0(v16 + 2);
        qfree();
      }
      goto LABEL_66;
    case 'H':
      if ( *(_QWORD *)(a1 + 24) )
        goto LABEL_29;
      break;
    case 'I':
      v17 = *(_QWORD *)(a1 + 24);
      if ( !v17 )
        break;
      if ( *(_QWORD *)(v17 + 64) )
      {
        sub_2507D0(*(_QWORD *)(v17 + 64));
        j__qfree();
      }
      if ( *(_QWORD *)(v17 + 72) )
      {
        sub_2507D0(*(_QWORD *)(v17 + 72));
        j__qfree();
      }
      goto LABEL_47;
    case 'J':
      v17 = *(_QWORD *)(a1 + 24);
      if ( !v17 )
        break;
      sub_250DB0(v17 + 136);
      clear_tinfo_t();
      sub_250DB0(v17 + 72);
      clear_tinfo_t();
      if ( *(_QWORD *)(v17 + 64) )
      {
        sub_2507D0(*(_QWORD *)(v17 + 64));
        j__qfree();
      }
      goto LABEL_47;
    case 'K':
      v17 = *(_QWORD *)(a1 + 24);
      if ( !v17 )
        break;
      if ( *(_QWORD *)(v17 + 64) )
      {
        sub_2507D0(*(_QWORD *)(v17 + 64));
        j__qfree();
      }
      goto LABEL_47;
    case 'L':
      v17 = *(_QWORD *)(a1 + 24);
      if ( !v17 )
        break;
      if ( *(_QWORD *)(v17 + 64) )
      {
        sub_2507D0(*(_QWORD *)(v17 + 64));
        j__qfree();
      }
LABEL_47:
      sub_250DB0(v17);
      clear_tinfo_t();
      result = j__qfree();
      break;
    case 'M':
      v18 = *(_QWORD **)(a1 + 24);
      if ( v18 )
      {
        v19 = v18[14];
        if ( v19 )
        {
          v20 = v18[15];
          if ( v20 )
          {
            v21 = 0;
            v22 = 0;
            do
            {
              v23 = v19 + v21;
              if ( *(_QWORD *)(v19 + v21 + 32) )
              {
                *(_QWORD *)(v23 + 40) = 0;
                qfree();
              }
              ++v22;
              v21 += 56;
              sub_2507D0(v23);
              v19 = v18[14];
            }
            while ( v20 != v22 );
          }
          v18[15] = 0;
          qfree();
        }
        if ( v18[10] )
        {
          v18[11] = 0;
          qfree();
        }
        sub_250DB0(v18);
        clear_tinfo_t();
        result = j__qfree();
      }
      break;
    case 'P':
      if ( *(_QWORD *)(a1 + 24) )
      {
LABEL_29:
        sub_250DB0(*(_QWORD *)(a1 + 24));
        clear_tinfo_t();
        result = j__qfree();
      }
      break;
    case 'Q':
      if ( !*(_QWORD *)(a1 + 24) )
        break;
      goto LABEL_4;
    case 'R':
      v24 = *(_QWORD **)(a1 + 24);
      if ( !v24 )
        break;
      if ( *v24 )
      {
        v24[1] = 0;
        qfree();
      }
      goto LABEL_66;
    case 'S':
      v3 = *(_QWORD **)(a1 + 24);
      if ( !v3 )
        break;
      v4 = v3[3];
      if ( v4 )
      {
        v27 = v3[4];
        if ( v27 )
        {
          for ( j = 0; j != v27; ++j )
          {
            v5 = (_QWORD *)(v4 + 48 * j);
            v6 = v5[3];
            if ( v6 )
            {
              v25 = v5[4];
              if ( v25 )
              {
                v7 = 0;
                v8 = 0;
                do
                {
                  v9 = v6 + v7;
                  if ( *(_QWORD *)(v6 + v7 + 64) )
                  {
                    *(_QWORD *)(v9 + 72) = 0;
                    qfree();
                  }
                  ++v8;
                  v7 += 88;
                  sub_250DB0(v9);
                  clear_tinfo_t();
                  v6 = v5[3];
                }
                while ( v25 != v8 );
              }
              v5[4] = 0;
              qfree();
            }
            for ( k = (_QWORD *)*v5; v5 != k; --v5[2] )
            {
              v11 = k;
              k = (_QWORD *)*k;
              *(_QWORD *)v11[1] = k;
              k[1] = v11[1];
              sub_2507D0(v11 + 2);
              qfree();
            }
            v4 = v3[3];
          }
        }
        v3[4] = 0;
        qfree();
      }
      for ( m = (_QWORD *)*v3; v3 != m; --v3[2] )
      {
        v13 = m;
        m = (_QWORD *)*m;
        *(_QWORD *)v13[1] = m;
        m[1] = v13[1];
        sub_2507D0(v13 + 2);
        qfree();
      }
LABEL_66:
      result = qfree();
      break;
    case 'T':
      if ( !*(_QWORD *)(a1 + 24) )
        break;
      sub_250DB0(*(_QWORD *)(a1 + 24));
      clear_tinfo_t();
LABEL_4:
      result = j__qfree();
      break;
    default:
      if ( !under_debugger )
        sub_37E160(50064);
      BUG();
  }
  *(_DWORD *)(a1 + 8) = 70;
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}

