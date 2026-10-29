__int64 __fastcall sub_7070(__int64 a1, __int64 a2, int *a3, double a4)
{
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 *v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 **v14; // rcx
  unsigned int v15; // eax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-18h]

  if ( a2 == 94 )
  {
    v15 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v16 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v16 + 1;
    }
    else
    {
      v16 = (__int64 *)(*((_QWORD *)a3 + 2) + v15);
      *a3 = v15 + 8;
    }
    sub_1D000(*v16);
    return 0;
  }
  if ( a2 != 96 )
  {
    if ( a2 == 86 )
      sub_6E00(*(_QWORD *)(a1 + 16) + 144LL);
    return 0;
  }
  netnode_check();
  v6 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v7 = *((_QWORD **)a3 + 1);
    v8 = v7 + 1;
    *((_QWORD *)a3 + 1) = v7 + 1;
    v9 = *v7;
LABEL_8:
    v10 = (unsigned __int64 *)(v8 + 2);
    *((_QWORD *)a3 + 1) = v8 + 2;
    if ( (unsigned __int8)*v8 != 112 || v21 != v9 )
      return 0;
    goto LABEL_10;
  }
  v17 = *((_QWORD *)a3 + 2);
  v18 = v6 + 8;
  *a3 = v18;
  v9 = *(_QWORD *)(v17 + v6);
  if ( (unsigned int)v18 > 0x2F )
  {
    v8 = *((_DWORD **)a3 + 1);
    goto LABEL_8;
  }
  v19 = v6 + 16;
  *a3 = v19;
  if ( (unsigned __int8)*(_DWORD *)(v17 + v18) != 112 || v9 != v21 )
    return 0;
  if ( (unsigned int)v19 > 0x2F )
  {
    v10 = *((unsigned __int64 **)a3 + 1);
LABEL_10:
    v11 = v10 + 1;
    *((_QWORD *)a3 + 1) = v10 + 1;
    v12 = *v10;
LABEL_11:
    v13 = v11 + 1;
    *((_QWORD *)a3 + 1) = v11 + 1;
LABEL_12:
    v14 = (__int64 **)(v13 + 1);
    *((_QWORD *)a3 + 1) = v13 + 1;
    goto LABEL_13;
  }
  *a3 = v6 + 24;
  v12 = *(_QWORD *)(v17 + v19);
  if ( v6 + 24 > 0x2F )
  {
    v11 = *((_QWORD **)a3 + 1);
    goto LABEL_11;
  }
  *a3 = v6 + 32;
  if ( v6 + 32 > 0x2F )
  {
    v13 = *((_QWORD **)a3 + 1);
    goto LABEL_12;
  }
  v20 = v6 + 40;
  *a3 = v20;
  if ( (unsigned int)v20 <= 0x2F )
  {
    v14 = (__int64 **)(v20 + v17);
    *a3 = v6 + 48;
    goto LABEL_14;
  }
  v14 = *((__int64 ***)a3 + 1);
LABEL_13:
  *((_QWORD *)a3 + 1) = v14 + 1;
LABEL_14:
  if ( v12 - 3 <= 1 || v12 <= 1 )
  {
    netnode_supset();
  }
  else if ( v12 != 2 )
  {
    sub_67C0(*v14, (__int64)"idaclang: wrong node index %a", a4);
    return 0;
  }
  return 1;
}

