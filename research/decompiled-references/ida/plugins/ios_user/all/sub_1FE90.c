__int64 __fastcall sub_1FE90(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v5 + 1784) != a2 )
  {
    sub_1C950(v5, (__int64)"moving dyld %a => %a\n", a3, a4);
    sub_1FBE0(*(_QWORD **)(a1 + 8));
    return sub_1D510(*(_QWORD *)(a1 + 8));
  }
  return result;
}

