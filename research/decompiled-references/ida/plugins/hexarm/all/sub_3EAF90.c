__int64 __fastcall sub_3EAF90(__int64 a1, int a2, int a3, double a4)
{
  int v5; // esi
  __int64 result; // rax
  int v7; // edi
  int v8; // r8d
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // esi

  if ( *(_DWORD *)(a1 + 80) != 8 )
  {
    if ( (unsigned int)(a2 - 8) <= 0x3F )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      {
        v5 = a2 - *(_DWORD *)(a1 + 416);
        if ( (v5 & 3) == 0 && a3 <= 4 )
          return (unsigned int)(15 - v5 / 4);
      }
      else
      {
        v11 = a2 - *(_DWORD *)(a1 + 356);
        if ( (v11 & 3) == 0 )
          return (unsigned int)(v11 / 4);
      }
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned int)a2 > 3 )
    {
      v7 = *(_DWORD *)(a1 + 488);
      if ( a2 >= v7 && a2 < *(_DWORD *)(a1 + 548) + 16 )
      {
        if ( sub_3EAF40(v7, a2, a3) )
        {
          if ( ((a3 - 4) & 0xFFFFFFFB) != 0 )
          {
            if ( !under_debugger )
              sub_3835A0(0xC8DFu, a4);
            BUG();
          }
          if ( a3 == 4 )
            return (unsigned int)(v8 / 4 + 93);
          else
            return (unsigned int)(v8 / 8 + 61);
        }
        else if ( (v8 & 0xF) != 0 )
        {
          return 0xFFFFFFFFLL;
        }
        else
        {
          return (unsigned int)(v8 / 16 + 45);
        }
      }
      return 0xFFFFFFFFLL;
    }
    goto LABEL_15;
  }
  if ( (unsigned int)a2 <= 3 )
  {
LABEL_15:
    result = (unsigned int)(a2 + 125);
    if ( a3 != 1 )
      return 0xFFFFFFFFLL;
    return result;
  }
  v9 = a2 - 8;
  if ( (unsigned int)(a2 - 8) > 0x107 )
  {
    v12 = *(_DWORD *)(a1 + 488);
    result = 0xFFFFFFFFLL;
    if ( a2 >= v12 && a2 < *(_DWORD *)(a1 + 612) + 16 )
    {
      v13 = a2 - v12;
      if ( (v13 & 0xF) == 0 )
        return (unsigned int)(v13 / 16 + 163);
    }
  }
  else
  {
    if ( (v9 & 7) != 0 )
      return 0xFFFFFFFFLL;
    v10 = v9 >> 3;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      v10 = *(_DWORD *)(a1 + 352) + ~v10;
    return (unsigned int)(v10 + 129);
  }
  return result;
}

