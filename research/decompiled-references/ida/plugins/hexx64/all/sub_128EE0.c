__int64 __fastcall sub_128EE0(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned __int8 *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // r13
  char v14; // al
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rbx
  int v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  int v23; // [rsp+10h] [rbp-38h]
  int v24; // [rsp+18h] [rbp-30h]
  __int64 v25; // [rsp+20h] [rbp-28h]

  v9 = a3;
  result = *a3;
  if ( (_BYTE)result == 4 )
    return sub_127FE0(a1, a2, (__int64)v9, a4, a5, a6, a7, a8);
  while ( (_BYTE)result == 14 )
  {
    v11 = *((_QWORD *)v9 + 1);
    v12 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 4 )
    {
LABEL_14:
      sub_127FE0(a1, a2, v11, a4, a5, a6, a7, a8);
    }
    else
    {
      while ( v12 == 14 )
      {
        v13 = *(_QWORD *)(v11 + 8);
        v14 = *(_BYTE *)v13;
        if ( *(_BYTE *)v13 == 4 )
        {
LABEL_12:
          sub_127FE0(a1, a2, v13, a4, a5, a6, a7, a8);
        }
        else
        {
          while ( v14 == 14 )
          {
            v15 = *(_QWORD *)(v13 + 8);
            v16 = *(_BYTE *)v15;
            if ( *(_BYTE *)v15 == 4 )
            {
LABEL_10:
              sub_127FE0(a1, a2, v15, a4, a5, a6, a7, a8);
            }
            else
            {
              while ( v16 == 14 )
              {
                sub_128EE0(a1, (__int64)a2, *(unsigned __int8 **)(v15 + 8), a4, a5, a6, v21, v15, v23, v24, v25);
                v17 = *(_QWORD *)(v22 + 8);
                v16 = *(_BYTE *)(v17 + 16);
                v15 = v17 + 16;
                if ( v16 == 4 )
                  goto LABEL_10;
              }
            }
            v18 = *(_QWORD *)(v13 + 8);
            v14 = *(_BYTE *)(v18 + 16);
            v13 = v18 + 16;
            if ( v14 == 4 )
              goto LABEL_12;
          }
        }
        v19 = *(_QWORD *)(v11 + 8);
        v12 = *(_BYTE *)(v19 + 16);
        v11 = v19 + 16;
        if ( v12 == 4 )
          goto LABEL_14;
      }
    }
    v20 = *((_QWORD *)v9 + 1);
    result = *(unsigned __int8 *)(v20 + 16);
    v9 = (unsigned __int8 *)(v20 + 16);
    if ( (_BYTE)result == 4 )
      return sub_127FE0(a1, a2, (__int64)v9, a4, a5, a6, a7, a8);
  }
  return result;
}

