__int64 __fastcall sub_DE260(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  int *v4; // r8
  int v5; // edx
  int *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int *v9; // r12
  int v11; // ebp
  _QWORD *v12; // rax
  int *v13; // rax
  int *v14; // rsi
  int v16; // ecx
  _QWORD *v17; // rax

  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v3 )
  {
    return 2;
  }
  else if ( (*(_DWORD *)(a2 + 4) & 0x4200000) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = *(int **)(a2 + 32);
    if ( v4 && *v4 > 0 )
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = &v4[6 * v5];
          v7 = *((_QWORD *)v6 + 2);
          if ( v7 )
          {
            if ( (*((_BYTE *)v6 + 25) & 3) == 0 )
            {
              v8 = *(_QWORD **)(v2 + 400);
              if ( v8 )
                break;
            }
          }
LABEL_6:
          if ( *v4 <= ++v5 )
            goto LABEL_14;
        }
        while ( v7 != *v8 )
        {
          v8 = (_QWORD *)v8[3];
          if ( !v8 )
            goto LABEL_6;
        }
        *v8 = 0;
        ++v5;
      }
      while ( *v4 > v5 );
    }
LABEL_14:
    v9 = *(int **)(a2 + 40);
    if ( v9 && *v9 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD **)(v2 + 400);
        if ( v12 )
        {
          while ( *(_QWORD *)&v9[26 * v11 + 6] != *v12 )
          {
            v12 = (_QWORD *)v12[3];
            if ( !v12 )
              goto LABEL_22;
          }
          *v12 = 0;
        }
LABEL_22:
        v13 = &v9[26 * v11];
        v14 = *((int **)v13 + 10);
        if ( (*((_BYTE *)v13 + 70) & 2) != 0 )
        {
          if ( *v14 > 0 )
          {
            v16 = 0;
            do
            {
              v17 = *(_QWORD **)(v2 + 400);
              if ( v17 )
              {
                while ( *(_QWORD *)&v14[4 * v16 + 2] != *v17 )
                {
                  v17 = (_QWORD *)v17[3];
                  if ( !v17 )
                    goto LABEL_36;
                }
                *v17 = 0;
              }
LABEL_36:
              ++v16;
            }
            while ( v16 < *v14 );
          }
        }
        else if ( v14 )
        {
          sub_CDCD0(a1, (__int64)v14);
        }
        ++v11;
      }
      while ( *v9 > v11 );
    }
    sub_DE0F0(a1, *(_QWORD *)(a2 + 104));
  }
  return v3;
}
