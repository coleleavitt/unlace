void __fastcall sub_102A10(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // [rsp+0h] [rbp-40h]
  unsigned int v27; // [rsp+4h] [rbp-3Ch]

  if ( a2 )
  {
    v3 = a3;
    v6 = a1[3];
    if ( (unsigned __int64)a3 + v6 + 2 >= a1[2] )
    {
      if ( (unsigned int)sub_102660((__int64)a1, a3 + 2) )
        return;
      v6 = a1[3];
    }
    v7 = a1[1];
    a1[3] = v6 + 1;
    *(_BYTE *)(v7 + v6) = 34;
    if ( a3 )
    {
      v8 = 0;
      v26 = a3 + 3;
      v9 = a3 - 1 + 1LL;
      v27 = a3 + 7;
      while ( 1 )
      {
        v11 = *(_BYTE *)(a2 + v8);
        v13 = a1[3];
        if ( v11 == 34 || v11 == 92 )
          break;
        if ( v11 <= 0x1Fu )
        {
          v10 = a1[2];
          if ( byte_1BA9E0[v11] )
          {
            v11 = byte_1BA9E0[v11];
            if ( v3 + v13 + 3 - v8 <= v10 )
            {
LABEL_9:
              v12 = a1[1];
              a1[3] = v13 + 1;
              *(_BYTE *)(v12 + v13) = 92;
              v13 = a1[3];
              goto LABEL_10;
            }
LABEL_13:
            if ( (unsigned int)sub_102660((__int64)a1, v26 - (unsigned int)v8) )
              return;
            v13 = a1[3];
            goto LABEL_9;
          }
          if ( v8 + v3 + v13 + 7 > v10 )
          {
            if ( (unsigned int)sub_102660((__int64)a1, v27 - (unsigned int)v8) )
              return;
            v13 = a1[3];
          }
          v15 = a1[1];
          a1[3] = v13 + 1;
          *(_BYTE *)(v15 + v13) = 92;
          v16 = a1[3];
          v17 = a1[1];
          a1[3] = v16 + 1;
          *(_BYTE *)(v17 + v16) = 117;
          v18 = a1[3];
          v19 = a1[1];
          a1[3] = v18 + 1;
          *(_BYTE *)(v19 + v18) = 48;
          v20 = a1[3];
          v21 = a1[1];
          a1[3] = v20 + 1;
          *(_BYTE *)(v21 + v20) = 48;
          v22 = a1[3];
          v23 = a1[1];
          a1[3] = v22 + 1;
          *(_BYTE *)(v23 + v22) = (v11 >> 4) + 48;
          v11 = a0123456789abcd_1[v11 & 0xF];
          v13 = a1[3];
        }
LABEL_10:
        v14 = a1[1];
        ++v8;
        a1[3] = v13 + 1;
        *(_BYTE *)(v14 + v13) = v11;
        if ( v9 == v8 )
          goto LABEL_17;
      }
      if ( (unsigned __int64)(v3 + v13 + 3 - v8) <= a1[2] )
        goto LABEL_9;
      goto LABEL_13;
    }
LABEL_17:
    v24 = a1[3];
    v25 = a1[1];
    a1[3] = v24 + 1;
    *(_BYTE *)(v25 + v24) = 34;
  }
}
