__int64 __fastcall sub_21360(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  __int128 v9; // [rsp+18h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  v8 = 0;
  v9 = 0;
  v4 = *(_QWORD *)(v3 + 8);
  v7 = 0;
  if ( (v4 & 2) != 0 )
  {
    sub_15AB0(*(__int64 **)(a1 + 8), (__int64)&v7, a2);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 4) == 0 )
      goto LABEL_3;
  }
  else if ( (v4 & 4) == 0 )
  {
    goto LABEL_3;
  }
  sub_21280(*(__int64 **)(a1 + 8), (__int64 *)&v9, a2, *(_QWORD *)(v3 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 8);
LABEL_3:
  if ( (v4 & 8) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 8) + 488LL))(
      *(_QWORD *)(a1 + 8),
      (char *)&v9 + 8,
      a2);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 8);
  }
  if ( (v4 & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 8) + 496LL))(
      *(_QWORD *)(a1 + 8),
      (char *)&v10 + 4,
      a2);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 8);
  }
  if ( (v4 & 0x40) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a1 + 8) + 504LL))(*(_QWORD *)(a1 + 8), &v11, a2);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 8);
  }
  if ( (v4 & 0x10) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 8) + 480LL))(*(_QWORD *)(a1 + 8), &v10, a2);
    v3 = *(_QWORD *)(a1 + 16);
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64 *))v3)(v3, a2, &v7);
  clear_tinfo_t();
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v5;
}
