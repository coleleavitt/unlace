unsigned __int64 __fastcall sub_147F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  int *v6; // r9
  __int64 v8; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-30h]

  v4 = 32;
  v9 = __readfsqword(0x28u);
  if ( a4 < 0 )
    v4 = 45;
  btoa64();
  v6 = &dword_19544;
  if ( *(_QWORD *)(a3 + 24) )
    v6 = *(int **)(a3 + 16);
  sub_12D70(a2, (__int64)qword_18780, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL), v4, &v8, v6);
  return v9 - __readfsqword(0x28u);
}

