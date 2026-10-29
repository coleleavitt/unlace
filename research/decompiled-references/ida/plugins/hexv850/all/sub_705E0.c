__int64 __fastcall sub_705E0(
        __int64 *a1,
        _QWORD **a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // r15d
  __int64 v9; // r13
  __int64 (__fastcall *v12)(__int64, int); // rax
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  int v15; // eax
  bool v16; // zf
  unsigned int *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx

  v7 = 0;
  v9 = a6;
  if ( !sub_6BEF0(a1, a3, a5, a6, a7) )
    return v7;
  v12 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
  if ( v12 == sub_60610 )
  {
    if ( !a1[7] )
    {
LABEL_9:
      v7 = 15;
      goto LABEL_10;
    }
    v13 = *(_DWORD *)(a1[6] + 24LL * (int)a5 + 8);
  }
  else
  {
    v13 = v12((__int64)a1, a5);
  }
  if ( v13 <= 1 )
    goto LABEL_9;
  v14 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
  if ( v14 == sub_60650 )
    v15 = **(_DWORD **)(a1[6] + 24LL * (int)a5);
  else
    v15 = v14((__int64)a1, a5, 0);
  v7 = ((_DWORD)v9 == v15) + 16;
LABEL_10:
  sub_70290((__int64)a1, a2, (__int64)a3, (v9 << 32) | a5);
  sub_688A0((__int64)a1, a5, v9);
  v16 = *(_QWORD *)(a4 + 16) == 0;
  v17 = *(unsigned int **)a4;
  *(_QWORD *)(a4 + 8) = 0;
  if ( v16 )
  {
    v19 = qvector_reserve();
    v20 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)a4 = v19;
    v17 = (unsigned int *)(v19 + 4 * v20);
  }
  *v17 = a5;
  ++*(_QWORD *)(a4 + 8);
  return v7;
}

