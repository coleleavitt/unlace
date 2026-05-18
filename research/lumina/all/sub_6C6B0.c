__int64 __fastcall sub_6C6B0(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rdx
  unsigned __int64 v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v4 = *a2;
  v8[0] = v4;
  v5 = __CFADD__(v4, a3);
  v6 = v4 + a3;
  if ( !v5 )
  {
    if ( a4 <= 5 )
    {
LABEL_3:
      *a2 = v4;
      return 1;
    }
    if ( sub_6C650((_DWORD *)(a1 + 12), v8, v6) )
    {
      v4 = v8[0];
      goto LABEL_3;
    }
  }
  return 0;
}
