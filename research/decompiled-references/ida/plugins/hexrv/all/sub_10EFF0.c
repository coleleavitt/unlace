__int64 __fastcall sub_10EFF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int *v15; // rax
  unsigned int v16; // r14d
  int v17; // eax
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (_DWORD *)a1[5];
  v6 = *a1;
  v18[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1[2] + 8);
  v8 = (unsigned int)v5[18];
  if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 64) )
    sub_10CC50(a1, a2, v5, v6, a5);
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v8);
  if ( *v5 != 43 && (*v5 == 44 || (unsigned __int8)sub_329A40()) )
  {
    v10 = v7;
    v7 = v9;
    v9 = v10;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *((_BYTE *)a1 + 57) = v11;
  v12 = sub_10DC00(v7, 1);
  v13 = v12;
  if ( *(_DWORD *)(v12 + 76) != 4 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(v12 + 56) + 64LL) != 7 )
    return 0;
  if ( *(_DWORD *)(v12 + 352) != 1 )
    return 0;
  if ( sub_32BA00(v12) != 1 )
    return 0;
  v15 = *(unsigned int **)(v13 + 56);
  if ( *v15 - 43 > 9 )
    return 0;
  a1[6] = (__int64)v15;
  v16 = *v15;
  *((_DWORD *)a1 + 18) = *v15;
  if ( v16 == (unsigned int)sub_329760(v16) )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 18) - 43) <= 1 )
    {
      if ( (unsigned __int8)sub_11B8C0(a1[6] + 48, v18, 0) && !v18[0] )
      {
        v17 = 47;
        if ( *((_DWORD *)a1 + 18) == 44 )
          v17 = 48;
        goto LABEL_19;
      }
      if ( (unsigned __int8)sub_11B8C0(a1[6] + 48, v18, 1) && v18[0] == -1 )
      {
        v17 = 46;
        if ( *((_DWORD *)a1 + 18) == 44 )
          v17 = 45;
LABEL_19:
        *((_DWORD *)a1 + 18) = v17;
        goto LABEL_20;
      }
    }
    return 0;
  }
LABEL_20:
  a1[3] = v13;
  *((_DWORD *)a1 + 16) = *(_DWORD *)(sub_10DC00(v9, a2) + 72);
  return 1;
}

