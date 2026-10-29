__int64 __fastcall sub_58F00(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rsi

  v1 = (__int64 *)*a1;
  result = a1[1];
  v3 = *a1 + 8 * result;
  if ( *a1 != v3 )
  {
    do
    {
      v4 = *v1++;
      result = sub_58D40(a1, v4, 0);
    }
    while ( (__int64 *)v3 != v1 );
  }
  return result;
}

