__int64 __fastcall sub_28A590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  int tinfo_size; // eax

  v8 = *(_QWORD *)(a1 + 216);
  v9 = sub_254FC0(a2);
  if ( *(_DWORD *)(v9 + 8) == 61 )
  {
    v18 = sub_255A30(*(__int64 **)(v9 + 24));
    if ( *(_DWORD *)(a3 + 8) != 61 )
      sub_27ECD0(a6);
    v19 = sub_255A30(*(__int64 **)(a3 + 24));
    v20 = v19 + v18;
    v21 = v18 - v19;
    if ( a5 == 35 )
      v21 = v20;
    tinfo_size = get_tinfo_size();
    v12 = a2;
    sub_240A20(a2, v8, a1, v21, tinfo_size, 0, a6);
  }
  else
  {
    v12 = j__qalloc_or_throw(64, a2, v10, v11);
    v15 = j__qalloc_or_throw(64, a2, v13, v14);
    *(_QWORD *)v15 = -1;
    v16 = v15;
    *(_DWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 48) = 0;
    *(_QWORD *)(v15 + 12) = -1;
    *(_DWORD *)(v15 + 56) = 0;
    sub_25AFF0(v15, a3, a6);
    *(_QWORD *)v12 = -1;
    *(_DWORD *)(v12 + 8) = a5;
    *(_QWORD *)(v12 + 12) = -1;
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v16;
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 48) = 0;
    *(_DWORD *)(v12 + 56) = 0;
    sub_2441C0(v12, *(_QWORD *)(v8 + 112), 0, a6);
    *(_QWORD *)v12 = a4;
  }
  return v12;
}

