__int64 __fastcall sub_32790(__int64 a1, _QWORD *a2)
{
  int v3; // r15d
  int v4; // ebp
  int i; // r14d
  int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  signed int v18; // [rsp+Ch] [rbp-6Ch]
  int v19; // [rsp+18h] [rbp-60h]
  _BOOL4 v20; // [rsp+1Ch] [rbp-5Ch]
  __int64 v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 208);
  v19 = *(_DWORD *)(a1 + 472);
  v4 = *(_DWORD *)(a1 + 212) - v3;
  if ( v4 > 0 )
  {
    v18 = *(_DWORD *)(a1 + 472);
    for ( i = 0; ; i = v11 )
    {
      v11 = i + 1;
      v22 = sub_28D80(a1, i + 1);
      if ( BYTE4(v22) )
      {
        v6 = v22;
      }
      else
      {
        v12 = i + v3;
        v14 = *a2 + 8 * v12;
        if ( !*(_BYTE *)(v14 + 4) )
          goto LABEL_12;
        v6 = *(_DWORD *)v14;
      }
      v7 = v19;
      if ( v19 < v6 )
        v7 = v6;
      v8 = sub_32700(a1 + 480, v7, v12, HIDWORD(v22), v13);
      if ( v9 )
      {
        v20 = 1;
        if ( !v8 && v9 != a1 + 488 )
          v20 = (int)v7 < *(_DWORD *)(v9 + 32);
        v21 = v9;
        v10 = operator new(0x28u);
        *(_DWORD *)(v10 + 32) = v7;
        std::_Rb_tree_insert_and_rebalance(v20, v10, v21, a1 + 488);
        ++*(_QWORD *)(a1 + 520);
      }
      if ( v18 >= v6 )
        v6 = v18;
      v18 = v6;
LABEL_12:
      if ( v4 == v11 )
        goto LABEL_18;
      v3 = *(_DWORD *)(a1 + 208);
    }
  }
  v18 = *(_DWORD *)(a1 + 472);
LABEL_18:
  v15 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v15 + 104) )
  {
    v16 = *(_DWORD *)(std::_Rb_tree_decrement(v15 + 72) + 32);
    if ( v18 >= v16 )
      v16 = v18;
    v18 = v16;
  }
  *(_DWORD *)(a1 + 476) = v18;
  return (unsigned int)v18;
}

