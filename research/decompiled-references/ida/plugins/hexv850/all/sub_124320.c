unsigned __int64 __fastcall sub_124320(__int64 a1, __int64 *a2, unsigned __int8 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // r13
  char v10; // al
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // [rsp+8h] [rbp-40h]

  v5 = (__int64)a3;
  result = *a3;
  if ( (_BYTE)result == 4 )
    return sub_123420(a1, a2, v5, a4);
  while ( (_BYTE)result == 14 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(_BYTE *)v7;
    if ( *(_BYTE *)v7 == 4 )
    {
LABEL_14:
      sub_123420(a1, a2, v7, a4);
    }
    else
    {
      while ( v8 == 14 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        v10 = *(_BYTE *)v9;
        if ( *(_BYTE *)v9 == 4 )
        {
LABEL_12:
          sub_123420(a1, a2, v9, a4);
        }
        else
        {
          while ( v10 == 14 )
          {
            v11 = *(_QWORD *)(v9 + 8);
            v12 = *(_BYTE *)v11;
            if ( *(_BYTE *)v11 == 4 )
            {
LABEL_10:
              sub_123420(a1, a2, v11, a4);
            }
            else
            {
              while ( v12 == 14 )
              {
                v17 = v11;
                sub_124320(a1, a2, *(_QWORD *)(v11 + 8), a4);
                v13 = *(_QWORD *)(v17 + 8);
                v12 = *(_BYTE *)(v13 + 16);
                v11 = v13 + 16;
                if ( v12 == 4 )
                  goto LABEL_10;
              }
            }
            v14 = *(_QWORD *)(v9 + 8);
            v10 = *(_BYTE *)(v14 + 16);
            v9 = v14 + 16;
            if ( v10 == 4 )
              goto LABEL_12;
          }
        }
        v15 = *(_QWORD *)(v7 + 8);
        v8 = *(_BYTE *)(v15 + 16);
        v7 = v15 + 16;
        if ( v8 == 4 )
          goto LABEL_14;
      }
    }
    v16 = *(_QWORD *)(v5 + 8);
    result = *(unsigned __int8 *)(v16 + 16);
    v5 = v16 + 16;
    if ( (_BYTE)result == 4 )
      return sub_123420(a1, a2, v5, a4);
  }
  return result;
}

