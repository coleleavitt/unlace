bool __fastcall sub_44080(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a2 + 132);
  result = 0;
  if ( v2 >= *(_QWORD *)(a1 + 5544) )
    return *(_QWORD *)(a1 + 5552) >= v2;
  return result;
}

