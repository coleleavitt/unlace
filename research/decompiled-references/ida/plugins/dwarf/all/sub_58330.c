__int64 __fastcall sub_58330(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v5; // r9d
  unsigned int v6; // r14d
  __int64 i; // rbx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // [rsp+0h] [rbp-78h]
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+18h] [rbp-60h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v3 = a1[1];
  v18 = __readfsqword(0x28u);
  v17 = 0;
  v16 = 0;
  v6 = compact_numbered_types(v3, a2, &v16, 0);
  if ( v6 )
  {
    for ( i = a1[6]; (_QWORD *)i != a1 + 4; i = std::_Rb_tree_increment(i) )
    {
      v10 = *(_QWORD *)(i + 40);
      if ( (unsigned int)v10 >= a2 )
      {
        v11 = *(_QWORD *)(i + 32);
        v12 = *(unsigned int *)(v16 + 4LL * ((unsigned int)v10 - a2));
        if ( (debug & 0x400000) != 0 )
        {
          v13 = *(_QWORD *)(i + 32);
          v14 = *(_QWORD *)(i + 40);
          sub_88B80((unsigned int)"%llu: %d -> %d\n", v11, v10, v12, v10, v5);
          LODWORD(v10) = v14;
          v11 = v13;
        }
        if ( (_DWORD)v10 != (_DWORD)v12 )
        {
          v9 = a1[2];
          v15 = v12;
          netnode_supset(v9, v11, &v15, 8, 65);
          *(_QWORD *)(i + 40) = v12;
        }
      }
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v6;
}

