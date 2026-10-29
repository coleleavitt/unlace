__int64 __fastcall sub_A5A0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-40h]

  if ( a2 == 95 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) != -1 )
      netnode_check();
    return 0;
  }
  if ( a2 != 96 )
    return 0;
  v5 = *a3;
  if ( *a3 > 0x2F )
  {
    v12 = (_QWORD *)*((_QWORD *)a3 + 1);
    v13 = v12 + 1;
    *((_QWORD *)a3 + 1) = v12 + 1;
    v8 = *v12;
LABEL_19:
    v14 = (__int64 *)(v13 + 2);
    *((_QWORD *)a3 + 1) = v13 + 2;
    v10 = *v13;
LABEL_20:
    v15 = v14 + 1;
    *((_QWORD *)a3 + 1) = v14 + 1;
    v11 = *v14;
    goto LABEL_21;
  }
  v6 = *((_QWORD *)a3 + 2);
  v7 = v5 + 8;
  *a3 = v7;
  v8 = *(_QWORD *)(v6 + v5);
  if ( (unsigned int)v7 > 0x2F )
  {
    v13 = (_DWORD *)*((_QWORD *)a3 + 1);
    goto LABEL_19;
  }
  v9 = v5 + 16;
  *a3 = v9;
  v10 = *(_DWORD *)(v6 + v7);
  if ( (unsigned int)v9 > 0x2F )
  {
    v14 = (__int64 *)*((_QWORD *)a3 + 1);
    goto LABEL_20;
  }
  *a3 = v5 + 24;
  v11 = *(_QWORD *)(v6 + v9);
  if ( v5 + 24 <= 0x2F )
  {
    *a3 = v5 + 32;
    goto LABEL_9;
  }
  v15 = (_QWORD *)*((_QWORD *)a3 + 1);
LABEL_21:
  *((_QWORD *)a3 + 1) = v15 + 1;
LABEL_9:
  netnode_check();
  if ( v16 != v8
    || (_BYTE)v10 != 65 && (_BYTE)v10 != 83
    || (unsigned __int64)((int)v11 - 1LL) <= 0xFFFFFFFFFFFFFFFALL
    && (int)v11 != -6
    && ((int)v11 & 0xFFFFFFFFFFFFFFFDLL) != 0xFFFFFFFFFFFFFFF9LL )
  {
    return 0;
  }
  netnode_supset();
  return 1;
}
