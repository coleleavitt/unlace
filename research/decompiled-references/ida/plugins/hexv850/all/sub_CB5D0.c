unsigned __int64 __fastcall sub_CB5D0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rdx
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rsi
  _DWORD *v8; // r12
  __int64 v10; // rax
  int v11; // [rsp+10h] [rbp-58h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    copy_argloc();
    cleanup_argloc();
  }
  copy_argloc();
  v4 = a1[1];
  v5 = 0;
  if ( v4 )
    v5 = *(_WORD *)(*a1 + 24 * v4 - 6) + *(_WORD *)(*a1 + 24 * v4 - 8);
  LOWORD(v11) = v5;
  HIWORD(v11) = a3;
  copy_argloc();
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve();
    *a1 = v10;
    v6 = a1[1];
    v7 = v10;
  }
  v8 = (_DWORD *)(v7 + 24 * v6);
  *v8 = 0;
  copy_argloc();
  v8[4] = v11;
  ++a1[1];
  cleanup_argloc();
  cleanup_argloc();
  return v12 - __readfsqword(0x28u);
}

