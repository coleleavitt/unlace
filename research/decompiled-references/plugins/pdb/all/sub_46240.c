__int64 __fastcall sub_46240(__int64 a1, __int64 a2, unsigned __int64 *a3, __m128i *a4, __m128i *a5)
{
  unsigned int v6; // r14d
  int v7; // ecx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+20h] [rbp-38h]
  char v21; // [rsp+24h] [rbp-34h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v6 = sub_45960(a1, &v17, a4, a5);
  if ( v6 == 1 )
  {
    if ( (_QWORD)v18 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v17 + 144 * v8);
        if ( v19 < (unsigned __int64)(v9[1] + *v9 + 7LL) >> 3 )
          v19 = (unsigned __int64)(v9[1] + *v9 + 7LL) >> 3;
        v8 = ++v7;
      }
      while ( v7 < (unsigned __int64)v18 );
    }
    if ( a3 )
      *a3 = v19;
    v6 = sub_46FD0(a1, a2, &v17, 2);
  }
  v10 = v17;
  if ( v17 )
  {
    v11 = v18;
    if ( (_QWORD)v18 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v10 + 144 * v12);
        clear_tinfo_t(v13 + 8);
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = 0;
          qfree(v14);
        }
        v15 = v13[2];
        if ( v15 )
        {
          v13[3] = 0;
          qfree(v15);
        }
        ++v12;
        v10 = v17;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v10);
  }
  return v6;
}
