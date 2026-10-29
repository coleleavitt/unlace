void __fastcall sub_218C60(int *a1, int *a2, __int64 *a3, double a4)
{
  int *i; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // r14
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // eax
  int *v14; // r14
  __int64 v15; // r12
  int v16; // eax
  int v17; // esi
  __int64 v18; // r13
  int v19; // ecx
  int v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; a2 != i; ++i )
    {
      v6 = *a3;
      v20 = *i;
      v7 = 104LL * *i;
      v8 = v7;
      v9 = *(_DWORD *)(*a3 + v7 + 24);
      v10 = *a3 + 104LL * *a1;
      v11 = *(_DWORD *)(v10 + 24) & 0x100;
      if ( (v9 & 0x100) != 0 )
      {
        if ( !v11 )
          goto LABEL_24;
      }
      else if ( v11 )
      {
        goto LABEL_9;
      }
      v21 = v6 + v7;
      v12 = sub_1C2AD0((int *)(v6 + v7), (int *)(v6 + 104LL * *a1), a4);
      if ( v12 )
        v13 = v12 >> 31;
      else
        LOBYTE(v13) = *(_QWORD *)(v21 + 16) < *(_QWORD *)(v10 + 16);
      v20 = *i;
      if ( !(_BYTE)v13 )
      {
        v6 = *a3;
        v9 = *(_DWORD *)(*a3 + 104LL * *i + 24);
        v8 = 104LL * *i;
LABEL_9:
        v14 = i;
LABEL_15:
        v17 = *(v14 - 1);
        v18 = v6 + 104LL * v17;
        v19 = *(_DWORD *)(v18 + 24) & 0x100;
        if ( (v9 & 0x100) != 0 )
        {
          if ( v19 )
            goto LABEL_11;
        }
        else
        {
          if ( v19 )
            goto LABEL_17;
LABEL_11:
          v15 = v6 + v8;
          v16 = sub_1C2AD0((int *)(v6 + v8), (int *)v18, a4);
          if ( v16 )
          {
            if ( v16 >= 0 )
            {
LABEL_17:
              *v14 = v20;
              continue;
            }
          }
          else if ( *(_QWORD *)(v15 + 16) >= *(_QWORD *)(v18 + 16) )
          {
            goto LABEL_17;
          }
          v17 = *(v14 - 1);
        }
        *v14 = v17;
        v6 = *a3;
        --v14;
        v9 = *(_DWORD *)(*a3 + v8 + 24);
        goto LABEL_15;
      }
LABEL_24:
      if ( (char *)i - (char *)a1 <= 4 )
      {
        if ( (char *)i - (char *)a1 == 4 )
          *i = *a1;
      }
      else
      {
        memmove(a1 + 1, a1, (char *)i - (char *)a1);
      }
      *a1 = v20;
    }
  }
}

