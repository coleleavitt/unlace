__int64 __fastcall sub_3E99E0(__int64 a1)
{
  bool v1; // zf
  int v2; // r12d
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v1 = *(_QWORD *)(a1 + 4472) == 0;
  v2 = *(_DWORD *)(a1 + 524);
  v3 = *(_DWORD **)(a1 + 4456);
  *(_QWORD *)(a1 + 4464) = 0;
  if ( v1 )
  {
    v16 = qvector_reserve();
    v17 = *(_QWORD *)(a1 + 4464);
    *(_QWORD *)(a1 + 4456) = v16;
    v3 = (_DWORD *)(v16 + 4 * v17);
  }
  *v3 = v2;
  v4 = *(_QWORD *)(a1 + 4464);
  v5 = *(_DWORD *)(a1 + 520);
  v6 = *(_QWORD *)(a1 + 4456);
  v7 = v4 + 1;
  *(_QWORD *)(a1 + 4464) = v4 + 1;
  if ( *(_QWORD *)(a1 + 4472) < (unsigned __int64)(v4 + 2) )
  {
    v20 = qvector_reserve();
    *(_QWORD *)(a1 + 4456) = v20;
    v6 = v20;
    v7 = *(_QWORD *)(a1 + 4464);
  }
  *(_DWORD *)(v6 + 4 * v7) = v5;
  v8 = *(_QWORD *)(a1 + 4464);
  v9 = *(_DWORD *)(a1 + 516);
  v10 = *(_QWORD *)(a1 + 4456);
  v11 = v8 + 1;
  *(_QWORD *)(a1 + 4464) = v8 + 1;
  if ( *(_QWORD *)(a1 + 4472) < (unsigned __int64)(v8 + 2) )
  {
    v19 = qvector_reserve();
    *(_QWORD *)(a1 + 4456) = v19;
    v10 = v19;
    v11 = *(_QWORD *)(a1 + 4464);
  }
  *(_DWORD *)(v10 + 4 * v11) = v9;
  v12 = *(_QWORD *)(a1 + 4464);
  v13 = *(_DWORD *)(a1 + 512);
  v14 = *(_QWORD *)(a1 + 4456);
  result = v12 + 1;
  *(_QWORD *)(a1 + 4464) = v12 + 1;
  if ( *(_QWORD *)(a1 + 4472) < (unsigned __int64)(v12 + 2) )
  {
    v18 = qvector_reserve();
    *(_QWORD *)(a1 + 4456) = v18;
    v14 = v18;
    result = *(_QWORD *)(a1 + 4464);
  }
  *(_DWORD *)(v14 + 4 * result) = v13;
  ++*(_QWORD *)(a1 + 4464);
  return result;
}

