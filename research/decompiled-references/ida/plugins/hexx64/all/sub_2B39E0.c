_QWORD *__fastcall sub_2B39E0(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rdx
  _QWORD *result; // rax
  _QWORD *v6; // r12
  __int64 v7; // r9
  char v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rsi
  const char *v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *i; // rax
  __int64 v15; // rax
  char v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  unsigned __int64 v26; // [rsp+0h] [rbp-58h]
  char v27; // [rsp+Fh] [rbp-49h]
  char v28; // [rsp+Fh] [rbp-49h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  sub_2B1320(a2, 2);
  sub_332160(a2);
  v4 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 )
  {
    if ( *(_QWORD *)(v4 + 8) )
    {
      v6 = (_QWORD *)result[1];
      if ( result != v6 )
      {
        do
        {
          sub_332420(a2);
          v7 = a2[1];
          v8 = *((_BYTE *)v6 + 32) | *((_BYTE *)v6 + 45) & 0xF8;
          if ( v7 )
          {
            v9 = v7 + 1;
            v10 = a2[1];
            v11 = *a2;
            --v7;
            if ( a2[2] >= v9 )
              goto LABEL_6;
          }
          else
          {
            v11 = *a2;
            v10 = 1;
            v9 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_6;
          }
          v31 = v10;
          v29 = v7;
          v27 = *((_BYTE *)v6 + 32) | *((_BYTE *)v6 + 45) & 0xF8;
          v25 = v9;
          v15 = qvector_reserve((__int64)a2, v11, v9, 1);
          v10 = v31;
          v7 = v29;
          v8 = v27;
          v9 = v25;
          *a2 = v15;
          v11 = v15;
LABEL_6:
          a2[1] = v9;
          *(_BYTE *)(v11 + v7) = v8;
          *(_BYTE *)(*a2 + v10) = 0;
          if ( (v6[9] & 0xFF000000F009FFFFLL) != 0 )
          {
            if ( !under_debugger )
              sub_383060(0xCB8Eu, a3);
            BUG();
          }
          sub_332220(a2);
          if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_stroff() )
            goto LABEL_11;
          v12 = s1;
          if ( v6[7] )
            v12 = (const char *)v6[6];
          sub_3322E0(a2, v12);
          if ( !(unsigned __int8)is_enum() )
            goto LABEL_11;
          v16 = *((_BYTE *)v6 + 46);
          v17 = a2[1];
          if ( v17 )
          {
            v18 = v17 + 1;
            v19 = a2[1];
            v20 = *a2;
            --v17;
            if ( a2[2] < v18 )
              goto LABEL_32;
          }
          else
          {
            v20 = *a2;
            v19 = 1;
            v18 = 2;
            if ( (unsigned __int64)a2[2] < 2 )
            {
LABEL_32:
              v30 = v19;
              v28 = *((_BYTE *)v6 + 46);
              v26 = v18;
              v24 = qvector_reserve((__int64)a2, v20, v18, 1);
              v19 = v30;
              v16 = v28;
              *a2 = v24;
              v18 = v26;
              v20 = v24;
            }
          }
          a2[1] = v18;
          *(_BYTE *)(v20 + v17) = v16;
          *(_BYTE *)(*a2 + v19) = 0;
LABEL_11:
          if ( (*v6 & 2) == 0 )
          {
            v13 = (_QWORD *)v6[2];
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
              v21 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
              v22 = *v21;
              if ( (*v21 & 2) == 0 )
              {
                while ( v6 == (_QWORD *)v21[2] )
                {
                  v6 = v21;
                  v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
                  v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v22 & 2) != 0 )
                  {
                    v6 = (_QWORD *)v23;
                    goto LABEL_16;
                  }
                  v21 = (_QWORD *)v23;
                }
              }
              v6 = v21;
            }
            else
            {
              for ( i = (_QWORD *)v13[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v13 = i;
              v6 = v13;
            }
          }
LABEL_16:
          result = *(_QWORD **)(a1 + 24);
        }
        while ( (_QWORD *)*result != v6 );
      }
    }
  }
  return result;
}

