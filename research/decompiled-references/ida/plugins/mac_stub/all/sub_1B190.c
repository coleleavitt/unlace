__int64 __fastcall sub_1B190(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 range; // rax
  int v7; // [rsp+Ch] [rbp-1Ch]

  if ( *(_QWORD *)(a1 + 176) )
  {
    v7 = a4;
    range = rangeset_t_find_range();
    a4 = v7;
    if ( range )
      a4 = v7 | 2;
  }
  return sub_1AC60(a1, a2, a3, a4);
}

