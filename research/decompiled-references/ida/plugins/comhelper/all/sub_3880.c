__int64 __fastcall sub_3880(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 *v9; // rdx
  _QWORD *v10; // rcx

  if ( a2 != 50 )
    return 0;
  v5 = *(_DWORD *)a3;
  if ( v5 > 0x2F )
  {
    v9 = (__int64 *)(*(_QWORD *)(a3 + 8) + 8LL);
    *(_QWORD *)(a3 + 8) = v9;
LABEL_11:
    v10 = v9 + 1;
    *(_QWORD *)(a3 + 8) = v9 + 1;
    v8 = *v9;
LABEL_12:
    *(_QWORD *)(a3 + 8) = v10 + 1;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = v5 + 8;
  *(_DWORD *)a3 = v7;
  if ( (unsigned int)v7 > 0x2F )
  {
    v9 = *(__int64 **)(a3 + 8);
    goto LABEL_11;
  }
  *(_DWORD *)a3 = v5 + 16;
  v8 = *(_QWORD *)(v6 + v7);
  if ( v5 + 16 > 0x2F )
  {
    v10 = *(_QWORD **)(a3 + 8);
    goto LABEL_12;
  }
  *(_DWORD *)a3 = v5 + 24;
LABEL_7:
  if ( (v8 & 0x600) == 0x400 && (v8 & 0xF0000000) == 0x60000000 )
    get_tid_name();
  return 0;
}

