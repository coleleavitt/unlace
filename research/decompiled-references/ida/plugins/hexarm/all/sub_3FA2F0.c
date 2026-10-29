__int64 __fastcall sub_3FA2F0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v5 = a1;
  v6 = a2;
  v7 = *(_DWORD **)(a1 + 832);
  v14 = __readfsqword(0x28u);
  v8 = a3;
  if ( a4 == 1
    && *(_WORD *)(v5 + 48) == 475
    && *(_BYTE *)a2 == 1
    && !(unsigned __int8)sub_3F09D0((__int64)v7, *(_DWORD *)(a2 + 8), v7[89], v7[97]) )
  {
    return 0;
  }
  v9 = v7[16];
  v12 = 0x200000001LL;
  v13 = v9;
  v10 = sub_3F8E00(v5, 1u, v6, (__int64)&v12, v8, a5);
  sub_11C7E0((__int64)&v12);
  return v10;
}

