__int64 __fastcall sub_281580(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 *j; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  __int64 i; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  v23 = __readfsqword(0x28u);
  if ( v2 == 77 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v20 = v8;
    v19 = sub_255380(v8);
    if ( (get_tinfo_property() & 0x3F) == 0x2D )
    {
      v21 = 0;
      v22 = 0;
      v9 = *(_QWORD *)(v8 + 120);
      v10 = *(_QWORD *)(v8 + 112);
      for ( i = v10 + 56 * v9; i != v10; v10 += 56 )
      {
        v11 = *(__int64 **)(v10 + 32);
        v12 = v22;
        for ( j = &v11[*(_QWORD *)(v10 + 40)]; j != v11; *(_QWORD *)&v22 = v22 + 1 )
        {
          v14 = *v11;
          v15 = v21;
          if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v12 + 1) )
          {
            v21 = qvector_reserve();
            v12 = v22;
            v15 = v21;
          }
          *(_QWORD *)(v15 + 8 * v12) = v14;
          ++v11;
          v12 = v22 + 1;
        }
      }
      if ( (get_tinfo_property() & 0x3F) == 0x2D && !*(_BYTE *)(v20 + 77) )
      {
        v16 = -1;
        v17 = 8 * *(char *)(v20 + 79);
        if ( (unsigned __int64)v17 <= 0x3F )
          v16 = (1LL << v17) - 1;
        if ( (unsigned __int8)sub_240B20(v20 + 72, (__int64 *)(v19 + 48), &v21, *(_QWORD *)(v20 + 64) & v16) )
        {
          copy_tinfo_t();
          *(_BYTE *)(a1 + 88) = 1;
        }
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
    }
  }
  else if ( v2 == 80 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v4 + 8) == 61 )
    {
      if ( !(unsigned __int8)*(_QWORD *)(a1 + 80) )
      {
        sub_36DC60(&v21, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL), 0);
        copy_tinfo_t();
        clear_tinfo_t();
        if ( !(unsigned __int8)*(_QWORD *)(a1 + 80) )
          return 0;
        v4 = *(_QWORD *)(a2 + 24);
      }
      v5 = *(_QWORD *)(v4 + 24);
      if ( (get_tinfo_property() & 0x3F) == 0x2D && !*(_BYTE *)(v5 + 13) )
      {
        v6 = -1;
        v7 = 8 * *(char *)(v5 + 15);
        if ( (unsigned __int64)v7 <= 0x3F )
          v6 = (1LL << v7) - 1;
        if ( (unsigned __int8)sub_240B20(v5 + 8, (__int64 *)(a1 + 80), nullptr, *(_QWORD *)v5 & v6) )
        {
          copy_tinfo_t();
          *(_BYTE *)(a1 + 88) = 1;
        }
      }
    }
  }
  return 0;
}

