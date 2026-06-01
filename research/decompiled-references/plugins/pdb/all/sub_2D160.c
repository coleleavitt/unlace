__int64 __fastcall sub_2D160(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  v2 = (_QWORD *)sub_2CEC0(*(__int64 **)(a1 + 16), 0x40000000, 0x40000000u, 0x40000000);
  v3 = 1;
  if ( v2 )
  {
    v3 = 0;
    *a2 = *v2;
  }
  return v3;
}
