_QWORD *__fastcall sub_24BAE0(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a2 + 36);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v20[1] = __readfsqword(0x28u);
  sub_32C150(&v19, v8, v7);
  v9 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v19, &v19, 0, a5);
  v10 = *(__int64 **)(a2 + 24);
  v11 = v9;
  v17 = sub_249AF0(a1, v10, a2 + 48, &v19, &v19, 0, a5);
  v14 = j__qalloc_or_throw(64, (__int64)v10, v12, v13);
  *(_DWORD *)(v14 + 8) = a3;
  v15 = (_QWORD *)v14;
  *(_QWORD *)v14 = -1;
  *(_QWORD *)(v14 + 32) = v17;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 24) = v11;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 4;
  *(_QWORD *)v14 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)a2 - 42) <= 0xA )
  {
    v20[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 29) > 0xC )
    {
      v20[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      v20[0] = 8;
    }
    v15 = sub_24AE20(a1, a2, (__int64)v15, v20, a4, a5);
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v15;
}

