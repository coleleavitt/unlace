__int64 __fastcall sub_DD490(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  __int64 v7; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  int *v19; // rax
  int v20; // esi
  int v21; // edx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rbp
  _QWORD v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  v27[3] = __readfsqword(0x28u);
  if ( a2 )
  {
    v15 = *(_QWORD *)(v7 + 64);
    if ( a2 >= *(_DWORD *)(v15 + 64) )
      sub_DAC10(a7);
    v17 = *(_QWORD *)(v15 + 528);
    v18 = *(_QWORD *)(v17 + 8LL * a2);
    if ( (*(_DWORD *)(v18 + 24) & 0x600) != 0x200 )
      sub_A7590(v18, 0, v17, a4, a5, a6);
    v19 = *(int **)(v18 + 56);
    v20 = *(_DWORD *)(a1 + 132);
    if ( v19 )
    {
      v21 = *v19;
      if ( *v19 != 4 )
      {
        if ( v21 == 67 )
        {
          if ( v19[17] != v19[9] )
            goto LABEL_13;
        }
        else if ( v21 != 10 )
        {
          goto LABEL_13;
        }
      }
      if ( *((_BYTE *)v19 + 32) == 4 && (unsigned int)(**((_DWORD **)v19 + 5) - 56) <= 1 && *((_BYTE *)v19 + 64) == 1 )
      {
        v24 = v19[17];
        v25 = v19[18];
        if ( v24 )
        {
          if ( v20 >= v25 && v24 + v25 - 1 >= v20 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
            v20 = *(_DWORD *)(a1 + 132);
          }
        }
      }
    }
LABEL_13:
    if ( (unsigned __int8)sub_64A60(
                            (_QWORD *)(v18 + 280),
                            v20,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 480) + 112LL) + 80LL)) )
    {
      v22 = *(_QWORD *)(v18 + 56);
      v23 = *(_QWORD *)(v22 + 24) + 1LL;
      if ( v23 < *(_QWORD *)(v18 + 40) )
        v23 = *(_QWORD *)(v18 + 40);
      return sub_DC7D0(a1, v18, v22, v23, a7);
    }
    if ( !sub_64930((_QWORD *)(v18 + 240), *(_DWORD *)(a1 + 132)) )
    {
      if ( !sub_64930((_QWORD *)(v18 + 160), *(_DWORD *)(a1 + 132)) )
      {
        result = 3;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) > (signed int)a2 )
          return 0;
        return result;
      }
      result = 3;
      if ( (*(_BYTE *)(a1 + 120) & 6) == 0 )
        return result;
    }
    return 2;
  }
  v9 = *(_QWORD *)(v7 + 64);
  v10 = *(_DWORD *)(a1 + 132);
  v27[0] = 3;
  v27[1] = v10;
  v11 = (int)sub_1F06C0((__int64 *)(v9 + 432), (int *)v27, 1, 0);
  cleanup_argloc();
  if ( (_DWORD)v11 == -1 )
  {
    *(_BYTE *)(a1 + 140) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) + 320LL) ^ 1;
    return 4;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 120) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) + 432LL) + 104 * v11;
      if ( (get_tinfo_property() & 0xF) == 9 && *(int *)(v26 + 88) <= 7 )
        return 2;
    }
    v12 = *(_QWORD *)(a1 + 80);
    v13 = *(int *)(a1 + 124);
    *(_BYTE *)(a1 + 140) = 1;
    return *(_DWORD *)(v12 + 4 * v13) == -1;
  }
}

