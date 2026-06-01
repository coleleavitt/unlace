unsigned __int64 __fastcall sub_9CD0(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 i; // rbx
  __int64 v9; // rcx
  const char *v10; // rsi
  __int64 v12; // [rsp+10h] [rbp-488h] BYREF
  __int64 v13; // [rsp+18h] [rbp-480h] BYREF
  char v14; // [rsp+27h] [rbp-471h] BYREF
  __int64 v15; // [rsp+28h] [rbp-470h]
  const char *v16; // [rsp+30h] [rbp-468h] BYREF
  __int128 v17; // [rsp+38h] [rbp-460h]
  char v18; // [rsp+50h] [rbp-448h] BYREF
  __int64 v19; // [rsp+51h] [rbp-447h]
  unsigned __int64 v20; // [rsp+458h] [rbp-40h]

  v6 = a4;
  v20 = __readfsqword(0x28u);
  v7 = netnode_supfirst(a3, a4);
  if ( v7 != -1 )
  {
    for ( i = v7; i != -1; i = netnode_supnext(a3, i, v6) )
    {
      v9 = netnode_supval(a3, i, &v18, 1024, v6);
      if ( v9 != 9 || v18 )
      {
        netnode_supset(a1, i, &v18, v9, a2);
      }
      else
      {
        v16 = nullptr;
        v12 = v19;
        v17 = 0;
        netnode_qgetblob(v19, &v16, 1, 0, v6 | 0x400);
        netnode_kill(&v12);
        v13 = -1;
        netnode_check(&v13, 0, 0, 1);
        v14 = 0;
        v15 = v13;
        netnode_supset(a1, i, &v14, 9, a2);
        v10 = (const char *)&unk_150C8;
        if ( (_QWORD)v17 )
          v10 = v16;
        netnode_setblob(v13, v10, v17, 0, a2);
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16, v10);
        }
      }
    }
  }
  return v20 - __readfsqword(0x28u);
}

