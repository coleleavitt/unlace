__int64 __fastcall sub_D6D40(__int64 a1, unsigned int a2, double a3)
{
  __int64 v4; // rdi
  __int64 (*v5)(); // rax
  int v6; // ebp
  __int64 v7; // r12
  __int64 i; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  signed int v15; // ebp
  __int64 v16; // rdx
  unsigned __int64 *v17; // rdx
  __int64 v18; // rdi
  int v19; // ebp
  __int64 v20; // rax
  _QWORD *v21; // r13
  __int64 func; // rsi
  __int64 v23; // rdi
  __int64 (*v24)(); // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 1240) )
  {
    if ( !under_debugger )
      sub_383060(0xC39Bu, a3);
    goto LABEL_33;
  }
  v4 = *(_QWORD *)(a1 + 1504);
  v5 = *(__int64 (**)())(*(_QWORD *)v4 + 248LL);
  if ( v5 != sub_CF0B0 && ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v5)(v4, 0, -1, -1) )
  {
    v12 = *(_QWORD **)(a1 + 1248);
    if ( a2 >= *(_DWORD *)(a1 + 64) )
      sub_CF110(a3);
    v13 = sub_330F80(
            (_QWORD *)a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * a2) + 56LL) + 24LL));
    v14 = v12[1];
    if ( v14 )
    {
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = (unsigned __int64 *)(*v12 + 16 * v16);
        if ( v13 >= *v17 && v13 < v17[1] )
          break;
        v16 = ++v15;
        if ( v15 >= v14 )
          goto LABEL_27;
      }
      v18 = *(_QWORD *)(a1 + 1240);
      v26 = 0;
      v27 = 0;
      sub_6FCF0(v18, v15, &v26, a3);
      sub_64190(&v26, v15, a3);
      v19 = sub_64960(&v26, 0);
      v7 = 0;
      while ( v19 != (_DWORD)v27 )
      {
        v21 = (_QWORD *)(*v12 + 16LL * v19);
        func = get_func();
        if ( func )
        {
          v23 = *(_QWORD *)(a1 + 1504);
          v24 = *(__int64 (**)())(*(_QWORD *)v23 + 248LL);
          v25 = 0;
          if ( v24 != sub_CF0B0 )
            v25 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v24)(v23, func, *v21, v21[1]);
          v20 = v25 - (*(int *)(a1 + 116) + *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 88));
          if ( v7 < v20 )
            v7 = v20;
        }
        v19 = sub_64960(&v26, v19 + 1);
      }
      qfree(v26);
      return ((_DWORD)v7 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
           & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
LABEL_27:
    if ( !under_debugger )
      sub_383060(0xC39Cu, a3);
LABEL_33:
    BUG();
  }
  v6 = 0;
  v7 = 0;
  for ( i = 0; (unsigned __int64)v6 < *(_QWORD *)(a1 + 464); i = v6 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * i);
      if ( *(_DWORD *)v9 == 1 && *(_QWORD *)(a1 + 144) <= *(_QWORD *)(v9 + 8) )
        break;
      i = ++v6;
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 464) )
        return ((_DWORD)v7 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
             & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
    v10 = (int)sub_1C35C0((_DWORD *)v9, *(_DWORD *)(v9 + 88)) - *(_QWORD *)(a1 + 144);
    if ( v7 < v10 )
      v7 = v10;
    ++v6;
  }
  return ((_DWORD)v7 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
       & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
}

