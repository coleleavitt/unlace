__int64 __fastcall sub_24EC0(__int64 *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v5 = a3;
  if ( a4 != -1 )
  {
    v6 = a3 >> 1;
    v7 = sub_248F0(a1, a4, a3 >> 1);
    if ( v7 <= 0 )
      return -1;
    if ( !a1 )
      goto LABEL_7;
    v8 = a1[1];
    if ( v8 )
    {
      v11 = v8 + 1;
      v10 = a1[1];
      v9 = *a1;
      --v8;
      if ( a1[2] >= v11 )
        goto LABEL_6;
    }
    else
    {
      v9 = *a1;
      v10 = 1;
      v11 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_6:
        a1[1] = v11;
        *(_BYTE *)(v9 + v8) = 58;
        *(_BYTE *)(*a1 + v10) = 0;
LABEL_7:
        v12 = v7 + 1;
        v5 -= v6;
        goto LABEL_8;
      }
    }
    v17 = v10;
    v16 = v11;
    v15 = qvector_reserve();
    v10 = v17;
    v11 = v16;
    *a1 = v15;
    v9 = v15;
    goto LABEL_6;
  }
  v12 = 0;
LABEL_8:
  v13 = sub_248F0(a1, a2, v5);
  if ( v13 > 0 )
    return v12 + v13;
  return -1;
}

