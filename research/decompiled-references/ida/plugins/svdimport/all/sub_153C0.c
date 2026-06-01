unsigned __int64 __fastcall sub_153C0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 *v4; // rsi
  bool v6; // zf
  unsigned __int64 v7; // rbx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 48);
  v10 = __readfsqword(0x28u);
  v3 = v2 + 160 * v1;
  if ( v2 != v3 )
  {
    do
    {
      sub_152F0(a1, v2);
      v4 = (__int64 *)(v2 + 136);
      v2 += 160;
      *(_QWORD *)(v2 - 32) = sub_12F10(a1, v4);
    }
    while ( v3 != v2 );
    v1 = *(_QWORD *)(a1 + 56);
  }
  v8 = 0;
  v9 = 0;
  if ( v1 )
  {
    v8 = qvector_reserve();
    memset((void *)(v8 + v9), 0, v1 - v9);
    v6 = *(_QWORD *)(a1 + 56) == 0;
    *(_QWORD *)&v9 = v1;
    if ( !v6 )
    {
      v7 = 0;
      do
        sub_12FA0(a1, v7++, &v8);
      while ( v7 < *(_QWORD *)(a1 + 56) );
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v10 - __readfsqword(0x28u);
}

