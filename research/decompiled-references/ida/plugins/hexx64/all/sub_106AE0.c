_QWORD *__fastcall sub_106AE0(_QWORD *a1, __int64 *a2, double a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  result = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v4 = (_QWORD *)result[1];
      if ( result != v4 )
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
          if ( result != v4 )
            break;
LABEL_8:
          sub_106780((__int64)(v4 + 3), a2, a3);
          if ( (*v4 & 2) != 0 )
          {
LABEL_11:
            result = (_QWORD *)*a1;
            if ( (_QWORD *)*a1 == v4 )
              return result;
          }
          else
          {
            v6 = (_QWORD *)v4[2];
            if ( (*(_BYTE *)v6 & 2) == 0 )
            {
              do
              {
                v4 = v6;
                v6 = (_QWORD *)v6[1];
              }
              while ( (*(_BYTE *)v6 & 2) == 0 );
              goto LABEL_11;
            }
            v12 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
            v13 = *v12;
            if ( (*v12 & 2) == 0 )
            {
              while ( (_QWORD *)v12[2] == v4 )
              {
                v4 = v12;
                v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
                v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v13 & 2) != 0 )
                {
                  result = (_QWORD *)*a1;
                  v4 = (_QWORD *)v14;
                  if ( *a1 != v14 )
                    goto LABEL_4;
                  return result;
                }
                v12 = (_QWORD *)v14;
              }
            }
            v4 = v12;
            result = (_QWORD *)*a1;
            if ( (_QWORD *)*a1 == v4 )
              return result;
          }
        }
        v7 = a2[1];
        if ( v7 )
        {
          v8 = v7 + 1;
          v9 = a2[1];
          v10 = *a2;
          --v7;
          if ( a2[2] >= v8 )
          {
LABEL_15:
            a2[1] = v8;
            *(_BYTE *)(v10 + v7) = 32;
            *(_BYTE *)(*a2 + v9) = 0;
            goto LABEL_8;
          }
        }
        else
        {
          v10 = *a2;
          v9 = 1;
          v8 = 2;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_15;
        }
        v11 = qvector_reserve((__int64)a2, v10, v8, 1);
        *a2 = v11;
        v10 = v11;
        goto LABEL_15;
      }
    }
  }
  return result;
}

