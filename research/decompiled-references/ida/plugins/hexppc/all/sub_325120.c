__int64 __fastcall sub_325120(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 *v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !a4 )
    return sub_11F0E0(a1, a2, a3);
  v8 = nullptr;
  v9 = 0;
  if ( a2 + a3 - 1 >= a2 )
  {
    v8 = (__int64 *)qvector_reserve();
    v7 = &v8[2 * v9];
    *v7 = a2;
    v7[1] = a3;
    *(_QWORD *)&v9 = v9 + 1;
  }
  sub_313AE0((__int64 *)&v8, a4);
  sub_312B30(a1 + 2, &v8);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}

