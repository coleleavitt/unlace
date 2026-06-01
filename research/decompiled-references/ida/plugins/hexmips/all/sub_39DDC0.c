__int64 __fastcall sub_39DDC0(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned int v2; // edx

  v1 = *(int *)(a1 + 48);
  v2 = 0;
  if ( v1 < *(_QWORD *)(a1 + 32) )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 48) = v1 + 1;
  }
  return v2;
}

