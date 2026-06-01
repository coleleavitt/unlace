_QWORD *__fastcall sub_2B28E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  _QWORD *v4; // r12
  int v5; // ebx
  _QWORD *v6; // rdx
  _QWORD *i; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  sub_2B1320(a2, 1);
  sub_332160(a2);
  v2 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      v4 = (_QWORD *)result[1];
      if ( result != v4 )
      {
        do
        {
          sub_332420(a2);
          sub_332160(a2);
          if ( v4[5] )
          {
            v5 = 0;
            do
            {
              ++v5;
              sub_332160(a2);
            }
            while ( (unsigned __int64)v5 < v4[5] );
          }
          if ( (*v4 & 2) == 0 )
          {
            v6 = (_QWORD *)v4[2];
            if ( (*(_BYTE *)v6 & 2) != 0 )
            {
              v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
              v9 = *v8;
              if ( (*v8 & 2) == 0 )
              {
                while ( (_QWORD *)v8[2] == v4 )
                {
                  v4 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                  v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v9 & 2) != 0 )
                    goto LABEL_12;
                  v10 = v8;
                  v8 = v4;
                  v4 = v10;
                }
              }
              v4 = v8;
            }
            else
            {
              for ( i = (_QWORD *)v6[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v6 = i;
              v4 = v6;
            }
          }
LABEL_12:
          result = *(_QWORD **)(a1 + 24);
        }
        while ( (_QWORD *)*result != v4 );
      }
    }
  }
  return result;
}

