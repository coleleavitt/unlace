__int64 __fastcall sub_247510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  __int64 v7; // rbp
  __int64 v9; // rdi
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDA3u, a5);
    BUG();
  }
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == 51 )
  {
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
    return a2;
  }
  if ( v5 == 48 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v9 + 8) == 51 )
    {
      sub_255850((__int64 *)v9, *(_QWORD *)(v9 + 24));
      sub_32C540(v10, a1, (_QWORD *)(a2 + 48));
      copy_tinfo_t();
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 52;
      sub_32C540(v10, a1, (_QWORD *)(a2 + 48));
      sub_246B40(a2, *(_QWORD *)(a1 + 96), v10, a5);
    }
    clear_tinfo_t();
    return a2;
  }
  v7 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)v7 = -1;
  *(_DWORD *)(v7 + 8) = 52;
  *(_QWORD *)(v7 + 12) = -1;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)v7 = *(_QWORD *)a2;
  sub_2441C0(v7, a1, 0, a5);
  return v7;
}

