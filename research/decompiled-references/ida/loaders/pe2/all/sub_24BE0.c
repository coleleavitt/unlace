__int64 __fastcall sub_24BE0(__int64 a1, int a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  void *v10; // r13
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  src = nullptr;
  v13 = 0;
  v9 = sub_24A60(v8, a2 & 0xFFFFFF, (__int64 *)&src);
  if ( a5 )
    *a5 = v9;
  v10 = src;
  if ( a3 )
  {
    if ( v9 <= a4 )
      a4 = v9;
    memcpy(a3, src, 2 * a4);
    a3[a4] = 0;
  }
  if ( v10 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return 0;
}

