__int64 __fastcall sub_D4C0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  int v4; // ecx
  __int64 v5; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v3 = 0;
  v4 = a3 >> 1;
  if ( a3 >> 1 )
  {
    if ( v4 == 1 )
    {
      v7 = a3 == 2;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      v8 = *(_QWORD *)(a1 + 248);
      if ( v7 )
      {
        *(_WORD *)(v8 + 6) = 10;
        v10 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v10 + 40;
        *(_BYTE *)(v10 + 41) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 6;
      }
      else
      {
        *(_WORD *)(v8 + 6) = 6;
        v9 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v9 + 40;
        *(_BYTE *)(v9 + 41) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 10;
      }
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&dword_17914 + v4 - 2);
      v5 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v5 + 40;
      *(_BYTE *)(v5 + 41) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 1) == 0 ? 6 : 10;
    }
    return 1;
  }
  return v3;
}

