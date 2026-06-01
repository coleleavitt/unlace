int __fastcall sub_75370(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int result; // eax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    if ( a2 >= 0 )
    {
      shutdown(v3, a2);
      result = close(*(_QWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 56) = -1;
    }
    else
    {
      result = close(v3);
      *(_QWORD *)(a1 + 56) = -1;
    }
  }
  return result;
}

