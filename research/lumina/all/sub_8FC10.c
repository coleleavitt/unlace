__int64 __fastcall sub_8FC10(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // r13
  int v8; // eax
  int v9; // esi
  unsigned __int8 (__fastcall **v10)(__int64); // rax
  unsigned int *v11; // r12
  int v12; // eax
  __int64 v13; // rbp
  void *v14; // rdi
  size_t v15; // rbp
  size_t v16; // rdx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx

  if ( *(_DWORD *)(a1 + 252) == 2
    && ((v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL), v18 != sub_2C850)
      ? (v19 = ((__int64 (*)(void))v18)())
      : (v19 = *(_QWORD *)(a1 + 96)),
        (int)sub_167210(v19, 0) <= 0) )
  {
    v20 = operator new(0x10u);
    *(_BYTE *)(v20 + 8) = 10;
    v13 = v20;
    *(_QWORD *)v20 = off_237D08;
  }
  else if ( a3
         && *(int *)(a3 + 8) > 0
         && ((v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL), v6 != sub_2C850)
           ? (v7 = v6(a1))
           : (v7 = *(_QWORD *)(a1 + 96)),
             ((v8 = time(nullptr), v9 = *(_DWORD *)(a3 + 8), v9 <= v8)
           || (int)sub_167210(v7, (unsigned int)(1000 * (v9 - v8))) <= 0)
          && (v10 = *(unsigned __int8 (__fastcall ***)(__int64))a3, *(_DWORD *)(a3 + 8) = 0, (*v10)(a3))) )
  {
    return 0;
  }
  else
  {
    v11 = (unsigned int *)sub_1692C0(a1, a2);
    v12 = *(_DWORD *)(a1 + 248);
    if ( v12 > 0 )
      *(_DWORD *)(a1 + 248) = v12 - 1;
    v13 = 0;
    if ( v11 )
    {
      *(_QWORD *)(a1 + 272) = 0;
      v14 = *(void **)(a1 + 264);
      v15 = *v11 + 5LL;
      v16 = v15;
      if ( *(_QWORD *)(a1 + 280) < v15 )
      {
        v21 = sub_1987B0(a1 + 264, *(_QWORD *)(a1 + 264), v15, 1);
        v22 = *(_QWORD *)(a1 + 272);
        *(_QWORD *)(a1 + 264) = v21;
        v16 = v15 - v22;
        v14 = (void *)(v21 + v22);
      }
      memset(v14, 0, v16);
      *(_QWORD *)(a1 + 272) = v15;
      memcpy(*(void **)(a1 + 264), v11, v15);
      v13 = sub_167E00(a1, v11);
      if ( (unsigned __int8)sub_167DE0(a1) )
        nullsub_69(a1, v13, v11);
    }
    j__free(v11);
  }
  return v13;
}
