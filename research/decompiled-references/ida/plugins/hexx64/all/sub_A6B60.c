unsigned __int64 __fastcall sub_A6B60(_QWORD *a1, double a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rbx
  unsigned int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rax
  unsigned __int8 *v9; // r13
  _DWORD *v10; // rsi
  __int64 v11; // rsi
  __int64 v12[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 )
  {
    v3 = (unsigned int *)a1[7];
    if ( v3 )
    {
      if ( *(_QWORD *)(v2 + 32) == *((_QWORD *)v3 + 3) )
      {
        v12[0] = 0;
        v12[1] = 0;
        do
        {
          if ( sub_11E8A0(*v3) && *((_BYTE *)v3 + 64) == 1 )
            sub_64190(v12, v3[18], a2);
          v3 = *((unsigned int **)v3 + 2);
        }
        while ( v3 && *((_QWORD *)v3 + 3) == *(_QWORD *)(a1[7] + 24LL) );
        if ( (unsigned __int8)sub_64880(v12) || (v5 = *(unsigned int **)(a1[1] + 48LL)) == nullptr )
        {
LABEL_33:
          qfree(v12[0]);
          return v13 - __readfsqword(0x28u);
        }
        while ( 1 )
        {
          if ( *((_QWORD *)v5 + 3) != *(_QWORD *)(a1[7] + 24LL) )
            goto LABEL_33;
          if ( sub_11E8A0(*v5) && *((_BYTE *)v5 + 64) == 1 && sub_64930(v12, v5[18]) )
          {
            v6 = a1[1];
            v7 = *(_QWORD *)(v6 + 16);
            if ( !v7 || (v8 = *(_DWORD **)(v7 + 56)) == nullptr )
            {
              if ( !under_debugger )
                sub_383060(0xCCDFu, a2);
              BUG();
            }
            v9 = (unsigned __int8 *)(v8 + 8);
            if ( *v8 != 55 )
            {
              v9 = (unsigned __int8 *)(v8 + 16);
              if ( (unsigned int)(*v8 - 42) > 0xA )
                goto LABEL_32;
            }
            if ( !sub_32ED40(**(_DWORD **)(v6 + 56), 1) )
              goto LABEL_29;
            v10 = *(_DWORD **)(v6 + 56);
            if ( *v10 == 55 )
            {
              v11 = (__int64)(v10 + 8);
            }
            else
            {
              if ( (unsigned int)(*v10 - 42) > 0xA )
                goto LABEL_32;
              v11 = (__int64)(v10 + 16);
            }
            if ( !sub_125B60(v9, v11, 0) )
              break;
          }
LABEL_14:
          v5 = *((unsigned int **)v5 + 1);
          if ( !v5 )
            goto LABEL_33;
        }
        if ( (unsigned int)(**(_DWORD **)(v6 + 56) - 42) <= 0xA )
        {
LABEL_29:
          if ( *v9 == 7 )
          {
            if ( *((_DWORD *)v9 + 2) == *(_DWORD *)(*(_QWORD *)(v6 + 8) + 72LL) )
              goto LABEL_14;
          }
          else if ( *v9 == 6 && *((_QWORD *)v9 + 1) == *(_QWORD *)(*(_QWORD *)(v6 + 8) + 32LL) )
          {
            goto LABEL_14;
          }
        }
LABEL_32:
        *((_QWORD *)v5 + 3) = sub_332AB0((_QWORD *)a1[8], *((_QWORD *)v5 + 3));
        goto LABEL_14;
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

