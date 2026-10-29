__int64 __fastcall sub_184590(__int64 a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // r14d
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_DWORD *)a4;
  v15[3] = __readfsqword(0x28u);
  v7 = a4;
  if ( v6 > 9 )
  {
    if ( v6 == 56 )
    {
      v8 = sub_183E40(*(_QWORD *)(a3 + 480), a4, 1, a5);
      if ( v8 > 0 && *(_BYTE *)(v7 + 64) == 8 )
      {
        v12 = *(_QWORD *)(v7 + 72);
        v13 = *(_DWORD *)(v12 + 284);
        if ( v13 == 2 )
        {
          if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v12 + 24) + 80LL), v15, 0) )
          {
            if ( a2 )
              *a2 = v15[0];
            return (unsigned int)v8;
          }
          return 0;
        }
        if ( v13 == 5 )
        {
          v14 = *(_QWORD *)(v12 + 24);
          if ( *(_BYTE *)(v14 + 80) == 10 )
          {
            sub_123A40((__int64)v15, *(unsigned __int8 **)(v14 + 88), v12, v11);
            HIDWORD(v15[0]) = v8;
            v8 = sub_1847D0(a1, a2, a3, (char *)v15);
            sub_11CDA0((__int64)v15);
            return (unsigned int)v8;
          }
          v10 = (char *)(v14 + 80);
          return sub_1847D0(a1, a2, a3, v10);
        }
      }
    }
    return 0;
  }
  if ( v6 > 7 )
  {
    if ( (int)sub_1847D0(a1, (char *)v15, a3, (char *)(a4 + 32)) > 0
      && (!LOBYTE(v15[0]) || LOBYTE(v15[0]) == 0xFF && *(_DWORD *)v7 == 8) )
    {
      *a2 = v15[0];
      return *(unsigned int *)(v7 + 68);
    }
    return 0;
  }
  if ( v6 != 2 )
  {
    if ( v6 != 4 && v6 != 1 )
      return 0;
    if ( *(_BYTE *)(a4 + 32) != 4 || (a4 = *(_QWORD *)(a4 + 40), *(_DWORD *)a4 != 2) )
    {
      v10 = (char *)(v7 + 32);
      return sub_1847D0(a1, a2, a3, v10);
    }
  }
  return sub_184AC0(a1, a2, a3, a4);
}

