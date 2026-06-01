__int64 __fastcall sub_3FA0E0(__int64 a1, unsigned int a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 v6; // r13
  int v9; // esi
  unsigned int *v10; // rdi
  __int64 (*v11)(void); // rax
  int v12; // r12d
  unsigned __int16 v13; // ax
  bool v14; // cc
  __int64 v15; // rax
  __int64 v17; // rax
  int v18; // ebp
  int v19; // eax
  int v20; // ecx
  int v21; // ebp
  int dtype_size; // eax
  int v23; // ecx

  v6 = a1 + 104;
  if ( *(_BYTE *)(a1 + 145) )
    v6 = a1 + 144;
  v9 = *(unsigned __int16 *)(v6 + 6);
  v10 = *(unsigned int **)(a1 + 832);
  if ( (_WORD)v9 == 147 )
  {
    v12 = sub_3F9C10(a1, v6, v10[155], a4);
    v13 = *(_WORD *)(a1 + 48);
    v14 = v13 <= 0x1DAu;
    if ( v13 != 474 )
      goto LABEL_7;
LABEL_16:
    sub_3EFEC0(a1, v12, a2, a4, a5);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
    dtype_size = get_dtype_size();
    v23 = v21;
    a2 = a3;
    sub_3F68B0(a1, v12, dtype_size, v23);
    goto LABEL_17;
  }
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 168LL);
  if ( (char *)v11 == (char *)sub_3EA010 )
    v12 = sub_3EA010((__int64)v10, v9);
  else
    v12 = v11();
  v13 = *(_WORD *)(a1 + 48);
  v14 = v13 <= 0x1DAu;
  if ( v13 == 474 )
    goto LABEL_16;
LABEL_7:
  if ( v14 )
  {
    if ( v13 != 30 )
    {
      if ( v13 == 32 )
      {
LABEL_10:
        v15 = sub_3EFAF0(a1, (__int64)"writex18", v12, a2, 0xFFFFFFFF, a4, a5);
        sub_317070((__int64 *)(*(_QWORD *)(v15 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v15 + 72) + 216LL));
LABEL_11:
        sub_3F9F40(a1, v6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a4);
        return 1;
      }
      return 0;
    }
LABEL_17:
    sub_3EFEC0(a1, v12, a2, a4, a5);
    goto LABEL_11;
  }
  if ( v13 == 475 )
  {
    v17 = sub_3EFAF0(a1, (__int64)"writex18", v12, a2, 0xFFFFFFFF, a4, a5);
    sub_317070((__int64 *)(*(_QWORD *)(v17 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v17 + 72) + 216LL));
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
    v19 = get_dtype_size();
    v20 = v18;
    a2 = a3;
    sub_3F68B0(a1, v12, v19, v20);
    goto LABEL_10;
  }
  return 0;
}

