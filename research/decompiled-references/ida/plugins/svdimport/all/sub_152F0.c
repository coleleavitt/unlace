unsigned __int64 __fastcall sub_152F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  int v7; // [rsp+8h] [rbp-50h] BYREF
  void *v8; // [rsp+10h] [rbp-48h]
  int *v9; // [rsp+18h] [rbp-40h]
  int *v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  v8 = nullptr;
  v9 = &v7;
  v10 = &v7;
  v11 = 0;
  sub_15030(a1, &v6, (__int64 *)(a2 + 136));
  sub_13140(a1, a2 + 136, (__int64)&v6);
  v2 = v8;
  if ( v8 )
  {
    do
    {
      v3 = v2;
      sub_FA50((_QWORD *)v2[3]);
      v4 = v2[4];
      v2 = (_QWORD *)v2[2];
      if ( v4 )
      {
        v3[5] = 0;
        qfree();
      }
      operator delete(v3, 0x40u);
    }
    while ( v2 );
  }
  return v12 - __readfsqword(0x28u);
}

