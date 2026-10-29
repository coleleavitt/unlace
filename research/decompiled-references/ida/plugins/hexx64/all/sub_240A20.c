unsigned __int64 __fastcall sub_240A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v11 = *(_DWORD *)(a1 + 8) == 61;
  v20 = __readfsqword(0x28u);
  if ( !v11 )
  {
    sub_255630(a1);
    *(_DWORD *)(a1 + 8) = 61;
    v15 = j__qalloc_or_throw(48, a2, v13, v14);
    a7 = 0.0;
    *(_QWORD *)v15 = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 40) = 0;
    *(_OWORD *)(v15 + 24) = 0;
    *(_QWORD *)(a1 + 24) = v15;
  }
  v16 = *(_QWORD *)(a2 + 112);
  if ( !a6 )
    a6 = 1;
  if ( !a5 )
  {
    a5 = *(unsigned __int8 *)(a2 + 130);
    if ( *(_DWORD *)(v16 + 80) == 8 && *(unsigned __int8 *)(a2 + 130) < 8u )
    {
      v18 = sub_32ABC0(a4, *(unsigned __int8 *)(a2 + 130), a6 == 1);
      v16 = *(_QWORD *)(a2 + 112);
      if ( a4 != v18 )
        a5 = 8;
    }
  }
  sub_2400B0(*(_QWORD *)(a1 + 24), v16, a4, a5, a6, a7);
  if ( a3 )
    sub_240140(*(_QWORD *)(a1 + 24) + 8LL, a3, *(_QWORD *)a1, **(_QWORD **)(a1 + 24));
  sub_240880(&v19, *(_QWORD *)(a1 + 24), a2, a5, a6);
  copy_tinfo_t();
  clear_tinfo_t();
  return v20 - __readfsqword(0x28u);
}

