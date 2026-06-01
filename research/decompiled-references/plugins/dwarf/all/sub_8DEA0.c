__int64 __fastcall sub_8DEA0(__int64 a1, int a2, char a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // r8
  char *v6; // rdx
  char v7; // r10
  char v10; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 80);
  v11 = __readfsqword(0x28u);
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = 0;
    v6 = &v10;
    if ( (int)v3 <= 0 )
      return 0xFFFFFFFFLL;
    while ( v5 >= v3
         || (unsigned int)sub_81EA0(
                            *(_DWORD *)(*(_QWORD *)(a1 + 72) + 20 * v5),
                            *(unsigned int *)(*(_QWORD *)(a1 + 72) + 20 * v5 + 4),
                            v6) != a2
         || v10 != v7 )
    {
      if ( v5 == v4 )
        return 0xFFFFFFFFLL;
      ++v5;
    }
    return (unsigned int)v5;
  }
  else
  {
    sub_8D860(a1, 0, 0, 0);
    if ( *(_QWORD *)(a1 + 120) == -1 )
    {
      sub_7F5A0(a1);
      return sub_8DFA0();
    }
    else
    {
      if ( (unsigned int)sub_81EA0(*(_DWORD *)(a1 + 168), *(unsigned int *)(a1 + 172), &v10) != a2 )
        return 0xFFFFFFFFLL;
      return (unsigned int)-(unsigned __int8)(v10 ^ a3);
    }
  }
}
