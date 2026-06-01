unsigned __int64 __fastcall sub_23C1A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v10 = *(_DWORD *)(a1 + 8) == 61;
  v17 = __readfsqword(0x28u);
  if ( !v10 )
  {
    sub_250DB0(a1);
    *(_DWORD *)(a1 + 8) = 61;
    v12 = j__qalloc_or_throw();
    *(_QWORD *)v12 = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 40) = 0;
    *(_OWORD *)(v12 + 24) = 0;
    *(_QWORD *)(a1 + 24) = v12;
  }
  v13 = *(_QWORD *)(a2 + 112);
  if ( !a6 )
    a6 = 1;
  if ( !a5 )
  {
    a5 = *(unsigned __int8 *)(a2 + 130);
    if ( *(_DWORD *)(v13 + 80) == 8 && *(unsigned __int8 *)(a2 + 130) < 8u )
    {
      v15 = sub_325C90(a4, *(unsigned __int8 *)(a2 + 130), a6 == 1);
      v13 = *(_QWORD *)(a2 + 112);
      if ( a4 != v15 )
        a5 = 8;
    }
  }
  sub_23B830(*(_QWORD *)(a1 + 24), v13, a4, a5, a6);
  if ( a3 )
    sub_23B8C0(*(_QWORD *)(a1 + 24) + 8LL, a3, *(_QWORD *)a1, **(_QWORD **)(a1 + 24));
  sub_23C000(&v16, *(_QWORD *)(a1 + 24), a2, a5, a6);
  copy_tinfo_t();
  clear_tinfo_t();
  return v17 - __readfsqword(0x28u);
}

