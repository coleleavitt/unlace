void __fastcall sub_2118E0(int *a1, int *a2, __int64 *a3)
{
  int *i; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r15
  int v8; // edi
  __int64 v9; // r14
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // eax
  int *v13; // r14
  __int64 v14; // r12
  int v15; // eax
  int v16; // esi
  __int64 v17; // r13
  int v18; // ecx
  int v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; a2 != i; ++i )
    {
      v5 = *a3;
      v19 = *i;
      v6 = 104LL * *i;
      v7 = v6;
      v8 = *(_DWORD *)(*a3 + v6 + 24);
      v9 = *a3 + 104LL * *a1;
      v10 = *(_DWORD *)(v9 + 24) & 0x100;
      if ( (v8 & 0x100) != 0 )
      {
        if ( !v10 )
          goto LABEL_24;
      }
      else if ( v10 )
      {
        goto LABEL_9;
      }
      v20 = v5 + v6;
      v11 = sub_1BC250((int *)(v5 + v6), (int *)(v5 + 104LL * *a1));
      if ( v11 )
        v12 = v11 >> 31;
      else
        LOBYTE(v12) = *(_QWORD *)(v20 + 16) < *(_QWORD *)(v9 + 16);
      v19 = *i;
      if ( !(_BYTE)v12 )
      {
        v5 = *a3;
        v8 = *(_DWORD *)(*a3 + 104LL * *i + 24);
        v7 = 104LL * *i;
LABEL_9:
        v13 = i;
LABEL_15:
        v16 = *(v13 - 1);
        v17 = v5 + 104LL * v16;
        v18 = *(_DWORD *)(v17 + 24) & 0x100;
        if ( (v8 & 0x100) != 0 )
        {
          if ( v18 )
            goto LABEL_11;
        }
        else
        {
          if ( v18 )
            goto LABEL_17;
LABEL_11:
          v14 = v5 + v7;
          v15 = sub_1BC250((int *)(v5 + v7), (int *)v17);
          if ( v15 )
          {
            if ( v15 >= 0 )
            {
LABEL_17:
              *v13 = v19;
              continue;
            }
          }
          else if ( *(_QWORD *)(v14 + 16) >= *(_QWORD *)(v17 + 16) )
          {
            goto LABEL_17;
          }
          v16 = *(v13 - 1);
        }
        *v13 = v16;
        v5 = *a3;
        --v13;
        v8 = *(_DWORD *)(*a3 + v7 + 24);
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
      *a1 = v19;
    }
  }
}

