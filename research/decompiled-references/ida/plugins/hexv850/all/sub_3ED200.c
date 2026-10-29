__int64 __fastcall sub_3ED200(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned __int16 v6; // ax
  _DWORD *v7; // rdi
  int v10; // ebp
  __int64 (__fastcall *v11)(_DWORD *, unsigned int); // rdx
  int v12; // r15d
  __int16 v13; // ax
  char v14; // r10
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v20; // [rsp+Fh] [rbp-39h]

  if ( *(_BYTE *)(a1 + 145) != 1 || *(_BYTE *)(a1 + 185) != 1 )
    goto LABEL_24;
  if ( (*(_BYTE *)(a1 + 150) & 1) == 0 )
  {
    v6 = *(_WORD *)(a1 + 190);
    if ( (v6 & 1) == 0 )
    {
      v7 = *(_DWORD **)(a1 + 832);
      v10 = a2;
      v11 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
      if ( v11 == sub_3E40F0 )
      {
        if ( v6 <= 0x1Fu )
        {
          v12 = v7[88] + v7[20] * v6;
        }
        else
        {
          v12 = -1;
          if ( v6 == 48 )
            v12 = v7[120];
        }
      }
      else
      {
        v12 = v11(v7, v6);
      }
      if ( *(_WORD *)(a1 + 842) != 4 )
      {
        if ( !under_debugger )
LABEL_25:
          sub_37CFE0(0, a5);
LABEL_28:
        BUG();
      }
      v13 = *(_WORD *)(a1 + 48);
      if ( v13 == 102 )
      {
        v14 = 1;
LABEL_13:
        v15 = *(_QWORD *)(a1 + 832);
        v16 = a2;
        if ( **(_DWORD **)(v15 + 528) != a2 )
        {
          v17 = *(_QWORD *)(v15 + 584);
          if ( !v17 )
            goto LABEL_26;
          v20 = v14;
          v16 = *(_DWORD *)(*(_QWORD *)(v15 + 576) + 4 * v17 - 4);
          *(_QWORD *)(v15 + 584) = v17 - 1;
          sub_3EC660(a1, *(unsigned __int16 *)(a1 + 842), 8, a2, v16, v14 & 1, a5);
          v15 = *(_QWORD *)(a1 + 832);
          v14 = v20;
          v10 = **(_DWORD **)(v15 + 528);
        }
        if ( a3 == v10 )
        {
LABEL_19:
          sub_3E8420(a1, 0xEu, 8, v16, v10, v10, 0);
          sub_3E62F0(*(_QWORD *)(a1 + 832), v16);
          sub_3E8420(a1, 0xCu, 8, v10, a4, v12, 0);
          sub_3E62F0(*(_QWORD *)(a1 + 832), v10);
          return 1;
        }
        v18 = *(_QWORD *)(v15 + 584);
        if ( v18 )
        {
          v10 = *(_DWORD *)(*(_QWORD *)(v15 + 576) + 4 * v18 - 4);
          *(_QWORD *)(v15 + 584) = v18 - 1;
          sub_3EC660(a1, *(unsigned __int16 *)(a1 + 842), 8, a3, v10, v14 & 1, a5);
          goto LABEL_19;
        }
LABEL_26:
        sub_3E4140(a5);
      }
      if ( v13 == 103 )
      {
        v14 = 0;
        goto LABEL_13;
      }
LABEL_24:
      if ( !under_debugger )
        goto LABEL_25;
      goto LABEL_28;
    }
  }
  return 0;
}

