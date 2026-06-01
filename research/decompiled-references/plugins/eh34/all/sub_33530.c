unsigned __int64 __fastcall sub_33530(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r13
  int *v4; // r12
  _QWORD v6[4]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 568);
  if ( (int)v1 > 0 )
  {
    v2 = 0;
    v3 = ((unsigned int)(v1 - 1) + 1LL) << 6;
    do
    {
      v4 = (int *)(v2 + *(_QWORD *)(a1 + 560));
      sub_28EA0((__int64)v6, a1, *v4);
      sub_28EA0((__int64)v7, a1, v4[1]);
      if ( v7[0] )
      {
        v7[1] = 0;
        qfree(v7[0]);
      }
      if ( v6[0] )
      {
        v6[1] = 0;
        qfree(v6[0]);
      }
      v2 += 64;
    }
    while ( v2 != v3 );
  }
  return v8 - __readfsqword(0x28u);
}
