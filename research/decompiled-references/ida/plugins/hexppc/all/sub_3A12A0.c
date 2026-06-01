unsigned __int64 __fastcall sub_3A12A0(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v4; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // esi
  _DWORD *v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  _DWORD *v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  if ( (int)v4 != a3[1] )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC83Du, a4);
    BUG();
  }
  if ( (_DWORD)v4 )
  {
    v17 = 0;
    v16 = (_DWORD *)qvector_reserve();
    *v16 = 0;
    v10 = 1;
    if ( (unsigned __int64)(int)v4 > 1 )
    {
      do
        v16[v10++] = 0;
      while ( (int)v4 != v10 );
    }
    *(_QWORD *)&v17 = (int)v4;
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            1177,
            a2,
            &v16,
            1,
            &callui,
            v9);
    if ( v11 != *(_QWORD *)(a2 + 8) )
      sub_69660((__int64)"** WARNING ** only %d out of %d decompiler breakpoints have been relocated\n", v11, v4);
    v12 = v16;
    if ( (int)v4 > 0 )
    {
      v13 = 0;
      v14 = 4LL * (unsigned int)(v4 - 1) + 4;
      do
      {
        while ( v12[v13 / 4] )
        {
          v13 += 4LL;
          if ( v13 == v14 )
            goto LABEL_13;
        }
        sub_2B2530(a1, *(_QWORD *)(*a3 + 6 * v13), 0);
        netnode_supdel();
        v13 += 4LL;
        v12 = v16;
      }
      while ( v13 != v14 );
LABEL_13:
      v15 = 0;
      do
      {
        while ( v12[v15 / 4] )
        {
          v15 += 4LL;
          if ( v15 == v14 )
            goto LABEL_17;
        }
        sub_2B2530(a1, *(_QWORD *)(*a3 + 6 * v15 + 8), 1);
        netnode_supset();
        v15 += 4LL;
        v12 = v16;
      }
      while ( v15 != v14 );
    }
LABEL_17:
    if ( v12 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  return v18 - __readfsqword(0x28u);
}

