__int64 __fastcall sub_48780(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // r12
  char *v5; // rdx
  char v6; // al
  char v7; // dl
  unsigned __int8 v8; // si
  char v9; // al
  char v10; // dl
  char v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v4 = 0;
    do
    {
      if ( v4 >= v2 - 1 )
        return a1;
      v5 = (char *)(v4 + *a2);
      v6 = *v5;
      v7 = v5[1];
      v8 = v7 - 48;
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        v9 = v6 - 48;
        if ( v8 <= 9u )
          goto LABEL_17;
        if ( (unsigned __int8)(v7 - 97) <= 5u )
        {
LABEL_20:
          v10 = v7 - 87;
          goto LABEL_11;
        }
      }
      else
      {
        if ( (unsigned __int8)(v6 - 97) <= 5u )
        {
          v9 = v6 - 87;
          if ( v8 <= 9u )
            goto LABEL_17;
        }
        else
        {
          if ( (unsigned __int8)(v6 - 65) > 5u )
            goto LABEL_21;
          v9 = v6 - 55;
          if ( v8 <= 9u )
          {
LABEL_17:
            v10 = v7 - 48;
            goto LABEL_11;
          }
        }
        if ( (unsigned __int8)(v7 - 97) <= 5u )
          goto LABEL_20;
      }
      if ( (unsigned __int8)(v7 - 65) > 5u )
      {
LABEL_21:
        v11 = -1;
        goto LABEL_12;
      }
      v10 = v7 - 55;
LABEL_11:
      v11 = v10 | (16 * v9);
LABEL_12:
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
      {
        v15 = qvector_reserve();
        *(_QWORD *)a1 = v15;
        v13 = v15;
        v12 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)(v13 + v12) = v11;
      v4 += 2LL;
      ++*(_QWORD *)(a1 + 8);
      v2 = a2[1];
    }
    while ( v2 );
  }
  return a1;
}

