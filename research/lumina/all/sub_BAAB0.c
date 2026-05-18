_QWORD *__fastcall sub_BAAB0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a2;
  v10[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_15AEA0(*(_QWORD *)(v4 + 16), a3, 0xFFFFFFFFLL, v10, 0) )
  {
    if ( a4 )
      sub_BAA10(a4, *a2);
    *a1 = 0;
  }
  else
  {
    v7 = operator new(0x20u);
    v8 = v10[0];
    *(_QWORD *)v7 = &off_239C90;
    v9 = *a2;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)(v7 + 16) = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    *(_QWORD *)(v7 + 24) = v8;
    *a1 = v7;
  }
  return a1;
}
