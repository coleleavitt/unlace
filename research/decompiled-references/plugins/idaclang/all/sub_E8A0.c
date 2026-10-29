__int64 __fastcall sub_E8A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7)
{
  const char *v7; // rdx
  const char *v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  sub_C150((__int64)&v9);
  v7 = s1;
  if ( v10 )
    v7 = v9;
  sub_67C0((__int64 *)a1, (__int64)"%s(%d)", v7, (_DWORD)a7);
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
  }
  return a1;
}
