__int64 __fastcall sub_DE430(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // rcx
  __int64 v4; // r10
  int v5; // eax
  int *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  _QWORD **v9; // r9
  _QWORD *v10; // rdx

  result = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x4200000) == 0 )
  {
    v3 = *(int **)(a2 + 40);
    if ( v3 )
    {
      if ( *v3 > 0 )
      {
        v4 = a1[5];
        v5 = 0;
        while ( 1 )
        {
          v6 = &v3[26 * v5];
          if ( *((_QWORD *)v6 + 5) != *(_QWORD *)(v4 + 16) )
            goto LABEL_5;
          v7 = *((_QWORD *)v6 + 3);
          if ( !v7 )
            goto LABEL_5;
          v8 = *(_QWORD **)(*a1 + 400LL);
          if ( !v8 )
            goto LABEL_5;
          if ( v7 != *v8 )
          {
            while ( 1 )
            {
              v10 = (_QWORD *)v8[3];
              if ( !v10 )
                goto LABEL_5;
              if ( v7 == *v10 )
              {
                v9 = (_QWORD **)(v8 + 3);
                goto LABEL_15;
              }
              v8 = (_QWORD *)v8[3];
            }
          }
          v9 = (_QWORD **)(*a1 + 400LL);
          v10 = *v9;
LABEL_15:
          if ( v4 )
          {
            ++v5;
            *v9 = (_QWORD *)v10[3];
            v10[3] = *(_QWORD *)v4;
            ++*(_DWORD *)(v4 + 8);
            *(_QWORD *)v4 = v10;
            if ( *v3 <= v5 )
              break;
          }
          else
          {
LABEL_5:
            if ( *v3 <= ++v5 )
              break;
          }
        }
      }
      sub_DE0F0((__int64)a1, *(_QWORD *)(a2 + 104));
      return 0;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
