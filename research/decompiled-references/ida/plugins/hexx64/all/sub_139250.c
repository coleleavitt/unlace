unsigned __int64 __fastcall sub_139250(__int64 a1)
{
  __int64 *v2; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( (*(_BYTE *)a1 & 0x20) == 0 )
  {
    v2 = (__int64 *)(a1 + 360);
    sub_138BB0(a1, 0, (__int64 *)(a1 + 360), 0, 0xFFFFFFFFFFFFFFFFLL, 0);
    v4 = *(_QWORD *)(a1 + 520);
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    v5 = *(_QWORD *)(v4 + 8);
    for ( v11[0] = 0; v5; v5 = *(_QWORD *)(v5 + 8) )
    {
      sub_64280(v11, (__int64 *)(v5 + 240), 0.0);
      sub_316CB0(&v12, (__int64 **)(v5 + 256), v6, v7);
    }
    sub_64700(v2, v11);
    sub_3180C0((__int64 *)(a1 + 376), (__int64)&v12, v8, v9);
    sub_1373E0(*(_QWORD *)(a1 + 1504), v2, *(_QWORD *)(a1 + 920));
    v10 = v12;
    *(_DWORD *)a1 |= 0x20u;
    if ( v10 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v10);
    }
    qfree(v11[0]);
  }
  return v14 - __readfsqword(0x28u);
}

