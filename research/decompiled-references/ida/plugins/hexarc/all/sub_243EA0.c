_QWORD *__fastcall sub_243EA0(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5, char a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = *(unsigned int *)(a2 + 36);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v20[1] = __readfsqword(0x28u);
  sub_324D40(v20, v10, v9);
  v12 = sub_242770(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v20, 0);
  clear_tinfo_t();
  if ( a3 == 49 )
  {
    v17 = sub_23D0E0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v12, v13, v14, v15);
  }
  else
  {
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      sub_324F00(
        v20,
        *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
        *(unsigned int *)(a2 + 36),
        (unsigned int)(a3 != 47) + 1);
      sub_23F7C0(v12, *(_QWORD *)(a1 + 328), v20);
      clear_tinfo_t();
    }
    v16 = j__qalloc_or_throw();
    *(_QWORD *)v16 = -1;
    v17 = (_QWORD *)v16;
    *(_DWORD *)(v16 + 8) = a3;
    *(_QWORD *)(v16 + 12) = -1;
    *(_QWORD *)(v16 + 24) = v12;
    *(_QWORD *)(v16 + 32) = 0;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0;
    *(_DWORD *)(v16 + 56) = 0;
  }
  return sub_243AA0(a1, a2, (__int64)v17, a5, a6);
}

