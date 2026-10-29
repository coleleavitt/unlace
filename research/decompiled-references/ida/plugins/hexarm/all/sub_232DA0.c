__int64 __fastcall sub_232DA0(__int64 a1, signed __int64 a2, int a3)
{
  int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 *v10; // rax
  __m128 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) <= a2 )
    return 0;
  v4 = a3;
  if ( sub_227390(a1, a2, a3) )
  {
    v4 = *(_DWORD *)(a1 + 144) - a2;
    v5 = v4;
  }
  else
  {
    v5 = v4;
    v9 = *(_QWORD *)(a1 + 128);
    if ( v4 + a2 > v9 )
    {
      v4 = v9 - a2;
      v5 = (int)v9 - (int)a2;
    }
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (a2 + *(_QWORD *)(a1 + 1440));
  v11 = 0u;
  v13 = 0;
  v12 = 0;
  if ( v6 + v5 - 1 >= v6 )
  {
    v12 = qvector_reserve();
    v10 = (unsigned __int64 *)(16 * v13 + v12);
    *v10 = v6;
    v10[1] = v5;
    *(_QWORD *)&v13 = v13 + 1;
  }
  v7 = sub_63C80((__int64 *)(a1 + 832), (__int64 *)&v11);
  if ( (unsigned __int8)sub_317070(a1 + 848, &v12) )
  {
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    qfree();
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(a1 + 816);
  *(_DWORD *)a1 |= 0x8000000u;
  v12 = v8;
  v11 = _mm_loadh_ps((const double *)&v12);
  if ( (unsigned __int8)sub_227B00((__int64)&v11, a2, v4) )
    sub_230870((__int64)&v11, 0xFFFFFFFFFFFFFFFFLL, 0);
  return 1;
}

