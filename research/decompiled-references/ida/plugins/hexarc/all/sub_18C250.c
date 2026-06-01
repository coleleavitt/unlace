__int64 __fastcall sub_18C250(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v11[3] = __readfsqword(0x28u);
  v3 = sub_18BBF0(a1 + 16, *(_QWORD *)(v2 + 8), nullptr);
  v11[1] = v4;
  v11[0] = v3;
  if ( (unsigned int)sub_18AC90(a1, (__int64 *)a2, v11) )
  {
    v5 = 0;
    if ( *(_BYTE *)(a2 + 48) )
      return v5;
    v7 = sub_18B1F0(a1, (_QWORD *)a2);
    if ( v7 == -1 )
    {
      if ( !under_debugger )
        sub_37B760(51544);
      BUG();
    }
  }
  else
  {
    v7 = -1;
  }
  v5 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v8 = 0;
    do
    {
      ++v5;
      sub_18B830(a1, (__int64 *)(*(_QWORD *)a2 + 24 * v8), (__int64)v11, v7);
      v8 = (int)v5;
    }
    while ( (unsigned __int64)(int)v5 < *(_QWORD *)(a2 + 8) );
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v9;
      v5 += sub_18BFC0(a1, (__int64 *)(*(_QWORD *)(a2 + 24) + 24 * v10), (__int64)v11, v7);
      v10 = v9;
    }
    while ( (unsigned __int64)v9 < *(_QWORD *)(a2 + 32) );
  }
  return v5;
}

