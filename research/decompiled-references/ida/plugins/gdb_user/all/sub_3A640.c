char __fastcall sub_3A640(__int64 a1)
{
  char result; // al
  _BYTE *v3; // rdi
  _BYTE *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  v4 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v5 = 2;
  *v4 = 33;
  v4[1] = 0;
  result = sub_3A5F0(a1, &v4);
  v3 = v4;
  *(_BYTE *)(a1 + 188) = result;
  if ( v3 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
    return *(_BYTE *)(a1 + 188);
  }
  return result;
}

