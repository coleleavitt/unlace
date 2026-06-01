__int64 __fastcall sub_3C4AB0(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax

  v3 = sub_3C48A0(a3, 1);
  result = 0;
  if ( v3 )
  {
    sub_396200(a3, 1u, (__int64)v3, v4, v5, a1);
    return 1;
  }
  return result;
}

