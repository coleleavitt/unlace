__int64 __fastcall sub_5B2B0(__int64 a1)
{
  unsigned int v1; // ebx
  _BYTE *v3; // [rsp+0h] [rbp-38h] BYREF
  __int128 v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = a1;
  v4 = 0;
  v3 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v4 = 2;
  *v3 = 107;
  v3[1] = 0;
  LOBYTE(v1) = (unsigned int)sub_5ABF0(a1, &v3) == 1;
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v1;
}

