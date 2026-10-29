__int64 __fastcall sub_37B80(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r13d
  __int64 v4; // r14
  int v5; // r9d
  int v6; // r15d
  __int16 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-78h]
  __int16 v20; // [rsp+2Eh] [rbp-4Ah]
  int v21; // [rsp+30h] [rbp-48h]
  unsigned int v22; // [rsp+34h] [rbp-44h]

  v1 = *(_DWORD *)(a1 + 240);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 244);
    if ( v2 )
    {
      v4 = *(_QWORD *)(a1 + 612);
      if ( (unsigned __int8)sub_349E0(a1 + 8, *(_QWORD *)a1, v1) )
      {
        while ( v2 > 0 )
        {
          qlread();
          v5 = v22;
          if ( !v22 )
            break;
          if ( v22 > v2 )
            v5 = v2;
          v6 = v5 - 8;
          v2 -= v5;
          if ( v5 - 8 > 0 )
          {
            do
            {
              v6 -= 2;
              qlread();
              v7 = v20 & 0xF000;
              if ( (v20 & 0xF000) == 0xA000 || v7 == 12288 )
              {
                v8 = v21 + (v20 & 0xFFF);
                v9 = *(_QWORD *)(a1 + 24) - 1LL;
                if ( v9 >= 0 )
                {
                  v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL * *(_QWORD *)(a1 + 24) - 32);
                  while ( (unsigned __int64)v8 < *v10 || (unsigned __int64)v8 >= v10[1] )
                  {
                    --v9;
                    v10 -= 4;
                    if ( v9 == -1 )
                      goto LABEL_11;
                  }
                  v11 = v10[2] + v8 - *v10;
                  if ( v11 != -1 )
                  {
                    v12 = *(_QWORD *)(a1 + 820);
                    v13 = (_DWORD *)(v4 + v11);
                    if ( v7 == 12288 )
                      v14 = (unsigned int)(*v13 - v12);
                    else
                      v14 = *(_QWORD *)v13 - v12;
                    v15 = *(_QWORD *)(a1 + 716);
                    v16 = *(_QWORD *)(a1 + 708);
                    if ( *(_QWORD *)(a1 + 724) < (unsigned __int64)(v15 + 1) )
                    {
                      v19 = v14;
                      v18 = qvector_reserve();
                      v7 = v20 & 0xF000;
                      v14 = v19;
                      *(_QWORD *)(a1 + 708) = v18;
                      v16 = v18;
                      v8 = v21 + (v20 & 0xFFF);
                      v15 = *(_QWORD *)(a1 + 716);
                    }
                    v17 = v16 + 20 * v15;
                    *(_DWORD *)v17 = v8;
                    *(_DWORD *)(v17 + 4) = v11;
                    *(_QWORD *)(v17 + 8) = v14;
                    *(_WORD *)(v17 + 16) = v7;
                    ++*(_QWORD *)(a1 + 716);
                  }
                }
              }
LABEL_11:
              ;
            }
            while ( v6 > 0 );
          }
        }
      }
    }
  }
  return 1;
}

