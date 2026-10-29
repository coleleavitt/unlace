__int64 __fastcall sub_58A80(__int64 *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v4; // rbp
  __int64 result; // rax
  _BYTE *v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int8 v12; // al
  char v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned __int8 v17; // al
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = a2;
  result = (a1[1] == 0) + a1[1] - 1;
  if ( a1[2] < (unsigned __int64)(result + 2 * a3) )
  {
    result = qvector_reserve();
    *a1 = result;
  }
  v6 = &a2[a3];
  if ( a3 )
  {
    do
    {
      v10 = a1[1];
      v17 = *v4 >> 4;
      v18 = v17 + 87;
      if ( v17 <= 9u )
        v18 = v17 + 48;
      if ( v10 )
      {
        v7 = v10 + 1;
        v8 = a1[1];
        v9 = *a1;
        --v10;
        if ( a1[2] >= v7 )
          goto LABEL_6;
      }
      else
      {
        v9 = *a1;
        v8 = 1;
        v7 = 2;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_6;
      }
      v21 = v8;
      v19 = qvector_reserve();
      v8 = v21;
      *a1 = v19;
      v9 = v19;
LABEL_6:
      a1[1] = v7;
      *(_BYTE *)(v9 + v10) = v18;
      *(_BYTE *)(*a1 + v8) = 0;
      v11 = a1[1];
      v12 = *v4 & 0xF;
      v13 = v12 + 87;
      if ( v12 <= 9u )
        v13 = v12 + 48;
      if ( v11 )
      {
        v14 = v11 + 1;
        v15 = a1[1];
        v16 = *a1;
        --v11;
        if ( a1[2] < v14 )
          goto LABEL_17;
      }
      else
      {
        v16 = *a1;
        v15 = 1;
        v14 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_17:
          v22 = v15;
          v20 = qvector_reserve();
          v15 = v22;
          *a1 = v20;
          v16 = v20;
        }
      }
      a1[1] = v14;
      ++v4;
      *(_BYTE *)(v16 + v11) = v13;
      result = *a1;
      *(_BYTE *)(*a1 + v15) = 0;
    }
    while ( v6 != v4 );
  }
  return result;
}

