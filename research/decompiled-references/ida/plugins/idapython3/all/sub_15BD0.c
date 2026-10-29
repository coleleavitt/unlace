__int64 __fastcall sub_15BD0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned int v7; // ebx
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a4 + 8);
  v14 = __readfsqword(0x28u);
  v12 = nullptr;
  v13 = 0;
  if ( v5 )
  {
    v10 = (void *)qalloc_or_throw();
    v11 = *(const void **)a4;
    *((_QWORD *)&v13 + 1) = v5;
    v12 = v10;
    memcpy(v10, v11, 8 * v5);
    *(_QWORD *)&v13 = v5;
  }
  v7 = sub_14AF0(a1, a2, a3, (__int64 *)&v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}

