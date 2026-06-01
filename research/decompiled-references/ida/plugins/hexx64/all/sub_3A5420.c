unsigned __int64 __fastcall sub_3A5420(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  if ( (int)v4 != a3[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC83Du, a4);
    BUG();
  }
  if ( (_DWORD)v4 )
  {
    v17 = 0;
    v18 = 0;
    v8 = qvector_reserve((__int64)&v17, 0, (int)v4, 4);
    v10 = v18;
    v17 = v8;
    if ( (unsigned __int64)v18 < (int)v4 )
    {
      *(_DWORD *)(v8 + 4 * v18) = 0;
      v11 = v10 + 1;
      if ( v10 + 1 < (unsigned __int64)(int)v4 )
      {
        do
          *(_DWORD *)(v17 + 4 * v11++) = 0;
        while ( (int)v4 != v11 );
      }
    }
    *(_QWORD *)&v18 = (int)v4;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1177, a2, &v17, 1, &callui, v9);
    if ( v12 != *(_QWORD *)(a2 + 8) )
      sub_6D0A0((__int64)"** WARNING ** only %d out of %d decompiler breakpoints have been relocated\n", v12, v4);
    v13 = v17;
    if ( (int)v4 > 0 )
    {
      v14 = 0;
      v15 = 4LL * (unsigned int)(v4 - 1) + 4;
      do
      {
        while ( *(_DWORD *)(v13 + v14) )
        {
          v14 += 4;
          if ( v14 == v15 )
            goto LABEL_14;
        }
        sub_2B61B0(a1, *(_QWORD *)(*a3 + 6 * v14), 0);
        netnode_supdel();
        v14 += 4;
        v13 = v17;
      }
      while ( v14 != v15 );
LABEL_14:
      v16 = 0;
      do
      {
        while ( *(_DWORD *)(v13 + v16) )
        {
          v16 += 4;
          if ( v16 == v15 )
            goto LABEL_18;
        }
        sub_2B61B0(a1, *(_QWORD *)(*a3 + 6 * v16 + 8), 1);
        netnode_supset();
        v16 += 4;
        v13 = v17;
      }
      while ( v16 != v15 );
    }
LABEL_18:
    if ( v13 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v13);
    }
  }
  return v19 - __readfsqword(0x28u);
}

