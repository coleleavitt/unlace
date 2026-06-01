_QWORD *__fastcall sub_1028E0(_QWORD *a1, __int64 *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  result = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = (_QWORD *)result[1];
      if ( result != v3 )
      {
        while ( 1 )
        {
LABEL_4:
          if ( result )
          {
            if ( !a1[1] )
              break;
            result = (_QWORD *)result[1];
          }
          if ( result != v3 )
            break;
LABEL_8:
          sub_102580((__int64)(v3 + 3), a2);
          if ( (*v3 & 2) != 0 )
          {
LABEL_11:
            result = (_QWORD *)*a1;
            if ( (_QWORD *)*a1 == v3 )
              return result;
          }
          else
          {
            v5 = (_QWORD *)v3[2];
            if ( (*(_BYTE *)v5 & 2) == 0 )
            {
              do
              {
                v3 = v5;
                v5 = (_QWORD *)v5[1];
              }
              while ( (*(_BYTE *)v5 & 2) == 0 );
              goto LABEL_11;
            }
            v11 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
            v12 = *v11;
            if ( (*v11 & 2) == 0 )
            {
              while ( (_QWORD *)v11[2] == v3 )
              {
                v3 = v11;
                v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
                v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v12 & 2) != 0 )
                {
                  result = (_QWORD *)*a1;
                  v3 = (_QWORD *)v13;
                  if ( *a1 != v13 )
                    goto LABEL_4;
                  return result;
                }
                v11 = (_QWORD *)v13;
              }
            }
            v3 = v11;
            result = (_QWORD *)*a1;
            if ( (_QWORD *)*a1 == v3 )
              return result;
          }
        }
        v6 = a2[1];
        if ( v6 )
        {
          v7 = v6 + 1;
          v8 = a2[1];
          v9 = *a2;
          --v6;
          if ( a2[2] >= v7 )
          {
LABEL_15:
            a2[1] = v7;
            *(_BYTE *)(v9 + v6) = 32;
            *(_BYTE *)(*a2 + v8) = 0;
            goto LABEL_8;
          }
        }
        else
        {
          v9 = *a2;
          v8 = 1;
          v7 = 2;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_15;
        }
        v10 = qvector_reserve();
        *a2 = v10;
        v9 = v10;
        goto LABEL_15;
      }
    }
  }
  return result;
}

