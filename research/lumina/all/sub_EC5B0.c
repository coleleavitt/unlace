__int64 __fastcall sub_EC5B0(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r14d
  unsigned int v5; // r13d
  __int64 result; // rax
  int v7; // edx
  int v8; // esi
  int v9; // r10d
  int v10; // eax
  int v11; // [rsp+4h] [rbp-64h]
  _QWORD v13[2]; // [rsp+10h] [rbp-58h] BYREF
  int v14; // [rsp+20h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 88);
  v15 = __readfsqword(0x28u);
  if ( v3 && (*(_WORD *)(a1 + 60) || *(_BYTE *)(a1 + 70)) )
  {
    v5 = ((unsigned __int64)(v3 + 4096) - 4063) >> 12;
    v11 = ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 120) + 4096) - 4063) >> 12;
    if ( (int)v5 < v11 )
    {
LABEL_15:
      v9 = 0;
LABEL_16:
      *a3 = v9;
      return 0;
    }
    else
    {
      while ( 1 )
      {
        result = sub_D2AD0(a1, v5, (__int64)v13);
        if ( (_DWORD)result )
          break;
        v7 = (383 * (_WORD)a2) & 0x1FFF;
        v8 = 8193;
        v9 = 0;
        while ( 1 )
        {
          v10 = *(unsigned __int16 *)(v13[0] + 2LL * v7);
          if ( !*(_WORD *)(v13[0] + 2LL * v7) )
            break;
          if ( v3 >= v10 + v14
            && *(_DWORD *)(a1 + 120) <= (unsigned int)(v10 + v14)
            && *(_DWORD *)(v13[1] + 4LL * (unsigned int)(v10 - 1)) == a2 )
          {
            v9 = v10 + v14;
          }
          if ( !--v8 )
          {
            sub_E8BB0(
              0xBu,
              "%s at line %d of [%.10s]",
              "database corruption",
              64699,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            return 11;
          }
          v7 = ((_WORD)v7 + 1) & 0x1FFF;
        }
        if ( v9 )
          goto LABEL_16;
        if ( (int)--v5 < v11 )
          goto LABEL_15;
      }
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
