unsigned __int64 __fastcall sub_D2B50(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+10h] [rbp-18h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 88);
  if ( v1 && !(unsigned int)sub_D2AD0(a1, ((unsigned __int64)(unsigned int)(v1 + 4096) - 4063) >> 12, (__int64)&v6) )
  {
    v3 = *(_DWORD *)(a1 + 88) - v8;
    v4 = 0;
    v5 = v6;
    do
    {
      if ( *(unsigned __int16 *)(v5 + v4) > v3 )
      {
        *(_WORD *)(v5 + v4) = 0;
        v5 = v6;
      }
      v4 += 2;
    }
    while ( v4 != 0x4000 );
    memset((void *)(v7 + 4LL * v3), 0, (int)v5 - ((int)v7 + 4 * v3));
  }
  return __readfsqword(0x28u) ^ v9;
}
