__int64 __fastcall sub_2DA80(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax
  unsigned int v3; // edx

  v2 = (_BYTE *)sub_2CEC0(*(__int64 **)(a1 + 16), 4, 1u, 512);
  v3 = 1;
  if ( v2 )
  {
    v3 = 0;
    *a2 = *v2;
  }
  return v3;
}
