__int64 __fastcall sub_14970(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rcx

  if ( a2 != 110 )
    return 0;
  v4 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v15 = *((__int64 **)a3 + 1);
    v16 = v15 + 1;
    *((_QWORD *)a3 + 1) = v15 + 1;
    v8 = *v15;
LABEL_13:
    v11 = v16 + 1;
    *((_QWORD *)a3 + 1) = v16 + 1;
    v10 = *v16;
    goto LABEL_14;
  }
  v6 = *((_QWORD *)a3 + 2);
  v7 = v4 + 8;
  *a3 = v7;
  v8 = *(_QWORD *)(v6 + v4);
  if ( (unsigned int)v7 > 0x2F )
  {
    v16 = *((__int64 **)a3 + 1);
    goto LABEL_13;
  }
  v9 = v4 + 16;
  *a3 = v9;
  v10 = *(_QWORD *)(v6 + v7);
  if ( (unsigned int)v9 <= 0x2F )
  {
    v11 = (__int64 *)(v9 + v6);
    *a3 = v4 + 24;
    goto LABEL_7;
  }
  v11 = *((__int64 **)a3 + 1);
LABEL_14:
  *((_QWORD *)a3 + 1) = v11 + 1;
LABEL_7:
  if ( *(_DWORD *)(*v11 + 80) != 1 )
    return 0;
  v12 = *(_QWORD *)(*v11 + 88);
  v13 = *(_DWORD *)(v12 + 8);
  if ( v13 == 61 )
  {
    v14 = **(_QWORD **)(v12 + 24);
  }
  else
  {
    v14 = -1;
    if ( v13 == 64 )
      v14 = *(_QWORD *)(v12 + 24);
  }
  sub_14240(a1, v8, v10, v14);
  return 0;
}
