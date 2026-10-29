__int64 __fastcall sub_F8060(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  __int64 *v4; // rdi
  __int64 v5; // rax
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // r12
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a2 + 32);
  v9[3] = __readfsqword(0x28u);
  if ( v3 != 5 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v4 = (__int64 *)(a1 + 432);
      if ( v3 != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCAB4u, a3);
        BUG();
      }
      v5 = *(_QWORD *)(a2 + 24);
      v9[0] = 3;
      v9[1] = (unsigned int)v5;
      v6 = sub_1F06C0(v4, (int *)v9, 1, 0);
      cleanup_argloc();
      return v6 == -1;
    }
    return 0;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( (unsigned __int8)sub_1EF9B0(a1, v8, 1) || v8 + 1 > *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120) )
    return 0;
  result = 1;
  if ( v8 + *(int *)(a2 + 40) > *(_QWORD *)(a1 + 136) )
    return 2;
  return result;
}

