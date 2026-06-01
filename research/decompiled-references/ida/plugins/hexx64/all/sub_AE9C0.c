__int64 __fastcall sub_AE9C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, double a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // ebx
  int v17; // eax
  __int64 v19[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  v6 = 0;
  if ( a3 != a4 )
  {
    v7 = a3;
    do
    {
      if ( (unsigned __int8)sub_64880(a2) && !a2[3] )
        break;
      if ( !v7 )
      {
        if ( !under_debugger )
          sub_383060(0xC374u, a6);
        BUG();
      }
      sub_127A20((__int64)v19, a1, v7, a5, v9, v10);
      v16 = sub_64640(a2, v19, v12, v13, v14, v15);
      v17 = sub_317C60(a2 + 2, (__int64)v20);
      v7 = *(_QWORD *)(v7 + 8);
      v6 |= v17 | v16;
      if ( v20[0] )
      {
        v20[1] = 0;
        qfree(v20[0]);
      }
      qfree(v19[0]);
    }
    while ( a4 != v7 );
  }
  return v6;
}

