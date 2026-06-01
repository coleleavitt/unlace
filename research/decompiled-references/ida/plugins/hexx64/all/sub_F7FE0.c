__int64 __fastcall sub_F7FE0(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  int v5; // eax

  v3 = 0;
  v4 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v3 += (unsigned __int8)sub_16F100(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v4), a2);
      v5 = *(_DWORD *)(a1 + 64);
      if ( v5 <= (int)v4 + 1 )
        break;
      if ( (unsigned int)++v4 >= v5 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a3);
        BUG();
      }
    }
  }
  return v3;
}

