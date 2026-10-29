int __fastcall sub_25A6E0(__int64 a1, __int64 a2)
{
  int result; // eax

  result = sub_259C10(a1 + 72, a2 + 72, 0);
  if ( !result )
  {
    result = sub_259C10(a1, a2, 0);
    if ( !result )
    {
      result = sub_259C10(a1 + 136, a2 + 136, 0);
      if ( !result )
        return sub_259A60(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
    }
  }
  return result;
}

