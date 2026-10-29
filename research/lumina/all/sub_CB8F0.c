int __fastcall sub_CB8F0(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  int result; // eax
  int v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( (a3 & 3) != 1 )
    return off_241210(a2, 6, a4);
  if ( *(_BYTE *)(a1 + 33) )
    return 0;
  v9 = 510;
  v7 = 1;
  v8 = dword_241470 + 2;
  result = off_241210(a2, 6, &v7, a4, a5, a6);
  if ( result >= 0 )
  {
    *(_BYTE *)(a1 + 33) = 1;
    ++*(_DWORD *)(a1 + 28);
  }
  return result;
}
