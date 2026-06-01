int __fastcall sub_2566A0(__int64 a1, __int64 a2)
{
  int result; // eax

  result = sub_255BD0(a1 + 72, a2 + 72, 0);
  if ( !result )
  {
    result = sub_255BD0(a1, a2, 0);
    if ( !result )
    {
      result = sub_255BD0(a1 + 136, a2 + 136, 0);
      if ( !result )
        return sub_255A20(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
    }
  }
  return result;
}

