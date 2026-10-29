__int64 __fastcall sub_D390(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int16 v4; // cx
  __int64 v5; // rdx
  __int16 v7; // dx

  if ( *(_DWORD *)(a1 + 600) == 1 )
  {
    if ( (unsigned __int64)a3 <= 0x1F )
    {
      v7 = *((unsigned __int8 *)qword_17A00 + a3);
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v7;
      v5 = *(_QWORD *)(a1 + 248);
      if ( *(_WORD *)(v5 + 6) != 255 )
        goto LABEL_5;
    }
  }
  else
  {
    v3 = a3 & 7;
    if ( a3 <= 7 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3 + 34;
      v5 = *(_QWORD *)(a1 + 248);
      goto LABEL_5;
    }
    if ( (a3 & 7) != 0 )
    {
      v4 = *((unsigned __int8 *)qword_179E0 + v3);
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
      v5 = *(_QWORD *)(a1 + 248);
LABEL_5:
      *(_QWORD *)(a1 + 248) = v5 + 40;
      return 1;
    }
  }
  return 0;
}

