__int64 __fastcall sub_148F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // r13
  int v5; // r13d
  _QWORD *v6; // r15
  _QWORD *i; // [rsp+8h] [rbp-90h]
  __int64 v9; // [rsp+10h] [rbp-88h]
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h]
  _BYTE *v13; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+48h] [rbp-50h]
  unsigned __int64 v15; // [rsp+58h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  v12 = 0;
  v11 = 0;
  v9 = *(_QWORD *)(v1 + 8);
  v10 = v9 + 48LL * *(_QWORD *)(v1 + 16);
  if ( v9 == v10 )
  {
    return 0;
  }
  else
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD **)(v9 + 24);
      for ( i = &v3[*(_QWORD *)(v9 + 32)]; i != v3; ++v3 )
      {
        v6 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL * *v3);
        if ( v6[13] > 1u )
          v2 |= sub_14700(a1, (_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL * *v3), (__int64)&v11);
        v4 = v6[15];
        v14 = 0;
        v13 = nullptr;
        v13 = (_BYTE *)qvector_reserve();
        *(_QWORD *)&v14 = 1;
        *v13 = 0;
        v5 = sub_13FD0(a1, v6 + 17, (size_t *)&v13, v4, (__int64)v6, (__int64)&v11);
        if ( v13 )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
        v2 |= v5;
      }
      v9 += 48;
    }
    while ( v10 != v9 );
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return v2;
}

