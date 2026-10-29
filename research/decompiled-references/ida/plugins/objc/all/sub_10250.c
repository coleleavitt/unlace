__int64 __fastcall sub_10250(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( !(unsigned __int8)is_loaded() || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, a3) )
    return 0;
  v5 = (__int64 *)a1[4];
  v6 = *(_QWORD *)(a3 + 32);
  v7 = v5[1];
  v8 = *v5;
  if ( v5[2] < (unsigned __int64)(v7 + 1) )
  {
    v9 = qvector_reserve();
    *v5 = v9;
    v8 = v9;
    v7 = v5[1];
  }
  *(_QWORD *)(v8 + 8 * v7) = v6;
  ++v5[1];
  return 0;
}
