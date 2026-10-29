bool __fastcall sub_C180(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int16 v6; // di
  __int64 v7; // rdx
  __int16 v8; // cx
  __int64 v10; // rcx
  __int16 v11; // cx
  __int64 v12; // rdx

  v4 = (a3 >> 8) & 0xF;
  if ( (a3 & 0xC00) != 0 )
  {
    if ( (unsigned int)(v4 - 8) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      if ( (a3 & 8) != 0 )
      {
        v11 = 6;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 10;
        v12 = *(_QWORD *)(a1 + 248);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 6;
        v12 = *(_QWORD *)(a1 + 248);
        v11 = 10;
      }
      *(_QWORD *)(a1 + 248) = v12 + 40;
      *(_BYTE *)(v12 + 41) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v11;
      return 1;
    }
    else
    {
      if ( (unsigned int)(v4 - 10) <= 1 )
        return 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
      v5 = *(_QWORD *)(a1 + 248);
      v6 = *((char *)qword_17880 + v4);
      *(_WORD *)(v5 + 6) = v6;
      if ( (_BYTE)v6 == 0xFF )
      {
        return 0;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v7 + 40;
        *(_BYTE *)(v7 + 41) = 1;
        v8 = *((char *)qword_17870 + v4);
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v8;
        return (_BYTE)v8 != 0xFF;
      }
    }
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((char *)qword_17880 + v4);
    v10 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v10 + 40;
    *(_BYTE *)(v10 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = ((a3 >> 3) & 1) != 0 ? 6 : 10;
    return 1;
  }
}

