__int64 __fastcall sub_1C200(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // [rsp+14h] [rbp-54h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int v31; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (unsigned __int8)unpack_xleb128(&v28, 32, 0, a2) )
  {
    if ( (unsigned __int8)unpack_xleb128(&v29, 32, 0, a2) )
    {
      if ( (unsigned __int8)unpack_xleb128(&v30, 32, 0, a2) )
      {
        v6 = unpack_xleb128(&v31, 32, 0, a2);
        if ( (_BYTE)v6 )
        {
          v32 = 0;
          v8 = 0;
          if ( v28 )
          {
            while ( 1 )
            {
              v9 = a1[1];
              v10 = *a1;
              v11 = v9 + 1;
              if ( a1[2] < (unsigned __int64)(v9 + 1) )
              {
                v12 = qvector_reserve(a1, v10, v9 + 1, 8);
                v9 = a1[1];
                *a1 = v12;
                v10 = v12;
                v11 = v9 + 1;
              }
              a1[1] = v11;
              if ( !(unsigned __int8)sub_1BD90(a2, a3, (_DWORD *)(v10 + 8 * v9), &v32) )
                break;
              if ( ++v8 >= v28 )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            v13 = 0;
            v32 = 0;
            if ( v29 )
            {
              while ( 1 )
              {
                v14 = a1[4];
                v15 = a1[3];
                v16 = v14 + 1;
                if ( a1[5] < (unsigned __int64)(v14 + 1) )
                {
                  v17 = qvector_reserve(a1 + 3, v15, v14 + 1, 8);
                  v14 = a1[4];
                  a1[3] = v17;
                  v15 = v17;
                  v16 = v14 + 1;
                }
                a1[4] = v16;
                if ( !(unsigned __int8)sub_1BD90(a2, a3, (_DWORD *)(v15 + 8 * v14), &v32) )
                  break;
                if ( ++v13 >= v29 )
                  goto LABEL_19;
              }
            }
            else
            {
LABEL_19:
              v18 = 0;
              v32 = 0;
              if ( v30 )
              {
                while ( 1 )
                {
                  v19 = a1[7];
                  v20 = a1[6];
                  v21 = v19 + 1;
                  if ( a1[8] < (unsigned __int64)(v19 + 1) )
                  {
                    v22 = qvector_reserve(a1 + 6, v20, v19 + 1, 12);
                    v19 = a1[7];
                    a1[6] = v22;
                    v20 = v22;
                    v21 = v19 + 1;
                  }
                  a1[7] = v21;
                  if ( !(unsigned __int8)sub_1BE30(a2, a3, (_DWORD *)(v20 + 12 * v19), &v32) )
                    break;
                  if ( ++v18 >= v30 )
                    goto LABEL_25;
                }
              }
              else
              {
LABEL_25:
                v32 = 0;
                v23 = 0;
                if ( !v31 )
                  return v6;
                while ( 1 )
                {
                  v24 = a1[10];
                  v25 = a1[9];
                  v26 = v24 + 1;
                  if ( a1[11] < (unsigned __int64)(v24 + 1) )
                  {
                    v27 = qvector_reserve(a1 + 9, v25, v24 + 1, 12);
                    v24 = a1[10];
                    a1[9] = v27;
                    v25 = v27;
                    v26 = v24 + 1;
                  }
                  a1[10] = v26;
                  if ( !(unsigned __int8)sub_1BE30(a2, a3, (_DWORD *)(v25 + 12 * v24), &v32) )
                    break;
                  if ( ++v23 >= v31 )
                    return v6;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
