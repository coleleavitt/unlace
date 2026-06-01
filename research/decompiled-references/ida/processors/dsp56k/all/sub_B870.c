__int64 __fastcall sub_B870(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int64 *v7; // rcx
  __int16 v8; // dx

  if ( *(_DWORD *)(a1 + 600) != 1 )
  {
    v3 = a3 & 7;
    if ( a3 <= 7 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3 + 34;
    }
    else
    {
      v4 = 0;
      if ( (a3 & 7) == 0 )
        return v4;
      v5 = *((unsigned __int8 *)qword_179E0 + v3);
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
    }
    return 1;
  }
  v4 = 0;
  if ( (unsigned __int64)a3 > 0x1F )
    return v4;
  v7 = qword_17A00;
  v8 = *((unsigned __int8 *)qword_17A00 + a3);
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v8;
  LOBYTE(v7) = *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) != 255;
  return (unsigned int)v7;
}

