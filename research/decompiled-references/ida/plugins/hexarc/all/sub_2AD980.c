_QWORD *__fastcall sub_2AD980(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rbx
  const char *v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v3 = a2[1];
  if ( !v3 )
  {
    v6 = *a2;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
LABEL_22:
    v15 = qvector_reserve();
    *a2 = v15;
    v6 = v15;
    goto LABEL_3;
  }
  v4 = v3 + 1;
  v5 = a2[1];
  v6 = *a2;
  --v3;
  if ( a2[2] < v4 )
    goto LABEL_22;
LABEL_3:
  a2[1] = v4;
  *(_BYTE *)(v6 + v3) = 2;
  *(_BYTE *)(*a2 + v5) = 0;
  sub_32AB20(a2, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  v7 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD **)v7;
  if ( *(_QWORD *)v7 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v9 = (_QWORD *)result[1];
      if ( v9 != result )
      {
        while ( 1 )
        {
LABEL_6:
          sub_32ADE0(a2, v9[3] - *(_QWORD *)(a1 + 8));
          sub_32AB20(a2, *((unsigned int *)v9 + 8));
          v10 = s1;
          if ( v9[6] )
            v10 = (const char *)v9[5];
          sub_32ACA0(a2, v10);
          if ( (*v9 & 2) != 0 )
            goto LABEL_11;
          v11 = (_QWORD *)v9[2];
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
            v12 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
            v13 = *v12;
            if ( (*v12 & 2) == 0 )
            {
              while ( (_QWORD *)v12[2] == v9 )
              {
                v9 = v12;
                v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
                v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v13 & 2) != 0 )
                {
                  result = *(_QWORD **)(a1 + 24);
                  v9 = (_QWORD *)v14;
                  if ( *result != v14 )
                    goto LABEL_6;
                  return result;
                }
                v12 = (_QWORD *)v14;
              }
            }
            v9 = v12;
            result = *(_QWORD **)(a1 + 24);
            if ( (_QWORD *)*result == v9 )
              return result;
          }
          else
          {
            do
            {
              v9 = v11;
              v11 = (_QWORD *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
LABEL_11:
            result = *(_QWORD **)(a1 + 24);
            if ( (_QWORD *)*result == v9 )
              return result;
          }
        }
      }
    }
  }
  return result;
}

