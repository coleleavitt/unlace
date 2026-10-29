__int64 __fastcall sub_F100(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 16);
  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v6 = sub_ECC0(v5, a2, a3, a4, a5, (__int64)&v8);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v6;
}
