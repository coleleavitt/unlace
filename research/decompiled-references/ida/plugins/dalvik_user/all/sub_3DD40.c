bool __fastcall sub_3DD40(unsigned __int64 *a1, _DWORD *a2)
{
  int *v2; // rdx
  unsigned __int64 v3; // rax
  bool v4; // cf
  bool result; // al
  int v6; // edx

  v2 = (int *)*a1;
  v3 = *a1 + 4;
  v4 = a1[1] < v3;
  *a1 = v3;
  result = !v4;
  if ( !v4 )
  {
    v6 = *v2;
    if ( a2 )
      *a2 = v6;
  }
  return result;
}

