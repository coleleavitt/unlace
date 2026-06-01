_QWORD *__fastcall sub_2B3DA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _QWORD *result; // rax
  _QWORD *v5; // r12
  __int64 v6; // r9
  char v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rsi
  const char *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *i; // rax
  __int64 v14; // rax
  char v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-58h]
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  char v26; // [rsp+Fh] [rbp-49h]
  char v27; // [rsp+Fh] [rbp-49h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  sub_2B16E0(a2, 2);
  sub_3324A0(a2, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  v3 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD **)v3;
  if ( *(_QWORD *)v3 )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v5 = (_QWORD *)result[1];
      if ( result != v5 )
      {
        do
        {
          sub_332760(a2, v5[3] - *(_QWORD *)(a1 + 8));
          v6 = a2[1];
          v7 = *((_BYTE *)v5 + 32) | *((_BYTE *)v5 + 45) & 0xF8;
          if ( v6 )
          {
            v8 = v6 + 1;
            v9 = a2[1];
            v10 = *a2;
            --v6;
            if ( a2[2] >= v8 )
              goto LABEL_6;
          }
          else
          {
            v10 = *a2;
            v9 = 1;
            v8 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_6;
          }
          v30 = v9;
          v28 = v6;
          v26 = *((_BYTE *)v5 + 32) | *((_BYTE *)v5 + 45) & 0xF8;
          v24 = v8;
          v14 = qvector_reserve();
          v9 = v30;
          v6 = v28;
          v7 = v26;
          v8 = v24;
          *a2 = v14;
          v10 = v14;
LABEL_6:
          a2[1] = v8;
          *(_BYTE *)(v10 + v6) = v7;
          *(_BYTE *)(*a2 + v9) = 0;
          if ( (v5[9] & 0xFF000000F009FFFFLL) != 0 )
          {
            if ( !under_debugger )
              sub_3835A0(52110);
            BUG();
          }
          sub_332560(a2);
          if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_stroff() )
            goto LABEL_11;
          v11 = s1;
          if ( v5[7] )
            v11 = (const char *)v5[6];
          sub_332620(a2, v11);
          if ( !(unsigned __int8)is_enum() )
            goto LABEL_11;
          v15 = *((_BYTE *)v5 + 46);
          v16 = a2[1];
          if ( v16 )
          {
            v17 = v16 + 1;
            v18 = a2[1];
            v19 = *a2;
            --v16;
            if ( a2[2] < v17 )
              goto LABEL_32;
          }
          else
          {
            v19 = *a2;
            v18 = 1;
            v17 = 2;
            if ( (unsigned __int64)a2[2] < 2 )
            {
LABEL_32:
              v29 = v18;
              v27 = *((_BYTE *)v5 + 46);
              v25 = v17;
              v23 = qvector_reserve();
              v18 = v29;
              v15 = v27;
              *a2 = v23;
              v17 = v25;
              v19 = v23;
            }
          }
          a2[1] = v17;
          *(_BYTE *)(v19 + v16) = v15;
          *(_BYTE *)(*a2 + v18) = 0;
LABEL_11:
          if ( (*v5 & 2) == 0 )
          {
            v12 = (_QWORD *)v5[2];
            if ( (*(_BYTE *)v12 & 2) != 0 )
            {
              v20 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
              v21 = *v20;
              if ( (*v20 & 2) == 0 )
              {
                while ( v5 == (_QWORD *)v20[2] )
                {
                  v5 = v20;
                  v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                  v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v21 & 2) != 0 )
                  {
                    v5 = (_QWORD *)v22;
                    goto LABEL_16;
                  }
                  v20 = (_QWORD *)v22;
                }
              }
              v5 = v20;
            }
            else
            {
              for ( i = (_QWORD *)v12[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v12 = i;
              v5 = v12;
            }
          }
LABEL_16:
          result = *(_QWORD **)(a1 + 24);
        }
        while ( (_QWORD *)*result != v5 );
      }
    }
  }
  return result;
}

