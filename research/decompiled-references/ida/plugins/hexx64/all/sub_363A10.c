unsigned __int64 __fastcall sub_363A10(__int64 a1, double a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 800);
  if ( !*(_BYTE *)(v2 + 520) )
  {
    if ( *(_BYTE *)(v2 + 521) )
    {
      *(_BYTE *)(v2 + 520) = 1;
    }
    else
    {
      result = sub_363560((_QWORD *)(v2 + 8), 0, a2);
      v4 = *(_QWORD *)(v2 + 208);
      if ( v4 )
      {
        *(_QWORD *)(v2 + 216) = 0;
        result = qfree(v4);
        *(_QWORD *)(v2 + 208) = 0;
        *(_QWORD *)(v2 + 224) = 0;
      }
      *(_BYTE *)(v2 + 520) = 0;
    }
  }
  return result;
}

