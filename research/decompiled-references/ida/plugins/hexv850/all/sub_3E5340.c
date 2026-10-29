__int64 __fastcall sub_3E5340(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  int v3; // r12d
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v1 = *(_QWORD *)(a1 + 832);
  v2 = *(_QWORD *)(v1 + 592) == 0;
  v3 = *(_DWORD *)(v1 + 500);
  *(_QWORD *)(v1 + 584) = 0;
  v4 = *(_DWORD **)(v1 + 576);
  if ( v2 )
  {
    v18 = qvector_reserve();
    v19 = *(_QWORD *)(v1 + 584);
    *(_QWORD *)(v1 + 576) = v18;
    v4 = (_DWORD *)(v18 + 4 * v19);
  }
  *v4 = v3;
  v5 = *(_QWORD *)(v1 + 584);
  v6 = *(_DWORD *)(v1 + 496);
  v7 = *(_QWORD *)(v1 + 576);
  v8 = v5 + 1;
  *(_QWORD *)(v1 + 584) = v5 + 1;
  if ( *(_QWORD *)(v1 + 592) < (unsigned __int64)(v5 + 2) )
  {
    v22 = qvector_reserve();
    *(_QWORD *)(v1 + 576) = v22;
    v7 = v22;
    v8 = *(_QWORD *)(v1 + 584);
  }
  *(_DWORD *)(v7 + 4 * v8) = v6;
  v9 = *(_QWORD *)(v1 + 584);
  v10 = *(_DWORD *)(v1 + 492);
  v11 = *(_QWORD *)(v1 + 576);
  v12 = v9 + 1;
  *(_QWORD *)(v1 + 584) = v9 + 1;
  if ( *(_QWORD *)(v1 + 592) < (unsigned __int64)(v9 + 2) )
  {
    v21 = qvector_reserve();
    *(_QWORD *)(v1 + 576) = v21;
    v11 = v21;
    v12 = *(_QWORD *)(v1 + 584);
  }
  *(_DWORD *)(v11 + 4 * v12) = v10;
  v13 = *(_QWORD *)(v1 + 584);
  v14 = *(_DWORD *)(v1 + 488);
  v15 = *(_QWORD *)(v1 + 576);
  v16 = v13 + 1;
  *(_QWORD *)(v1 + 584) = v13 + 1;
  if ( *(_QWORD *)(v1 + 592) < (unsigned __int64)(v13 + 2) )
  {
    v20 = qvector_reserve();
    *(_QWORD *)(v1 + 576) = v20;
    v15 = v20;
    v16 = *(_QWORD *)(v1 + 584);
  }
  *(_DWORD *)(v15 + 4 * v16) = v14;
  ++*(_QWORD *)(v1 + 584);
  return 0;
}

