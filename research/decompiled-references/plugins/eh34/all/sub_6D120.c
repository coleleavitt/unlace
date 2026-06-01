__int64 __fastcall sub_6D120(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rdx
  __int64 (*v3)(void); // rdx
  __int64 result; // rax
  char v5; // dl

  v1 = *a1;
  v2 = *(__int64 (**)(void))(*a1 + 32);
  if ( v2 != sub_13E90 )
  {
    v5 = v2();
    result = 4;
    if ( v5 )
      return result;
    v1 = *a1;
  }
  v3 = *(__int64 (**)(void))(v1 + 40);
  result = 3;
  if ( v3 != sub_13EA0 )
    return v3();
  return result;
}
