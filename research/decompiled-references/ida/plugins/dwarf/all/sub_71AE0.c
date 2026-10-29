int *__fastcall sub_71AE0(int *a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  int *v6; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  int *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int **v16; // rax
  int *v17; // rsi
  int v18; // eax
  int **v19; // rax
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int **v24; // rax
  int *v25; // rsi
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v32[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2 - (_QWORD)a1;
  v5 = v4 >> 2;
  v32[1] = __readfsqword(0x28u);
  v6 = a1;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v9 = v5 >> 1;
      v10 = **(_QWORD **)(a4 + 24);
      v11 = &v6[v5 >> 1];
      v12 = v10 + 80LL * *a3;
      v13 = 80LL * *v11 + v10;
      if ( *(_DWORD *)v12 == 1 )
      {
        v31 = *(_QWORD *)(v12 + 8);
      }
      else
      {
        if ( *(_DWORD *)v12 != 2 )
          goto LABEL_6;
        v16 = *(int ***)(v12 + 8);
        if ( !v16[1] )
          goto LABEL_6;
        v17 = *v16;
        v18 = **v16;
        if ( v18 == 1 )
          goto LABEL_39;
        if ( v18 != 2 )
          goto LABEL_6;
        v19 = *((int ***)v17 + 1);
        if ( !v19[1] )
          goto LABEL_6;
        v17 = *v19;
        v20 = **v19;
        if ( v20 == 1 )
        {
LABEL_39:
          v31 = *((_QWORD *)v17 + 1);
        }
        else
        {
          if ( v20 != 2 )
            goto LABEL_6;
          v21 = *((__int64 **)v17 + 1);
          if ( !v21[1] )
            goto LABEL_6;
          v22 = *v21;
          if ( *(_DWORD *)v22 == 1 )
          {
            v31 = *(_QWORD *)(v22 + 8);
          }
          else
          {
            if ( *(_DWORD *)v22 != 2 )
              goto LABEL_6;
            v23 = *(_QWORD *)(v22 + 8);
            if ( !*(_QWORD *)(v23 + 8) || !(unsigned __int8)sub_6FB30(&v31, *(int **)v23) )
              goto LABEL_6;
          }
        }
      }
      if ( *(_DWORD *)v13 == 1 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        goto LABEL_38;
      }
      if ( *(_DWORD *)v13 == 2 )
      {
        v24 = *(int ***)(v13 + 8);
        if ( v24[1] )
        {
          v25 = *v24;
          v26 = **v24;
          if ( v26 == 1 )
          {
            v14 = *((_QWORD *)v25 + 1);
            goto LABEL_38;
          }
          if ( v26 == 2 )
          {
            v27 = *((__int64 **)v25 + 1);
            if ( v27[1] )
            {
              v28 = *v27;
              if ( *(_DWORD *)v28 == 1 )
                goto LABEL_41;
              if ( *(_DWORD *)v28 == 2 )
              {
                v29 = *(__int64 **)(v28 + 8);
                if ( v29[1] )
                {
                  v28 = *v29;
                  if ( *(_DWORD *)v28 == 1 )
                  {
LABEL_41:
                    v14 = *(_QWORD *)(v28 + 8);
                    goto LABEL_38;
                  }
                  if ( *(_DWORD *)v28 == 2 )
                  {
                    v30 = *(_QWORD *)(v28 + 8);
                    if ( *(_QWORD *)(v30 + 8) )
                    {
                      if ( (unsigned __int8)sub_6FB30(v32, *(int **)v30) )
                      {
                        v14 = v32[0];
LABEL_38:
                        LOBYTE(v14) = v31 < v14;
                        goto LABEL_7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_6:
      LODWORD(v14) = (unsigned int)compare_arglocs(v12, v13) >> 31;
LABEL_7:
      if ( (_BYTE)v14 )
      {
        v5 >>= 1;
        if ( v9 <= 0 )
          return v6;
      }
      else
      {
        v6 = v11 + 1;
        v5 = v5 - 1 - v9;
        if ( v5 <= 0 )
          return v6;
      }
    }
  }
  return v6;
}

