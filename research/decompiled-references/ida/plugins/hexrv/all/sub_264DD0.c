__int64 __fastcall sub_264DD0(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r12
  int v4; // r13d
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-110h]

  v2 = *(__int64 **)(a1 + 56);
  v3 = v2[1];
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( a2 != 1 )
      goto LABEL_3;
    v12 = v3 + 1;
    v13 = v2[1];
    --v3;
  }
  else
  {
    v4 = 0;
    if ( a2 != 1 )
      goto LABEL_3;
    v13 = 1;
    v12 = 2;
  }
  v14 = *v2;
  if ( v2[2] < v12 )
  {
    v16 = v13;
    v15 = qvector_reserve();
    v13 = v16;
    *v2 = v15;
    v14 = v15;
  }
  v2[1] = v12;
  *(_BYTE *)(v14 + v3) = 32;
  *(_BYTE *)(*v2 + v13) = 0;
  v2 = *(__int64 **)(a1 + 56);
LABEL_3:
  sub_F6550(v2);
  v5 = *(__int64 **)(a1 + 56);
  v6 = v5[1];
  if ( v6 > 1 )
  {
    while ( 1 )
    {
      v11 = *v5;
      if ( *(_BYTE *)(*v5 + v6 - 2) != 10 )
        goto LABEL_21;
      v7 = v6 - 1;
      if ( (__int64)(v6 - 1) > 1 )
        break;
      if ( v11 )
      {
        v5[1] = 0;
        qfree();
        *v5 = 0;
        v5[2] = 0;
        v5 = *(__int64 **)(a1 + 56);
        v6 = v5[1];
        if ( v6 <= 1 )
          goto LABEL_13;
      }
      else
      {
LABEL_8:
        v6 = v5[1];
        if ( v6 <= 1 )
          goto LABEL_13;
      }
    }
    if ( v5[2] < v7 )
    {
      v10 = qvector_reserve();
      *v5 = v10;
      v11 = v10;
    }
    v5[1] = v7;
    *(_BYTE *)(v11 + v6 - 2) = 0;
    v5 = *(__int64 **)(a1 + 56);
    goto LABEL_8;
  }
LABEL_13:
  if ( v6 )
LABEL_21:
    v8 = v6 - 1;
  else
    v8 = 0;
  return (unsigned int)(v8 - v4);
}

