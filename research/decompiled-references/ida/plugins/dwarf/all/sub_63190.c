__int64 __fastcall sub_63190(__int64 a1, __int64 a2, const __m128i *a3)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebp
  int v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 v8; // [rsp+8h] [rbp-80h]
  __int64 v9; // [rsp+10h] [rbp-78h]
  __int128 v10; // [rsp+18h] [rbp-70h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+48h] [rbp-40h]
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v10 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v13 = 0;
  v4 = *(_QWORD **)(a1 + 16);
  v14 = 0;
  v12 = 0;
  v5 = sub_5D4A0(v4, &v13, a3);
  if ( (_BYTE)v5 )
    sub_5B490((__int64 *)(a1 + 24), (__int64)&v7);
  clear_tinfo_t(&v13);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  cleanup_argloc(&v7);
  return v5;
}

