__int64 __fastcall sub_7D180(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  bool v8; // zf
  __int64 result; // rax
  __int16 v11; // ax
  char *v12; // rcx
  int v13; // r8d
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  struct _Unwind_Exception *v20; // rbx
  _QWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v22; // [rsp+20h] [rbp-48h]
  char v23; // [rsp+22h] [rbp-46h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 624) == 0;
  v24 = __readfsqword(0x28u);
  if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 632) || *(_QWORD *)(a1 + 640) || *(_QWORD *)(a1 + 648) )
    {
      if ( !under_debugger )
      {
        v20 = (struct _Unwind_Exception *)interr(10366);
        clear_tinfo_t();
        _Unwind_Resume(v20);
      }
      BUG();
    }
    *(_QWORD *)(a1 + 632) = 41;
    v14 = (_QWORD *)operator new[](0x670u);
    v15 = v14 + 1;
    *v14 = 41;
    v14[4] = 0;
    v16 = v14 + 6;
    do
    {
      v16[3] = 0;
      v16 += 10;
      *(v16 - 2) = 0;
    }
    while ( v16 != v14 + 206 );
    *(_QWORD *)(a1 + 624) = v15;
    v14[1] = xmmword_AB280;
    v14[205] = qword_AB8E0;
    qmemcpy(
      (void *)((unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&xmmword_AB280 - ((char *)v15 - ((unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v15 - (((_DWORD)v14 + 16) & 0xFFFFFFF8) + 1640) >> 3));
    *(_QWORD *)(a1 + 648) = 75;
    v17 = (_QWORD *)operator new[](0xBC0u);
    *v17 = 75;
    v18 = v17 + 1;
    v19 = v17 + 1;
    do
    {
      v19[3] = 0;
      v19 += 15;
      *(v19 - 7) = 0;
      *(v19 - 2) = 0;
    }
    while ( v17 + 376 != v19 );
    *(_QWORD *)(a1 + 640) = v18;
    v17[1] = xmmword_AA6C0;
    v17[375] = qword_AB270;
    qmemcpy(
      (void *)((unsigned __int64)(v17 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&xmmword_AA6C0 - ((char *)v18 - ((unsigned __int64)(v17 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v18 - (((_DWORD)v17 + 16) & 0xFFFFFFF8) + 3000) >> 3));
  }
  if ( a3 && a5 && *(_BYTE *)(a3 + 18) != 29 )
  {
    v21[1] = 0;
    v21[0] = *(_QWORD *)a3;
    copy_tinfo_t();
    v11 = *(_WORD *)(a3 + 16);
    v12 = *(char **)(a1 + 624);
    v23 = 29;
    v13 = *(_DWORD *)(a1 + 632);
    v22 = v11;
    sub_7C800(0, (__int64)v21, 0, v12, v13, 1);
    clear_tinfo_t();
  }
  result = sub_7C800(a2, a3, a4, *(char **)(a1 + 624), *(_DWORD *)(a1 + 632), a5);
  if ( (int)result <= 0 && a3 && *(_QWORD *)a3 && !*(_WORD *)(a3 + 16) )
    return sub_7C800(a2, a3, a4, *(char **)(a1 + 640), *(_DWORD *)(a1 + 648), a5);
  return result;
}
