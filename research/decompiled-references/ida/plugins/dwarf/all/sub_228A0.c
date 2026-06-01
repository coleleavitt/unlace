__int64 __fastcall sub_228A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // r12d
  int v5; // r8d
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = a1 + 28;
  v4 = *(_DWORD *)(v3 - 4);
  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_21440(v3, (__int64 *)&v7, v4 == 25);
  if ( v4 == 25 )
    v5 = *(_DWORD *)(a1 + 5160);
  else
    v5 = *(_DWORD *)(a1 + 32);
  sub_20160(a2, (__int64)"%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 24), v5, v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return 1;
}

